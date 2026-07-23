/*
 * XREFs of RtlUnicodeStringCchCopyN @ 0x14028B644
 * Callers:
 *     PiDrvDbResolveSystemFilePath @ 0x1408400C8 (PiDrvDbResolveSystemFilePath.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_1 @ 0x14028B74C (RtlUnicodeStringValidateWorker_1.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCchCopyN(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        size_t cchToCopy)
{
  size_t v3; // rdi
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  size_t v8; // rdx
  __int64 v9; // rcx
  ULONG v10; // r8d
  wchar_t *v11; // r10
  int v12; // r11d
  wchar_t *Buffer; // rsi
  unsigned __int64 v14; // r15
  int v15; // r10d
  __int16 v16; // cx
  __int64 v17; // r12

  v3 = cchToCopy;
  v4 = 0LL;
  v5 = 0LL;
  v12 = RtlUnicodeStringValidateWorker_1(DestinationString, (const size_t)SourceString, cchToCopy);
  if ( v12 >= 0 )
  {
    if ( v9 )
    {
      v4 = *(_QWORD *)(v9 + 8);
      v5 = (unsigned __int64)*(unsigned __int16 *)(v9 + 2) >> 1;
    }
    Buffer = v11;
    v14 = (unsigned __int64)v11;
    v12 = RtlUnicodeStringValidateWorker_1(SourceString, v8, v10);
    if ( v12 >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        v14 = (unsigned __int64)SourceString->Length >> 1;
      }
      if ( v3 <= 0x7FFF )
      {
        v12 = v15;
        v16 = v15;
        if ( v14 < v3 )
          v3 = v14;
        if ( !v5 )
          goto LABEL_16;
        v17 = v4 - (_QWORD)Buffer;
        do
        {
          if ( !v3 )
            break;
          --v3;
          *(wchar_t *)((char *)Buffer + v17) = *Buffer;
          ++v16;
          ++Buffer;
          --v5;
        }
        while ( v5 );
        if ( !v5 )
        {
LABEL_16:
          if ( v3 )
            v12 = -2147483643;
        }
        LOWORD(v15) = v16;
      }
      else
      {
        v12 = -1073741811;
      }
    }
    DestinationString->Length = 2 * v15;
  }
  return v12;
}
