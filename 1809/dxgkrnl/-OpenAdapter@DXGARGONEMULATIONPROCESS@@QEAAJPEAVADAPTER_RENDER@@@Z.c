/*
 * XREFs of ?OpenAdapter@DXGARGONEMULATIONPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C0229FD4
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??_GDXGARGONEMULATIONPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C003D9D8 (--_GDXGARGONEMULATIONPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGARGONEMULATIONPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGARGONEMULATIONPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C02299F8 (-Initialize@DXGARGONEMULATIONPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGARGONEMULATIONPROCESS@@PEAVADAPTE.c)
 */

__int64 __fastcall DXGARGONEMULATIONPROCESS::OpenAdapter(DXGARGONEMULATIONPROCESS *this, struct ADAPTER_RENDER *a2)
{
  int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // r15
  DXGARGONEMULATIONPROCESS_ADAPTER_INFO *v7; // rbx
  DXGARGONEMULATIONPROCESS_ADAPTER_INFO *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  v4 = 0;
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 208LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 56, 0LL);
  v6 = (unsigned int)v5;
  *((_QWORD *)a2 + 8) = KeGetCurrentThread();
  v7 = *(DXGARGONEMULATIONPROCESS_ADAPTER_INFO **)(*(_QWORD *)this + 8 * v5);
  if ( v7 )
    goto LABEL_9;
  v8 = (DXGARGONEMULATIONPROCESS_ADAPTER_INFO *)operator new(0x20uLL, 0x4B677844u, PagedPool);
  v7 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x20uLL);
    *(_DWORD *)v7 = 0;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v4 = DXGARGONEMULATIONPROCESS_ADAPTER_INFO::Initialize(v7, this, a2);
    if ( v4 < 0 )
      goto LABEL_10;
    *(_QWORD *)(*(_QWORD *)this + 8 * v6) = v7;
LABEL_9:
    ++*(_DWORD *)v7;
    goto LABEL_10;
  }
  v10 = WdLogNewEntry5_WdLowResource(v9);
  *(_QWORD *)(v10 + 24) = 5653LL;
  WdLogEvent5_WdLowResource(v10);
  v4 = -1073741801;
LABEL_10:
  *((_QWORD *)a2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 56, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 < 0 && v7 )
    DXGARGONEMULATIONPROCESS_ADAPTER_INFO::`scalar deleting destructor'((char *)v7);
  return (unsigned int)v4;
}
