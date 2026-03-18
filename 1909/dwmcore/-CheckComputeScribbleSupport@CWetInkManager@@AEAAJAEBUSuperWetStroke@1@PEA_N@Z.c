/*
 * XREFs of ?CheckComputeScribbleSupport@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x18025042C
 * Callers:
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180250550 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802147AC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 */

__int64 __fastcall CWetInkManager::CheckComputeScribbleSupport(
        CWetInkManager *this,
        const struct CWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CWetInkManager *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = this;
  *a3 = 0;
  wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService((__int64)this, (__int64)a2, (__int64)a3);
  v5 = (*(__int64 (__fastcall **)(_QWORD, CWetInkManager **))(**((_QWORD **)a2 + 1) + 544LL))(*((_QWORD *)a2 + 1), &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !(_BYTE)v11 )
      return 0LL;
    v8 = *((_QWORD *)a2 + 1);
    v12 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 40LL))(v8, &v12);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v6 = 0;
      if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, __int64, char *))a2)(*(_QWORD *)a2, v12, (char *)a2 + 16) )
        *a3 = 1;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x119,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
        (const char *)(unsigned int)v9);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  return v6;
}
