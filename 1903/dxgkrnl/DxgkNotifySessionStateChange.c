/*
 * XREFs of DxgkNotifySessionStateChange @ 0x1C00C52F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiSessionCreateCallback @ 0x1C00C53F8 (DpiSessionCreateCallback.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00C5458 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0141680 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C0276C60 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  int Callback; // edi
  __int64 HostSilo; // rax
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v15; // eax

  Callback = 0;
  HostSilo = PsGetHostSilo();
  v4 = PsAttachSiloToCurrentThread(HostSilo);
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  v8 = (DXGSESSIONMGR *)*((_QWORD *)Global + 74);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      DXGSESSIONMGR::DestroySession(*((DXGSESSIONMGR **)Global + 74));
      v9 = 2;
    }
    else
    {
      v15 = 0;
      if ( a1 == 2 )
        v15 = 3;
      v9 = v15;
    }
  }
  else
  {
    DXGSESSIONMGR::CreateSession(*((DXGSESSIONMGR **)Global + 74));
    Callback = DpiSessionCreateCallback();
    v9 = 1;
  }
  DxgkLogCodePointPacket(0x6Du, v9, 0, 0, 0LL);
  PsDetachSiloFromCurrentThread(v4);
  if ( Callback >= 0 && !a1 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
    if ( *((_BYTE *)SessionDataForSpecifiedSession + 18492) )
      *((_BYTE *)SessionDataForSpecifiedSession + 18494) = DxgkpQueryHostDriverStoreAvailability();
  }
  return (unsigned int)Callback;
}
