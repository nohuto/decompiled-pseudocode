/*
 * XREFs of ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180042FA4
 * Callers:
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x180042DB0 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180042E70 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x18011DFD4 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x18011F810 (-SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18011FB98 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180120260 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180121914 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        unsigned __int64 *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx

  *a3 = 0LL;
  result = *((_QWORD *)this + 22) == 0LL ? 0x8002802B : 0;
  if ( *((_QWORD *)this + 22) && a2 )
  {
    *a3 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v8);
        if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == a2 )
          break;
        if ( ++v8 >= *((_QWORD *)this + 22) )
          goto LABEL_9;
      }
      v7 = v8;
      result = 0LL;
    }
    else
    {
LABEL_9:
      result = 2147647531LL;
    }
    if ( (int)result >= 0 )
      *a3 = v7;
  }
  return result;
}
