/*
 * XREFs of ExpCovReadRequestBuffer @ 0x1408D9320
 * Callers:
 *     ExpCovQueryInformation @ 0x1408D8C0C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1408D94A4 (ExpCovResetInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpCovReadRequestBuffer(int *a1, UNICODE_STRING *a2, _OWORD *a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // r10d
  int v7; // r10d
  unsigned __int16 v8; // ax
  wchar_t *Buffer; // rsi
  SIZE_T v10; // r14
  wchar_t *v11; // rax
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // rdi
  UNICODE_STRING StringIn; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  v6 = *a1;
  *a4 = *a1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1
        && (StringIn = *(UNICODE_STRING *)(a1 + 2), (v8 = _mm_cvtsi128_si32((__m128i)StringIn)) != 0)
        && (v8 & 1) == 0 )
      {
        Buffer = StringIn.Buffer;
        if ( ((__int64)StringIn.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = v8;
        v11 = (wchar_t *)((char *)StringIn.Buffer + v8);
        if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < StringIn.Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x72766F43u);
        v13 = PoolWithTag;
        StringIn.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v10);
          memmove(v13, Buffer, v10);
          v5 = RtlDuplicateUnicodeString(1u, &StringIn, a2);
          ExFreePoolWithTag(v13, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *a3 = *(_OWORD *)(a1 + 2);
    }
  }
  return v5;
}
