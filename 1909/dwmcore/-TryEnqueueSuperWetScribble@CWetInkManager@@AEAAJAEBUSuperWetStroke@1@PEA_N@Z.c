/*
 * XREFs of ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180250550
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180250860 (-TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180012780 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CAX_NW4Report.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckComputeScribbleSupport@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x18025042C (-CheckComputeScribbleSupport@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 */

__int64 __fastcall CWetInkManager::TryEnqueueSuperWetScribble(
        CWetInkManager *this,
        const struct CWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  bool v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0;
  v6 = CWetInkManager::CheckComputeScribbleSupport(this, a2, &v20);
  v9 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
      (const char *)(unsigned int)v6);
    return v9;
  }
  if ( v20 )
  {
    v12 = *((_QWORD *)a2 + 1);
    v21 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 40LL))(v12, &v21);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_18:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
      return v9;
    }
    v18 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 168LL))(v21, &v18);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_17:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v18);
      goto LABEL_18;
    }
    v15 = *(_QWORD *)a2;
    v17 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64, char *, __int64 *))(*(_QWORD *)v15 + 8LL))(
           v15,
           v21,
           (char *)a2 + 16,
           &v17) >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 1) + 552LL))(*((_QWORD *)a2 + 1), v17);
      v9 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
          (const char *)(unsigned int)v16);
LABEL_16:
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v17);
        goto LABEL_17;
      }
      *a3 = 1;
    }
    v9 = 0;
    goto LABEL_16;
  }
  v10 = (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 1096LL) - 1);
  if ( (v10 & 0xFFFFFFFB) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::ReportUsageToService(v10, v7, v8);
  return 0LL;
}
