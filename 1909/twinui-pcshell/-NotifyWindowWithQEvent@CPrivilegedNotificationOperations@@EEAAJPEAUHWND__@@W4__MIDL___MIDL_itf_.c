/*
 * XREFs of ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x18003E240
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x180089798 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180089800 (_Init_thread_header.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801334C8 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CPrivilegedNotificationOperations::NotifyWindowWithQEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rbp
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // edi
  int Error; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = a3;
  if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA == -1 )
    {
      `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE = RegisterWindowMessageW(
                                                                                                L"{9993b795-bae5-4752-a837-faa5985c808d}");
      dword_1805BF4CC = `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE;
      Init_thread_footer(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    }
  }
  v9 = *(RTL_SRWLOCK **)(a1 + 48);
  v10 = a5 | 0x10;
  if ( (_DWORD)v8 )
    v10 = a5;
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v9);
  AcquireSRWLockExclusive(v9 + 6);
  EnableIAMAccess(v9[5].Ptr, 1LL);
  if ( (unsigned int)SendEventMessage(a2, dword_1805BF4B4[2 * v8], a4, v10) )
  {
    v11 = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    v11 = Error;
    if ( Error < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x143,
        (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)Error,
        v14);
  }
  EnableIAMAccess(v9[5].Ptr, 0LL);
  ReleaseSRWLockExclusive(v9 + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v9);
  return v11;
}
