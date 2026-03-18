/*
 * XREFs of ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C026406C
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291690 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C0292DD0 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DxgkSendCreateBundleObjectByPointer(__int64 a1, void **a2, unsigned int *a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGSESSIONMGR *v18; // rbx
  __int64 v19; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int BundleObjectByPointer; // eax
  __int64 v26; // rax
  _BYTE v27[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  LODWORD(v6) = 0;
  Current = DXGPROCESS::GetCurrent(a1, (__int64)a2);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  if ( *((_DWORD *)Current + 92) && (*((_BYTE *)Current + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 424) )
    {
      v6 = -2147483611LL;
LABEL_15:
      v26 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v26 + 24) = v6;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_16;
    }
    v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 74);
    if ( v18 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v18, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      BundleObjectByPointer = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
                                SessionDataForSpecifiedSession,
                                v5,
                                a2,
                                a3);
      v6 = BundleObjectByPointer;
      if ( BundleObjectByPointer < 0 )
        goto LABEL_15;
    }
    else
    {
      LODWORD(v6) = -1073741811;
      v22 = WdLogNewEntry5_WdError(v17, v16, v19);
      *(_QWORD *)(v22 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v24, v23);
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v22);
    }
  }
LABEL_16:
  KeLeaveCriticalRegion();
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  return (unsigned int)v6;
}
