/*
 * XREFs of ?HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z @ 0x1C0083F00
 * Callers:
 *     ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007CA00 (-_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusInformation(FxPkgPnp *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _GUID *PoolWithTag; // rax
  _IRP *m_Irp; // rcx
  unsigned int v7; // edi
  _IRP *v8; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rdx

  if ( this->m_BusInformation.BusTypeGuid.Data1 )
  {
    m_Globals = this->m_Globals;
    PoolWithTag = (_GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, m_Globals->Tag);
    if ( PoolWithTag )
    {
      *PoolWithTag = this->m_BusInformation.BusTypeGuid;
      *(_QWORD *)&PoolWithTag[1].Data1 = *(_QWORD *)&this->m_BusInformation.LegacyBusType;
      m_Irp = Irp->m_Irp;
      v7 = 0;
      m_Irp->IoStatus.Information = (unsigned __int64)PoolWithTag;
    }
    else
    {
      v8 = Irp->m_Irp;
      v7 = -1073741670;
      v8->IoStatus.Information = 0LL;
      m_DeviceBase = this->m_DeviceBase;
      LOWORD(v8) = m_DeviceBase->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)v8 )
        _a1 = 0LL;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0x1Du, WPP_FxPkgPnp_cpp_Traceguids, _a1, 0xC000009A);
    }
  }
  else
  {
    return (unsigned int)Irp->m_Irp->IoStatus.Status;
  }
  return v7;
}
