/*
 * XREFs of ?Initialize@FxCallbackSpinLock@@UEAAXPEAVFxObject@@@Z @ 0x1C004EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C004EDE0 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 */

void __fastcall FxCallbackSpinLock::Initialize(FxCallbackSpinLock *this, FxObject *ParentObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx

  this->m_Verifier = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierLock )
    FxVerifierLock::CreateAndInitialize(&this->m_Verifier, m_Globals, ParentObject, 0);
}
