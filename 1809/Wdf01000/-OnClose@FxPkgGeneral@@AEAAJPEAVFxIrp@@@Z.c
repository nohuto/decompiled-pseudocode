/*
 * XREFs of ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0001520
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007A90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001910 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008490 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnClose(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _QWORD *p_Type; // rbx
  char v3; // r15
  unsigned __int64 v6; // rsi
  _FILE_OBJECT *v7; // r8
  int FileObjectFromWdm; // eax
  unsigned __int8 v9; // r8
  unsigned int v10; // r12d
  _LIST_ENTRY *m_PkgContext; // rbx
  FxPkgGeneral *i; // rbx
  _LIST_ENTRY *Flink; // rax
  FxObject *m_ParentObject; // rcx
  FxObject *v15; // rcx
  _IRP *m_Irp; // rax
  FxDeviceBase *m_DeviceBase; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  int v20; // eax
  _FILE_OBJECT *_a1; // rbp
  int v22; // eax
  FxFileObject *FsContext; // rsi
  unsigned __int8 v24; // r9
  _LIST_ENTRY *v25; // rdx
  _LIST_ENTRY *Blink; // r8
  char v27; // si
  FxDeviceBase *v28; // rax
  _DEVICE_OBJECT *v29; // rcx
  NTSTATUS _a2; // eax
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v33; // rcx
  _IRP *v34; // rax
  _FX_DRIVER_GLOBALS *v35; // rbx
  unsigned int v36; // edx
  FxDeviceBase *v37; // rcx
  FxFileObject *ppFxFileObject; // [rsp+40h] [rbp-48h] BYREF
  FxFileObject *pFxFO; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v40; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+A0h] [rbp+18h] BYREF
  PVOID Tag; // [rsp+A8h] [rbp+20h]

  p_Type = &FxIrp->m_Irp->Type;
  v3 = 0;
  pFxFO = 0LL;
  Tag = p_Type;
  v6 = 0LL;
  v7 = *(_FILE_OBJECT **)(p_Type[23] + 48LL);
  if ( !v7 || (v7->Flags & 0x100) == 0 )
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
                          v7,
                          &pFxFO);
    v10 = FileObjectFromWdm;
    if ( pFxFO )
    {
      if ( FileObjectFromWdm >= 0 && pFxFO->m_ObjectSize )
        v6 = (unsigned __int64)pFxFO ^ 0xFFFFFFFFFFFFFFF8uLL;
      m_PkgContext = (_LIST_ENTRY *)pFxFO->m_PkgContext;
      if ( !m_PkgContext )
        m_PkgContext = &this->m_FileObjectInfoHeadList;
    }
    else
    {
      m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
      if ( m_PkgContext != &this->m_FileObjectInfoHeadList )
      {
        while ( LODWORD(m_PkgContext[9].Flink) || !m_PkgContext[2].Blink )
        {
          m_PkgContext = m_PkgContext->Blink;
          if ( m_PkgContext == &this->m_FileObjectInfoHeadList )
            goto LABEL_9;
        }
        m_PkgContext = m_PkgContext->Blink;
      }
    }
LABEL_9:
    for ( i = (FxPkgGeneral *)m_PkgContext->Flink;
          i != (FxPkgGeneral *)&this->m_FileObjectInfoHeadList;
          i = (FxPkgGeneral *)i->__vftable )
    {
      Flink = i->m_ChildEntry.Flink;
      if ( Flink )
      {
        m_ParentObject = i->m_ParentObject;
        v40 = 0;
        if ( m_ParentObject )
        {
          ((void (__fastcall *)(FxObject *, unsigned __int8 *))m_ParentObject->Release)(m_ParentObject, &v40);
          ((void (__fastcall *)(unsigned __int64))i->m_ChildEntry.Flink)(v6);
        }
        else
        {
          ((void (__fastcall *)(unsigned __int64))Flink)(v6);
        }
        v15 = i->m_ParentObject;
        if ( v15 )
          ((void (__fastcall *)(FxObject *, _QWORD))v15->AddRefOverride)(v15, v40);
      }
    }
    m_Irp = FxIrp->m_Irp;
    m_DeviceBase = this->m_DeviceBase;
    ppFxFileObject = 0LL;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    m_Globals = m_DeviceBase->m_Globals;
    v20 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
    _a1 = CurrentStackLocation->FileObject;
    if ( v20 == 1 )
      goto LABEL_54;
    if ( !_a1 && v20 != 4 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
        m_Globals = m_DeviceBase->m_Globals;
      }
      FxVerifierDbgBreakPoint(m_Globals);
LABEL_54:
      v27 = 0;
      goto LABEL_30;
    }
    if ( v20 == 2 )
    {
      FsContext = (FxFileObject *)_a1->FsContext;
      ppFxFileObject = FsContext;
      _a1->FsContext = 0LL;
    }
    else if ( v20 == 3 )
    {
      FsContext = (FxFileObject *)_a1->FsContext2;
      ppFxFileObject = FsContext;
      _a1->FsContext2 = 0LL;
    }
    else
    {
      v22 = FxFileObject::_GetFileObjectFromWdm(
              (FxDevice *)m_DeviceBase,
              WdfFileObjectWdfCannotUseFsContexts,
              CurrentStackLocation->FileObject,
              &ppFxFileObject);
      FsContext = ppFxFileObject;
      if ( v22 >= 0 && ppFxFileObject )
        goto LABEL_22;
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, _a1);
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
    }
    if ( !FsContext )
    {
LABEL_29:
      v27 = 0;
LABEL_30:
      p_Type = Tag;
      goto $Passthru;
    }
LABEL_22:
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v9);
      v24 = PreviousIrql;
    }
    else
    {
      v24 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
      PreviousIrql = v24;
    }
    v25 = FsContext->m_Link.Flink;
    if ( v25->Blink != &FsContext->m_Link || (Blink = FsContext->m_Link.Blink, Blink->Flink != &FsContext->m_Link) )
      __fastfail(3u);
    Blink->Flink = v25;
    v25->Blink = Blink;
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (v33 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Unlock(v33, v24, (unsigned __int8)Blink);
    }
    else
    {
      KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v24);
    }
    FsContext->DeleteObject(FsContext);
    goto LABEL_29;
  }
  v27 = 1;
  v10 = 0;
$Passthru:
  v28 = this->m_DeviceBase;
  if ( BYTE1(v28[1].m_ChildEntry.Blink) )
  {
    v34 = FxIrp->m_Irp;
    ++v34->CurrentLocation;
    ++v34->Tail.Overlay.CurrentStackLocation;
    v10 = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    v29 = v28->m_DeviceObject.m_DeviceObject;
    v3 = 0;
    if ( *(_QWORD *)&v28[3].m_SpinLock.m_DbgFlagIsInitialized && ((__int64)v29[1].CurrentIrp & 1) == 0 )
    {
      _a2 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v29[1], FxIrp->m_Irp, a5, 1u, 0x20u);
      if ( _a2 < 0 )
      {
        v35 = this->m_Globals;
        WPP_IFR_SF_qL(v35, 2u, 0xDu, 0x1Eu, WPP_FxPkgGeneral_cpp_Traceguids, FxIrp->m_Irp, _a2);
        if ( v35->FxVerifierOn
          && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v35, v36, 9u) || v35->FxVerifyDownlevel) )
        {
          FxVerifierDbgBreakPoint(v35);
        }
        p_Type = Tag;
      }
      else
      {
        v3 = 1;
      }
    }
    FxIrp->m_Irp->IoStatus.Status = v10;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  if ( !v27 && _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    v37 = this->m_DeviceBase;
    if ( BYTE5(v37[1].m_Globals) )
      FxObject::DeleteObject(v37);
  }
  if ( v3 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], p_Type, 0x20u);
  return v10;
}
