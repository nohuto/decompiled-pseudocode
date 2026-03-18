/*
 * XREFs of ??1FxRequestBase@@MEAA@XZ @ 0x1C000D0B4
 * Callers:
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000D038 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x1C0050890 (--_EFxRequestFromLookaside@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009F30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C005551C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C005E3C4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestBase::~FxRequestBase(FxRequestBase *this, unsigned int a2, unsigned int a3)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx

  this->__vftable = (FxRequestBase_vtbl *)FxRequestBase::`vftable';
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
  }
  m_RequestContext = this->m_RequestContext;
  m_Irp = this->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
      m_RequestContext = this->m_RequestContext;
    }
    if ( m_RequestContext )
      ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
  }
  if ( m_Irp && this->m_IrpAllocation == 1 )
    IoFreeIrp(this->m_Irp.m_Irp);
  m_Timer = this->m_Timer;
  if ( m_Timer )
    FxRequestTimer::`scalar deleting destructor'(m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
