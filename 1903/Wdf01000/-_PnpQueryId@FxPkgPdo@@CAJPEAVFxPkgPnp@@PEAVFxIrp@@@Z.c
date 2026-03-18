/*
 * XREFs of ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0018030
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0018120 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z @ 0x1C00181A0 (-FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 */

int __fastcall FxPkgPdo::_PnpQueryId(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  int Status; // ebx
  int _a3; // esi
  const wchar_t *m_Lock; // rbx
  SIZE_T v8; // rbp
  PVOID v9; // rax
  unsigned __int64 v10; // r14
  FxDeviceBase *m_DeviceBase; // rbp
  __int64 v13; // rax
  SIZE_T v14; // r14
  PVOID PoolWithTag; // rax
  unsigned __int64 v16; // rbx
  FxDeviceBase *v17; // rdx
  unsigned __int16 v18; // r9
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
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_PnpCapsAddress;
    }
LABEL_23:
    if ( m_DeviceBase )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *((_WORD *)&m_DeviceBase->FxNonPagedObject::FxObject::__vftable + v13) );
      v14 = 2 * v13 + 2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, m_Globals->Tag);
      v16 = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, m_DeviceBase, v14);
        Irp->m_Irp->IoStatus.Information = v16;
LABEL_12:
        Status = 0;
        return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
      }
      goto LABEL_21;
    }
LABEL_28:
    if ( Status >= 0 )
      return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
    goto LABEL_29;
  }
  if ( _a3 == 1 )
    m_Lock = (const wchar_t *)This[1].m_NPLock.m_Lock;
  else
    m_Lock = *(const wchar_t **)&This[1].m_PnpState.ByEnum;
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
  v17 = This->m_DeviceBase;
  if ( Status == -1073741637 )
  {
    v18 = 20;
    globals = -1073741637;
  }
  else
  {
    v18 = 21;
    globals = Status;
  }
  m_ObjectSize = v17->m_ObjectSize;
  _a2 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a2 = 0LL;
  WPP_IFR_SF_qDd(m_Globals, (unsigned __int8)_a2, 0xCu, v18, WPP_FxPkgPdo_cpp_Traceguids, _a2, _a3, globals);
  return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
}
