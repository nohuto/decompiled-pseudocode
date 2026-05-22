/*
 * XREFs of ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180020D5C
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18008A33C (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18008FE40 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800902AC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800C996C (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x180020F40 (--0bad_optional_access@std@@QEAA@XZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180020FA8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

_QWORD *__fastcall LegacyInputSinkData::GetCompositionInputQueue(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  char v6; // r9
  bool v7; // r8
  char v8; // r9
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  const char *pExceptionObject[3]; // [rsp+20h] [rbp-59h] BYREF
  _OWORD v13[3]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v14; // [rsp+68h] [rbp-11h]
  _BYTE v15[64]; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  switch ( a2 )
  {
    case 1u:
      v4 = 4LL;
      break;
    case 2u:
      v4 = 12LL;
      break;
    case 3u:
      v4 = 20LL;
      break;
    case 4u:
      v4 = 28LL;
      break;
    case 5u:
      v4 = 36LL;
      break;
    default:
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x60,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
        "Invalid input type provided.",
        pExceptionObject[0]);
      JUMPOUT(0x180020EBFLL);
  }
  v5 = &a1[v4];
  v6 = a1[v4 + 7];
  v7 = v6 == 0;
  if ( a2 == 5 )
    v7 = 1;
  if ( v7 )
  {
    memset_0(v13, 0, 0x38uLL);
    memset_0(v15, 0, sizeof(v15));
    NtQueryCompositionInputQueueAndTransform(*a1, a2, v13, v15);
    v8 = *((_BYTE *)v5 + 56);
    v9 = v13[1];
    *(_OWORD *)v5 = v13[0];
    v10 = v13[2];
    *((_OWORD *)v5 + 1) = v9;
    *(_QWORD *)&v9 = v14;
    *((_OWORD *)v5 + 2) = v10;
    v5[6] = v9;
    if ( v8 )
      return v5;
    *((_BYTE *)v5 + 56) = 1;
    v6 = 1;
  }
  if ( !v6 )
  {
    memset(pExceptionObject, 0, sizeof(pExceptionObject));
    std::bad_optional_access::bad_optional_access((std::bad_optional_access *)pExceptionObject);
    throw (std::bad_optional_access *)pExceptionObject;
  }
  return v5;
}
