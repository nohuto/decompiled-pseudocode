/*
 * XREFs of ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FEFC4
 * Callers:
 *     ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800FE600 (-CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FF630 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessor.c)
 *     ?StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800FFA7C (-StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DFD4 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18002EF8C (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002F574 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18002F6E0 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180058758 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180066E50 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ApplyInverseTransformToPoint_0 @ 0x1800FE500 (ApplyInverseTransformToPoint_0.c)
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
  unsigned __int64 *v8; // r13
  unsigned int v9; // esi
  int v10; // r14d
  unsigned int v11; // r15d
  int v12; // r12d
  _QWORD *v13; // rsi
  unsigned int v14; // edi
  struct IViewHierarchy *ViewHierarchy; // rax
  int v16; // eax
  __int64 *v17; // rdi
  __int64 v18; // r13
  _QWORD *CompositionInputQueue; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  int v23; // eax
  unsigned int v25; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 WindowIdFromViewId; // [rsp+58h] [rbp-A8h]
  void **pExceptionObject; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+68h] [rbp-98h]
  struct tagPOINT v33; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v34; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v35; // [rsp+88h] [rbp-78h]
  struct tagPOINT *v36; // [rsp+90h] [rbp-70h]
  struct tagPOINT *v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  _BYTE v39[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v40; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  float v43[16]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v38 = -2LL;
  v35 = a4;
  x = a2.x;
  v33 = a2;
  v36 = a5;
  v8 = a6;
  v34 = a6;
  v37 = a7;
  (*(void (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, HMONITOR, int))(**((_QWORD **)this + 3) + 32LL))(
    *((_QWORD *)this + 3),
    v39,
    a2,
    a3,
    2);
  if ( v39[0] && (unsigned __int64)(v42 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    WindowIdFromViewId = 0LL;
    v9 = 0;
    v25 = 0;
    v10 = 0;
    v28[0] = 0;
    v11 = 0;
    v26 = 0;
    v12 = 0;
    v27 = 0;
    if ( v40 == v41 )
    {
      v22 = 0LL;
    }
    else
    {
      InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v29, &v40);
      if ( v29 )
      {
        v13 = (_QWORD *)(v29 + 32);
        if ( !*(_BYTE *)(v29 + 384) )
        {
          v32 = 0uLL;
          pExceptionObject = &std::bad_optional_access::`vftable';
          throw (std::bad_optional_access *)&pExceptionObject;
        }
        v14 = *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(v29 + 32));
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v14);
        LegacyInputSinkData::GetTransform(v13, v43);
        v16 = ApplyInverseTransformToPoint_0(v43, x, v33.y, &v25, v28);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            509LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system"
                     "\\lib\\dragndropprocessorlegacy.cpp",
            (const char *)(unsigned int)v16);
          __debugbreak();
        }
        v9 = v25;
        v10 = v28[0];
      }
      v17 = v40;
      *(_QWORD *)v28 = v41;
      if ( v40 == v41 )
      {
LABEL_15:
        v20 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v18 = *v17;
          if ( !*(_BYTE *)(*v17 + 384) )
          {
            v32 = 0uLL;
            pExceptionObject = &std::bad_optional_access::`vftable';
            throw (std::bad_optional_access *)&pExceptionObject;
          }
          CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue((_QWORD *)(v18 + 32), 3u);
          if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 2) <= 1 )
            break;
          if ( ++v17 == *(__int64 **)v28 )
          {
            v8 = v34;
            goto LABEL_15;
          }
        }
        v20 = CompositionInputQueue[1];
        LegacyInputSinkData::GetTransform((_QWORD *)(v18 + 32), v43);
        v23 = ApplyInverseTransformToPoint_0(v43, x, v33.y, &v26, &v27);
        if ( v23 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            528LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system"
                     "\\lib\\dragndropprocessorlegacy.cpp",
            (const char *)(unsigned int)v23);
          __debugbreak();
        }
        v11 = v26;
        v12 = v27;
        v8 = v34;
      }
      v21 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = WindowIdFromViewId;
      if ( v20 != WindowIdFromViewId )
      {
        *v35 = v20;
        *v36 = (struct tagPOINT)__PAIR64__(v12, v11);
      }
    }
    *v8 = v22;
    *v37 = (struct tagPOINT)__PAIR64__(v10, v9);
  }
  if ( (unsigned __int64)(v42 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v42);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v40);
  return 0LL;
}
