/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_84b1643b811106f063aa32e54d395206___ @ 0x18016FB18
 * Callers:
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180170A50 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080580 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_180080580.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_84b1643b811106f063aa32e54d395206_____lambda_84b1643b811106f063aa32e54d395206___ @ 0x18016F818 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_8.c)
 */

__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_84b1643b811106f063aa32e54d395206___(
        IUnknown *punk,
        __int64 a2,
        __int128 *a3)
{
  HRESULT v6; // eax
  int v7; // edi
  void *v8; // rbx
  int v9; // eax
  volatile signed __int32 *v10; // rbx
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    v8 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v9 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, a2, &v15);
    v7 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_84b1643b811106f063aa32e54d395206_____lambda_84b1643b811106f063aa32e54d395206___(
        &v13,
        a3);
      v10 = v13;
      if ( v13 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v15 + 24LL))(v15, v13);
        if ( v7 >= 0 )
          v7 = 0;
      }
      else
      {
        v7 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
          (const char *)0x8007000ELL);
      }
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release(v10);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v7;
}
