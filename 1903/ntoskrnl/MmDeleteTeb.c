/*
 * XREFs of MmDeleteTeb @ 0x140670684
 * Callers:
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFreeToSubAllocatedRegion @ 0x140670744 (MiFreeToSubAllocatedRegion.c)
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
