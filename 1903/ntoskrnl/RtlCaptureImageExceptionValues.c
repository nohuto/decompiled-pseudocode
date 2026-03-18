/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x14019C11C
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1401AA168 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(unsigned __int64 a1, __int64 *a2, int a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(a1, 1, 3u, a3, &v7);
  v5 = v7;
  if ( v4 < 0 )
    v5 = 0LL;
  result = 0LL;
  *a2 = v5;
  return result;
}
