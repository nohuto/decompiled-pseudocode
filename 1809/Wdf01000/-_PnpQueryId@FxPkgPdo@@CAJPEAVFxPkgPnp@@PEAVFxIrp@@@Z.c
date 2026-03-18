/*
 * XREFs of ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0004B80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z @ 0x1C0004CA8 (-FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     WPP_IFR_SF_qDd @ 0x1C00314B0 (WPP_IFR_SF_qDd.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryId(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  int Status; // edi
  int _a3; // ebx
  const wchar_t *m_Lock; // rdi
  SIZE_T v8; // rbp
  PVOID v9; // rax
  unsigned __int64 v10; // r15
  _IRP *m_Irp; // rbx
  FxDeviceBase *m_DeviceBase; // rbp
  __int64 v14; // rax
  SIZE_T v15; // r15
  PVOID PoolWithTag; // rax
  unsigned __int64 v17; // rdi
  FxDeviceBase *v18; // rdx
  unsigned __int16 v19; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rdx
  unsigned int globals; // [rsp+38h] [rbp-30h]

  m_Globals = This->m_Globals;
  Status = Irp->m_Irp->IoStatus.Status;
  _a3 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( !_a3 )
  {
    m_DeviceBase = This[1].m_DeviceBase;
    goto LABEL_23;
  }
  if ( _a3 <= 0 )
    goto LABEL_28;
  if ( _a3 > 2 )
  {
    if ( _a3 == 3 )
    {
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_NPLock.m_DbgFlagIsInitialized;
    }
    else
    {
      if ( _a3 != 5 )
        goto LABEL_28;
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_PnpCapsUINumber;
    }
LABEL_23:
    if ( m_DeviceBase )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *((_WORD *)&m_DeviceBase->FxNonPagedObject::FxObject::__vftable + v14) );
      v15 = 2 * v14 + 2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, m_Globals->Tag);
      v17 = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, m_DeviceBase, v15);
        Irp->m_Irp->IoStatus.Information = v17;
LABEL_12:
        Status = 0;
        goto LABEL_13;
      }
      goto LABEL_21;
    }
LABEL_28:
    if ( Status >= 0 )
      goto LABEL_13;
    goto LABEL_29;
  }
  if ( _a3 == 1 )
    m_Lock = (const wchar_t *)This[1].m_NPLock.m_Lock;
  else
    m_Lock = *(const wchar_t **)&This[1].m_PnpStateAndCaps.ByEnum;
  if ( m_Lock )
    v8 = FxCalculateTotalMultiSzStringSize(m_Lock);
  else
    v8 = 4LL;
  v9 = ExAllocatePoolWithTag(PagedPool, v8, m_Globals->Tag);
  v10 = (unsigned __int64)v9;
  if ( v9 )
  {
    if ( m_Lock )
      memmove(v9, m_Lock, v8);
    else
      memset(v9, 0, v8);
    Irp->m_Irp->IoStatus.Information = v10;
    goto LABEL_12;
  }
LABEL_21:
  Status = -1073741670;
LABEL_29:
  Irp->m_Irp->IoStatus.Information = 0LL;
  v18 = This->m_DeviceBase;
  if ( Status == -1073741637 )
  {
    v19 = 20;
    globals = -1073741637;
  }
  else
  {
    v19 = 21;
    globals = Status;
  }
  m_ObjectSize = v18->m_ObjectSize;
  _a2 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a2 = 0LL;
  WPP_IFR_SF_qDd(m_Globals, (unsigned __int8)_a2, 0xCu, v19, WPP_FxPkgPdo_cpp_Traceguids, _a2, _a3, globals);
LABEL_13:
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)Status;
}
