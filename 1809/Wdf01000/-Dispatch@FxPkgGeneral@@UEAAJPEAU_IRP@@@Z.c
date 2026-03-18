/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007A90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0001520 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001910 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C0018AA4 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0018F44 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0019CCC (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0042EFC (WPP_IFR_SF_qqcq.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0057BC8 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DC14 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0078074 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C009092C (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *v5; // rcx
  unsigned __int8 MajorFunction; // al
  _FILE_OBJECT *v7; // r8
  unsigned __int64 v8; // r14
  int FileObjectFromWdm; // eax
  unsigned __int8 v10; // r8
  unsigned int v11; // r15d
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *Blink; // rax
  FxDeviceBase *v15; // rax
  _LIST_ENTRY *v16; // r13
  _FX_DRIVER_GLOBALS *v17; // rbx
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // r8
  _LIST_ENTRY *v20; // r12
  _LIST_ENTRY *v21; // rax
  _LIST_ENTRY **p_Blink; // r14
  _LIST_ENTRY *v23; // rbx
  _LIST_ENTRY *v24; // rax
  unsigned int v25; // edx
  _LIST_ENTRY *v26; // rax
  unsigned __int8 v27; // r8
  FxIrpQueue *v28; // rcx
  _IRP *p_m_RequestCount; // r9
  FxIrpQueue *v30; // rdx
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // r8
  _LIST_ENTRY *v34; // rbx
  _LIST_ENTRY *v35; // rax
  unsigned int v36; // edx
  _LIST_ENTRY *v37; // rax
  FxIoQueue *v40; // rcx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v42; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  const void *_a1; // r8
  bool v46; // zf
  FxVerifierLock *v47; // rcx
  FxTagTracker *v48; // rcx
  FxVerifierLock *v49; // rcx
  FxVerifierLock *v50; // rcx
  __int64 v51; // r9
  _IRP *m_Irp; // r10
  _QWORD *v53; // rbx
  __int64 v54; // rax
  FxRequest *v55; // rbx
  void (__fastcall *v56)(FxRequest *, __int64, __int64, const char *); // rax
  FxVerifierLock *v57; // rcx
  FxTagTracker *v58; // rcx
  FxVerifierLock *v59; // rcx
  char _a3; // [rsp+38h] [rbp-41h]
  void *_a4; // [rsp+40h] [rbp-39h]
  _FILE_OBJECT *FileObject; // [rsp+50h] [rbp-29h]
  FxIrp fxIrp; // [rsp+58h] [rbp-21h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+60h] [rbp-19h] BYREF
  _LIST_ENTRY IrpListHead; // [rsp+68h] [rbp-11h] BYREF
  _LIST_ENTRY *v66; // [rsp+78h] [rbp-1h] BYREF
  _LIST_ENTRY *v67; // [rsp+80h] [rbp+7h]
  int v68; // [rsp+88h] [rbp+Fh]
  unsigned __int8 PreviousIrql; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 v70; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 v71; // [rsp+F0h] [rbp+77h] BYREF
  FxIrp v72; // [rsp+F8h] [rbp+7Fh] BYREF

  fxIrp.m_Irp = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00ABE58.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00ABE58.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a4 = Irp;
    v46 = m_DeviceBase->m_ObjectSize == 0;
    _a3 = CurrentStackLocation->MajorFunction;
    if ( v46 )
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
  if ( MajorFunction == 2 )
    return (unsigned int)FxPkgGeneral::OnClose(this, &fxIrp);
  if ( MajorFunction != 18 )
  {
    if ( MajorFunction != 16 )
    {
      v11 = -1073741637;
      Irp->IoStatus.Status = -1073741637;
      goto LABEL_53;
    }
    return (unsigned int)FxPkgGeneral::OnShutdown(this, &fxIrp);
  }
  v7 = v5->FileObject;
  v8 = 0LL;
  ppFxFileObject = 0LL;
  if ( v7 && (v7->Flags & 0x100) != 0 )
  {
    v11 = 0;
  }
  else
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          v7,
                          &ppFxFileObject);
    v11 = FileObjectFromWdm;
    if ( ppFxFileObject )
    {
      if ( FileObjectFromWdm >= 0 && ppFxFileObject->m_ObjectSize )
        v8 = (unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL;
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
            goto LABEL_15;
        }
        m_PkgContext = m_PkgContext->Blink;
      }
    }
LABEL_15:
    for ( i = m_PkgContext->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
    {
      Blink = i[3].Blink;
      if ( Blink )
      {
        Flink = i[3].Flink;
        v71 = 0;
        if ( Flink )
        {
          ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))Flink->Flink[1].Flink)(Flink, &v71);
          ((void (__fastcall *)(unsigned __int64))i[3].Blink)(v8);
        }
        else
        {
          ((void (__fastcall *)(unsigned __int64))Blink)(v8);
        }
        v42 = i[3].Flink;
        if ( v42 )
          ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v42->Flink[1].Blink)(v42, v71);
      }
    }
    FileObject = Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    if ( FileObject )
    {
      v15 = this->m_DeviceBase;
      v68 = 2;
      v16 = v15[3].m_ChildListHead.Blink;
      v67 = (_LIST_ENTRY *)&v66;
      v66 = (_LIST_ENTRY *)&v66;
      v17 = (_FX_DRIVER_GLOBALS *)v16[1].Flink;
      if ( KeGetCurrentIrql() )
      {
        WPP_IFR_SF_(v17, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
        FxVerifierDbgBreakPoint(v17);
      }
      else
      {
        if ( SLOBYTE(v16[1].Blink) < 0 && (v47 = (FxVerifierLock *)v16[-3].Blink) != 0LL )
        {
          FxVerifierLock::Lock(v47, &PreviousIrql, v10);
          v18 = PreviousIrql;
        }
        else
        {
          v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v16[7]);
          PreviousIrql = v18;
        }
        v20 = v16 + 8;
        v21 = v16[8].Flink;
        if ( v21->Blink != &v16[8] )
          goto LABEL_105;
        v66 = v16[8].Flink;
        v67 = v16 + 8;
        p_Blink = 0LL;
        v21->Blink = (_LIST_ENTRY *)&v66;
        v23 = v66;
        v20->Flink = (_LIST_ENTRY *)&v66;
        v24 = v67;
        if ( (_LIST_ENTRY **)v23->Blink != &v66 || (_LIST_ENTRY **)v67->Flink != &v66 )
          goto LABEL_105;
        v67->Flink = v23;
        v23->Blink = v24;
        v67 = (_LIST_ENTRY *)&v66;
        v66 = (_LIST_ENTRY *)&v66;
        if ( v23 != v20 )
        {
          while ( LODWORD(v23[1].Flink) != 1 )
          {
            v23 = v23->Flink;
            if ( v23 == v20 )
              goto LABEL_30;
          }
          p_Blink = &v23[-57].Blink;
          v25 = _InterlockedIncrement((volatile signed __int32 *)&v23[-56].Flink + 1);
          if ( SLOBYTE(v23[-55].Flink) < 0 )
          {
            v48 = (FxTagTracker *)v23[-60].Blink;
            if ( v48 )
              FxTagTracker::UpdateTagHistory(
                v48,
                (void *)0x73756C66,
                1686,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                TagAddRef,
                v25);
          }
          v26 = v23->Flink;
          if ( v23->Flink->Blink != v23 )
LABEL_105:
            __fastfail(3u);
          v18 = PreviousIrql;
          v66 = v23->Flink;
          v67 = v23;
          v26->Blink = (_LIST_ENTRY *)&v66;
          v23->Flink = (_LIST_ENTRY *)&v66;
        }
LABEL_30:
        if ( SLOBYTE(v16[1].Blink) < 0 && (v49 = (FxVerifierLock *)v16[-3].Blink) != 0LL )
          FxVerifierLock::Unlock(v49, v18, v19);
        else
          KeReleaseSpinLock((PKSPIN_LOCK)&v16[7], v18);
        while ( p_Blink )
        {
          if ( *((_BYTE *)p_Blink + 136) )
          {
            IrpListHead.Blink = &IrpListHead;
            IrpListHead.Flink = &IrpListHead;
            FxIoQueue::GetForwardProgressIrps((FxIoQueue *)p_Blink, &IrpListHead, FileObject);
            FxIoQueue::CancelIrps(v40, &IrpListHead);
          }
          if ( *((char *)p_Blink + 24) < 0 && (v50 = (FxVerifierLock *)*(p_Blink - 5)) != 0LL )
            FxVerifierLock::Lock(v50, &v70, v27);
          else
            v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Blink + 14);
          while ( 1 )
          {
            v28 = (FxIrpQueue *)(p_Blink + 24);
            p_m_RequestCount = 0LL;
            v30 = (FxIrpQueue *)p_Blink[24];
            if ( v30 != (FxIrpQueue *)(p_Blink + 24) )
            {
              do
              {
                p_m_RequestCount = (_IRP *)&v30[-5].m_RequestCount;
                if ( !FileObject )
                  break;
                if ( p_m_RequestCount->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
                  break;
                v30 = (FxIrpQueue *)v30->m_Queue.Flink;
                p_m_RequestCount = 0LL;
              }
              while ( v30 != v28 );
            }
            v72.m_Irp = p_m_RequestCount;
            if ( !p_m_RequestCount )
              break;
            while ( !_InterlockedExchange64((volatile __int64 *)&p_m_RequestCount->CancelRoutine, 0LL) )
            {
              v72.m_Irp = FxIrpQueue::PeekNextIrpFromQueue(v28, v72.m_Irp, FileObject);
              p_m_RequestCount = v72.m_Irp;
              if ( !v72.m_Irp )
                goto LABEL_39;
              v28 = (FxIrpQueue *)(p_Blink + 24);
            }
            FxIrpQueue::RemoveIrpFromListEntry(v28, &v72);
            m_Irp = v72.m_Irp;
            v53 = v72.m_Irp->Tail.Overlay.DriverContext[3];
            if ( *(_DWORD *)v53 == 1 )
              v53[1] = 0LL;
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            if ( !v51 )
              break;
            v54 = *(v53 - 15);
            v55 = (FxRequest *)(v53 - 15);
            v56 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v54 + 16);
            v55->m_IrpQueue = 0LL;
            v56(v55, 1969583441LL, 2102LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            FxObject::AddRef(
              v55,
              (void *)0x75657551,
              4330,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue((FxIoQueue *)p_Blink, v55, v70);
            FxNonPagedObject::Lock((FxNonPagedObject *)p_Blink, &v70);
          }
LABEL_39:
          FxIoQueue::DispatchEvents((FxIoQueue *)p_Blink, v70, 0LL);
          ((void (__fastcall *)(_LIST_ENTRY **, __int64, __int64, const char *))(*p_Blink)[1].Flink)(
            p_Blink,
            1937075302LL,
            1441LL,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
          if ( SLOBYTE(v16[1].Blink) < 0 && (v57 = (FxVerifierLock *)v16[-3].Blink) != 0LL )
          {
            FxVerifierLock::Lock(v57, &PreviousIrql, v31);
            v32 = PreviousIrql;
          }
          else
          {
            v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v16[7]);
            PreviousIrql = v32;
          }
          v34 = v66;
          v35 = v67;
          p_Blink = 0LL;
          if ( (_LIST_ENTRY **)v66->Blink != &v66 || (_LIST_ENTRY **)v67->Flink != &v66 )
            goto LABEL_105;
          v67->Flink = v66;
          v34->Blink = v35;
          v67 = (_LIST_ENTRY *)&v66;
          v66 = (_LIST_ENTRY *)&v66;
          if ( v34 != v20 )
          {
            while ( LODWORD(v34[1].Flink) != 1 )
            {
              v34 = v34->Flink;
              if ( v34 == v20 )
                goto LABEL_48;
            }
            p_Blink = &v34[-57].Blink;
            v36 = _InterlockedIncrement((volatile signed __int32 *)&v34[-56].Flink + 1);
            if ( SLOBYTE(v34[-55].Flink) < 0 )
            {
              v58 = (FxTagTracker *)v34[-60].Blink;
              if ( v58 )
                FxTagTracker::UpdateTagHistory(
                  v58,
                  (void *)0x73756C66,
                  1686,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                  TagAddRef,
                  v36);
            }
            v37 = v34->Flink;
            if ( v34->Flink->Blink != v34 )
              goto LABEL_105;
            v32 = PreviousIrql;
            v66 = v34->Flink;
            v67 = v34;
            v37->Blink = (_LIST_ENTRY *)&v66;
            v34->Flink = (_LIST_ENTRY *)&v66;
          }
LABEL_48:
          if ( SLOBYTE(v16[1].Blink) < 0 && (v59 = (FxVerifierLock *)v16[-3].Blink) != 0LL )
            FxVerifierLock::Unlock(v59, v32, v33);
          else
            KeReleaseSpinLock((PKSPIN_LOCK)&v16[7], v32);
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
  Irp->IoStatus.Status = v11;
  Irp->IoStatus.Information = 0LL;
LABEL_53:
  IofCompleteRequest(Irp, 0);
  return v11;
}
