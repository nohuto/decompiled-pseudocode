/*
 * XREFs of ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C004E938
 * Callers:
 *     ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x1C004EA60 (--_EFxCallbackSpinLock@@UEAAPEAXI@Z.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C00785E0 (--1FxIoQueue@@UEAA@XZ.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0032950 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxCallbackSpinLock::~FxCallbackSpinLock(FxCallbackSpinLock *this)
{
  FxVerifierLock *m_Verifier; // rcx

  this->__vftable = (FxCallbackSpinLock_vtbl *)FxCallbackSpinLock::`vftable';
  m_Verifier = this->m_Verifier;
  if ( m_Verifier )
    FxVerifierLock::`scalar deleting destructor'(m_Verifier);
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxCallbackSpinLock_vtbl *)FxCallbackLock::`vftable';
}
