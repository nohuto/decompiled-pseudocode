/*
 * XREFs of ?MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z @ 0x180396380
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18004DD7C (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18004EEB8 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopsApi::MoveWindowToDesktop(VirtualDesktopsApi *this, HWND a2, const struct _GUID *a3)
{
  int CallingProcessHandle; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  DWORD ProcessId; // edi
  __int64 *v10; // rdi
  __int64 v11; // rbx
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
  Process = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v8, 0, &Process);
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
  v16 = (__int128)*a3;
  v10 = (__int64 *)*((_QWORD *)this + 10);
  v11 = *v10;
  TickCount64 = GetTickCount64();
  v13 = (*(__int64 (__fastcall **)(__int64 *, HWND, __int128 *, ULONGLONG))(v11 + 32))(v10, a2, &v16, TickCount64);
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
