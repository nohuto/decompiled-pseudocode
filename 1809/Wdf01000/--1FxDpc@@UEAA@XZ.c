/*
 * XREFs of ??1FxDpc@@UEAA@XZ @ 0x1C003C3B0
 * Callers:
 *     ??_GFxDpc@@UEAAPEAXI@Z @ 0x1C003C420 (--_GFxDpc@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009F30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDpc::~FxDpc(FxDpc *this, unsigned int a2, unsigned int a3)
{
  const void *_a1; // rdx

  this->__vftable = (FxDpc_vtbl *)FxDpc::`vftable';
  if ( this->m_Object )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxDpc_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
