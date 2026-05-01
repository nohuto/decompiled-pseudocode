/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C678
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180012C34 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1800A03E0 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A52AC (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Prelaunch@CStartExperienceManager@@UEAAJE@Z @ 0x1801B7F60 (-Prelaunch@CStartExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180015158 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800364A8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004CC7C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_57aa3e92036d8099e639386d4804eb50___ @ 0x18006C810 (Windows--Internal--ComTaskPool--QueueTask__lambda_57aa3e92036d8099e639386d4804eb50___.c)
 *     _lambda_57aa3e92036d8099e639386d4804eb50_::_lambda_57aa3e92036d8099e639386d4804eb50_ @ 0x18006C978 (_lambda_57aa3e92036d8099e639386d4804eb50_--_lambda_57aa3e92036d8099e639386d4804eb50_.c)
 *     ??$?0PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1AEBQEAUHWND__@@@Z @ 0x18006C9EC (--$-0PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0.c)
 *     _lambda_57aa3e92036d8099e639386d4804eb50_::__lambda_57aa3e92036d8099e639386d4804eb50_ @ 0x18006CAB4 (_lambda_57aa3e92036d8099e639386d4804eb50_--__lambda_57aa3e92036d8099e639386d4804eb50_.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18006CAE8 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18006CB14 (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180089798 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180089800 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::Launch(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  int v4; // edx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  int v14; // [rsp+28h] [rbp-E0h]
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
  if ( dword_1805C2D10 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805C2D10);
    if ( dword_1805C2D10 == -1 )
    {
      dword_1805C2D14 = SHTaskPoolGetUniqueContext(v13);
      Init_thread_footer(&dword_1805C2D10);
    }
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
    *(_QWORD *)v15 = ExperienceManagerUtils::WindowFromViewWrapper(
                       v3,
                       (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v2);
  else
    *(_QWORD *)v15 = 0LL;
  v19[0] = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  StringRawBuffer = (HSTRING)WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  SingleViewExperienceTelemetry::Launch::Launch(
    (unsigned int)v20,
    v4,
    (unsigned int)&StringRawBuffer,
    (unsigned int)v19,
    (__int64)v15);
  StringRawBuffer = *(HSTRING *)this;
  string = 0LL;
  v5 = Microsoft::WRL::Wrappers::HString::Set(&string, &StringRawBuffer);
  v6 = v5;
  LODWORD(v18) = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5,
      v14);
  }
  else
  {
    CSingleViewShellExperience::BoostPriority(this, 0LL);
    v7 = *((_QWORD *)this + 12);
    *(_QWORD *)v15 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = lambda_57aa3e92036d8099e639386d4804eb50_::_lambda_57aa3e92036d8099e639386d4804eb50_(v21, v15, this, &string);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_57aa3e92036d8099e639386d4804eb50___(v10, v9, v11, v8);
    lambda_57aa3e92036d8099e639386d4804eb50_::__lambda_57aa3e92036d8099e639386d4804eb50_(v21);
    if ( v6 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x130,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6,
        (int)v20);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v15);
  }
  WindowsDeleteString(string);
  string = 0LL;
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)v20);
  return (unsigned int)v6;
}
