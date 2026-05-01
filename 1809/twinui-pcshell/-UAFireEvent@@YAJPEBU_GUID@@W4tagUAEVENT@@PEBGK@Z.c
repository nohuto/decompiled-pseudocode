/*
 * XREFs of ?UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z @ 0x1800F59EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___::Run @ 0x1800F1F70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z @ 0x1800EED9C (-GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UAFireEvent(__int64 a1, __int64 a2, __int64 a3)
{
  const struct _GUID *v4; // rdx
  UserAssistImpl *v5; // rcx
  struct IShellUserAssist *UserAssistWorker; // rbx
  int v7; // edi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IShellUserAssist *v14; // [rsp+50h] [rbp+8h] BYREF

  v12[1] = -2LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  UserAssistWorker = UserAssistImpl::GetUserAssistWorker(v5, v4);
  v12[0] = (__int64)UserAssistWorker;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
  if ( UserAssistWorker )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
    v14 = UserAssistWorker;
    v7 = 0;
  }
  else
  {
    v7 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\uem.h",
      (const char *)0x80004005LL);
    UserAssistWorker = v14;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 137LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\uem.h",
      (const char *)v8);
    goto LABEL_9;
  }
  v10 = (*(__int64 (__fastcall **)(struct IShellUserAssist *, GUID *, _QWORD, __int64, _DWORD))(*(_QWORD *)UserAssistWorker
                                                                                              + 24LL))(
          UserAssistWorker,
          &GUID_cebff5cd_ace2_4f4f_9178_9926f41749ea,
          0LL,
          a3,
          0);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = (unsigned int)v10;
    v9 = 138LL;
    goto LABEL_8;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v7;
}
