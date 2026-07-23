/*
 * XREFs of CmpNameFromAttributes @ 0x1405B8860
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     NtReplaceKey @ 0x1407EB270 (NtReplaceKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryObject @ 0x1401B84F0 (ZwQueryObject.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14081D200 (IoConvertFileHandleToKernelHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpNameFromAttributes(_OWORD *a1, char a2, UNICODE_STRING *a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned __int16 v8; // si
  char *v9; // r8
  wchar_t *PoolWithQuotaTag; // rax
  __int64 result; // rax
  NTSTATUS v12; // r15d
  __m128i v13; // xmm0
  unsigned int v14; // edx
  wchar_t *v15; // rax
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rcx
  void *Src[2]; // [rsp+38h] [rbp-290h] BYREF
  ULONG ReturnLength[2]; // [rsp+48h] [rbp-280h] BYREF
  UNICODE_STRING *v20; // [rsp+50h] [rbp-278h]
  HANDLE Handle[2]; // [rsp+58h] [rbp-270h] BYREF
  __int128 v22; // [rsp+68h] [rbp-260h]
  __int128 v23; // [rsp+78h] [rbp-250h]
  UNICODE_STRING Source; // [rsp+88h] [rbp-240h] BYREF
  UNICODE_STRING ObjectInformation; // [rsp+A0h] [rbp-228h] BYREF

  v20 = a3;
  v6 = 0;
  a3->Buffer = 0LL;
  if ( a2 == 1 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v7 = 0x7FFFFFFF0000LL;
  }
  *(_OWORD *)Handle = *a1;
  v22 = a1[1];
  v23 = a1[2];
  *(_OWORD *)Src = *(_OWORD *)v22;
  v8 = (unsigned __int16)Src[0];
  if ( a2 == 1 && LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (char *)Src[1] + LOWORD(Src[0]);
    if ( (unsigned __int64)v9 > 0x7FFFFFFF0000LL || v9 < Src[1] )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( ((__int64)Src[0] & 1) != 0 )
    return 3221225531LL;
  if ( !Handle[1] )
  {
    if ( !LOWORD(Src[0]) )
      return 3221225531LL;
    a3->Length = (unsigned __int16)Src[0];
    a3->MaximumLength = v8;
    PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v8, 0x6E664D43u);
    a3->Buffer = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
      memmove(PoolWithQuotaTag, Src[1], v8);
    else
      return (unsigned int)-1073741670;
    return v6;
  }
  if ( SLODWORD(Handle[1]) < 0 && a2 == 1 )
    return 3221225480LL;
  if ( Src[1] && LOWORD(Src[0]) >= 2u && *(_WORD *)Src[1] == 92 )
    return 3221225531LL;
  LOBYTE(a4) = 1;
  LOBYTE(v7) = a2;
  result = IoConvertFileHandleToKernelHandle(Handle[1], v7, 32LL, a4, &Handle[1]);
  if ( (int)result >= 0 )
  {
    v12 = ZwQueryObject(Handle[1], ObjectNameInformation, &ObjectInformation, 0x200u, ReturnLength);
    ZwClose(Handle[1]);
    if ( v12 < 0 )
      return (unsigned int)v12;
    v13 = (__m128i)ObjectInformation;
    Source = ObjectInformation;
    a3->Length = 0;
    v14 = (unsigned __int16)_mm_cvtsi128_si32(v13) + 2 + v8;
    ReturnLength[1] = v14;
    if ( v14 > 0xFFFF )
      return 3221225529LL;
    a3->MaximumLength = v14;
    v15 = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned __int16)v14, 0x6E664D43u);
    a3->Buffer = v15;
    if ( !v15 )
      return 3221225626LL;
    RtlAppendUnicodeStringToString(a3, &Source);
    Length = a3->Length;
    if ( a3->Length )
    {
      Buffer = a3->Buffer;
      if ( *(wchar_t *)((char *)Buffer + Length - 2) != 92 )
      {
        *(wchar_t *)((char *)Buffer + Length) = 92;
        a3->Length += 2;
      }
    }
    return (unsigned int)RtlAppendUnicodeStringToString(a3, (PCUNICODE_STRING)Src);
  }
  return result;
}
