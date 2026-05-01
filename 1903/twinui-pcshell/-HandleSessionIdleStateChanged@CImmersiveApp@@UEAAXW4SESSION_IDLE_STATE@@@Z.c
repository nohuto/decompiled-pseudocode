/*
 * XREFs of ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180145840
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0001@@W4GHOST_STATUS@@@Z @ 0x1800159A8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800325E0 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180032A74 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180032EBC (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180033178 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18006EB04 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1801467DC (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18014B2FC (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::HandleSessionIdleStateChanged(__int64 a1, int a2)
{
  CImmersiveApp::CImmersiveWindowCollection *v3; // rsi
  void (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  char result; // al
  __int64 v7; // rcx
  CImmersiveApp::CImmersiveWindowCollection *v8; // rbx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 == 2 )
  {
    v3 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184);
    if ( (*(_BYTE *)(a1 + 396) & 2) != 0 )
    {
      v9 = 0LL;
      v4 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      v4(a1, &v9);
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)v3, 2);
      v5 = *((_DWORD *)v3 + 53);
      if ( (v5 & 2) == 0 && (v5 & 1) == 0 )
        CImmersiveApp::CImmersiveWindowCollection::_OnDeferredGhostBitsClear(v3);
      return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    }
    else
    {
      result = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184));
      if ( result && (*(_BYTE *)(a1 + 396) & 2) == 0 )
        return CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v7);
    }
  }
  else
  {
    v8 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184);
    result = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184));
    if ( result )
    {
      result = CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                 (struct IUnknown *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64)));
      if ( !result )
      {
        if ( *(_QWORD *)(a1 + 360) )
        {
          if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v8) )
            return CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)v8, 2);
          else
            return CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual((__int64)v8, 0, 2u);
        }
      }
    }
  }
  return result;
}
