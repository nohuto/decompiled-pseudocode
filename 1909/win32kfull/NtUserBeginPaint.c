/*
 * XREFs of NtUserBeginPaint @ 0x1C0039310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00E01C0 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v9; // [rsp+38h] [rbp-90h] BYREF
  struct tagWND *v10; // [rsp+40h] [rbp-88h]
  __int64 v11; // [rsp+48h] [rbp-80h]
  _OWORD v12[5]; // [rsp+60h] [rbp-68h] BYREF

  memset(v12, 0, 0x48uLL);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v6 = 0LL;
  if ( v5 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v9;
    v10 = v5;
    HMLockObject(v5);
    v6 = xxxBeginPaint(v5);
    DWORD1(v12[4]) = 0;
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v12[0];
    *(_OWORD *)(a2 + 16) = v12[1];
    *(_OWORD *)(a2 + 32) = v12[2];
    *(_OWORD *)(a2 + 48) = v12[3];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v12[4];
    ThreadUnlock1(MmUserProbeAddress, MmUserProbeAddress, v7);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
