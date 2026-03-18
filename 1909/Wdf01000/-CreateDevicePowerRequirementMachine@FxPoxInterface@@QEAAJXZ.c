/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0090B80
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0090DA0 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008CEC0 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C008EF40 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008EF78 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C009105C (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxDevicePwrRequirementMachine *v2; // rax
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxDevicePwrRequirementMachine *v4; // rax
  FxDevicePwrRequirementMachine *v5; // rdi
  int v6; // ebx
  FxPkgPnp *v7; // rcx
  FxDeviceBase *v8; // r8
  _FX_DRIVER_GLOBALS *v9; // rcx
  const void *_a1; // rdx
  int v11; // eax
  int v12; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  unsigned __int16 v14; // r9
  FxDeviceBase *v15; // r8
  const void *v16; // rdx
  bool v17; // zf
  __int64 _a2; // rax
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int _a3; // [rsp+38h] [rbp-10h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (FxDevicePwrRequirementMachine *)FxPoolAllocator(
                                          this->m_PkgPnp->m_Globals,
                                          &this->m_PkgPnp->m_Globals->FxPoolFrameworks,
                                          ExDefaultNonPagedPoolType,
                                          0xC8uLL,
                                          this->m_PkgPnp->m_Globals->Tag,
                                          retaddr);
  if ( v2 )
  {
    FxDevicePwrRequirementMachine::FxDevicePwrRequirementMachine(v2, this);
    v5 = v4;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v11 = FxEventQueue::Initialize(v5, v3);
    v6 = v11;
    if ( v11 < 0 )
    {
      m_PkgPnp = this->m_PkgPnp;
      v14 = 11;
      _a3 = v11;
      m_DeviceBase = m_PkgPnp->m_DeviceBase;
      v16 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      v17 = m_DeviceBase->m_ObjectSize == 0;
      _a2 = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
    }
    else
    {
      v12 = FxThreadedEventQueue::Init(
              v5,
              this->m_PkgPnp,
              (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxDevicePwrRequirementMachine::_ProcessEventInner,
              0LL);
      v6 = v12;
      if ( v12 >= 0 )
      {
        this->m_DevicePowerRequirementMachine = v5;
        v6 = 0;
        goto $exit_24;
      }
      m_PkgPnp = this->m_PkgPnp;
      v14 = 12;
      _a3 = v12;
      v15 = m_PkgPnp->m_DeviceBase;
      v16 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v17 = v15->m_ObjectSize == 0;
      _a2 = (__int64)v15->m_DeviceObject.m_DeviceObject;
    }
    m_Globals = m_PkgPnp->m_Globals;
    if ( v17 )
      v16 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v14, WPP_PoxInterface_cpp_Traceguids, v16, _a2, _a3);
$exit_24:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_17;
  }
  v6 = -1073741670;
  v7 = this->m_PkgPnp;
  v8 = v7->m_DeviceBase;
  v9 = v7->m_Globals;
  _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v8->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qid(
    v9,
    2u,
    0xCu,
    0xAu,
    WPP_PoxInterface_cpp_Traceguids,
    _a1,
    (__int64)v8->m_DeviceObject.m_DeviceObject,
    -1073741670);
LABEL_17:
  if ( v5 )
    FxWakeInterruptMachine::`scalar deleting destructor'(v5);
  return (unsigned int)v6;
}
