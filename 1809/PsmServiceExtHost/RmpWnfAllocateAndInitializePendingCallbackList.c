/*
 * XREFs of RmpWnfAllocateAndInitializePendingCallbackList @ 0x180013854
 * Callers:
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x18000FB7C (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x180046748 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall RmpWnfAllocateAndInitializePendingCallbackList(_QWORD *a1)
{
  _QWORD *Heap; // rax
  _QWORD *v3; // rbx
  int v4; // edi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v3 = Heap;
  if ( Heap )
  {
    v4 = TpAllocWork(&v6, RmpWnfPublishMessageToClientStateNameWorker, Heap, 0LL);
    if ( v4 >= 0 )
    {
      memset_0(v3, 0, 0x28uLL);
      v3[1] = v3;
      *v3 = v3;
      RtlInitializeSRWLock(v3 + 3);
      v3[2] = v6;
      v6 = 0LL;
      *a1 = v3;
      v3 = 0LL;
    }
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  else
  {
    v4 = -1073741801;
  }
  if ( v6 )
    TpReleaseWork(v6);
  return (unsigned int)v4;
}
