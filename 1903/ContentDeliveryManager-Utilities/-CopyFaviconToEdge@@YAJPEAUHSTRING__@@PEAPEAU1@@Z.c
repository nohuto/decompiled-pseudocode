/*
 * XREFs of ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x180099060
 * Callers:
 *     _lambda_4a924f41398b24a36e92e39351e8429b_::operator() @ 0x180099490 (_lambda_4a924f41398b24a36e92e39351e8429b_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFile@Storage@Windows@@P8456@EAAJPEAUIStorageFolder@56@PEAUHSTRING__@@W4NameCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU756@$$QEAPEAU8@$$QEAW4956@@Z @ 0x18007A528 (--$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@.c)
 *     ??$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFileStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18007B480 (--$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorageFi.c)
 *     ??$wait_for_completion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18007B548 (--$wait_for_completion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18007BCC0 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180098C58 (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall CopyFaviconToEdge(HSTRING a1, HSTRING *a2, void **a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  HSTRING_HEADER *v14; // rbx
  HRESULT v15; // eax
  __int64 v16; // r8
  wil::details::in1diag3 *v17; // rcx
  HSTRING *v18; // rax
  HSTRING v19; // rbx
  __int64 v20; // rcx
  HSTRING_HEADER *v21; // rax
  HRESULT v22; // eax
  wil::details::in1diag3 *v23; // rcx
  unsigned int v25; // [rsp+30h] [rbp-88h] BYREF
  __int64 v26; // [rsp+38h] [rbp-80h] BYREF
  HSTRING newString; // [rsp+40h] [rbp-78h] BYREF
  HSTRING string; // [rsp+48h] [rbp-70h] BYREF
  __int64 v29; // [rsp+50h] [rbp-68h] BYREF
  HSTRING v30; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v31[3]; // [rsp+60h] [rbp-58h] BYREF
  HSTRING_HEADER v32; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v31[1] = -2LL;
  v25 = 0;
  GetEdgeFaviconCache(v31, (__int64)a2, a3);
  v29 = 0LL;
  v4 = *(_QWORD *)wil::GetActivationFactory<Windows::Storage::IStorageFileStatics>((const WCHAR *)&v30);
  v5 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x64B,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v5);
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v8);
    goto LABEL_21;
  }
  wil::wait_for_completion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    &v26,
    v29);
  v25 = 2;
  v6 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v26;
  v26 = 0LL;
  v31[2] = v7;
  if ( v30 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v30 + 16LL))(v30);
  string = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
         v7,
         &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
         &v26);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_20;
  v10 = v26;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 88LL);
  WindowsDeleteString(string);
  string = 0LL;
  v12 = v11(v10, &string);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x44,
      (__int64)"shellcommon\\shell\\inc\\copyedgeassetshelper.h",
      (const char *)(unsigned int)v12);
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\inc\\copyedgeassetshelper.h",
      (const char *)(unsigned int)v15);
    goto LABEL_23;
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  newString = 0LL;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)off_1800F5F90);
  WindowsDeleteString(newString);
  newString = 0LL;
  v15 = WindowsConcatString(string, (HSTRING)v14[1].Reserved.Reserved1, &newString);
  v17 = retaddr;
  if ( v15 < 0 )
    goto LABEL_22;
  v25 = 1;
  v30 = newString;
  v29 = v31[0];
  v18 = (HSTRING *)___CallAndWaitForCompletion_UIStorageFile_Storage_Windows__PEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU423_PEAU5_W4623__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFile_Storage_Windows__P8456_EAAJPEAUIStorageFolder_56_PEAUHSTRING____W4NameCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU756___QEAPEAU8___QEAW4956__Z(
                     (__int64)&v26,
                     v7,
                     v16,
                     &v29,
                     &v30,
                     &v25);
  v19 = *v18;
  *v18 = 0LL;
  v30 = v19;
  v20 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)&off_1800F5FA0);
  v22 = WindowsConcatString((HSTRING)v21[1].Reserved.Reserved1, newString, a2);
  v23 = retaddr;
  if ( v22 < 0 )
  {
LABEL_23:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x53,
      (__int64)"shellcommon\\shell\\inc\\copyedgeassetshelper.h",
      (const char *)(unsigned int)v22);
    __debugbreak();
    JUMPOUT(0x1800993ABLL);
  }
  if ( v19 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16LL))(v19);
  WindowsDeleteString(newString);
  newString = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v31[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v31[0] + 16LL))(v31[0]);
  return 0LL;
}
