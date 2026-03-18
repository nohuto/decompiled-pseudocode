/*
 * XREFs of ?GetLastPresentCount@CSwapChainBase@@QEAAJPEAI@Z @ 0x180204E5C
 * Callers:
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x18022C978 (-PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x18022CB84 (-PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetLastPresentCount(CSwapChainBase *this, unsigned int *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = (*(__int64 (__fastcall **)(CSwapChainBase *, unsigned int *))(*(_QWORD *)this + 328LL))(this, a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xF6u);
  return v4;
}
