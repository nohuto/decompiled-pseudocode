/*
 * XREFs of FxIFR @ 0x1C0004FD0
 * Callers:
 *     WPP_IFR_SF_qcq @ 0x1C0004D94 (WPP_IFR_SF_qcq.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qdq @ 0x1C000EF14 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qqcLq @ 0x1C000F004 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C000F0E0 (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C000F1B0 (WPP_IFR_SF_qqcqLd.c)
 *     WPP_IFR_SF_Lq @ 0x1C00107B4 (WPP_IFR_SF_Lq.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_DDd @ 0x1C0030484 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_PqD @ 0x1C00306E4 (WPP_IFR_SF_PqD.c)
 *     WPP_IFR_SF_dq @ 0x1C00307D4 (WPP_IFR_SF_dq.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00308F8 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_LqqLd @ 0x1C0031258 (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1C0031394 (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00314B0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qiqd @ 0x1C003175C (WPP_IFR_SF_qiqd.c)
 *     WPP_IFR_SF_ql @ 0x1C0031874 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qqDd @ 0x1C0031998 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_dLd @ 0x1C003447C (WPP_IFR_SF_dLd.c)
 *     WPP_IFR_SF_qLLd @ 0x1C0034568 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qLqdi @ 0x1C0034680 (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qi @ 0x1C00347B4 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C003487C (WPP_IFR_SF_qii.c)
 *     WPP_IFR_SF_qld @ 0x1C003496C (WPP_IFR_SF_qld.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_dqd @ 0x1C0036304 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_dqq @ 0x1C0036454 (WPP_IFR_SF_dqq.c)
 *     WPP_IFR_SF_qqiDq @ 0x1C0036540 (WPP_IFR_SF_qqiDq.c)
 *     WPP_IFR_SF_qqii @ 0x1C0036670 (WPP_IFR_SF_qqii.c)
 *     WPP_IFR_SF_qqiid @ 0x1C0036778 (WPP_IFR_SF_qqiid.c)
 *     WPP_IFR_SF_qqqD @ 0x1C00368A8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qqqDd @ 0x1C00369B8 (WPP_IFR_SF_qqqDd.c)
 *     WPP_IFR_SF_sqqii @ 0x1C0036AEC (WPP_IFR_SF_sqqii.c)
 *     WPP_IFR_SF_qqdid @ 0x1C00378E8 (WPP_IFR_SF_qqdid.c)
 *     WPP_IFR_SF_qD @ 0x1C00380C8 (WPP_IFR_SF_qD.c)
 *     WPP_IFR_SF_qDPq @ 0x1C003938C (WPP_IFR_SF_qDPq.c)
 *     WPP_IFR_SF_qDPqd @ 0x1C0039498 (WPP_IFR_SF_qDPqd.c)
 *     WPP_IFR_SF_qPPd @ 0x1C00395D4 (WPP_IFR_SF_qPPd.c)
 *     WPP_IFR_SF_qc @ 0x1C00396EC (WPP_IFR_SF_qc.c)
 *     WPP_IFR_SF_DD @ 0x1C0039CC0 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_Ddd @ 0x1C0039DD8 (WPP_IFR_SF_Ddd.c)
 *     WPP_IFR_SF_sq @ 0x1C003AE74 (WPP_IFR_SF_sq.c)
 *     WPP_IFR_SF_D @ 0x1C003B494 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qll @ 0x1C003E998 (WPP_IFR_SF_qll.c)
 *     WPP_IFR_SF_ds @ 0x1C003F460 (WPP_IFR_SF_ds.c)
 *     WPP_IFR_SF_s @ 0x1C003F594 (WPP_IFR_SF_s.c)
 *     WPP_IFR_SF_sd @ 0x1C003F69C (WPP_IFR_SF_sd.c)
 *     WPP_IFR_SF_Dddd @ 0x1C0040650 (WPP_IFR_SF_Dddd.c)
 *     WPP_IFR_SF_iid @ 0x1C0041398 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C0041484 (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qddq @ 0x1C004159C (WPP_IFR_SF_qddq.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C00416AC (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0042EFC (WPP_IFR_SF_qqcq.c)
 *     WPP_IFR_SF_Zd @ 0x1C0044F44 (WPP_IFR_SF_Zd.c)
 *     WPP_IFR_SF_cd @ 0x1C00488DC (WPP_IFR_SF_cd.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C00489F8 (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1C0048B34 (WPP_IFR_SF_qqcDqd.c)
 *     WPP_IFR_SF_qsd @ 0x1C0048C90 (WPP_IFR_SF_qsd.c)
 *     WPP_IFR_SF_qDDd @ 0x1C004B8D0 (WPP_IFR_SF_qDDd.c)
 *     WPP_IFR_SF_qdid @ 0x1C004BA40 (WPP_IFR_SF_qdid.c)
 *     WPP_IFR_SF_dddd @ 0x1C004D4A8 (WPP_IFR_SF_dddd.c)
 *     WPP_IFR_SF_sSLSs @ 0x1C004D614 (WPP_IFR_SF_sSLSs.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C004E2D8 (WPP_IFR_SF_qqqqd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C00504EC (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C0050608 (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C005076C (WPP_IFR_SF_qDqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C00512C8 (WPP_IFR_SF_Dqq.c)
 *     WPP_IFR_SF_qDiD @ 0x1C00513B4 (WPP_IFR_SF_qDiD.c)
 *     WPP_IFR_SF_qLqd @ 0x1C00514C4 (WPP_IFR_SF_qLqd.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C0051634 (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C0051764 (WPP_IFR_SF_qqqi.c)
 *     WPP_IFR_SF_Sd @ 0x1C0052F60 (WPP_IFR_SF_Sd.c)
 *     WPP_IFR_SF_qZ @ 0x1C005613C (WPP_IFR_SF_qZ.c)
 *     WPP_IFR_SF_DDid @ 0x1C0058B9C (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0058CA8 (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_Z @ 0x1C005AAC8 (WPP_IFR_SF_Z.c)
 *     WPP_IFR_SF_dZq @ 0x1C005AC10 (WPP_IFR_SF_dZq.c)
 *     WPP_IFR_SF_ddi @ 0x1C005B048 (WPP_IFR_SF_ddi.c)
 *     WPP_IFR_SF_i @ 0x1C005B140 (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_iiddiidd @ 0x1C005B220 (WPP_IFR_SF_iiddiidd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C005B468 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_DDD @ 0x1C005C3EC (WPP_IFR_SF_DDD.c)
 *     WPP_IFR_SF_sqq @ 0x1C005C4D0 (WPP_IFR_SF_sqq.c)
 *     WPP_IFR_SF_DqD @ 0x1C005D0A8 (WPP_IFR_SF_DqD.c)
 *     WPP_IFR_SF_qqDD @ 0x1C005D194 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqqq @ 0x1C005D2B0 (WPP_IFR_SF_qqqq.c)
 *     WPP_IFR_SF_qqsd @ 0x1C005DE84 (WPP_IFR_SF_qqsd.c)
 *     WPP_IFR_SF_sqqq @ 0x1C005E014 (WPP_IFR_SF_sqqq.c)
 *     WPP_IFR_SF_qZd @ 0x1C005FAF0 (WPP_IFR_SF_qZd.c)
 *     WPP_IFR_SF_dqdd @ 0x1C0061404 (WPP_IFR_SF_dqdd.c)
 *     WPP_IFR_SF_iii @ 0x1C0063038 (WPP_IFR_SF_iii.c)
 *     WPP_IFR_SF_qqD @ 0x1C0064EB0 (WPP_IFR_SF_qqD.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C0064FA0 (WPP_IFR_SF_qqDdqq.c)
 *     WPP_IFR_SF_qqDq @ 0x1C00650EC (WPP_IFR_SF_qqDq.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C00651F8 (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x1C0065340 (WPP_IFR_SF_qqDqqqd.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C00684BC (WPP_IFR_SF_qqdqdd.c)
 *     WPP_IFR_SF_qqqqq @ 0x1C006864C (WPP_IFR_SF_qqqqq.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C006897C (WPP_IFR_SF_qcDqd.c)
 *     WPP_IFR_SF_qqLdqqq @ 0x1C0069A40 (WPP_IFR_SF_qqLdqqq.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C0069BAC (WPP_IFR_SF_qqqqi.c)
 *     WPP_IFR_SF_qqDLd @ 0x1C006C7EC (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006C928 (WPP_IFR_SF_qqLd.c)
 *     WPP_IFR_SF_qqqdD @ 0x1C006CA8C (WPP_IFR_SF_qqqdD.c)
 *     WPP_IFR_SF_qLL @ 0x1C00709A8 (WPP_IFR_SF_qLL.c)
 *     WPP_IFR_SF_qdL @ 0x1C0070A9C (WPP_IFR_SF_qdL.c)
 *     WPP_IFR_SF_qs @ 0x1C0070B88 (WPP_IFR_SF_qs.c)
 *     WPP_IFR_SF_ddiid @ 0x1C0071274 (WPP_IFR_SF_ddiid.c)
 *     WPP_IFR_SF_dii @ 0x1C00713A8 (WPP_IFR_SF_dii.c)
 *     WPP_IFR_SF_idii @ 0x1C00714A0 (WPP_IFR_SF_idii.c)
 *     WPP_IFR_SF_dddddd @ 0x1C0074B88 (WPP_IFR_SF_dddddd.c)
 *     WPP_IFR_SF__guid_d @ 0x1C00760E4 (WPP_IFR_SF__guid_d.c)
 *     WPP_IFR_SF_DDDDd @ 0x1C00761B8 (WPP_IFR_SF_DDDDd.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0077950 (WPP_IFR_SF_Lqd.c)
 *     WPP_IFR_SF_qcd @ 0x1C0077A40 (WPP_IFR_SF_qcd.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0079D24 (WPP_IFR_SF_qLsqd.c)
 *     WPP_IFR_SF_qqs @ 0x1C0079EE0 (WPP_IFR_SF_qqs.c)
 *     WPP_IFR_SF_qqdq @ 0x1C007C4E4 (WPP_IFR_SF_qqdq.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C007EEF0 (WPP_IFR_SF_qqLLL.c)
 *     WPP_IFR_SF_sqqLd @ 0x1C007F7F0 (WPP_IFR_SF_sqqLd.c)
 *     WPP_IFR_SF_sqqd @ 0x1C007F9A4 (WPP_IFR_SF_sqqd.c)
 *     WPP_IFR_SF_DDDDDD @ 0x1C0086088 (WPP_IFR_SF_DDDDDD.c)
 *     WPP_IFR_SF_LL @ 0x1C00861C8 (WPP_IFR_SF_LL.c)
 *     WPP_IFR_SF_LLd @ 0x1C008628C (WPP_IFR_SF_LLd.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C0086378 (WPP_IFR_SF_cqcqq.c)
 *     WPP_IFR_SF_dDqq @ 0x1C00864AC (WPP_IFR_SF_dDqq.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1C00865BC (WPP_IFR_SF_dddDqqd.c)
 *     WPP_IFR_SF_L @ 0x1C0087874 (WPP_IFR_SF_L.c)
 *     WPP_IFR_SF_ddLLdiDD @ 0x1C008C824 (WPP_IFR_SF_ddLLdiDD.c)
 *     WPP_IFR_SF_qDDDDsdisd @ 0x1C008C9B8 (WPP_IFR_SF_qDDDDsdisd.c)
 * Callees:
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxIsEqualGuid @ 0x1C003BBD8 (FxIsEqualGuid.c)
 */

__int64 FxIFR(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 MessageLevel,
        unsigned int MessageFlags,
        _GUID *MessageGuid,
        unsigned __int16 MessageNumber,
        const void *a6,
        ...)
{
  char *WdfLogHeader; // rbx
  va_list v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v16; // rdi
  unsigned int v17; // ecx
  signed __int32 v18; // eax
  __int64 v19; // r8
  signed __int32 v20; // ecx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int16 v23; // r8
  __int64 v24; // rcx
  char *v25; // rbp
  size_t *v26; // rax
  const void *v27; // rcx
  size_t v28; // rdi
  const void **v29; // rsi
  unsigned int v30; // ecx
  signed __int32 offsetNew; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  if ( !unk_1C00ABEC0 )
  {
    WdfLogHeader = (char *)FxDriverGlobals->WdfLogHeader;
    if ( !WdfLogHeader )
      return 3221225473LL;
    va_copy(v9, va);
    v10 = 0LL;
    if ( a6 )
    {
      do
      {
        v11 = v9 + 8;
        v12 = *(_QWORD *)v9;
        if ( v12 )
        {
          if ( v12 > 0x100 )
            goto $drop_message;
          v10 += (unsigned __int16)v12;
        }
        v9 = (va_list)(v11 + 1);
      }
      while ( *v11 );
    }
    v13 = 4 - (v10 & 3);
    if ( (v10 & 3) == 0 )
      v13 = 0LL;
    v14 = v13 + v10;
    if ( v14 > 0x100 )
    {
$drop_message:
      _InterlockedIncrement((volatile signed __int32 *)WdfLogHeader + 8);
      return 3221225473LL;
    }
    v16 = v14 + 28;
    if ( FxDriverGlobals->FxVerifierOn )
    {
      if ( strncmp(WdfLogHeader + 36, FxDriverGlobals->Public.DriverName, 0x20uLL)
        || !FxIsEqualGuid((const _GUID *)WdfLogHeader, &WdfTraceGuid)
        || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
        || (v17 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v17)
        || *((unsigned __int16 *)WdfLogHeader + 15) > v17
        || v17 >= 0x10000 )
      {
        FxVerifierDbgBreakPoint(FxDriverGlobals);
      }
    }
    v18 = *((_DWORD *)WdfLogHeader + 7);
    do
    {
      v19 = *((_QWORD *)WdfLogHeader + 2);
      v20 = v18;
      v21 = v19 + *((unsigned int *)WdfLogHeader + 6);
      v22 = v16 + v19 + (unsigned __int16)v18;
      if ( v21 >= v22 )
      {
        HIWORD(offsetNew) = v18;
        LOWORD(offsetNew) = v16 + v18;
      }
      else
      {
        offsetNew = (unsigned __int16)v16;
      }
      v23 = 0;
      if ( v21 >= v22 )
        v23 = v18;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)WdfLogHeader + 7, offsetNew, v18);
    }
    while ( v20 != v18 );
    v24 = *((_QWORD *)WdfLogHeader + 2) + v23;
    *(_WORD *)(v24 + 8) = HIWORD(v18);
    *(_WORD *)v24 = 21068;
    *(_WORD *)(v24 + 2) = v16;
    *(_WORD *)(v24 + 10) = MessageNumber;
    v25 = (char *)(v24 + 28);
    *(_DWORD *)(v24 + 4) = _InterlockedIncrement((volatile signed __int32 *)WdfLogHeader + 8);
    va_copy((va_list)v26, va);
    *(_GUID *)(v24 + 12) = *MessageGuid;
    v27 = a6;
    if ( a6 )
    {
      do
      {
        v28 = *v26;
        v29 = (const void **)(v26 + 1);
        if ( *v26 )
        {
          memmove(v25, v27, v28);
          v25 += v28;
        }
        v27 = *v29;
        v26 = (size_t *)(v29 + 1);
      }
      while ( *v29 );
    }
    if ( FxDriverGlobals->FxVerifierOn )
    {
      if ( strncmp(WdfLogHeader + 36, FxDriverGlobals->Public.DriverName, 0x20uLL)
        || !FxIsEqualGuid((const _GUID *)WdfLogHeader, &WdfTraceGuid)
        || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
        || (v30 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v30)
        || *((unsigned __int16 *)WdfLogHeader + 15) > v30
        || v30 >= 0x10000 )
      {
        FxVerifierDbgBreakPoint(FxDriverGlobals);
      }
    }
  }
  return 0LL;
}
