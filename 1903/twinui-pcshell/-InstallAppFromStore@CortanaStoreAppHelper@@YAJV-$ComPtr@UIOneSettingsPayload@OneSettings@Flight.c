/*
 * XREFs of ?InstallAppFromStore@CortanaStoreAppHelper@@YAJV?$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801C6BFC
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801CBF3C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6beee81bb2061f57cf9eaca4a4fea397___ @ 0x1801C1924 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_6beee81bb2061f57cf9eaca4a4fea397___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppHelper::InstallAppFromStore(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64, double *); // rbx
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v11; // [rsp+20h] [rbp-48h] BYREF
  double v12[2]; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v12[1] = NAN;
  v11 = a1;
  v2 = *a1;
  v3 = *(__int64 (__fastcall **)(__int64, __int64, double *))(*(_QWORD *)*a1 + 80LL);
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v13, L"InstallAppFromStoreDelayMinutes", 0x20u, 0x1Fu);
  v4 = v3(v2, v14, v12);
  v6 = 3600000;
  if ( v4 >= 0 )
    v6 = 60000 * (int)v12[0];
  v7 = retaddr;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v4);
  LODWORD(v11) = v6;
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6beee81bb2061f57cf9eaca4a4fea397___(
         (__int64)v7,
         v6,
         v5,
         &v11);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return v9;
}
