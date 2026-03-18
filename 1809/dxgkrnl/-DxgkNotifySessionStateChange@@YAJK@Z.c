/*
 * XREFs of ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C013BD50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0132100 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DpiSessionCreateCallback @ 0x1C013BE10 (DpiSessionCreateCallback.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C013BE70 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C02417A8 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  int Callback; // ebx
  __int64 HostSilo; // rax
  __int64 v4; // rbp
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *v7; // rsi
  __int64 v8; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi

  Callback = 0;
  HostSilo = PsGetHostSilo();
  v4 = PsAttachSiloToCurrentThread(HostSilo);
  Global = DXGGLOBAL::GetGlobal(v5);
  v7 = (DXGSESSIONMGR *)*((_QWORD *)Global + 77);
  if ( a1 )
  {
    if ( a1 == 1 )
      DXGSESSIONMGR::DestroySession(*((DXGSESSIONDATA ***)Global + 77));
  }
  else
  {
    DXGSESSIONMGR::CreateSession(*((DXGSESSIONMGR **)Global + 77));
    Callback = DpiSessionCreateCallback();
  }
  PsDetachSiloFromCurrentThread(v4);
  if ( Callback >= 0 && !a1 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId);
    if ( *((_BYTE *)SessionDataForSpecifiedSession + 18489) )
      *((_BYTE *)SessionDataForSpecifiedSession + 18491) = DxgkpQueryHostDriverStoreAvailability();
  }
  return (unsigned int)Callback;
}
