/*
 * XREFs of MmDeleteTeb @ 0x14067F450
 * Callers:
 *     PspInsertThread @ 0x1405E9524 (PspInsertThread.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFreeToSubAllocatedRegion @ 0x14067F510 (MiFreeToSubAllocatedRegion.c)
 */

unsigned __int64 __fastcall MmDeleteTeb(_KPROCESS *BugCheckParameter1, unsigned __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+28h] [rbp-40h] BYREF

  memset(v7, 0, sizeof(v7));
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v7);
  v4 = (void *)MiObtainReferencedVadEx(a2, 0, &v6);
  if ( v4 )
    MiFreeToSubAllocatedRegion(v4);
  return KiUnstackDetachProcess((struct _KTHREAD *)v7, 0);
}
