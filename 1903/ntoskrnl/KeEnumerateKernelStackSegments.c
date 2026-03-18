/*
 * XREFs of KeEnumerateKernelStackSegments @ 0x1400E35A8
 * Callers:
 *     MmOutPageKernelStack @ 0x1400E3478 (MmOutPageKernelStack.c)
 *     PspReaper @ 0x1400E3500 (PspReaper.c)
 *     DbgkpLkmdSnapKernelStack @ 0x140281694 (DbgkpLkmdSnapKernelStack.c)
 *     PspThreadDelete @ 0x14060F400 (PspThreadDelete.c)
 *     PsDereferenceKernelStack @ 0x1406EEA50 (PsDereferenceKernelStack.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x1400E364C (KeGetNextKernelStackSegment.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KeEnumerateKernelStackSegments(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _OWORD *, __int64),
        __int64 a3)
{
  __int64 v6; // r8
  char NextKernelStackSegment; // bl
  __int64 v8; // rcx
  __int64 result; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v11[2]; // [rsp+40h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  LOBYTE(v6) = 1;
  KeGetNextKernelStackSegment(a1, v10, v6);
  do
  {
    v11[0] = v10[0];
    v11[1] = v10[1];
    NextKernelStackSegment = KeGetNextKernelStackSegment(a1, v10, 0LL);
    result = a2(v8, v11, a3);
  }
  while ( NextKernelStackSegment );
  return result;
}
