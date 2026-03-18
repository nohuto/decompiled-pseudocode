/*
 * XREFs of NtUserScrollWindowEx @ 0x1C002E700
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollWindowEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG64 a5,
        __int64 a6,
        ULONG64 a7,
        int a8)
{
  __int128 *v10; // rsi
  _OWORD *v11; // r14
  __int64 v12; // rcx
  struct tagWND *v13; // rbx
  ULONG64 v14; // rdx
  ULONG64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  struct tagWND *v20; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int128 v22; // [rsp+90h] [rbp-78h]
  __int128 v23; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-58h] BYREF

  v10 = (__int128 *)a5;
  v11 = (_OWORD *)a7;
  v22 = 0uLL;
  v23 = 0uLL;
  v24 = 0uLL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v13 = (struct tagWND *)ValidateHwnd(a1);
  if ( v13 )
  {
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v19;
    v20 = v13;
    HMLockObject(v13);
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v22 = *a4;
    }
    if ( a5 )
    {
      if ( a5 >= MmUserProbeAddress )
        v10 = (__int128 *)MmUserProbeAddress;
      v23 = *v10;
      v10 = &v23;
    }
    v16 = xxxScrollWindowEx(v13, (__int64)v10, a6, (unsigned __int64)&v24 & -(__int64)(a7 != 0), a8);
    if ( a7 )
    {
      v15 = MmUserProbeAddress;
      v14 = MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v11 = (_OWORD *)MmUserProbeAddress;
      *v11 = v24;
    }
    ThreadUnlock1(v15, v14, v17);
  }
  else
  {
    v16 = 0;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v16;
}
