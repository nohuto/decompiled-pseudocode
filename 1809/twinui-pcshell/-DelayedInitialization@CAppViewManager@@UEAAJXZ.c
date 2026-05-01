/*
 * XREFs of ?DelayedInitialization@CAppViewManager@@UEAAJXZ @ 0x180109230
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003DE50 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::DelayedInitialization(CAppViewManager *this)
{
  void *v2; // rbx
  unsigned int i; // edi
  __int64 v4; // rbx
  struct IImmersiveApplication **v5; // r8
  HRESULT v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  void *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  void *v14; // [rsp+38h] [rbp-20h] BYREF
  void *ppvOut[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  unsigned int v17; // [rsp+80h] [rbp+28h] BYREF
  int v18; // [rsp+88h] [rbp+30h] BYREF
  ApplicationViewHelpers *v19; // [rsp+90h] [rbp+38h] BYREF
  __int64 v20; // [rsp+98h] [rbp+40h] BYREF

  ppvOut[1] = (void *)-2LL;
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         ppvOut) >= 0 )
  {
    v20 = 0LL;
    v2 = ppvOut[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    if ( (*(int (__fastcall **)(void *, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v20) >= 0
      && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v17) >= 0 )
    {
      for ( i = 0; i < v17; ++i )
      {
        v19 = 0LL;
        v4 = v20;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, ApplicationViewHelpers **))(*(_QWORD *)v4 + 32LL))(
               v4,
               i,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v19) >= 0
          && ((*(int (__fastcall **)(ApplicationViewHelpers *, int *))(*(_QWORD *)v19 + 216LL))(v19, &v18) < 0 || !v18) )
        {
          v13 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
          if ( (int)ApplicationViewHelpers::GetApplicationFromView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
                      (struct IApplicationView *)&v13,
                      v5) >= 0 )
            (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this + 4) + 24LL))(
              (char *)this + 32,
              v13,
              2LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  v6 = IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
    v6 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v9 + 24LL))(v9, (char *)this + 152);
    v7 = v6;
    if ( v6 >= 0 )
    {
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v10, 3u, v11);
      v7 = 0;
      goto LABEL_19;
    }
    v8 = 412LL;
  }
  else
  {
    v8 = 411LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return v7;
}
