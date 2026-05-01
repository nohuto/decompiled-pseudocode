/*
 * XREFs of ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18003604C
 * Callers:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180011DB4 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _lambda_904c37ef293efce91a72f5cf76f69278_::operator() @ 0x180013054 (_lambda_904c37ef293efce91a72f5cf76f69278_--operator().c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180035490 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _lambda_444d9ef50161db05de1f3c243be563e0_::operator() @ 0x180035DE4 (_lambda_444d9ef50161db05de1f3c243be563e0_--operator().c)
 * Callees:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180036154 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::PushBoundsToWindow(__int64 a1, char a2)
{
  UINT uFlags; // r10d

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 208LL))(*(_QWORD *)(a1 + 288));
  if ( *(_BYTE *)(a1 + 512)
    && *(_DWORD *)(a1 + 304)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) )
      a2 &= ~2u;
    uFlags = (2 * ((a2 & 1) == 0) + 82964) | 1;
    if ( (a2 & 2) != 0 )
      uFlags = 2 * ((a2 & 1) == 0) + 82964;
    if ( SetWindowPos(
           (HWND)*(int *)(a1 + 304),
           0LL,
           (int)*(float *)(a1 + 496),
           (int)*(float *)(a1 + 500),
           (int)*(float *)(a1 + 504),
           (int)*(float *)(a1 + 508),
           uFlags) )
    {
      WindowReadyState::PosChanged((WindowReadyState *)(a1 + 368), (int)*(float *)(a1 + 504), (int)*(float *)(a1 + 508));
    }
  }
}
