/*
 * XREFs of ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C006A294
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00691B4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxIoTargetRemote::OpenTargetHandle(
        FxIoTargetRemote *this,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams,
        FxIoTargetRemoveOpenParams *pParams)
{
  void **p_m_TargetHandle; // r12
  ACCESS_MASK DesiredAccess; // edx
  NTSTATUS v8; // esi
  unsigned int Information; // eax
  unsigned __int16 m_ObjectSize; // r8
  const void *v11; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v13; // rdx
  _FILE_OBJECT **p_m_TargetFileObject; // r15
  NTSTATUS v15; // eax
  _DEVICE_OBJECT *RelatedDeviceObject; // rax
  _IO_STATUS_BLOCK ioStatus; // [rsp+60h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+70h] [rbp-58h] BYREF

  oa.ObjectName = &pParams->TargetDeviceName;
  p_m_TargetHandle = &this->m_TargetHandle;
  oa.Length = 48;
  oa.Attributes = 512;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  DesiredAccess = pParams->DesiredAccess;
  oa.RootDirectory = 0LL;
  v8 = ZwCreateFile(
         &this->m_TargetHandle,
         DesiredAccess,
         &oa,
         &ioStatus,
         pParams->AllocationSizePointer,
         pParams->FileAttributes,
         pParams->ShareAccess,
         pParams->CreateDisposition,
         pParams->CreateOptions,
         pParams->EaBuffer,
         pParams->EaBufferLength);
  Information = ioStatus.Information;
  OpenParams->FileInformation = ioStatus.Information;
  m_ObjectSize = this->m_ObjectSize;
  v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_Globals = this->m_Globals;
  if ( v8 < 0 )
  {
    if ( !m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xEu, 0x13u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v11, v8, Information);
  }
  else
  {
    v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v13 = 0LL;
    WPP_IFR_SF_qdd(m_Globals, 3u, 0xEu, 0x10u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v13, v8, Information);
    p_m_TargetFileObject = &this->m_TargetFileObject;
    v15 = ObReferenceObjectByHandle(
            *p_m_TargetHandle,
            pParams->DesiredAccess,
            (POBJECT_TYPE)IoFileObjectType,
            0,
            (PVOID *)&this->m_TargetFileObject,
            0LL);
    v8 = v15;
    if ( v15 < 0 )
    {
      if ( !this->m_ObjectSize )
        v11 = 0LL;
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xEu,
        0x12u,
        WPP_FxIoTargetRemotekm_cpp_Traceguids,
        v11,
        (__int64)*p_m_TargetHandle,
        v15);
    }
    else
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(*p_m_TargetFileObject);
      this->m_TargetDevice = RelatedDeviceObject;
      if ( !RelatedDeviceObject )
      {
        if ( !this->m_ObjectSize )
          v11 = 0LL;
        WPP_IFR_SF_qq(
          this->m_Globals,
          2u,
          0xEu,
          0x11u,
          WPP_FxIoTargetRemotekm_cpp_Traceguids,
          v11,
          *p_m_TargetFileObject);
        return (unsigned int)-1073741810;
      }
    }
  }
  return (unsigned int)v8;
}
