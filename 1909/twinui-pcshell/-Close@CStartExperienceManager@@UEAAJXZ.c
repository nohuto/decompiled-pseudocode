/*
 * XREFs of ?Close@CStartExperienceManager@@UEAAJXZ @ 0x1801B64B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180015838 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4Rep.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA?AW4Variant_StartInSeparateUWP@@W4VariantReportingKind@2@_N@Z @ 0x18007ADD8 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA-AW4Vari.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801275FC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::Close(CStartExperienceManager *this, __int64 a2, __int64 a3)
{
  __int64 *v4; // rsi
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 472);
  if ( *((_DWORD *)this + 114) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v4 + 32LL))(*v4);
    *((_DWORD *)this + 114) = 0;
  }
  if ( *((_DWORD *)this + 115) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v4 + 32LL))(*v4);
    *((_DWORD *)this + 115) = 0;
  }
  v5 = *((unsigned int *)this + 116);
  if ( (_DWORD)v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v4 + 32LL))(*v4);
    *((_DWORD *)this + 116) = 0;
  }
  wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService((__int64)this, v5, a3);
  if ( wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() != 5 )
  {
    v12 = 0LL;
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 29);
    v7 = **v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v8 = v7(v6, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v12);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        288LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x121,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
  return 0LL;
}
