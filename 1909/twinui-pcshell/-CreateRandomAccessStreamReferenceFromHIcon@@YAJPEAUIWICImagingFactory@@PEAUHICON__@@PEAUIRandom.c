/*
 * XREFs of ?CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@@PEAPEAUIRandomAccessStreamReference@456@@Z @ 0x180271068
 * Callers:
 *     _lambda_d1b450f9180508facf5a14a25ef318a0_::operator() @ 0x180270950 (_lambda_d1b450f9180508facf5a14a25ef318a0_--operator().c)
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802719E8 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1801FD0D4 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 */

__int64 __fastcall CreateRandomAccessStreamReferenceFromHIcon(
        struct IWICImagingFactory *a1,
        HICON a2,
        struct Windows::Storage::Streams::IRandomAccessStreamReferenceStatics *a3,
        struct Windows::Storage::Streams::IRandomAccessStreamReference **a4)
{
  struct IWICImagingFactoryVtbl *lpVtbl; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int StreamOfWICBitmapSourceWithOptions; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v18; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IWICBitmapSource *v20; // [rsp+80h] [rbp+20h] BYREF

  v17[1] = -2LL;
  lpVtbl = a1->lpVtbl;
  v17[0] = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, HICON, __int64 *))lpVtbl->CreateBitmapFromHICON)(
         a1,
         a2,
         v17);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v20 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v17[0])(
            v17[0],
            &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
            &v20);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v15 = 0LL;
      v18 = GUID_WICPixelFormat32bppBGRA;
      StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                             a1,
                                             v20,
                                             (__int64)&GUID_ContainerFormatPng,
                                             &v18,
                                             0,
                                             (IStream *)&v15);
      v9 = StreamOfWICBitmapSourceWithOptions;
      if ( StreamOfWICBitmapSourceWithOptions >= 0 )
      {
        v16 = 0LL;
        v12 = CreateRandomAccessStreamOverStream(v15, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v16);
        v9 = v12;
        if ( v12 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStreamReferenceStatics *, __int64, struct Windows::Storage::Streams::IRandomAccessStreamReference **))(*(_QWORD *)a3 + 64LL))(
                  a3,
                  v16,
                  a4);
          v9 = v12;
          if ( v12 >= 0 )
          {
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
            v9 = 0;
            goto LABEL_15;
          }
          v13 = 24LL;
        }
        else
        {
          v13 = 22LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
          (const char *)(unsigned int)v12);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13,
          (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
          (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10,
        (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
        (const char *)(unsigned int)v10);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\tabviewmanagerhelpers.h",
      (const char *)(unsigned int)v8);
  }
LABEL_15:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v17);
  return v9;
}
