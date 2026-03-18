/*
 * XREFs of ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C0044870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0040A6C (--0FxCREvent@@QEAA@E@Z.c)
 *     ?CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ @ 0x1C0043910 (-CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C005C408 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxCompanionTarget::Dispose(FxCompanionTarget *this, unsigned __int8 a2)
{
  const void *_a1; // rcx
  IDeviceCompanion *m_RdDeviceCompanion; // rdx
  FxCompanionLibrary *v5; // rbx
  FxCREvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, a2);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  this->m_DisposeEvent = &eventOnStack;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0xEu, WPP_FxCompanionTarget_cpp_Traceguids, _a1, &eventOnStack);
  if ( _InterlockedExchangeAdd(&this->m_PendingTaskCount, 0xFFFFFFFF) > 1 )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  m_RdDeviceCompanion = this->m_RdDeviceCompanion;
  this->m_DisposeEvent = 0LL;
  if ( m_RdDeviceCompanion )
  {
    v5 = qword_1C00AEEE8;
    ((void (__fastcall *)(ICompanionLibrary *))qword_1C00AEEE8->m_RdCompanionLibrary->UnloadCompanion)(qword_1C00AEEE8->m_RdCompanionLibrary);
    FxCompanionLibrary::CloseCompanionLibraryInterface(v5);
    this->m_RdDeviceCompanion = 0LL;
  }
  return 0;
}
