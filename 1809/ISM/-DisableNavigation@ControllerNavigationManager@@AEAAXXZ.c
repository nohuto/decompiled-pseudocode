/*
 * XREFs of ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180030728
 * Callers:
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18002B0A0 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800309E4 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180053A30 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

void __fastcall ControllerNavigationManager::DisableNavigation(ControllerNavigationManager *this)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
    ControllerProcessor::UpdateNavigationState(i[3], 2LL, 0LL);
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, 0LL);
}
