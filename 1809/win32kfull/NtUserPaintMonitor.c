/*
 * XREFs of NtUserPaintMonitor @ 0x1C021AA10
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C0131690 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  BOOL v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+28h] [rbp-60h] BYREF
  RECT v19; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (RECT *)MmUserProbeAddress;
  v19 = *a3;
  v10 = ValidateHmonitor(a1);
  v11 = 0;
  if ( v10 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
    v20[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v20;
    v20[1] = v12;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v21[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v21;
    v21[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v18[0] = v12;
    v18[1] = 0LL;
    v11 = xxxDesktopPaintCallback(v10, a2, &v19, (__int64)v18);
    ThreadUnlock1(v14, v13);
    ThreadUnlock1(v16, v15);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v11;
}
