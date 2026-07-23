/*
 * XREFs of KeEnumerateKernelStackSegments @ 0x14013D3E8
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14013D0B8 (KiOutSwapKernelStacks.c)
 *     PspReaper @ 0x14013D340 (PspReaper.c)
 *     DbgkpLkmdSnapKernelStack @ 0x14026DD84 (DbgkpLkmdSnapKernelStack.c)
 *     PspThreadDelete @ 0x1405FC0B0 (PspThreadDelete.c)
 *     PsDereferenceKernelStack @ 0x1406D07B0 (PsDereferenceKernelStack.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x14013D478 (KeGetNextKernelStackSegment.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeEnumerateKernelStackSegments(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _OWORD *, __int64),
        __int64 a3)
{
  __int64 v3; // rbp
  char NextKernelStackSegment; // bl
  __int64 v7; // rcx
  __int64 result; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a3;
  LOBYTE(a3) = 1;
  KeGetNextKernelStackSegment(a1, v9, a3);
  do
  {
    v10[0] = v9[0];
    v10[1] = v9[1];
    NextKernelStackSegment = KeGetNextKernelStackSegment(a1, v9, 0LL);
    result = a2(v7, v10, v3);
  }
  while ( NextKernelStackSegment );
  return result;
}
