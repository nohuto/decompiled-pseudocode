/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009610
 * Callers:
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0009920 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C000E0A4 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C000E170 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C0032880 (--_EFxDmaEnabler@@UEAAPEAXI@Z.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C0032910 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C003B620 (--1FxDpc@@UEAA@XZ.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C003F170 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C003FB40 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0040B20 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 *     ??_GFxCompanionTarget@@UEAAPEAXI@Z @ 0x1C00447E0 (--_GFxCompanionTarget@@UEAAPEAXI@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C004E974 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C00553FC (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C0055CE0 (--1FxTimer@@UEAA@XZ.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C0056D30 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0057BCC (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C0064108 (--1FxCollection@@UEAA@XZ.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C0067050 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C006EF0C (--1FxUsbPipe@@MEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x1C0071DBC (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C0074390 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C00770C0 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C00785E0 (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0082818 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C008CDE8 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C0091A30 (--_EFxPkgGeneral@@UEAAPEAXI@Z.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C00952E0 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0032950 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C005C118 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C005C86C (WPP_IFR_SF_sqq.c)
 */

void __fastcall FxNonPagedObject::~FxNonPagedObject(FxNonPagedObject *this, unsigned int a2, unsigned int a3)
{
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v5; // ax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  unsigned __int16 m_Type; // r9
  __int64 v11; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  unsigned __int64 v14; // rdi
  const void *v15; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  this->__vftable = (FxNonPagedObject_vtbl *)FxNonPagedObject::`vftable';
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x80u) != 0 )
  {
    Blink = this[-1].m_ChildEntry.Blink;
    if ( Blink )
    {
      FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Blink, a2);
      this[-1].m_ChildEntry.Blink = 0LL;
      m_ObjectFlags = this->m_ObjectFlags;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxNonPagedObject_vtbl *)FxObject::`vftable';
  if ( (m_ObjectFlags & 0x80u) != 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::`scalar deleting destructor'((FxTagTracker *)Flink, a2);
  }
  if ( this->m_ParentObject
    || this->m_ChildListHead.Flink != &this->m_ChildListHead
    || this->m_ChildEntry.Flink != &this->m_ChildEntry )
  {
    m_Type = this->m_Type;
    v11 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_25;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( 1 )
    {
      a3 = *p_ObjectType;
      if ( m_Type == (_WORD)a3 )
        break;
      if ( m_Type > (unsigned __int16)a3 )
      {
        v11 = (unsigned int)(v11 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v11 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_25;
    }
    HandleName = FxObjectsInfo[v11].HandleName;
    if ( !HandleName )
LABEL_25:
      HandleName = "WDFOBJECT";
    v14 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, (unsigned __int8)HandleName, a3, m_Type, traceGuid, HandleName, v15, this);
    if ( !this->m_ObjectSize )
      v14 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v14, (unsigned __int64)this);
  }
  v5 = this->m_ObjectFlags;
  if ( (v5 & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xCu);
      v5 = this->m_ObjectFlags;
    }
    if ( (v5 & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 32) = 12;
  }
  this->m_ObjectState = 12;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
}
