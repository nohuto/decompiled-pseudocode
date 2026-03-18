/*
 * XREFs of ?DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z @ 0x1C015A148
 * Callers:
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C00C2008 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     DxgkGetAdapter @ 0x1C0159F60 (DxgkGetAdapter.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007260 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0032FF4 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkpFindSessionRenderAdapter(struct _LUID *a1, DXGADAPTER **a2, char a3)
{
  char v5; // si
  DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGGLOBAL *v20; // rax
  __int64 v21; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  bool v27; // bl
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DXGGLOBAL *v30; // rax
  struct DXGADAPTER *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  struct _LUID *v36; // [rsp+20h] [rbp-18h] BYREF
  DXGADAPTER **v37; // [rsp+28h] [rbp-10h]

  v5 = 1;
  if ( a3 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
    if ( Current )
    {
      if ( DXGPROCESS::IsRemoteConnection(Current) )
      {
        v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 74);
        if ( v11 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v11,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
          v5 = *((_BYTE *)SessionDataForSpecifiedSession + 18495);
        else
          v5 = 0;
      }
    }
  }
  DXGADAPTER_REFERENCE::Assign(a2, 0LL);
  if ( v5 )
  {
    v16 = a1->LowPart == 0;
    v36 = a1;
    v37 = a2;
    if ( !v16 || a1->HighPart )
    {
      Global = DXGGLOBAL::GetGlobal(v15, v14);
      DXGGLOBAL::IterateAdaptersWithCallback((__int64)Global, (__int64)FindHWRenderAdapterByLuid, (__int64)&v36, 2);
    }
    if ( *a2 )
      return 0LL;
    v17 = WdLogNewEntry5_WdEvent(v15);
    *(_QWORD *)(v17 + 24) = a1->HighPart;
    *(_QWORD *)(v17 + 32) = a1->LowPart;
    WdLogEvent5_WdEvent(v17);
    v20 = DXGGLOBAL::GetGlobal(v19, v18);
    DXGGLOBAL::IterateAdaptersWithCallback((__int64)v20, (__int64)FindFirstHWRenderAdapter, (__int64)&v36, 2);
    if ( *a2 )
      return 0LL;
    v24 = WdLogNewEntry5_WdEvent(v21);
    *(_QWORD *)(v24 + 24) = 3923LL;
    WdLogEvent5_WdEvent(v24);
  }
  if ( *a2 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v36);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v36);
  v27 = IsCurrentConsoleSession(v26, v25);
  v30 = DXGGLOBAL::GetGlobal(v29, v28);
  if ( v27 )
    v31 = (struct DXGADAPTER *)*((_QWORD *)v30 + 77);
  else
    v31 = (struct DXGADAPTER *)*((_QWORD *)v30 + 75);
  DXGADAPTER_REFERENCE::Assign(a2, v31);
  if ( *a2 )
  {
    if ( (_BYTE)v37 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v36);
    return 0LL;
  }
  v35 = WdLogNewEntry5_WdError(v33, v32, v34);
  *(_QWORD *)(v35 + 24) = -1073741275LL;
  WdLogEvent5_WdError(v35);
  if ( (_BYTE)v37 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v36);
  return 3221226021LL;
}
