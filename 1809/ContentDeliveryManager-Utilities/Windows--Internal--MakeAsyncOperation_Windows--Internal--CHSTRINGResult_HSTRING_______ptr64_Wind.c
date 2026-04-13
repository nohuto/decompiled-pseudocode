/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_8db6d4bee1849959d8282bc6736eef1f___ @ 0x180016524
 * Callers:
 *     ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x18000DF00 (-TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU-$I.c)
 * Callees:
 *     ??0?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18001DA08 (--0-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyncOperationCom.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_8db6d4bee1849959d8282bc6736eef1f___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rsi
  signed int v9; // ebx
  void *v10; // rax
  __int64 v11; // rdi

  v7 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = (void (__fastcall **)(_QWORD, __int64))off_1800D3C10;
    v7[1] = *(void (__fastcall ***)(_QWORD, __int64))a4;
    v7[2] = *(void (__fastcall ***)(_QWORD, __int64))(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    *((_BYTE *)v7 + 24) = 0;
    *(_BYTE *)(a4 + 16) = 1;
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = 0LL;
  v9 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    v10 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = 0LL;
    if ( v10 )
      v11 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
              v10,
              a1,
              L"Windows.Foundation.IAsyncOperation`1<String>",
              0LL,
              -2LL);
    v9 = v11 == 0 ? 0x8007000E : 0;
    if ( v11 )
    {
      *(_QWORD *)(v11 + 256) = v8;
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 104LL))(v11 + 8);
      v8 = 0LL;
    }
    if ( v9 >= 0 )
    {
      *a2 = (v11 + 176) & -(__int64)(v11 != 0);
      v11 = 0LL;
    }
    if ( v8 )
      (**v8)(v8, 1LL);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 16LL))(v11 + 8);
  }
  return (unsigned int)v9;
}
