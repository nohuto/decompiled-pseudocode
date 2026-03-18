/*
 * XREFs of NtUserScrollWindowEx @ 0x1C002F350
 * Callers:
 *     <none>
 * Callees:
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollWindowEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG64 a4,
        ULONG64 a5,
        __int64 a6,
        ULONG64 a7,
        int a8)
{
  _OWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD *v15; // r9
  __int128 *v16; // rdx
  ULONG64 v17; // rdx
  ULONG64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r8
  _QWORD v23[3]; // [rsp+78h] [rbp-80h] BYREF
  _OWORD v24[2]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-48h] BYREF

  v9 = (_OWORD *)a7;
  v24[0] = 0uLL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v23;
    v23[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v15 = (_OWORD *)a4;
    if ( a4 )
    {
      if ( a4 >= MmUserProbeAddress )
        v15 = (_OWORD *)MmUserProbeAddress;
      v24[1] = *v15;
    }
    v16 = (__int128 *)a5;
    if ( a5 )
    {
      if ( a5 >= MmUserProbeAddress )
        v16 = (__int128 *)MmUserProbeAddress;
      v25 = *v16;
      v16 = &v25;
    }
    v19 = xxxScrollWindowEx((struct tagWND *)v10, (__int64)v16, a6, (unsigned __int64)v24 & -(__int64)(a7 != 0), a8);
    if ( a7 )
    {
      v18 = MmUserProbeAddress;
      v17 = MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v9 = (_OWORD *)MmUserProbeAddress;
      *v9 = v24[0];
    }
    ThreadUnlock1(v18, v17, v20);
  }
  else
  {
    v19 = 0;
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v19;
}
