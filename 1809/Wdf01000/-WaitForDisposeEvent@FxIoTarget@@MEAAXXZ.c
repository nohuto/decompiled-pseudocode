/*
 * XREFs of ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0068240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0041824 (--0FxCREvent@@QEAA@E@Z.c)
 */

void __fastcall FxIoTarget::WaitForDisposeEvent(FxIoTarget *this, unsigned __int8 a2)
{
  const void *_a1; // rcx
  FxCREvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, a2);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_DisposeEvent = &eventOnStack;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0xBu, WPP_FxIoTarget_cpp_Traceguids, _a1, &eventOnStack);
  if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) > 1 )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  this->m_DisposeEvent = 0LL;
}
