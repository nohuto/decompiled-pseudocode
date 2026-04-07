/*
 * XREFs of ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18001937C
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019190 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x180087DB0 (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800193B0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::SendBoundsToSwapchainTarget(CTopLevelWindow *this)
{
  __int64 v1; // r10
  unsigned int v2; // ebx
  unsigned int cxLeftWidth; // r11d
  int v6; // eax
  struct _MARGINS v7; // [rsp+40h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 97);
  v2 = 0;
  if ( v1 )
  {
    cxLeftWidth = 0;
    if ( *((_BYTE *)this + 768) )
    {
      CTopLevelWindow::GetOutsideMargins(this, &v7);
      cxLeftWidth = v7.cxLeftWidth;
      v1 = *((_QWORD *)this + 97);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v1 + 16) + 824LL))(
           *(_QWORD *)(v1 + 16),
           *(unsigned int *)(v1 + 24),
           cxLeftWidth);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x16A3u);
  }
  return v2;
}
