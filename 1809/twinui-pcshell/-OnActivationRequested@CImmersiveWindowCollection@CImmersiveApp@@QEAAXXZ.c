/*
 * XREFs of ?OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18011DF20
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x18011F930 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800439C4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     WPP_SF_Sd @ 0x180122988 (WPP_SF_Sd.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::OnActivationRequested(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  if ( (*((_BYTE *)this + 212) & 0x20) != 0 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        27,
        (unsigned int)&WPP_3d345533ad1632fc07820b100fc427c3_Traceguids,
        *(_QWORD *)(*((_QWORD *)this + 20) + 560LL),
        *(_DWORD *)(*((_QWORD *)this + 20) + 568LL));
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this, 32);
  }
}
