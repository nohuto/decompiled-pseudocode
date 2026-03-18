/*
 * XREFs of ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004EC70
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C004E2D0 (imp_WdfDeviceMiniportCreate.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00538E8 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004E708 (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDeviceBase::ConfigureConstraints(FxDeviceBase *this, _WDF_OBJECT_ATTRIBUTES *ObjectAttributes)
{
  _WDF_EXECUTION_LEVEL m_ExecutionLevel; // ecx
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi
  bool v5; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FX_POOL *p_FxPoolFrameworks; // rdx
  FxCallbackMutexLock *v8; // rax
  FxCallbackLock *v9; // rax
  FxCallbackLock *v10; // rcx
  FxCallbackLock *v11; // rax
  unsigned int v12; // esi
  unsigned __int16 m_ObjectSize; // ax
  const void *v14; // rbx
  ULONG Tag; // [rsp+20h] [rbp-38h]
  void *Caller; // [rsp+58h] [rbp+0h]
  _WDF_EXECUTION_LEVEL driverLevel; // [rsp+60h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE driverScope; // [rsp+68h] [rbp+10h] BYREF

  if ( ObjectAttributes )
  {
    this->m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    this->m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_Driver->GetConstraints(&this->m_Driver->IFxHasCallbacks, &driverLevel, &driverScope);
  m_ExecutionLevel = this->m_ExecutionLevel;
  if ( m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
  {
    m_ExecutionLevel = driverLevel;
    this->m_ExecutionLevel = driverLevel;
  }
  if ( this->m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    this->m_SynchronizationScope = driverScope;
  p_m_Globals = &this->m_Globals;
  v5 = m_ExecutionLevel == WdfExecutionLevelPassive;
  m_Globals = this->m_Globals;
  p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
  Tag = m_Globals->Tag;
  if ( v5 )
  {
    v8 = (FxCallbackMutexLock *)FxPoolAllocator(
                                  m_Globals,
                                  p_FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0x70uLL,
                                  Tag,
                                  Caller);
    if ( v8 )
    {
      FxCallbackMutexLock::FxCallbackMutexLock(v8, *p_m_Globals);
      v10 = v9;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = (FxCallbackLock *)FxPoolAllocator(
                              m_Globals,
                              p_FxPoolFrameworks,
                              ExDefaultNonPagedPoolType,
                              0x40uLL,
                              Tag,
                              Caller);
    v10 = v11;
    if ( v11 )
    {
      v11->m_Globals = *p_m_Globals;
      v11->__vftable = (FxCallbackLock_vtbl *)FxCallbackSpinLock::`vftable';
      v11->m_OwnerThread = 0LL;
      v11->m_RecursionCount = 0;
      v11->m_Verifier = 0LL;
      v11[1].m_Globals = 0LL;
      LOBYTE(v11[1].__vftable) = 1;
      goto LABEL_13;
    }
  }
  v10 = 0LL;
LABEL_13:
  this->m_CallbackLockPtr = v10;
  if ( v10 )
  {
    v10->Initialize(v10, this);
    this->m_CallbackLockObjectPtr = this;
    return 0;
  }
  else
  {
    v12 = -1073741670;
    m_ObjectSize = this->m_ObjectSize;
    v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v14 = 0LL;
    WPP_IFR_SF_qL(*p_m_Globals, 2u, 0x14u, 0xAu, WPP_FxDeviceBase_cpp_Traceguids, v14, 0xC000009A);
  }
  return v12;
}
