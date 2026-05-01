/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180061B90
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180159F3C (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Prelaunch@CStartExperienceManager@@UEAAJE@Z @ 0x18016A8E0 (-Prelaunch@CStartExperienceManager@@UEAAJE@Z.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x180187030 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180017534 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001B5FC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18001B698 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     _lambda_2998a484fcd7d742033ed970065ccf76_::__lambda_2998a484fcd7d742033ed970065ccf76_ @ 0x18001E220 (_lambda_2998a484fcd7d742033ed970065ccf76_--__lambda_2998a484fcd7d742033ed970065ccf76_.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1AEBQEAUHWND__@@@Z @ 0x180061D28 (--$-0PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2998a484fcd7d742033ed970065ccf76___ @ 0x180061DF0 (Windows--Internal--ComTaskPool--QueueTask__lambda_2998a484fcd7d742033ed970065ccf76___.c)
 *     _lambda_2998a484fcd7d742033ed970065ccf76_::_lambda_2998a484fcd7d742033ed970065ccf76_ @ 0x180061F04 (_lambda_2998a484fcd7d742033ed970065ccf76_--_lambda_2998a484fcd7d742033ed970065ccf76_.c)
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1800638EC (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800840F0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180084158 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::Launch(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  int v6; // eax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  int v15[2]; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING StringRawBuffer; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  _QWORD v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v20[80]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v21[352]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v19[1] = -2LL;
  v2 = 4LL;
  if ( dword_180510344 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180510344);
    if ( dword_180510344 == -1 )
    {
      dword_180510348 = SHTaskPoolGetUniqueContext(v14);
      Init_thread_footer(&dword_180510344);
    }
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(
           v3,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v2);
  else
    v4 = 0LL;
  *(_QWORD *)v15 = v4;
  v19[0] = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  StringRawBuffer = (HSTRING)WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  SingleViewExperienceTelemetry::Launch::Launch(
    (unsigned int)v20,
    v5,
    (unsigned int)&StringRawBuffer,
    (unsigned int)v19,
    (__int64)v15);
  StringRawBuffer = *(HSTRING *)this;
  string = 0LL;
  v6 = Microsoft::WRL::Wrappers::HString::Set(&string, &StringRawBuffer);
  v7 = v6;
  LODWORD(v18) = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF1,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    CSingleViewShellExperience::BoostPriority(this, 0LL);
    v8 = *((_QWORD *)this + 12);
    *(_QWORD *)v15 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = lambda_2998a484fcd7d742033ed970065ccf76_::_lambda_2998a484fcd7d742033ed970065ccf76_(
           v21,
           v15,
           this,
           &string,
           v20);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_2998a484fcd7d742033ed970065ccf76___(v11, v10, v12, v9);
    lambda_2998a484fcd7d742033ed970065ccf76_::__lambda_2998a484fcd7d742033ed970065ccf76_((__int64)v21);
    if ( v7 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x123,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v15);
  }
  WindowsDeleteString(string);
  string = 0LL;
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)v20);
  return (unsigned int)v7;
}
