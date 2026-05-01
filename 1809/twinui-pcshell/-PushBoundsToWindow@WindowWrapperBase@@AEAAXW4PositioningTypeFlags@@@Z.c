/*
 * XREFs of ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180020F7C
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001ED38 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _lambda_72c2793fff4768e344ff217d60a44281_::operator() @ 0x180020D14 (_lambda_72c2793fff4768e344ff217d60a44281_--operator().c)
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800496D4 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 * Callees:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180021084 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::PushBoundsToWindow(__int64 a1, char a2)
{
  UINT uFlags; // r10d

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 200LL))(*(_QWORD *)(a1 + 280));
  if ( *(_BYTE *)(a1 + 496)
    && *(_DWORD *)(a1 + 296)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) )
      a2 &= ~2u;
    uFlags = (2 * ((a2 & 1) == 0) + 82964) | 1;
    if ( (a2 & 2) != 0 )
      uFlags = 2 * ((a2 & 1) == 0) + 82964;
    if ( SetWindowPos(
           (HWND)*(int *)(a1 + 296),
           0LL,
           (int)*(float *)(a1 + 480),
           (int)*(float *)(a1 + 484),
           (int)*(float *)(a1 + 488),
           (int)*(float *)(a1 + 492),
           uFlags) )
    {
      WindowReadyState::PosChanged((WindowReadyState *)(a1 + 360), (int)*(float *)(a1 + 488), (int)*(float *)(a1 + 492));
    }
  }
}
