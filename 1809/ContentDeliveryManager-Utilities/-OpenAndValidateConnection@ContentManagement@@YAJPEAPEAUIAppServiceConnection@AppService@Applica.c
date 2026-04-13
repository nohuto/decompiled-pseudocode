/*
 * XREFs of ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180028B60
 * Callers:
 *     ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18002B3C8 (-EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnect.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180003714 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x18001533C (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180035330 (--$ActivateInstance@V-$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@M.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800376CC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::OpenAndValidateConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rbx
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // rcx
  char *v19; // [rsp+30h] [rbp-11h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-9h] BYREF
  __int64 v21; // [rsp+40h] [rbp-1h] BYREF
  __int64 v22; // [rsp+48h] [rbp+7h] BYREF
  char *v23; // [rsp+50h] [rbp+Fh] BYREF
  const WCHAR *v24[2]; // [rsp+58h] [rbp+17h] BYREF
  HSTRING string; // [rsp+68h] [rbp+27h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v24[1] = (const WCHAR *)-2LL;
  v24[0] = L"microsoft-contentdeliverymanager";
  *(_QWORD *)this = 0LL;
  v20 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.ApplicationModel.AppService.AppServiceConnection",
         0x38u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceConnection>>(
         string,
         &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 249LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_27;
  }
  v6 = v20;
  v7 = *(_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, v24);
  v3 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64))(*v6)[7])(v6, v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 250LL;
    goto LABEL_11;
  }
  v8 = v20;
  if ( WindowsCreateStringReference(
         L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
         0x36u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v3 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING))(*v8)[9])(v8, string);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 251LL;
    goto LABEL_11;
  }
  v22 = 0LL;
  v9 = (**v20)(v20, &GUID_65219584_f9cb_4ae3_81f9_a28a6ca450d9, &v22);
  v4 = v9;
  if ( v9 >= 0 )
  {
    v21 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v22 + 24LL))(
            v22,
            &GUID_0d0e6663_2639_5a9a_9cbc_30d7d4ce533b,
            &v21);
    v4 = v10;
    if ( v10 >= 0 )
    {
      v13 = v21;
      v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>,Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>>(v21);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v13 + 64LL))(v13, &v23);
        if ( v4 >= 0 )
        {
          if ( (_DWORD)v23 )
          {
            LODWORD(v19) = (_DWORD)v23;
            v4 = -2147483629;
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0x105,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)0x80000013LL,
              (__int64)"AppServiceConnectionStatus: %d",
              v19);
          }
          else
          {
            v14 = v20;
            v20 = 0LL;
            *(_QWORD *)this = v14;
            v4 = 0;
          }
LABEL_23:
          v15 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          goto LABEL_25;
        }
      }
      v11 = (unsigned int)v4;
      v12 = 259LL;
    }
    else
    {
      v11 = (unsigned int)v10;
      v12 = 256LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v11);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFE,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v9);
LABEL_25:
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_27:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v17)[2])(v17);
  }
  return (unsigned int)v4;
}
