/*
 * XREFs of ?UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z @ 0x18011AC6C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___::Run @ 0x180116DD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z @ 0x180112EB8 (-GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UAFireEvent(__int64 a1, __int64 a2, __int64 a3)
{
  const struct _GUID *v4; // rdx
  UserAssistImpl *v5; // rcx
  struct IShellUserAssist *UserAssistWorker; // rbx
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  v12[1] = -2LL;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  UserAssistWorker = UserAssistImpl::GetUserAssistWorker(v5, v4);
  v14 = (__int64)UserAssistWorker;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  if ( !UserAssistWorker )
  {
    v7 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\uem.h",
      (const char *)0x80004005LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v8 = 2147500037LL;
    v9 = 137LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\uem.h",
      (const char *)v8);
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v12[0] = (__int64)UserAssistWorker;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v10 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, __int64, _DWORD))(*(_QWORD *)v12[0] + 24LL))(
          v12[0],
          &GUID_cebff5cd_ace2_4f4f_9178_9926f41749ea,
          0LL,
          a3,
          0);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = (unsigned int)v10;
    v9 = 138LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v7;
}
