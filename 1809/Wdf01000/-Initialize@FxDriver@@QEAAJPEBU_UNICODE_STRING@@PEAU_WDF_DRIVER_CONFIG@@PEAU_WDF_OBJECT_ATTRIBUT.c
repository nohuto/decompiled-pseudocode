/*
 * XREFs of ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0055C5C
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004D9C0 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C003DAB0 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0055B20 (-ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     WPP_IFR_SF_qZ @ 0x1C005613C (WPP_IFR_SF_qZ.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C005761C (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?AllocateDriverObjectExtensionAndStoreFxDriver@FxDriver@@QEAAJXZ @ 0x1C0057918 (-AllocateDriverObjectExtensionAndStoreFxDriver@FxDriver@@QEAAJXZ.c)
 */

__int64 __fastcall FxDriver::Initialize(
        FxDriver *this,
        const _UNICODE_STRING *ArgRegistryPath,
        _WDF_DRIVER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _DRIVER_OBJECT *m_DriverObject; // rdx
  int DriverObjectExtensionAndStoreFxDriver; // ebx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(_DEVICE_OBJECT *, _IRP *); // r8
  unsigned __int16 v13; // r9
  unsigned __int16 Length; // ax
  _FX_DRIVER_GLOBALS *v15; // rcx
  unsigned __int64 v16; // rbp
  wchar_t *v17; // rax
  unsigned int DriverInitFlags; // ecx
  _DRIVER_EXTENSION *DriverExtension; // rdx
  __int64 v20; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-38h]
  void *Caller; // [rsp+58h] [rbp+0h]

  m_Globals = this->m_Globals;
  FxObject::MarkNoDeleteDDI(this, ObjectLock);
  this->m_ObjectFlags |= 0x800u;
  FxDriver::ConfigureConstraints(this, DriverAttributes);
  m_DriverObject = this->m_DriverObject.m_DriverObject;
  if ( m_DriverObject )
  {
    DriverObjectExtensionAndStoreFxDriver = FxDisposeList::_Create(m_Globals, m_DriverObject, &this->m_DisposeList);
    if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
    {
      DriverObjectExtensionAndStoreFxDriver = FxDriver::AllocateDriverObjectExtensionAndStoreFxDriver(this);
      if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
      {
        if ( (Config->DriverInitFlags & 2) == 0 )
        {
          this->m_DriverDeviceAdd.Method = Config->EvtDriverDeviceAdd;
          this->m_DriverUnload.Method = Config->EvtDriverUnload;
        }
        if ( ArgRegistryPath )
        {
          Length = ArgRegistryPath->Length;
          v15 = this->m_Globals;
          this->m_RegistryPath.Length = ArgRegistryPath->Length;
          v16 = (unsigned __int16)(Length + 2);
          this->m_RegistryPath.MaximumLength = Length + 2;
          v17 = (wchar_t *)FxPoolAllocator(v15, &v15->FxPoolFrameworks, 1u, v16, v15->Tag, Caller);
          this->m_RegistryPath.Buffer = v17;
          if ( v17 )
          {
            memmove(v17, ArgRegistryPath->Buffer, ArgRegistryPath->Length);
            this->m_RegistryPath.Buffer[(v16 >> 1) - 1] = 0;
          }
          else
          {
            *(_DWORD *)&this->m_RegistryPath.Length = 0;
            DriverObjectExtensionAndStoreFxDriver = -1073741670;
          }
        }
        if ( m_Globals->IsDriverCompanion )
        {
          this->m_DriverObject.m_DriverObject->DriverExtension->AddDevice = FxDriver::AddDevice;
          this->m_DriverObject.m_DriverObject->DriverUnload = FxDriver::Unload;
        }
        else if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
        {
          DriverInitFlags = Config->DriverInitFlags;
          if ( (DriverInitFlags & 2) == 0 )
          {
            DriverExtension = this->m_DriverObject.m_DriverObject->DriverExtension;
            if ( (DriverInitFlags & 1) != 0 )
            {
              DriverExtension->AddDevice = 0LL;
              this->m_DriverObject.m_DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))((unsigned __int64)FxDriver::Unload & -(__int64)(Config->EvtDriverUnload != 0LL));
            }
            else
            {
              DriverExtension->AddDevice = FxDriver::AddDevice;
              this->m_DriverObject.m_DriverObject->DriverUnload = FxDriver::Unload;
            }
            v20 = 112LL;
            v11 = 28LL;
            do
            {
              v12 = FxDevice::DispatchWithLock;
              *(_QWORD *)((char *)&this->m_DriverObject.m_DriverObject->Type + v20) = FxDevice::DispatchWithLock;
              v20 += 8LL;
              --v11;
            }
            while ( v11 );
          }
          if ( (_BYTE)KdDebuggerEnabled == 1 && !(_BYTE)KdDebuggerNotPresent )
            this->m_DebuggerConnected = 1;
          if ( (Config->DriverInitFlags & 1) != 0 && !Config->EvtDriverUnload )
            WPP_IFR_SF_qZ(
              m_Globals,
              v11,
              (unsigned int)v12,
              v13,
              Tag,
              this->m_DriverObject.m_DriverObject,
              &this->m_RegistryPath);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)DriverObjectExtensionAndStoreFxDriver;
}
