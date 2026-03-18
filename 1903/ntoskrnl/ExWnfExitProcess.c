/*
 * XREFs of ExWnfExitProcess @ 0x1406712B4
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteProcessContext @ 0x140671310 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteScopeById @ 0x140671AC8 (ExpWnfDeleteScopeById.c)
 */

void __fastcall ExWnfExitProcess(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(void **)(v5 + 1768);
  if ( v4 )
    ExpWnfDeleteProcessContext(v4);
  if ( a2 )
    ExpWnfDeleteScopeById(3LL, &v5);
  KeLeaveCriticalRegion();
}
