/*
 * XREFs of ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1800254EC
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180023BA0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180024520 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180024880 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x180024AD0 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180025070 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180020EC8 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ @ 0x180021358 (-GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

struct tagPOINT __fastcall DragNDropProcessor::GetPositionRelativeToSite(
        DragNDropProcessor *this,
        struct InputSite *a2,
        struct tagPOINT a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  int v5; // ebx
  const struct LegacyInputSinkData *LegacyInputSinkData; // rax
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm5_4
  struct tagPOINT result; // rax
  float v13; // xmm3_4
  float v14; // xmm2_4
  int v15; // edx
  float v16; // [rsp+20h] [rbp-78h] BYREF
  float v17; // [rsp+24h] [rbp-74h]
  float v18; // [rsp+2Ch] [rbp-6Ch]
  float v19; // [rsp+30h] [rbp-68h]
  float v20; // [rsp+34h] [rbp-64h]
  float v21; // [rsp+3Ch] [rbp-5Ch]
  float v22; // [rsp+50h] [rbp-48h]
  float v23; // [rsp+54h] [rbp-44h]
  float v24; // [rsp+5Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = HIDWORD(a4);
  v5 = a4;
  LegacyInputSinkData = InputSite::GetLegacyInputSinkData(*(InputSite **)&a3);
  LegacyInputSinkData::GetTransform(LegacyInputSinkData, &v16);
  v8 = (float)v5;
  v9 = (float)((float)((float)(int)v4 * v21) - v20) * (float)((float)((float)v5 * v18) - v16);
  v10 = (float)((float)((float)(int)v4 * v18) - v17) * (float)((float)((float)v5 * v21) - v19);
  if ( v9 == v10 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x374,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)0x8000FFFFLL);
    JUMPOUT(0x18002565ELL);
  }
  v11 = v9 - v10;
  result = (struct tagPOINT)a2;
  v13 = (float)((float)(int)v4 * v24) - v23;
  v14 = (float)(v8 * v24) - v22;
  v15 = (int)(float)((float)((float)((float)((float)(v8 * v21) - v19) * v13)
                           - (float)((float)((float)((float)(int)v4 * v21) - v20) * v14))
                   / v11);
  *((_DWORD *)a2 + 1) = (int)(float)((float)((float)((float)((float)((float)(int)v4 * v18) - v17) * v14)
                                           - (float)((float)((float)(v8 * v18) - v16) * v13))
                                   / v11);
  *(_DWORD *)a2 = v15;
  return result;
}
