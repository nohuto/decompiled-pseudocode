/*
 * XREFs of ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x18001A6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x180086D88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180086DF0 (_Init_thread_header.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CPrivilegedNotificationOperations::NotifyWindowWithQEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  RTL_SRWLOCK *v12; // rsi
  unsigned int v13; // edi
  int Error; // eax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = a3;
  if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA == -1 )
    {
      `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE = RegisterWindowMessageW(
                                                                                                L"{9993b795-bae5-4752-a837-faa5985c808d}");
      dword_1805972BC = `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE;
      Init_thread_footer(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    }
  }
  v9 = *(_QWORD *)(a1 + 48);
  v10 = v9;
  v11 = a5 | 0x10;
  if ( (_DWORD)v8 )
    v11 = a5;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 36));
    v10 = v9;
  }
  v12 = (RTL_SRWLOCK *)(v9 + 48);
  AcquireSRWLockExclusive((PSRWLOCK)(v9 + 48));
  EnableIAMAccess(*(_QWORD *)(v10 + 40), 1LL);
  if ( (unsigned int)SendEventMessage(a2, dword_1805972A4[2 * v8], a4, v11) )
  {
    v13 = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    v13 = Error;
    if ( Error < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x143,
        (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)Error,
        v16);
  }
  EnableIAMAccess(*(_QWORD *)(v10 + 40), 0LL);
  ReleaseSRWLockExclusive(v12);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v10);
  return v13;
}
