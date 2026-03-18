/*
 * XREFs of ?GetLastPresentCount@CSwapChainBase@@QEAAJPEAI@Z @ 0x180165220
 * Callers:
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x1801ADC2C (-PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x1801ADE38 (-PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetLastPresentCount(CSwapChainBase *this, unsigned int *a2)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = (*(__int64 (__fastcall **)(CSwapChainBase *, unsigned int *))(*(_QWORD *)this + 352LL))(this, a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xF4u, 0LL);
  return v4;
}
