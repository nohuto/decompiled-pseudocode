/*
 * XREFs of ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x18011CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18002CE1C (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180042F7C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800439C4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180043B64 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18004501C (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1800514EC (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18011D83C (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180121BFC (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::HandleSessionIdleStateChanged(__int64 a1, int a2)
{
  CImmersiveApp::CImmersiveWindowCollection *v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v3 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152);
  if ( a2 == 2 )
  {
    if ( (*(_BYTE *)(a1 + 364) & 2) != 0 )
    {
      v6 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL))(a1, &v6);
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)v3, 2);
      v4 = *((_DWORD *)v3 + 53);
      if ( (v4 & 2) == 0 && (v4 & 1) == 0 )
        CImmersiveApp::CImmersiveWindowCollection::_OnDeferredGhostBitsClear(v3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    }
    else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152)) )
    {
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v5);
    }
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152))
         && !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
               (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
               (struct IUnknown *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64)))
         && *(_QWORD *)(a1 + 328) )
  {
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v3) )
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)v3, 2);
    else
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual((__int64)v3, 0, 2u);
  }
}
