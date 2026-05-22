/*
 * XREFs of ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800C996C
 * Callers:
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800C9020 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessor.c)
 *     ?StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800C9540 (-StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 *     ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800C974C (-CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x18000C8D0 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001DF68 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001E104 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180020C64 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180020D5C (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180020EC8 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ @ 0x180021358 (-GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ.c)
 *     ApplyInverseTransformToPoint @ 0x1800C7FA0 (ApplyInverseTransformToPoint.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessorLegacy::HitTest(
        DragNDropProcessorLegacy *this,
        struct tagPOINT a2,
        HMONITOR a3,
        unsigned __int64 *a4,
        struct tagPOINT *a5,
        unsigned __int64 *a6,
        struct tagPOINT *a7)
{
  LONG x; // ebx
  unsigned int v8; // esi
  int v9; // r14d
  unsigned __int64 v10; // r13
  unsigned int v11; // r15d
  int v12; // r12d
  LegacyInputSinkData *LegacyInputSinkData; // rsi
  unsigned int v14; // edi
  struct IViewHierarchy *ViewHierarchy; // rax
  int v16; // eax
  InputSite **v17; // rdi
  _QWORD *CompositionInputQueue; // rax
  int v19; // eax
  InputSite *v20; // rcx
  unsigned __int64 v21; // rcx
  LONG y; // [rsp+34h] [rbp-CCh]
  unsigned int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  const struct LegacyInputSinkData *v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27[2]; // [rsp+48h] [rbp-B8h] BYREF
  InputSite *v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 WindowIdFromViewId; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v30; // [rsp+60h] [rbp-A0h]
  struct tagPOINT *v31; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v32; // [rsp+70h] [rbp-90h]
  struct tagPOINT *v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  _BYTE v35[8]; // [rsp+90h] [rbp-70h] BYREF
  InputSite **v36; // [rsp+98h] [rbp-68h] BYREF
  InputSite **v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  float v39[16]; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v34 = -2LL;
  v30 = a4;
  x = a2.x;
  y = a2.y;
  v31 = a5;
  v32 = a6;
  v33 = a7;
  (*(void (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, HMONITOR, int))(**((_QWORD **)this + 3) + 32LL))(
    *((_QWORD *)this + 3),
    v35,
    a2,
    a3,
    2);
  if ( v35[0] && (unsigned __int64)(v38 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    WindowIdFromViewId = 0LL;
    v8 = 0;
    LODWORD(v26) = 0;
    v9 = 0;
    v27[0] = 0;
    v10 = 0LL;
    v11 = 0;
    v24 = 0;
    v12 = 0;
    v25 = 0;
    if ( v36 == v37 )
    {
      v21 = WindowIdFromViewId;
    }
    else
    {
      InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v28, &v36);
      if ( v28 )
      {
        LegacyInputSinkData = InputSite::GetLegacyInputSinkData(v28);
        v14 = *LegacyInputSinkData::GetViewInstanceId(LegacyInputSinkData);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v14);
        LegacyInputSinkData::GetTransform(LegacyInputSinkData, v39);
        v16 = ApplyInverseTransformToPoint(v39, x, y, &v26, v27);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1FD,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system"
                     "\\lib\\dragndropprocessorlegacy.cpp",
            (const char *)(unsigned int)v16);
          JUMPOUT(0x1800C9C22LL);
        }
        v8 = (unsigned int)v26;
        v9 = v27[0];
      }
      v17 = v36;
      *(_QWORD *)v27 = v37;
      if ( v36 != v37 )
      {
        while ( 1 )
        {
          v26 = InputSite::GetLegacyInputSinkData(*v17);
          CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue(v26, 3u);
          if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 2) <= 1 )
            break;
          if ( ++v17 == *(InputSite ***)v27 )
            goto LABEL_13;
        }
        v10 = CompositionInputQueue[1];
        LegacyInputSinkData::GetTransform(v26, v39);
        v19 = ApplyInverseTransformToPoint(v39, x, y, &v24, &v25);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x210,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system"
                     "\\lib\\dragndropprocessorlegacy.cpp",
            (const char *)(unsigned int)v19);
          __debugbreak();
        }
        v11 = v24;
        v12 = v25;
      }
LABEL_13:
      v20 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(InputSite *))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = WindowIdFromViewId;
      if ( v10 != WindowIdFromViewId )
      {
        *v30 = v10;
        *v31 = (struct tagPOINT)__PAIR64__(v12, v11);
      }
    }
    *v32 = v21;
    *v33 = (struct tagPOINT)__PAIR64__(v9, v8);
  }
  if ( (unsigned __int64)(v38 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v38);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v36);
  return 0LL;
}
