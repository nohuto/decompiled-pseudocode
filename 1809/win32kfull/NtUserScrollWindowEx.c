/*
 * XREFs of NtUserScrollWindowEx @ 0x1C0078FC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  _QWORD v22[3]; // [rsp+78h] [rbp-80h] BYREF
  _OWORD v23[2]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-48h] BYREF

  v9 = (_OWORD *)a7;
  v23[0] = 0uLL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v22;
    v22[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v15 = (_OWORD *)a4;
    if ( a4 )
    {
      if ( a4 >= MmUserProbeAddress )
        v15 = (_OWORD *)MmUserProbeAddress;
      v23[1] = *v15;
    }
    v16 = (__int128 *)a5;
    if ( a5 )
    {
      if ( a5 >= MmUserProbeAddress )
        v16 = (__int128 *)MmUserProbeAddress;
      v24 = *v16;
      v16 = &v24;
    }
    v19 = xxxScrollWindowEx((struct tagWND *)v10, (__int64)v16, a6, (unsigned __int64)v23 & -(__int64)(a7 != 0), a8);
    if ( a7 )
    {
      v18 = MmUserProbeAddress;
      v17 = MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v9 = (_OWORD *)MmUserProbeAddress;
      *v9 = v23[0];
    }
    ThreadUnlock1(v18, v17);
  }
  else
  {
    v19 = 0;
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v19;
}
