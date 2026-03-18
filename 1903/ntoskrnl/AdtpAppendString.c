/*
 * XREFs of AdtpAppendString @ 0x14092D910
 * Callers:
 *     AdtpAppendZString @ 0x14092DAC0 (AdtpAppendZString.c)
 *     AdtpBuildObjectTypeStrings @ 0x14092DFCC (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpAppendString(__int64 a1, __int64 a2, UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 v4; // r12
  __int64 result; // rax
  unsigned __int16 Length; // si
  unsigned int v8; // ebx
  char v9; // al
  wchar_t *Buffer; // r15
  UNICODE_STRING *v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  unsigned int v16; // r13d
  PVOID PoolWithTag; // rax
  const void *v18; // rdx
  UNICODE_STRING Source; // [rsp+20h] [rbp-48h] BYREF
  PVOID v21; // [rsp+80h] [rbp+18h]

  v4 = (unsigned int)*a4;
  Source = *a3;
  if ( (_DWORD)v4 )
    return 0LL;
  Length = Source.Length;
  v8 = 0;
  if ( Source.Length )
  {
    v9 = *(_BYTE *)(v4 + a2);
    Buffer = Source.Buffer;
    while ( 1 )
    {
      if ( v9 )
      {
        v11 = (UNICODE_STRING *)(16 * v4 + a1);
        v12 = v11->Length;
        if ( v11->Length != 0xFFFE )
        {
          *(_QWORD *)&Source.Length = 0LL;
          Source.Buffer = 0LL;
          v13 = v11->MaximumLength - v12;
          if ( *Buffer != 37 || v13 >= Length )
          {
            Source.Buffer = Buffer;
            v14 = Length;
            if ( v13 < Length )
              v14 = v13;
            Source.Length = v14;
            Length -= v14;
            Buffer = (wchar_t *)((char *)Buffer + v14);
            RtlAppendUnicodeStringToString(v11, &Source);
          }
        }
      }
      if ( !Length )
        break;
      v15 = *(_WORD *)(a1 + 16 * v4);
      if ( v15 >= 0xFFFEu || *Buffer == 37 && Length + (unsigned int)v15 >= 0xFFFE )
        break;
      v16 = Length;
      if ( (unsigned int)*(unsigned __int16 *)(a1 + 16 * v4 + 2) + 1024 > Length )
        v16 = *(unsigned __int16 *)(a1 + 16 * v4 + 2) + 1024;
      if ( v16 >= 0xFFFE )
        v16 = 65534;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x6B416553u);
      v21 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v8 = -1073741801;
        break;
      }
      v18 = *(const void **)(a1 + 16 * v4 + 8);
      if ( v18 )
      {
        memmove(PoolWithTag, v18, *(unsigned __int16 *)(a1 + 16 * v4));
        if ( *(_BYTE *)(v4 + a2) )
          ExFreePoolWithTag(*(PVOID *)(a1 + 16 * v4 + 8), 0);
        PoolWithTag = v21;
      }
      *(_QWORD *)(a1 + 16 * v4 + 8) = PoolWithTag;
      v9 = 1;
      *(_WORD *)(a1 + 16 * v4 + 2) = v16;
      *(_BYTE *)(v4 + a2) = 1;
    }
  }
  result = v8;
  *a4 = 0;
  return result;
}
