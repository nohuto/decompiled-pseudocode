/*
 * XREFs of _lambda_8477647376d1ac227fe70683c35b05e3_::operator() @ 0x18008D54C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8477647376d1ac227fe70683c35b05e3___::Run @ 0x18008D770 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8477647376d1ac227fe70683c35b05e3___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x18015C6B4 (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_8477647376d1ac227fe70683c35b05e3_::operator()(_QWORD *a1)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(&v10);
  Instance = CoCreateInstance(
               &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
               0LL,
               0x17u,
               &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
               (LPVOID *)ppv);
  v4 = retaddr;
  if ( Instance < 0 )
    goto LABEL_6;
  v9 = 1;
  v5 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, int *))(*(_QWORD *)v10 + 120LL))(v10, L"ActionCenter", &v9);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      828LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  if ( !v9 )
  {
    Instance = CToastCenterExperienceManager::PostTargetedMessage(*a1, 6LL, v6);
    v4 = retaddr;
    if ( Instance < 0 )
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        v4,
        828LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)Instance);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
