/*
 * XREFs of RtlQueryPackageIdentity @ 0x180069C40
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D0EBC @ 0x1800D0EBC (sub_1800D0EBC.c)
 *     sub_1800F0AF4 @ 0x1800F0AF4 (sub_1800F0AF4.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x180069C90 (RtlQueryPackageIdentityEx.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(int a1, int a2, int a3, int a4, __int64 a5, bool *a6)
{
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlQueryPackageIdentityEx(a1, a2, a3, a4, a5, 0LL, (__int64)v7);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = v7[0] != 0LL;
  }
  return result;
}
