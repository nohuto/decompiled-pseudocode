/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_15bb2aca6571843abbeabe1f04670634___ @ 0x18006971C
 * Callers:
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180069600 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800604C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_15bb2aca6571843abbeabe1f04670634_____lambda_15bb2aca6571843abbeabe1f04670634___ @ 0x18006980C (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_15bb2aca6571843abbeabe1f04670634___(
        IUnknown *punk,
        __int64 a2,
        __int64 a3)
{
  HRESULT v6; // eax
  int v7; // edi
  void *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  volatile int *v11; // rdx
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
      (const char *)(unsigned int)v6,
      (int)ppvOut);
  }
  else
  {
    v16 = 0LL;
    v8 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v9 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, a2, &v16);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (unsigned int)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v9,
        (int)ppvOut);
    }
    else
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_15bb2aca6571843abbeabe1f04670634_____lambda_15bb2aca6571843abbeabe1f04670634___(
        &v14,
        a3);
      v10 = v14;
      if ( v14 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v14);
        if ( v7 >= 0 )
          v7 = 0;
      }
      else
      {
        v7 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (unsigned int)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
          (const char *)0x8007000ELL,
          (int)ppvOut);
      }
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
          v10,
          v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v7;
}
