/*
 * XREFs of ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x1801BCB8C
 * Callers:
 *     ?ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801BEB98 (-ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801BB060 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetLockAppHost(struct ILockAppHost **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int ActivationFactory; // eax
  int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, GUID *, __int64 *); // rdi
  int v10; // eax
  char v12[4]; // [rsp+20h] [rbp-50h] BYREF
  int v13; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v15[1] = -2LL;
  *a1 = 0LL;
  v12[0] = 0;
  v13 = 0;
  if ( (int)wil::wnf_query_nothrow<unsigned long>((__int64)&WNF_SHEL_LOCKAPPHOST_ACTIVE, v12, (__int64)&v13, a4) < 0
    || !v12[0]
    || !v13 )
  {
    return 2147500037LL;
  }
  v15[0] = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"lockframework.LockAppBroker",
    0x1Cu,
    0x1Bu);
  v5 = v17;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_fcc7498e_d8cf_4993_a9ae_804193af19d7, v15);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreenappinterop.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_10:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    return (unsigned int)v7;
  }
  v14 = 0LL;
  v8 = v15[0];
  v9 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v15[0];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v10 = v9(v8, &GUID_91398107_1c08_44be_8b18_79322a23a71d, &v14);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreenappinterop.h",
      (const char *)(unsigned int)v10);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, struct ILockAppHost **))(*(_QWORD *)v14 + 24LL))(v14, a1);
  if ( v7 < 0 )
    goto LABEL_9;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  return 0LL;
}
