/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C00024C0
 * Callers:
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0002150 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C00023B0 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x1C004BDA0 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C004BF40 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C004FDDC (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C0050B1C (WPP_IFR_SF_Dqq.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C69C4 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMemoryObject(
        FxRequest *this,
        FxRequestSystemBuffer **MemoryObject,
        _MDL **Buffer,
        unsigned __int64 *Length)
{
  unsigned __int64 *v5; // r14
  int v7; // esi
  bool v8; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned int Options; // edi
  unsigned __int8 MajorFunction; // r12
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // r8d
  _IRP *v16; // rdx
  _MDL *m_Mdl; // rcx
  int IsNotCompleted; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 _a2; // rcx
  const void *_a1; // rdx
  FxDeviceBase *v24; // rdx
  const void *v25; // rcx
  unsigned __int16 v26; // ax
  const void *v27; // rdx
  unsigned __int16 v28; // r9
  const void *v29; // rcx
  FxDeviceBase *v30; // rdx
  const void *v31; // rcx
  unsigned __int16 v32; // ax
  const void *v33; // rdx
  __int64 MdlAddress; // r12
  PVOID v35; // rax
  const void *v36; // rcx
  _MDL *v37; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int v39; // [rsp+40h] [rbp-38h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v5 = Length;
  LOBYTE(Length) = 0;
  irql = 0;
  v7 = 0;
  v8 = 0;
  m_Globals = this->m_Globals;
  Options = 0;
  MajorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      LOWORD(Length) = irql;
      v7 = IsNotCompleted;
      if ( IsNotCompleted < 0 )
        goto $Done_2;
    }
    if ( this->m_Irp.m_Irp->RequestorMode == 1 && (unsigned __int8)(MajorFunction - 3) <= 1u )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( m_DeviceBase[1].m_Refcnt == 1 )
      {
        v7 = -1073741808;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x19u, WPP_FxRequest_cpp_Traceguids, _a1, _a2, -1073741808);
        WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x1Au, WPP_FxRequest_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
        LOWORD(Length) = irql;
      }
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    FxNonPagedObject::Lock(this, &irql);
    LOWORD(Length) = irql;
  }
  if ( MajorFunction == 15 )
  {
LABEL_5:
    m_Irp = this->m_Irp.m_Irp;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( !Options )
    {
      v7 = -1073741789;
      v28 = 27;
      v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v29 = 0LL;
      goto LABEL_53;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v16 = this->m_Irp.m_Irp;
    if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3
      && m_Irp->RequestorMode
      && MajorFunction != 15 )
    {
      v7 = -1073741808;
      v30 = this->m_DeviceBase;
      v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v32 = v30->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v31 = 0LL;
      v33 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v32 )
        v33 = 0LL;
      WPP_IFR_SF_Dqqd(
        this->m_Globals,
        (unsigned __int8)v33,
        LowPart,
        0x1Cu,
        WPP_FxRequest_cpp_Traceguids,
        LowPart,
        v33,
        v31,
        v39);
      WPP_IFR_SF_d(this->m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, -1073741808);
      LOBYTE(Length) = irql;
      goto $Done_2;
    }
    goto LABEL_7;
  }
  if ( MajorFunction != 3 && MajorFunction != 4 )
  {
    if ( MajorFunction != 14 )
    {
      v24 = this->m_DeviceBase;
      v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v26 = v24->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v25 = 0LL;
      v27 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v26 )
        v27 = 0LL;
      WPP_IFR_SF_Dqq(
        this->m_Globals,
        (unsigned __int8)v27,
        MajorFunction,
        (unsigned __int16)Length,
        traceGuid,
        MajorFunction,
        v27,
        v25);
      FxVerifierDbgBreakPoint(this->m_Globals);
      LOBYTE(Length) = irql;
      v7 = -1073741808;
      goto $Done_2;
    }
    goto LABEL_5;
  }
  v16 = this->m_Irp.m_Irp;
  Options = v16->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v8 = this->m_DeviceBase[1].m_Refcnt == 3;
LABEL_7:
  if ( !Options )
  {
    v7 = -1073741789;
    v28 = 31;
    v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v29 = 0LL;
    goto LABEL_53;
  }
  if ( !v8 || (this->m_RequestBaseFlags & 1) != 0 )
    goto $Done_2;
  MdlAddress = (__int64)v16->MdlAddress;
  if ( !MdlAddress )
  {
    v7 = -1073741789;
    v28 = 32;
    v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v29 = 0LL;
LABEL_53:
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0x10u, v28, WPP_FxRequest_cpp_Traceguids, v29, 0xC0000023);
    LOBYTE(Length) = irql;
    goto $Done_2;
  }
  if ( (*(_BYTE *)(MdlAddress + 10) & 5) != 0 )
  {
    v35 = *(PVOID *)(MdlAddress + 24);
  }
  else
  {
    v35 = MmMapLockedPagesSpecifyCache((PMDL)MdlAddress, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
    LOBYTE(Length) = irql;
  }
  if ( v35 )
  {
    v37 = this->m_Irp.m_Irp->MdlAddress;
    this->m_RequestBaseFlags |= 1u;
    this->m_SystemBuffer.m_Buffer = v37;
  }
  else
  {
    v7 = -1073741670;
    v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v36 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequest_cpp_Traceguids, v36, MdlAddress, -1073741670);
    LOBYTE(Length) = irql;
  }
$Done_2:
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
    FxNonPagedObject::Unlock(this, (unsigned __int8)Length);
  if ( v7 >= 0 )
  {
    m_Mdl = this->m_SystemBuffer.m_Mdl;
    *MemoryObject = &this->m_SystemBuffer;
    if ( v8 )
    {
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        m_Mdl = (_MDL *)m_Mdl->MappedSystemVa;
      else
        m_Mdl = (_MDL *)MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
    }
    *Buffer = m_Mdl;
    *v5 = Options;
  }
  return (unsigned int)v7;
}
