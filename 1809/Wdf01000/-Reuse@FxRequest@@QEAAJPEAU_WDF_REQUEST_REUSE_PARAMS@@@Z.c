/*
 * XREFs of ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0015950
 * Callers:
 *     imp_WdfRequestReuse @ 0x1C00158B0 (imp_WdfRequestReuse.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006F018 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B860 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0050968 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0055548 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::Reuse(FxRequest *this, _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 v4; // rdi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  _IRP *NewIrp; // rbx
  FxRequestContext *v8; // rcx
  unsigned __int8 v9; // al
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // ax
  const void *_a2; // rdx
  bool v16; // zf
  const void *_a1; // rax
  unsigned __int64 v18; // rcx
  _IRP *v19; // rcx
  __int16 v20; // r8
  unsigned __int16 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int16 v24; // ax
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  int v27; // edx
  unsigned __int64 v28; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = (unsigned __int64)this;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)ReuseParams, 9u)
     || m_Globals->FxVerifyDownlevel) )
  {
    FxNonPagedObject::Lock((FxNonPagedObject *)v4, &irql, v11);
    if ( (*(_WORD *)(v4 + 218) & 0x100) != 0 )
    {
      v13 = *(_QWORD *)(v4 + 160);
      v14 = *(_WORD *)(v13 + 10);
      _a2 = (const void *)(v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v16 = v14 == 0;
      _a1 = (const void *)v4;
      if ( v16 )
        _a2 = 0LL;
      v18 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v4 + 10) )
        v18 = 0LL;
      if ( v18 )
        _a1 = (const void *)v18;
      WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x2Au, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock((FxNonPagedObject *)v4, irql, v12);
  }
  WdfBindInfo = m_Globals->WdfBindInfo;
  Major = WdfBindInfo->Version.Major;
  if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 9 )
  {
    *(_QWORD *)(v4 + 192) = 0LL;
    *(_QWORD *)(v4 + 200) = 0LL;
  }
  NewIrp = *(_IRP **)(v4 + 152);
  if ( NewIrp )
  {
    v8 = *(FxRequestContext **)(v4 + 168);
    if ( v8 )
      v8->ReleaseAndRestore(v8, (FxRequestBase *)v4);
    v9 = *(_BYTE *)(v4 + 213);
    if ( !v9 )
    {
      if ( (ReuseParams->Flags & 1) == 0 )
      {
        NewIrp->IoStatus.Status = ReuseParams->Status;
        NewIrp->Cancel = 0;
        *(_WORD *)(v4 + 214) = 0;
        return 0LL;
      }
      return 3223323144LL;
    }
    if ( v9 == 2 && *(_BYTE *)(v4 + 238) && !*(_BYTE *)(v4 + 214) )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::ClearVerifierFlags((FxRequestBase *)v4, 1);
      (*(void (__fastcall **)(unsigned __int64, void *, __int64, const char *))(*(_QWORD *)v4 + 16LL))(
        v4,
        (void *)1129464644,
        2242LL,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  if ( (ReuseParams->Flags & 1) != 0 )
  {
    NewIrp = ReuseParams->NewIrp;
    if ( *(_BYTE *)(v4 + 213) == 1 )
    {
      v19 = *(_IRP **)(v4 + 152);
      *(_QWORD *)(v4 + 152) = NewIrp;
      if ( v19 )
        IoFreeIrp(v19);
    }
    else
    {
      *(_QWORD *)(v4 + 152) = NewIrp;
    }
    *(_BYTE *)(v4 + 213) = 2;
  }
  if ( *(_BYTE *)(v4 + 213) == 1 && NewIrp )
  {
    IoReuseIrp(NewIrp, ReuseParams->Status);
    NewIrp->Cancel = 0;
  }
  if ( (ReuseParams->Flags & 2) == 0 )
  {
    *(_BYTE *)(v4 + 238) = 0;
    *(_WORD *)(v4 + 214) = 0;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags((FxRequestBase *)v4, 1);
    return 0LL;
  }
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)ReuseParams, 0xBu) )
  {
    v21 = v20 + 32;
    v22 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v22 = 0LL;
    if ( v22 )
      v4 = v22;
    goto LABEL_53;
  }
  if ( NewIrp )
  {
    if ( *(_BYTE *)(v4 + 213) != 1 )
    {
      v27 = *(_DWORD *)(v4 + 12);
      if ( v27 == 1 )
      {
        if ( NewIrp->CurrentLocation <= NewIrp->StackCount )
        {
          FxObject::AddRef(
            (FxObject *)v4,
            (void *)0x43524344,
            2395,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          *(_QWORD *)(v4 + 264) = 0LL;
          *(_QWORD *)(v4 + 280) = 0LL;
          FxRequestBase::ClearFieldsForReuse((FxRequestBase *)v4);
          *(_BYTE *)(v4 + 238) = 1;
          if ( m_Globals->FxVerifierOn )
            FxRequestBase::SetVerifierFlags((FxRequestBase *)v4, 1);
          return 0LL;
        }
        v24 = *(_WORD *)(v4 + 10);
        v25 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v24 )
          v25 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 2u, 0x10u, 0x2Fu, WPP_FxRequest_cpp_Traceguids, NewIrp, v25, -1073741808);
      }
      else
      {
        v28 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*(_WORD *)(v4 + 10) )
          v28 = 0LL;
        if ( v28 )
          v4 = v28;
        WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x2Eu, WPP_FxRequest_cpp_Traceguids, (const void *)v4, v27, 0xC0000010);
      }
      goto LABEL_57;
    }
    v21 = 45;
    v23 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v23 = 0LL;
    if ( v23 )
      v4 = v23;
LABEL_53:
    WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, v21, WPP_FxRequest_cpp_Traceguids, (const void *)v4, 0xC0000010);
LABEL_57:
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  v26 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*(_WORD *)(v4 + 10) )
    v26 = 0LL;
  if ( v26 )
    v4 = v26;
  WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, 0x2Cu, WPP_FxRequest_cpp_Traceguids, (const void *)v4, 0xC000000D);
  FxVerifierDbgBreakPoint(m_Globals);
  return 3221225485LL;
}
