/*
 * XREFs of SmSetThreadPagePriority @ 0x14011CAC8
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011C180 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140148EEC (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x14005A580 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140080C54 (PsSetPagePriorityThread.c)
 */

__int64 __fastcall SmSetThreadPagePriority(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // r8

  CurrentThread = *a1;
  if ( !*a1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  result = PsGetPagePriorityThread((__int64)CurrentThread);
  if ( (_DWORD)result != v3 )
    return PsSetPagePriorityThread(v4, v3);
  return result;
}
