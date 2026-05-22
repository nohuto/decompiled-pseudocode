/*
 * XREFs of ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002F574
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18002F110 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800C3874 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800C68CC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800C6D80 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FEFC4 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180066D8C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
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
  const char *pExceptionObject; // [rsp+20h] [rbp-59h] BYREF
  __int128 v13; // [rsp+28h] [rbp-51h]
  _OWORD v14[3]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v15; // [rsp+68h] [rbp-11h]
  _BYTE v16[64]; // [rsp+70h] [rbp-9h] BYREF
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
        pExceptionObject);
      __debugbreak();
  }
  v5 = &a1[v4];
  v6 = a1[v4 + 7];
  v7 = v6 == 0;
  if ( a2 == 5 )
    v7 = 1;
  if ( v7 )
  {
    memset_0(v14, 0, 0x38uLL);
    memset_0(v16, 0, sizeof(v16));
    NtQueryCompositionInputQueueAndTransform(*a1, a2, v14, v16);
    v8 = *((_BYTE *)v5 + 56);
    v9 = v14[1];
    *(_OWORD *)v5 = v14[0];
    v10 = v14[2];
    *((_OWORD *)v5 + 1) = v9;
    *(_QWORD *)&v9 = v15;
    *((_OWORD *)v5 + 2) = v10;
    v5[6] = v9;
    if ( v8 )
      return v5;
    *((_BYTE *)v5 + 56) = 1;
    v6 = 1;
  }
  if ( !v6 )
  {
    v13 = 0uLL;
    pExceptionObject = (const char *)&std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return v5;
}
