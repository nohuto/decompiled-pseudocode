/*
 * XREFs of ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C004F0BC
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0031990 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C004C030 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C0030DC8 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C004FDDC (WPP_IFR_SF_Dqqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C005E338 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C69C4 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetDeviceControlOutputMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int Length; // ebp
  void *MasterIrp; // r15
  unsigned int LowPart; // r8d
  unsigned int v9; // edi
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // r8
  const void *_a2; // rdx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v15; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v17; // rdx
  _MDL *v18; // rax
  unsigned __int16 v19; // r9
  const void *v20; // rcx
  _MDL *MdlAddress; // rax
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v24; // rdi
  const void *v25; // rcx
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // r8
  unsigned __int8 v29; // dl
  unsigned __int16 v30; // r9
  unsigned __int16 v31; // ax
  const void *v32; // rbx
  unsigned __int8 _a1; // [rsp+20h] [rbp-58h]
  int _a4; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  Length = 0;
  MasterIrp = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    v9 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) : 0;
    if ( (v9 & 0x80000000) != 0 )
      goto LABEL_39;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) > 1u )
  {
    v9 = -1073741808;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qDd(
      m_Globals,
      (unsigned __int8)_a2,
      0x10u,
      0x14u,
      WPP_FxRequestKm_cpp_Traceguids,
      _a2,
      MajorFunction,
      0xC0000010);
LABEL_38:
    *pMdl = 0LL;
    goto LABEL_39;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (LowPart & 3) != 0 )
  {
    switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
    {
      case 1u:
        MdlAddress = m_Irp->MdlAddress;
        *pMdl = MdlAddress;
        if ( !MdlAddress )
        {
          v19 = 21;
          goto LABEL_21;
        }
        break;
      case 2u:
        v18 = m_Irp->MdlAddress;
        *pMdl = v18;
        if ( !v18 )
        {
          v19 = 22;
LABEL_21:
          v9 = -1073741789;
          v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v20 = 0LL;
          WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, v19, WPP_FxRequestKm_cpp_Traceguids, v20, 0xC0000023);
          goto LABEL_39;
        }
        break;
      case 3u:
        m_DeviceBase = this->m_DeviceBase;
        v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        if ( !this->m_ObjectSize )
          v15 = 0LL;
        v17 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v17 = 0LL;
        WPP_IFR_SF_Dqqd(
          m_Globals,
          (unsigned __int8)v17,
          LowPart,
          0x17u,
          WPP_FxRequestKm_cpp_Traceguids,
          LowPart,
          v17,
          v15,
          _a4);
        WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0x18u, WPP_FxRequestKm_cpp_Traceguids);
        v9 = -1073741808;
        goto LABEL_38;
      default:
LABEL_41:
        v29 = irql;
        *pMdl = 0LL;
        FxNonPagedObject::Unlock(this, v29, LowPart);
        v9 = -1073741789;
        if ( MasterIrp )
        {
          if ( Length )
            return v9;
          v30 = 26;
        }
        else
        {
          v30 = 25;
        }
        v31 = this->m_ObjectSize;
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v31 )
          v32 = 0LL;
        WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, v30, WPP_FxRequestKm_cpp_Traceguids, v32, 0xC0000023);
        return v9;
    }
  }
  else
  {
    MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( !MasterIrp || !Length )
      goto LABEL_41;
    m_AllocatedMdl = this->m_AllocatedMdl;
    if ( !m_AllocatedMdl )
    {
      if ( m_Globals->FxVerifierOn )
        Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Length, _a1, 0, retaddr);
      else
        Debug = IoAllocateMdl(MasterIrp, Length, 0, 0, 0LL);
      v24 = Debug;
      if ( Debug )
      {
        MmBuildMdlForNonPagedPool(Debug);
        v26 = irql;
        this->m_AllocatedMdl = v24;
        *pMdl = v24;
        FxNonPagedObject::Unlock(this, v26, v27);
        return 0LL;
      }
      v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v9 = -1073741670;
      if ( !this->m_ObjectSize )
        v25 = 0LL;
      WPP_IFR_SF_qqDd(m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequestKm_cpp_Traceguids, v25, MasterIrp, Length, -1073741670);
      goto LABEL_38;
    }
    *pMdl = m_AllocatedMdl;
  }
  v9 = 0;
LABEL_39:
  FxNonPagedObject::Unlock(this, irql, LowPart);
  return v9;
}
