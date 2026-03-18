/*
 * XREFs of ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x1C0002E40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqcLq @ 0x1C000F004 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C000F0E0 (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C000F1B0 (WPP_IFR_SF_qqcqLd.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0042EFC (WPP_IFR_SF_qqcq.c)
 */

__int64 __fastcall FxPkgPnp::Dispatch(FxPkgPnp *this, _IRP *Irp, unsigned int a3, unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 globals; // r11
  _FX_DRIVER_GLOBALS *v8; // rcx
  unsigned __int8 v9; // di
  FxPkgPnp_vtbl *v10; // rax
  int (__fastcall *FireAndForgetIrp)(FxPkgPnp *, FxIrp *); // rax
  unsigned int flags; // ecx
  FxDeviceBase *v14; // rdi
  _DEVICE_OBJECT *_a6; // r8
  const void *_a5; // rdi
  unsigned __int8 MinorFunction; // di
  FxPkgPnp_vtbl *v18; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rax
  const void *v20; // rdi
  _FX_DRIVER_GLOBALS *v21; // rcx
  FxDeviceBase *v22; // rcx
  const void *v23; // rdi
  FxDeviceBase *v24; // r8
  const void *v25; // rcx
  FxDeviceBase *v26; // r10
  const void *v27; // r8
  FxDeviceBase *m_DeviceBase; // r10
  const void *v29; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  _IRP *_a1; // [rsp+70h] [rbp+8h] BYREF

  _a1 = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00ABE58.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00ABE58.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    Irp = _a1;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  globals = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
    if ( globals && globals != 2 )
    {
      v21 = this->m_Globals;
      if ( !v21->FxVerboseOn )
      {
LABEL_18:
        MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
        v18 = this->__vftable;
        if ( MinorFunction > 3u )
          FireAndForgetIrp = v18->FireAndForgetIrp;
        else
          FireAndForgetIrp = v18->GetDispatchPower(this)[MinorFunction];
        return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))FireAndForgetIrp)(this, &_a1);
      }
      m_DeviceBase = this->m_DeviceBase;
      v29 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        v29 = 0LL;
      WPP_IFR_SF_qqcq(
        v21,
        5u,
        0xCu,
        0x15u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v29,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        globals,
        Irp);
    }
    else
    {
      flags = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v14 = this->m_DeviceBase;
      if ( CurrentStackLocation->Parameters.Create.Options )
      {
        m_DeviceObject = v14->m_DeviceObject.m_DeviceObject;
        if ( v14->m_ObjectSize )
          v20 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v20 = 0LL;
        WPP_IFR_SF_qqcqL(
          this->m_Globals,
          (unsigned __int8)Irp,
          a3,
          a4,
          traceGuid,
          v20,
          m_DeviceObject,
          globals,
          Irp,
          flags);
      }
      else
      {
        _a6 = v14->m_DeviceObject.m_DeviceObject;
        if ( v14->m_ObjectSize )
          _a5 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a5 = 0LL;
        WPP_IFR_SF_qqcqLd(
          this->m_Globals,
          (unsigned __int8)Irp,
          (unsigned int)_a6,
          a4,
          traceGuid,
          _a5,
          _a6,
          globals,
          Irp,
          flags,
          flags - 1);
      }
    }
    Irp = _a1;
    goto LABEL_18;
  }
  if ( globals < 8u || globals >= 0x11u )
  {
    switch ( globals )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 0x11u:
      case 0x14u:
      case 0x17u:
        v24 = this->m_DeviceBase;
        v25 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v24->m_ObjectSize )
          v25 = 0LL;
        WPP_IFR_SF_qqcq(
          this->m_Globals,
          4u,
          0xCu,
          0x10u,
          WPP_FxPkgPnp_cpp_Traceguids,
          v25,
          v24->m_DeviceObject.m_DeviceObject,
          globals,
          Irp);
        goto LABEL_29;
      case 7u:
        v22 = this->m_DeviceBase;
        v23 = 0LL;
        if ( v22->m_ObjectSize )
          v23 = (const void *)((unsigned __int64)this->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqcLq(
          this->m_Globals,
          (unsigned __int8)Irp,
          (unsigned int)v22->m_DeviceObject.m_DeviceObject,
          CurrentStackLocation->Parameters.Read.Length,
          traceGuid,
          v23,
          v22->m_DeviceObject.m_DeviceObject,
          globals,
          CurrentStackLocation->Parameters.Read.Length,
          Irp);
        goto LABEL_29;
      default:
        break;
    }
  }
  v8 = this->m_Globals;
  if ( v8->FxVerboseOn )
  {
    v26 = this->m_DeviceBase;
    v27 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v26->m_ObjectSize )
      v27 = 0LL;
    WPP_IFR_SF_qqcq(
      v8,
      5u,
      0xCu,
      0x12u,
      WPP_FxPkgPnp_cpp_Traceguids,
      v27,
      v26->m_DeviceObject.m_DeviceObject,
      globals,
      Irp);
LABEL_29:
    Irp = _a1;
  }
  v9 = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v10 = this->__vftable;
  if ( v9 > 0x17u )
    return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))v10->FireAndForgetIrp)(this, &_a1);
  FireAndForgetIrp = v10->GetDispatchPnp(this)[v9];
  return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))FireAndForgetIrp)(this, &_a1);
}
