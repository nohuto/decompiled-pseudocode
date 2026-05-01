/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___ @ 0x180089594
 * Callers:
 *     _lambda_7dce459d489fa1384d40ebd6fa301128_::operator() @ 0x180089C4C (_lambda_7dce459d489fa1384d40ebd6fa301128_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef_____lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___ @ 0x18008942C (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallb_ea_18008942C.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___(
        IUnknown *punk,
        __int64 a2,
        __int128 *a3)
{
  __int64 *v6; // rax
  HRESULT Service; // eax
  int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  volatile int *v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v15[1] = -2LL;
  v14 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(&v14);
  Service = IUnknown_QueryService(
              punk,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (void **)v6);
  v8 = Service;
  if ( Service >= 0 )
  {
    v17 = 0LL;
    v9 = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, a2, &v17);
    v8 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef_____lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___(
        v15,
        a3);
      v11 = v15[0];
      if ( v15[0] )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, v15[0]);
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
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
          v11,
          v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)v8;
}
