/*
 * XREFs of ?CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@@PEAPEAUIRandomAccessStreamReference@456@@Z @ 0x1801FE8CC
 * Callers:
 *     _lambda_d1b450f9180508facf5a14a25ef318a0_::operator() @ 0x1801FE190 (_lambda_d1b450f9180508facf5a14a25ef318a0_--operator().c)
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801FF230 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x180197470 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 */

__int64 __fastcall CreateRandomAccessStreamReferenceFromHIcon(
        struct IWICImagingFactory *a1,
        HICON a2,
        struct Windows::Storage::Streams::IRandomAccessStreamReferenceStatics *a3,
        struct Windows::Storage::Streams::IRandomAccessStreamReference **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int StreamOfWICBitmapSourceWithOptions; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v17; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IWICBitmapSource *v19; // [rsp+80h] [rbp+20h] BYREF

  v16[1] = -2LL;
  v16[0] = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, HICON, __int64 *))a1->lpVtbl->CreateBitmapFromHICON)(
         a1,
         a2,
         v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v19 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v16[0])(
           v16[0],
           &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
           &v19);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v14 = 0LL;
      v17 = GUID_WICPixelFormat32bppBGRA;
      StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                             a1,
                                             v19,
                                             (__int64)&GUID_ContainerFormatPng,
                                             &v17,
                                             0,
                                             &v14);
      v8 = StreamOfWICBitmapSourceWithOptions;
      if ( StreamOfWICBitmapSourceWithOptions >= 0 )
      {
        v15 = 0LL;
        v11 = CreateRandomAccessStreamOverStream(v14, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v15);
        v8 = v11;
        if ( v11 >= 0 )
        {
          v11 = (*(__int64 (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStreamReferenceStatics *, __int64, struct Windows::Storage::Streams::IRandomAccessStreamReference **))(*(_QWORD *)a3 + 64LL))(
                  a3,
                  v15,
                  a4);
          v8 = v11;
          if ( v11 >= 0 )
          {
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
            v8 = 0;
            goto LABEL_15;
          }
          v12 = 24LL;
        }
        else
        {
          v12 = 22LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13,
          (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
          (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10,
        (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
        (const char *)(unsigned int)v9);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
      (const char *)(unsigned int)v7);
  }
LABEL_15:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v16);
  return v8;
}
