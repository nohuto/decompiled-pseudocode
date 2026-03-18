/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8
 * Callers:
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00DCB84 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00E7260 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015E510 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00EEAFC (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULATIONPROCESS@@@Z @ 0x1C00F8C4C (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULAT.c)
 *     ?CloseAdapter@DXGARGONEMULATIONPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0228A44 (-CloseAdapter@DXGARGONEMULATIONPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?OpenAdapter@DXGARGONEMULATIONPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C0229FD4 (-OpenAdapter@DXGARGONEMULATIONPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetArgonEmulationProcess@DXGSESSIONDATA@@QEAAPEAVDXGARGONEMULATIONPROCESS@@XZ @ 0x1C02418A4 (-GetArgonEmulationProcess@DXGSESSIONDATA@@QEAAPEAVDXGARGONEMULATIONPROCESS@@XZ.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2, char a3)
{
  __int64 v5; // rdi
  DXGARGONEMULATIONPROCESS *v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  struct ADAPTER_RENDER *v11; // r15
  struct ADAPTER_RENDER **v12; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGARGONEMULATIONPROCESS *ArgonEmulationProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  LODWORD(v5) = 0;
  v6 = 0LL;
  if ( (*((_BYTE *)this + 324) & 1) == 0 || !*(_BYTE *)(*((_QWORD *)a2 + 2) + 2477LL) )
    goto LABEL_2;
  v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 77);
  if ( v19 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  ArgonEmulationProcess = DXGSESSIONDATA::GetArgonEmulationProcess(SessionDataForSpecifiedSession);
  v6 = ArgonEmulationProcess;
  if ( ArgonEmulationProcess )
  {
    LODWORD(v5) = DXGARGONEMULATIONPROCESS::OpenAdapter(ArgonEmulationProcess, a2);
    if ( (int)v5 < 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v30 + 24) = 2120LL;
      WdLogEvent5_WdWarning(v30);
      return (unsigned int)v5;
    }
LABEL_2:
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)a2 + 56, 0LL);
    *((_QWORD *)a2 + 8) = KeGetCurrentThread();
    v7 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 208LL);
    v8 = *(_QWORD **)(*((_QWORD *)this + 6) + 8 * v7);
    if ( !v8 )
    {
      v9 = operator new(0x50uLL, 0x4B677844u, 1, PagedPool);
      v8 = v9;
      if ( v9 )
      {
        memset(v9, 0, 0x50uLL);
        v8[1] = 0LL;
        v8[2] = 0LL;
        v8[3] = 0LL;
        v8[4] = 0LL;
        v8[5] = 0LL;
        v8[6] = 0LL;
        *((_DWORD *)v8 + 18) = 0;
        *((_WORD *)v8 + 38) = 0;
      }
      else
      {
        v8 = 0LL;
      }
      if ( !v8 )
      {
        LODWORD(v5) = -1073741801;
LABEL_11:
        *((_QWORD *)a2 + 8) = 0LL;
        ExReleasePushLockExclusiveEx((char *)a2 + 56, 0LL);
        KeLeaveCriticalRegion();
        if ( (int)v5 < 0 )
        {
          DXGPROCESS::CloseAdapter(this, a2);
          if ( v6 )
            DXGARGONEMULATIONPROCESS::CloseAdapter(v6, a2);
        }
        return (unsigned int)v5;
      }
      v8[4] = this;
      v11 = (struct ADAPTER_RENDER *)(v8 + 7);
      v8[6] = a2;
      if ( *((struct _KTHREAD **)a2 + 8) != KeGetCurrentThread() )
      {
        v31 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v31 + 24) = 4122LL;
        WdLogEvent5_WdAssertion(v31);
      }
      v12 = (struct ADAPTER_RENDER **)*((_QWORD *)a2 + 31);
      if ( *v12 != (struct ADAPTER_RENDER *)((char *)a2 + 240) )
        __fastfail(3u);
      *(_QWORD *)v11 = (char *)a2 + 240;
      v8[8] = v12;
      *v12 = v11;
      *((_QWORD *)a2 + 31) = v11;
      ++*((_DWORD *)a2 + 64);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7) = v8;
    }
    ++*((_DWORD *)v8 + 6);
    if ( a3 )
    {
      v14 = DXGPROCESS_ADAPTER_INFO::Initialize((DXGPROCESS_ADAPTER_INFO *)v8, this, a2, v6);
      v5 = v14;
      if ( v14 < 0 )
      {
        v32 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v32 + 24) = v5;
        WdLogEvent5_WdWarning(v32);
      }
    }
    goto LABEL_11;
  }
  v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
  *(_QWORD *)(v26 + 24) = 2113LL;
  WdLogEvent5_WdWarning(v26);
  return 3221225473LL;
}
