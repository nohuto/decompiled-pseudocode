/*
 * XREFs of ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C006A924
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0069844 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoTargetRemote::OpenTargetHandle(
        FxIoTargetRemote *this,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams,
        FxIoTargetRemoveOpenParams *pParams)
{
  ACCESS_MASK DesiredAccess; // edx
  _LARGE_INTEGER *AllocationSize; // rax
  NTSTATUS File; // esi
  unsigned int v9; // eax
  unsigned __int16 m_ObjectSize; // r8
  const void *v11; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v13; // rdx
  _FILE_OBJECT **p_m_TargetFileObject; // r12
  _DEVICE_OBJECT *RelatedDeviceObject; // rax
  ULONG FileAttributes; // [rsp+30h] [rbp-41h]
  unsigned int ShareAccess; // [rsp+38h] [rbp-39h]
  unsigned int CreateDisposition; // [rsp+40h] [rbp-31h]
  unsigned int CreateOptions; // [rsp+48h] [rbp-29h]
  void *EaBuffer; // [rsp+50h] [rbp-21h]
  unsigned int EaLength; // [rsp+58h] [rbp-19h]
  _IO_STATUS_BLOCK ioStatus; // [rsp+60h] [rbp-11h] BYREF
  _BYTE oa[56]; // [rsp+70h] [rbp-1h] OVERLAPPED BYREF

  *(_QWORD *)&oa[24] = pParams;
  ioStatus.Information = 0LL;
  *(_QWORD *)oa = 0LL;
  EaLength = pParams->EaBufferLength;
  DesiredAccess = pParams->DesiredAccess;
  EaBuffer = pParams->EaBuffer;
  CreateOptions = pParams->CreateOptions;
  CreateDisposition = pParams->CreateDisposition;
  ShareAccess = pParams->ShareAccess;
  FileAttributes = pParams->FileAttributes;
  AllocationSize = pParams->AllocationSizePointer;
  *(_QWORD *)&oa[8] = 48LL;
  *(_QWORD *)&oa[32] = 512LL;
  *(_QWORD *)&oa[16] = 0LL;
  *(_OWORD *)&oa[40] = 0LL;
  File = ZwCreateFile(
           &this->m_TargetHandle,
           DesiredAccess,
           (POBJECT_ATTRIBUTES)&oa[8],
           (PIO_STATUS_BLOCK)&ioStatus.Information,
           AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           EaBuffer,
           EaLength);
  v9 = *(_DWORD *)oa;
  OpenParams->FileInformation = *(_DWORD *)oa;
  m_ObjectSize = this->m_ObjectSize;
  v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_Globals = this->m_Globals;
  if ( File < 0 )
  {
    if ( !m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xEu, 0x13u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v11, File, v9);
  }
  else
  {
    v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v13 = 0LL;
    WPP_IFR_SF_qdd(m_Globals, 3u, 0xEu, 0x10u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v13, File, v9);
    p_m_TargetFileObject = &this->m_TargetFileObject;
    File = ObReferenceObjectByHandle(
             this->m_TargetHandle,
             pParams->DesiredAccess,
             (POBJECT_TYPE)IoFileObjectType,
             0,
             (PVOID *)&this->m_TargetFileObject,
             0LL);
    if ( File < 0 )
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
        (__int64)this->m_TargetHandle,
        File);
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
  return (unsigned int)File;
}
