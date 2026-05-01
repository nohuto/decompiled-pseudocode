/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_3a68b375ea49de67176423822fd94ed9___ @ 0x18008C0F4
 * Callers:
 *     _lambda_38fe7d99edb05f0a6ae9d60cf489452e_::operator() @ 0x18008CA3C (_lambda_38fe7d99edb05f0a6ae9d60cf489452e_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080580 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_180080580.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180081550 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3a68b375ea49de67176423822fd94ed9_____lambda_3a68b375ea49de67176423822fd94ed9___ @ 0x18008BF8C (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_3a68b375ea49de67176423822fd94ed9___(
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
  volatile signed __int32 *v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v15[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v15[1] = (volatile signed __int32 *)-2LL;
  v14 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>(&v14);
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
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v11 = v10(v9, a2, &v17);
    v8 = v11;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3a68b375ea49de67176423822fd94ed9_____lambda_3a68b375ea49de67176423822fd94ed9___(
        v15,
        a3);
      v12 = v15[0];
      if ( v15[0] )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17, v15[0]);
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
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release(v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v11);
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
