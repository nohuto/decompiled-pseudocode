/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00EEAFC
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE608 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EE924 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C00EEC68 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseAdapter@DXGARGONEMULATIONPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0228A44 (-CloseAdapter@DXGARGONEMULATIONPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetArgonEmulationProcess@DXGSESSIONDATA@@QEAAPEAVDXGARGONEMULATIONPROCESS@@XZ @ 0x1C02418A4 (-GetArgonEmulationProcess@DXGSESSIONDATA@@QEAAPEAVDXGARGONEMULATIONPROCESS@@XZ.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  volatile signed __int64 *v2; // rax
  char *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGARGONEMULATIONPROCESS *ArgonEmulationProcess; // rax
  struct _KTHREAD **v19[2]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v20; // [rsp+30h] [rbp-18h]
  char v21; // [rsp+38h] [rbp-10h]

  v2 = (volatile signed __int64 *)*((_QWORD *)a2 + 2);
  v20 = (struct DXGADAPTER *)v2;
  v21 = 0;
  if ( v2 )
  {
    _InterlockedIncrement64(v2 + 3);
    v19[1] = (struct _KTHREAD **)-1LL;
  }
  v5 = (char *)a2 + 56;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v6 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 208LL);
    v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6);
    v8 = *(_DWORD *)(v7 + 24);
    if ( !v8 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v12 + 24) = 2190LL;
      WdLogEvent5_WdAssertion(v12);
      v8 = *(_DWORD *)(v7 + 24);
    }
    v9 = v8 - 1;
    *(_DWORD *)(v7 + 24) = v9;
    if ( v9 )
      break;
    if ( a2 != *(struct ADAPTER_RENDER **)(v7 + 48) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v13 + 24) = 2193LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( !*(_BYTE *)(v7 + 77) || DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)a2 + 2)) )
    {
      DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_ADAPTER_INFO *)v7);
      break;
    }
    ++*(_DWORD *)(v7 + 24);
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    COREACCESS::AcquireShared((DXGADAPTER **)v19);
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( (*((_BYTE *)this + 324) & 1) != 0 && *(_BYTE *)(*((_QWORD *)a2 + 2) + 2477LL) )
  {
    v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10) + 77);
    if ( v15 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v15, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    ArgonEmulationProcess = DXGSESSIONDATA::GetArgonEmulationProcess(SessionDataForSpecifiedSession);
    DXGARGONEMULATIONPROCESS::CloseAdapter(ArgonEmulationProcess, a2);
  }
  v11 = v20;
  if ( v20 )
  {
    if ( v21 )
    {
      COREACCESS::Release(v19);
      v11 = v20;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v11 + 2), v11);
  }
}
