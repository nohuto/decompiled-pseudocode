/*
 * XREFs of ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008CEDC
 * Callers:
 *     ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C008C810 (-_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0014240 (FX_TRACK_DRIVER.c)
 */

void __fastcall FxInterrupt::WorkItemHandler(FxInterrupt *this)
{
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall *v3)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char); // rax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  void *v6; // rdx
  WDFINTERRUPT__ *v7; // rcx
  __int64 v8; // rdx
  void (__fastcall *v9)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char); // rax
  FxDeviceBase *v10; // rdx
  unsigned __int16 v11; // ax
  void *v12; // rdx
  WDFINTERRUPT__ *v13; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    irql = 0;
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    v3 = *(void (__fastcall **)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char))(qword_1C00ABE90 + 24LL);
    if ( v3 )
      v3(&this->m_EvtInterruptWorkItem, 8LL, 1207959552LL, 3943LL, 2);
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v6 = (void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v6 = 0LL;
    v7 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    this->m_EvtInterruptWorkItem(v7, v6);
    LOBYTE(v8) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v8);
  }
  else
  {
    v9 = *(void (__fastcall **)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char))(qword_1C00ABE90 + 24LL);
    if ( v9 )
      v9(&this->m_EvtInterruptWorkItem, 8LL, 1207959552LL, 3943LL, 2);
    v10 = this->m_DeviceBase;
    v11 = v10->m_ObjectSize;
    v12 = (void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11 )
      v12 = 0LL;
    v13 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v13 = 0LL;
    this->m_EvtInterruptWorkItem(v13, v12);
  }
}
