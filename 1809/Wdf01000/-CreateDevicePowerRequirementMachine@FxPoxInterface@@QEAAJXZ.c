/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C008F3D0
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C008F5A8 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008B8D0 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C008D7A0 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008D7D8 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C008F7F4 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxDevicePwrRequirementMachine *v2; // rax
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxDevicePwrRequirementMachine *v4; // rax
  FxDevicePwrRequirementMachine *v5; // rdi
  int v6; // ebx
  unsigned __int16 v7; // r9
  int v8; // eax
  int v9; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *v11; // r8
  const void *_a1; // rdx
  bool v13; // zf
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
  if ( !v5 )
  {
    v6 = -1073741670;
    v7 = 10;
    _a3 = -1073741670;
LABEL_11:
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v13 = m_DeviceBase->m_ObjectSize == 0;
    _a2 = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
    goto LABEL_12;
  }
  v8 = FxEventQueue::Initialize(v5, v3);
  v6 = v8;
  if ( v8 < 0 )
  {
    v7 = 11;
    _a3 = v8;
    goto LABEL_11;
  }
  v9 = FxThreadedEventQueue::Init(
         v5,
         this->m_PkgPnp,
         (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxDevicePwrRequirementMachine::_ProcessEventInner,
         0LL);
  v6 = v9;
  if ( v9 >= 0 )
  {
    this->m_DevicePowerRequirementMachine = v5;
    v6 = 0;
    goto $exit_24;
  }
  m_PkgPnp = this->m_PkgPnp;
  v7 = 12;
  _a3 = v9;
  v11 = m_PkgPnp->m_DeviceBase;
  _a1 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
  v13 = v11->m_ObjectSize == 0;
  _a2 = (__int64)v11->m_DeviceObject.m_DeviceObject;
LABEL_12:
  m_Globals = m_PkgPnp->m_Globals;
  if ( v13 )
    _a1 = 0LL;
  WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v7, WPP_PoxInterface_cpp_Traceguids, _a1, _a2, _a3);
$exit_24:
  if ( v6 < 0 && v5 )
    FxWakeInterruptMachine::`scalar deleting destructor'(v5);
  return (unsigned int)v6;
}
