/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_d501edc7b04cbeac4930c1b70efb24fb___ @ 0x18008ECD0
 * Callers:
 *     _lambda_07e2480195fd463dd539f4feacdfa4d2_::operator() @ 0x18008F3C8 (_lambda_07e2480195fd463dd539f4feacdfa4d2_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800604C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_d501edc7b04cbeac4930c1b70efb24fb_____lambda_d501edc7b04cbeac4930c1b70efb24fb___ @ 0x18008EB68 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_d.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_d501edc7b04cbeac4930c1b70efb24fb___(
        IUnknown *punk,
        __int64 a2,
        __int128 *a3)
{
  __int64 *v6; // rax
  HRESULT Service; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rbx
  volatile int *v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v16[1] = -2LL;
  v15 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>(&v15);
  Service = IUnknown_QueryService(
              punk,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (void **)v6);
  v8 = Service;
  if ( Service >= 0 )
  {
    v18 = 0LL;
    v9 = v15;
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v11 = v10(v9, a2, &v18);
    v8 = v11;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_d501edc7b04cbeac4930c1b70efb24fb_____lambda_d501edc7b04cbeac4930c1b70efb24fb___(
        v16,
        a3);
      v12 = v16[0];
      if ( v16[0] )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, v16[0]);
        if ( v8 >= 0 )
          v8 = 0;
      }
      else
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
          (const char *)0x8007000ELL);
      }
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
          v12,
          v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return (unsigned int)v8;
}
