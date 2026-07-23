/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x180024B70
 * Callers:
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180021280 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlIntegerToUnicodeString @ 0x1800213C0 (RtlIntegerToUnicodeString.c)
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_1800220EC @ 0x1800220EC (sub_1800220EC.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18006F388 @ 0x18006F388 (sub_18006F388.c)
 *     RtlInt64ToUnicodeString @ 0x1800EA760 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005F3A0 (RtlUTF8ToUnicodeN.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 Length; // rdx
  const CHAR *Buffer; // r8
  ULONG v8; // ecx
  char v9; // si
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  ULONG UTF8StringByteCount; // edx
  PCHAR v13; // rbx
  ULONG v14; // r10d
  WCHAR *v15; // r11
  ULONG v16; // r10d
  __int64 v17; // r9
  ULONG i; // eax
  int v19; // r8d
  __int64 v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int16 v23; // cx
  WCHAR *v25; // rax
  __int64 v26; // rax
  ULONG UnicodeStringActualByteCount; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v28; // [rsp+B0h] [rbp+18h]

  v28 = AllocateDestinationString;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  v8 = 0;
  v9 = byte_180162797;
  if ( byte_180162797 )
  {
    if ( (_DWORD)Length )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, Length);
      v8 = UnicodeStringActualByteCount;
    }
  }
  else
  {
    if ( !NlsMbCodePageTag )
    {
      v8 = 2 * Length;
      goto LABEL_4;
    }
    for ( ; (_DWORD)Length; v8 += 2 )
    {
      Length = (unsigned int)(Length - 1);
      v26 = *(unsigned __int8 *)Buffer++;
      if ( word_180163EE0[v26] )
      {
        if ( !(_DWORD)Length )
        {
          v8 += 2;
          break;
        }
        Length = (unsigned int)(Length - 1);
        ++Buffer;
      }
    }
  }
LABEL_4:
  v10 = v8 + 2;
  if ( (unsigned int)v10 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v10 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v10;
    v25 = (WCHAR *)sub_18006D6B8(v10, Length);
    DestinationString->Buffer = v25;
    if ( !v25 )
      return -1073741801;
    v9 = byte_180162797;
  }
  else
  {
    v11 = (unsigned __int16)(v10 - 2) + 2LL;
    if ( v11 > DestinationString->MaximumLength || v11 < 2 )
      return -2147483643;
  }
  UTF8StringByteCount = SourceString->Length;
  v13 = SourceString->Buffer;
  v14 = DestinationString->Length;
  v15 = DestinationString->Buffer;
  if ( v9 )
  {
    if ( UTF8StringByteCount )
      RtlUTF8ToUnicodeN(v15, v14, &UnicodeStringActualByteCount, v13, UTF8StringByteCount);
    else
      UnicodeStringActualByteCount = 0;
  }
  else
  {
    v16 = v14 >> 1;
    if ( NlsMbCodePageTag )
    {
      v19 = (int)DestinationString->Buffer;
      v20 = qword_180166540;
      v21 = qword_180166530;
      while ( v16 && UTF8StringByteCount )
      {
        --v16;
        --UTF8StringByteCount;
        v22 = (unsigned __int8)*v13;
        v23 = word_180163EE0[v22];
        if ( v23 )
        {
          if ( !UTF8StringByteCount )
          {
            *v15 = 0;
            LODWORD(v15) = (_DWORD)v15 + 2;
            break;
          }
          *v15 = *(_WORD *)(v20 + 2 * ((unsigned __int8)v13[1] + (unsigned __int64)v23));
          v13 += 2;
          ++v15;
          --UTF8StringByteCount;
        }
        else
        {
          *v15++ = *(_WORD *)(v22 * 2 + v21);
          ++v13;
        }
      }
      UnicodeStringActualByteCount = (_DWORD)v15 - v19;
    }
    else
    {
      if ( v16 >= UTF8StringByteCount )
        v16 = UTF8StringByteCount;
      UnicodeStringActualByteCount = 2 * v16;
      v17 = qword_180166530;
      for ( i = 0; i < v16; ++i )
        v15[i] = *(_WORD *)(v17 + 2LL * (unsigned __int8)v13[i]);
    }
  }
  DestinationString->Buffer[(unsigned __int64)UnicodeStringActualByteCount >> 1] = 0;
  return 0;
}
