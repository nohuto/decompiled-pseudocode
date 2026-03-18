/*
 * XREFs of ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0148670
 * Callers:
 *     _lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_ @ 0x1C0148610 (_lambda_d61da4d51b31b33ef5e605a1dd45d7b4_--_lambda_invoker_cdecl_.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02744A0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C02747BC (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::QueryActiveContextCount(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)this;
  if ( v4 )
    DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16));
  v5 = *((_QWORD *)this + 2) + 32 * v3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, *(struct DXGFASTMUTEX *const *)v5, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
