/*
 * XREFs of ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C004F00C
 * Callers:
 *     ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1C004F130 (--_GFxCallbackMutexLock@@UEAAPEAXI@Z.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C00559FC (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C0077E90 (--1FxIoQueue@@UEAA@XZ.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0033560 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxCallbackMutexLock::~FxCallbackMutexLock(FxCallbackMutexLock *this)
{
  FxVerifierLock *m_Verifier; // rcx

  this->__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackMutexLock::`vftable';
  m_Verifier = this->m_Verifier;
  if ( m_Verifier )
    FxVerifierLock::`scalar deleting destructor'(m_Verifier);
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackLock::`vftable';
}
