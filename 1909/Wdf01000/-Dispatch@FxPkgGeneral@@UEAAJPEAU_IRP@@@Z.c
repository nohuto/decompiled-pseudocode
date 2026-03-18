/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00075E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000A620 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000AA30 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00190E8 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqcq @ 0x1C00420CC (WPP_IFR_SF_qqcq.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0057578 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00787C4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0079960 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00923BC (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *v5; // rcx
  unsigned __int8 MajorFunction; // al
  unsigned int v8; // r15d
  _FILE_OBJECT *v10; // r8
  unsigned __int64 v11; // r14
  int FileObjectFromWdm; // eax
  unsigned __int8 v13; // r8
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *Blink; // rax
  FxDeviceBase *v17; // rax
  _LIST_ENTRY *v18; // r13
  _FX_DRIVER_GLOBALS *v19; // rbx
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // r8
  _LIST_ENTRY *v22; // r12
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY **p_Blink; // r14
  _LIST_ENTRY *v25; // rbx
  _LIST_ENTRY *v26; // rax
  unsigned int v27; // edx
  _LIST_ENTRY *v28; // rax
  unsigned __int8 v29; // r8
  FxIrpQueue *v30; // rcx
  _IRP *p_m_RequestCount; // r9
  FxIrpQueue *v32; // rdx
  unsigned __int8 v33; // r8
  unsigned __int8 v34; // dl
  unsigned __int8 v35; // r8
  _LIST_ENTRY *v36; // rbx
  _LIST_ENTRY *v37; // rax
  unsigned int v38; // edx
  _LIST_ENTRY *v39; // rax
  FxDeviceBase *m_DeviceBase; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  const void *_a1; // r8
  bool v43; // zf
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v45; // rcx
  FxVerifierLock *v46; // rcx
  FxTagTracker *v47; // rcx
  FxVerifierLock *v48; // rcx
  FxVerifierLock *v49; // rcx
  __int64 v50; // r9
  _IRP *m_Irp; // r10
  _QWORD *v52; // rbx
  __int64 v53; // rax
  FxRequest *v54; // rbx
  void (__fastcall *v55)(FxRequest *, __int64, __int64, const char *); // rax
  FxVerifierLock *v56; // rcx
  FxTagTracker *v57; // rcx
  FxVerifierLock *v58; // rcx
  char _a3; // [rsp+38h] [rbp-31h]
  void *_a4; // [rsp+40h] [rbp-29h]
  _FILE_OBJECT *FileObject; // [rsp+50h] [rbp-19h]
  FxIrp fxIrp; // [rsp+58h] [rbp-11h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+60h] [rbp-9h] BYREF
  _LIST_ENTRY *v64; // [rsp+68h] [rbp-1h] BYREF
  _LIST_ENTRY *v65; // [rsp+70h] [rbp+7h]
  int v66; // [rsp+78h] [rbp+Fh]
  unsigned __int8 PreviousIrql; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 v68; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned __int8 v69; // [rsp+E0h] [rbp+77h] BYREF
  FxIrp v70; // [rsp+E8h] [rbp+7Fh] BYREF

  fxIrp.m_Irp = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00AEE88.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00AEE88.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a4 = Irp;
    v43 = m_DeviceBase->m_ObjectSize == 0;
    _a3 = CurrentStackLocation->MajorFunction;
    if ( v43 )
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(
      m_Globals,
      5u,
      0xDu,
      0x14u,
      WPP_FxPkgGeneral_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3,
      _a4);
  }
  v5 = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = v5->MajorFunction;
  if ( !v5->MajorFunction )
    return (unsigned int)FxPkgGeneral::OnCreate(this, &fxIrp);
  if ( MajorFunction != 2 )
  {
    if ( MajorFunction == 18 )
    {
      v10 = v5->FileObject;
      v11 = 0LL;
      ppFxFileObject = 0LL;
      if ( v10 && (v10->Flags & 0x100) != 0 )
      {
        v8 = 0;
      }
      else
      {
        FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                              this->m_Device,
                              (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
                              v10,
                              &ppFxFileObject);
        v8 = FileObjectFromWdm;
        if ( ppFxFileObject )
        {
          if ( FileObjectFromWdm >= 0 && ppFxFileObject->m_ObjectSize )
            v11 = (unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL;
          m_PkgContext = (_LIST_ENTRY *)ppFxFileObject->m_PkgContext;
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
                goto LABEL_18;
            }
            m_PkgContext = m_PkgContext->Blink;
          }
        }
LABEL_18:
        for ( i = m_PkgContext->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
        {
          Blink = i[3].Blink;
          if ( Blink )
          {
            Flink = i[3].Flink;
            v69 = 0;
            if ( Flink )
            {
              ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))Flink->Flink[1].Flink)(Flink, &v69);
              Blink = i[3].Blink;
            }
            ((void (__fastcall *)(unsigned __int64))Blink)(v11);
            v45 = i[3].Flink;
            if ( v45 )
              ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v45->Flink[1].Blink)(v45, v69);
          }
        }
        FileObject = Irp->Tail.Overlay.CurrentStackLocation->FileObject;
        if ( FileObject )
        {
          v17 = this->m_DeviceBase;
          v66 = 2;
          v18 = v17[3].m_ChildListHead.Blink;
          v65 = (_LIST_ENTRY *)&v64;
          v64 = (_LIST_ENTRY *)&v64;
          v19 = (_FX_DRIVER_GLOBALS *)v18[1].Flink;
          if ( KeGetCurrentIrql() )
          {
            WPP_IFR_SF_(v19, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
            FxVerifierDbgBreakPoint(v19);
          }
          else
          {
            if ( SLOBYTE(v18[1].Blink) < 0 && (v46 = (FxVerifierLock *)v18[-3].Blink) != 0LL )
            {
              FxVerifierLock::Lock(v46, &PreviousIrql, v13);
              v20 = PreviousIrql;
            }
            else
            {
              v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v18[7]);
              PreviousIrql = v20;
            }
            v22 = v18 + 8;
            v23 = v18[8].Flink;
            if ( v23->Blink != &v18[8] )
              goto LABEL_105;
            v64 = v18[8].Flink;
            v65 = v18 + 8;
            p_Blink = 0LL;
            v23->Blink = (_LIST_ENTRY *)&v64;
            v25 = v64;
            v22->Flink = (_LIST_ENTRY *)&v64;
            v26 = v65;
            if ( (_LIST_ENTRY **)v25->Blink != &v64 || (_LIST_ENTRY **)v65->Flink != &v64 )
              goto LABEL_105;
            v65->Flink = v25;
            v25->Blink = v26;
            v65 = (_LIST_ENTRY *)&v64;
            v64 = (_LIST_ENTRY *)&v64;
            if ( v25 != v22 )
            {
              while ( LODWORD(v25[1].Flink) != 1 )
              {
                v25 = v25->Flink;
                if ( v25 == v22 )
                  goto LABEL_33;
              }
              p_Blink = &v25[-57].Blink;
              v27 = _InterlockedIncrement((volatile signed __int32 *)&v25[-56].Flink + 1);
              if ( SLOBYTE(v25[-55].Flink) < 0 )
              {
                v47 = (FxTagTracker *)v25[-60].Blink;
                if ( v47 )
                  FxTagTracker::UpdateTagHistory(
                    v47,
                    (void *)0x73756C66,
                    1686,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                    TagAddRef,
                    v27);
              }
              v28 = v25->Flink;
              if ( v25->Flink->Blink != v25 )
LABEL_105:
                __fastfail(3u);
              v20 = PreviousIrql;
              v64 = v25->Flink;
              v65 = v25;
              v28->Blink = (_LIST_ENTRY *)&v64;
              v25->Flink = (_LIST_ENTRY *)&v64;
            }
LABEL_33:
            if ( SLOBYTE(v18[1].Blink) < 0 && (v48 = (FxVerifierLock *)v18[-3].Blink) != 0LL )
              FxVerifierLock::Unlock(v48, v20, v21);
            else
              KeReleaseSpinLock((PKSPIN_LOCK)&v18[7], v20);
            while ( p_Blink )
            {
              if ( *((_BYTE *)p_Blink + 136) )
                FxIoQueue::PurgeForwardProgressIrps((FxIoQueue *)p_Blink, FileObject);
              if ( *((char *)p_Blink + 24) < 0 && (v49 = (FxVerifierLock *)*(p_Blink - 5)) != 0LL )
                FxVerifierLock::Lock(v49, &v68, v29);
              else
                v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Blink + 14);
              while ( 1 )
              {
                v30 = (FxIrpQueue *)(p_Blink + 24);
                p_m_RequestCount = 0LL;
                v32 = (FxIrpQueue *)p_Blink[24];
                if ( v32 != (FxIrpQueue *)(p_Blink + 24) )
                {
                  do
                  {
                    p_m_RequestCount = (_IRP *)&v32[-5].m_RequestCount;
                    if ( !FileObject )
                      break;
                    if ( p_m_RequestCount->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
                      break;
                    v32 = (FxIrpQueue *)v32->m_Queue.Flink;
                    p_m_RequestCount = 0LL;
                  }
                  while ( v32 != v30 );
                }
                v70.m_Irp = p_m_RequestCount;
                if ( !p_m_RequestCount )
                  break;
                while ( !_InterlockedExchange64((volatile __int64 *)&p_m_RequestCount->CancelRoutine, 0LL) )
                {
                  v70.m_Irp = FxIrpQueue::PeekNextIrpFromQueue(v30, v70.m_Irp, FileObject);
                  p_m_RequestCount = v70.m_Irp;
                  if ( !v70.m_Irp )
                    goto LABEL_42;
                  v30 = (FxIrpQueue *)(p_Blink + 24);
                }
                FxIrpQueue::RemoveIrpFromListEntry(v30, &v70);
                m_Irp = v70.m_Irp;
                v52 = v70.m_Irp->Tail.Overlay.DriverContext[3];
                if ( *(_DWORD *)v52 == 1 )
                  v52[1] = 0LL;
                m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
                if ( !v50 )
                  break;
                v53 = *(v52 - 15);
                v54 = (FxRequest *)(v52 - 15);
                v55 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v53 + 16);
                v54->m_IrpQueue = 0LL;
                v55(v54, 1969583441LL, 2102LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
                FxObject::AddRef(
                  v54,
                  (void *)0x75657551,
                  4330,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                FxIoQueue::CancelForQueue((FxIoQueue *)p_Blink, v54, v68);
                FxNonPagedObject::Lock((FxNonPagedObject *)p_Blink, &v68);
              }
LABEL_42:
              FxIoQueue::DispatchEvents((FxIoQueue *)p_Blink, v68, 0LL);
              ((void (__fastcall *)(_LIST_ENTRY **, __int64, __int64, const char *))(*p_Blink)[1].Flink)(
                p_Blink,
                1937075302LL,
                1441LL,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
              if ( SLOBYTE(v18[1].Blink) < 0 && (v56 = (FxVerifierLock *)v18[-3].Blink) != 0LL )
              {
                FxVerifierLock::Lock(v56, &PreviousIrql, v33);
                v34 = PreviousIrql;
              }
              else
              {
                v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v18[7]);
                PreviousIrql = v34;
              }
              v36 = v64;
              v37 = v65;
              p_Blink = 0LL;
              if ( (_LIST_ENTRY **)v64->Blink != &v64 || (_LIST_ENTRY **)v65->Flink != &v64 )
                goto LABEL_105;
              v65->Flink = v64;
              v36->Blink = v37;
              v65 = (_LIST_ENTRY *)&v64;
              v64 = (_LIST_ENTRY *)&v64;
              if ( v36 != v22 )
              {
                while ( LODWORD(v36[1].Flink) != 1 )
                {
                  v36 = v36->Flink;
                  if ( v36 == v22 )
                    goto LABEL_51;
                }
                p_Blink = &v36[-57].Blink;
                v38 = _InterlockedIncrement((volatile signed __int32 *)&v36[-56].Flink + 1);
                if ( SLOBYTE(v36[-55].Flink) < 0 )
                {
                  v57 = (FxTagTracker *)v36[-60].Blink;
                  if ( v57 )
                    FxTagTracker::UpdateTagHistory(
                      v57,
                      (void *)0x73756C66,
                      1686,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                      TagAddRef,
                      v38);
                }
                v39 = v36->Flink;
                if ( v36->Flink->Blink != v36 )
                  goto LABEL_105;
                v34 = PreviousIrql;
                v64 = v36->Flink;
                v65 = v36;
                v39->Blink = (_LIST_ENTRY *)&v64;
                v36->Flink = (_LIST_ENTRY *)&v64;
              }
LABEL_51:
              if ( SLOBYTE(v18[1].Blink) < 0 && (v58 = (FxVerifierLock *)v18[-3].Blink) != 0LL )
                FxVerifierLock::Unlock(v58, v34, v35);
              else
                KeReleaseSpinLock((PKSPIN_LOCK)&v18[7], v34);
            }
          }
        }
      }
      if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
      {
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
      }
      Irp->IoStatus.Status = v8;
      Irp->IoStatus.Information = 0LL;
    }
    else
    {
      if ( MajorFunction == 16 )
        return (unsigned int)FxPkgGeneral::OnShutdown(this, &fxIrp);
      v8 = -1073741637;
      Irp->IoStatus.Status = -1073741637;
    }
    IofCompleteRequest(Irp, 0);
    return v8;
  }
  return (unsigned int)FxPkgGeneral::OnClose(this, &fxIrp);
}
