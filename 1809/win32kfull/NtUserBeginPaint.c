/*
 * XREFs of NtUserBeginPaint @ 0x1C001DDB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxEndPaint @ 0x1C00FD91C (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  _OWORD v10[7]; // [rsp+40h] [rbp-88h] BYREF

  memset(&v10[2], 0, 0x48uLL);
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( v6 )
  {
    *(_QWORD *)&v10[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v10;
    *((_QWORD *)&v10[0] + 1) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v8 = xxxBeginPaint((struct tagWND *)v6);
    DWORD1(v10[6]) = 0;
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v10[2];
    *(_OWORD *)(a2 + 16) = v10[3];
    *(_OWORD *)(a2 + 32) = v10[4];
    *(_OWORD *)(a2 + 48) = v10[5];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v10[6];
    ThreadUnlock1(MmUserProbeAddress, MmUserProbeAddress);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
