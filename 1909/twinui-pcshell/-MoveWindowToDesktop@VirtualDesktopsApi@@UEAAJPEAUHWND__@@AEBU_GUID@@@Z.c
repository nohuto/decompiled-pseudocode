/*
 * XREFs of ?MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z @ 0x18041BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800548AC (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180426614 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopsApi::MoveWindowToDesktop(VirtualDesktopsApi *this, HWND a2, const struct _GUID *a3)
{
  int CallingProcessHandle; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  DWORD ProcessId; // edi
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, HWND, __int128 *, ULONGLONG); // rbx
  ULONGLONG TickCount64; // rax
  int v13; // eax
  RTL_SRWLOCK *v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD dwProcessId; // [rsp+78h] [rbp+10h] BYREF
  HANDLE Process; // [rsp+88h] [rbp+20h] BYREF

  v15[1] = (RTL_SRWLOCK *)-2LL;
  if ( !a2 )
  {
    CallingProcessHandle = -2147024809;
    v7 = 99LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    return (unsigned int)CallingProcessHandle;
  }
  dwProcessId = 0;
  GetWindowThreadProcessId(a2, &dwProcessId);
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&Process);
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v8, 0LL, &Process);
  if ( CallingProcessHandle < 0 )
    ProcessId = dwProcessId;
  else
    ProcessId = GetProcessId(Process);
  CAutoHandle<void *>::~CAutoHandle<void *>(&Process);
  if ( CallingProcessHandle < 0 )
  {
    v7 = 105LL;
    goto LABEL_3;
  }
  if ( dwProcessId != ProcessId )
  {
    CallingProcessHandle = -2147024891;
    v7 = 108LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11), v15);
  v10 = *((_QWORD *)this + 10);
  v11 = *(__int64 (__fastcall **)(__int64, HWND, __int128 *, ULONGLONG))(*(_QWORD *)v10 + 32LL);
  v16 = (__int128)*a3;
  TickCount64 = GetTickCount64();
  v13 = v11(v10, a2, &v16, TickCount64);
  CallingProcessHandle = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v13);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v15);
  return (unsigned int)CallingProcessHandle;
}
