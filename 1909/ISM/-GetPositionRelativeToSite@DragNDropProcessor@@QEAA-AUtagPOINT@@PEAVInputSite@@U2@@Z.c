/*
 * XREFs of ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18006B8E4
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006A9CC (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x18006BA10 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18006C0E0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006C8C0 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CCEC (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180066E50 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ApplyInverseTransformToPoint @ 0x18006A8CC (ApplyInverseTransformToPoint.c)
 */

struct tagPOINT __fastcall DragNDropProcessor::GetPositionRelativeToSite(
        DragNDropProcessor *this,
        struct InputSite *a2,
        struct tagPOINT a3,
        __int64 a4)
{
  int v4; // ebx
  bool v5; // zf
  int v7; // eax
  struct tagPOINT result; // rax
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h]
  void **pExceptionObject; // [rsp+40h] [rbp-29h] BYREF
  __int128 v13; // [rsp+48h] [rbp-21h]
  float v14[16]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a4;
  v5 = *(_BYTE *)(*(_QWORD *)&a3 + 384LL) == 0;
  v11 = a4;
  if ( v5 )
  {
    v13 = 0uLL;
    pExceptionObject = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  LegacyInputSinkData::GetTransform((_QWORD *)(*(_QWORD *)&a3 + 32LL), v14);
  v7 = ApplyInverseTransformToPoint(v14, v4, SHIDWORD(v11), &v9, &v10);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      876LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  result = (struct tagPOINT)a2;
  *(_DWORD *)a2 = v9;
  *((_DWORD *)a2 + 1) = v10;
  return result;
}
