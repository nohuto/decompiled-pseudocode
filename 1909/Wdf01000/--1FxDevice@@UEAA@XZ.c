/*
 * XREFs of ??1FxDevice@@UEAA@XZ @ 0x1C0052BDC
 * Callers:
 *     ??_GFxDevice@@UEAAPEAXI@Z @ 0x1C0052EC0 (--_GFxDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C004E974 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C0051484 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C0051DAC (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C0053D5C (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C0064604 (--1FxTransactionedList@@QEAA@XZ.c)
 */

void __fastcall FxDevice::~FxDevice(FxDevice *this)
{
  unsigned __int64 v2; // rbx
  const void *_a2; // rax
  FxPkgIo *m_PkgIo; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxPkgGeneral *m_PkgGeneral; // rcx
  FxWmiIrpHandler *m_PkgWmi; // rcx
  FxDefaultIrpHandler *m_PkgDefault; // rcx
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rbx
  FxIrpPreprocessInfo *Flink; // rcx
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  FX_POOL_TRACKER *v13; // rbx
  _LIST_ENTRY *v14; // rax
  FX_POOL_TRACKER **p_Size; // r14
  __int64 v16; // rbp
  wchar_t *Buffer; // rcx
  wchar_t *v18; // rcx
  FxDevice *m_ParentDevice; // rcx
  unsigned int v20; // edx
  unsigned int v21; // r8d

  this->FxDeviceBase::FxNonPagedObject::FxObject::__vftable = (FxDevice_vtbl *)FxDevice::`vftable'{for `FxNonPagedObject'};
  this->FxDeviceBase::IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  if ( !FxObject::IsDisposed(this) )
  {
    v2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 1u, 0x12u, 0xAu, WPP_FxDevice_cpp_Traceguids, this, _a2);
    if ( !this->m_ObjectSize )
      v2 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v2, (unsigned __int64)this);
  }
  m_PkgIo = this->m_PkgIo;
  if ( m_PkgIo )
  {
    m_PkgIo->Release(m_PkgIo, 0LL, 295, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgIo = 0LL;
  }
  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
  {
    m_PkgPnp->Release(m_PkgPnp, 0LL, 300, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgPnp = 0LL;
  }
  m_PkgGeneral = this->m_PkgGeneral;
  if ( m_PkgGeneral )
  {
    m_PkgGeneral->Release(m_PkgGeneral, 0LL, 305, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgGeneral = 0LL;
  }
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
  {
    m_PkgWmi->Release(m_PkgWmi, 0LL, 310, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgWmi = 0LL;
  }
  m_PkgDefault = this->m_PkgDefault;
  if ( m_PkgDefault )
  {
    m_PkgDefault->Release(m_PkgDefault, 0LL, 315, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgDefault = 0LL;
  }
  p_m_PreprocessInfoListHead = &this->m_PreprocessInfoListHead;
  while ( 1 )
  {
    Flink = (FxIrpPreprocessInfo *)p_m_PreprocessInfoListHead->Flink;
    if ( p_m_PreprocessInfoListHead->Flink == p_m_PreprocessInfoListHead )
      break;
    if ( Flink->ListEntry.Blink != p_m_PreprocessInfoListHead
      || (v11 = Flink->ListEntry.Flink, (FxIrpPreprocessInfo *)Flink->ListEntry.Flink->Blink != Flink) )
    {
LABEL_31:
      __fastfail(3u);
    }
    p_m_PreprocessInfoListHead->Flink = v11;
    v11->Blink = p_m_PreprocessInfoListHead;
    Flink->ListEntry.Blink = (_LIST_ENTRY *)Flink;
    Flink->ListEntry.Flink = (_LIST_ENTRY *)Flink;
    FxIrpPreprocessInfo::`scalar deleting destructor'(Flink);
  }
  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  while ( 1 )
  {
    v13 = (FX_POOL_TRACKER *)p_m_CxDeviceInfoListHead->Flink;
    if ( p_m_CxDeviceInfoListHead->Flink == p_m_CxDeviceInfoListHead )
      break;
    if ( v13->Link.Blink != p_m_CxDeviceInfoListHead )
      goto LABEL_31;
    v14 = v13->Link.Flink;
    if ( (FX_POOL_TRACKER *)v13->Link.Flink->Blink != v13 )
      goto LABEL_31;
    p_m_CxDeviceInfoListHead->Flink = v14;
    p_Size = (FX_POOL_TRACKER **)&v13[1].Size;
    v14->Blink = p_m_CxDeviceInfoListHead;
    v16 = 10LL;
    v13->Link.Blink = &v13->Link;
    v13->Link.Flink = &v13->Link;
    do
    {
      if ( *p_Size )
        FxPoolFree(*p_Size);
      ++p_Size;
      --v16;
    }
    while ( v16 );
    FxPoolFree(v13);
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    *(_QWORD *)&this->m_DeviceName.Length = 0LL;
    this->m_DeviceName.Buffer = 0LL;
  }
  FxDevice::DeleteSymbolicLink(this);
  v18 = this->m_MofResourceName.Buffer;
  if ( v18 )
  {
    FxPoolFree((FX_POOL_TRACKER *)v18);
    *(_QWORD *)&this->m_MofResourceName.Length = 0LL;
    this->m_MofResourceName.Buffer = 0LL;
  }
  if ( this->m_RequestLookasideListElementSize )
  {
    ExDeleteNPagedLookasideList(&this->m_RequestLookasideList);
    this->m_RequestLookasideListElementSize = 0LL;
  }
  m_ParentDevice = this->m_ParentDevice;
  if ( m_ParentDevice )
    m_ParentDevice->Release(m_ParentDevice, this, 360, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
  this->m_IoTargetsList.m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(&this->m_IoTargetsList);
  FxDeviceBase::~FxDeviceBase(this, v20, v21);
}
