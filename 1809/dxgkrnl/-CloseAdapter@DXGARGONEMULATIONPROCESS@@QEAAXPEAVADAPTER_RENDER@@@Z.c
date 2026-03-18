/*
 * XREFs of ?CloseAdapter@DXGARGONEMULATIONPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0228A44
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00EEAFC (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_GDXGARGONEMULATIONPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C003D9D8 (--_GDXGARGONEMULATIONPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00F1DDC (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGARGONEMULATIONPROCESS::CloseAdapter(DXGARGONEMULATIONPROCESS *this, struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rbp
  int *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  void *v11; // rdx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 56, 0LL);
  *((_QWORD *)a2 + 8) = KeGetCurrentThread();
  v6 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 208LL);
  v7 = *(int **)(*(_QWORD *)this + 8 * v6);
  v8 = *v7;
  if ( !*v7 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 5693LL;
    WdLogEvent5_WdAssertion(v9);
    v8 = *v7;
  }
  v10 = v8 - 1;
  *v7 = v10;
  if ( !v10 )
  {
    v11 = (void *)*((_QWORD *)v7 + 3);
    if ( v11 )
      ADAPTER_RENDER::DdiDestroyProcess(a2, v11, v5);
    DXGARGONEMULATIONPROCESS_ADAPTER_INFO::`scalar deleting destructor'((char *)v7);
    *(_QWORD *)(*(_QWORD *)this + 8 * v6) = 0LL;
  }
  *((_QWORD *)a2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 56, 0LL);
  KeLeaveCriticalRegion();
}
