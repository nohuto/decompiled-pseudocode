/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x18034BCAC
 * Callers:
 *     _lambda_637b889d7309fa55c34979987552fc96_::operator() @ 0x18034BE68 (_lambda_637b889d7309fa55c34979987552fc96_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005FB10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AB2FC (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801BB4F4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53___ @ 0x18034BAC4 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rax
  __int64 v6; // rax
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  void *v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IInspectable *v17; // [rsp+50h] [rbp+20h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF

  v17 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v17);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(void **)a2;
    *(_QWORD *)a2 = 0LL;
    v14 = v5;
    v6 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    v15 = v6;
    CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53___(&v18, &v14);
    v8 = (__int64)*CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53;
    *CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53 = 0LL;
    v9 = v18;
    v19 = v8;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v9);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(&v14);
    if ( v8 )
    {
      v12 = ((__int64 (__fastcall *)(struct IInspectable *, __int64))v17->lpVtbl->GetIids)(v17, v8);
      v4 = v12;
      if ( v12 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_11;
      }
      v11 = (unsigned int)v12;
      v10 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v10 = 80LL;
      v11 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return v4;
}
