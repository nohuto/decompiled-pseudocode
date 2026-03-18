/*
 * XREFs of NtUserPaintMonitor @ 0x1C01F33D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C010F060 (xxxDesktopPaintCallback.c)
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
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v20[2]; // [rsp+28h] [rbp-60h] BYREF
  RECT v21; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v23[4]; // [rsp+60h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (RECT *)MmUserProbeAddress;
  v21 = *a3;
  v10 = ValidateHmonitor(a1);
  v11 = 0;
  if ( v10 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
    v22[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v22;
    v22[1] = v12;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v23[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v23;
    v23[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v20[0] = v12;
    v20[1] = 0LL;
    v11 = xxxDesktopPaintCallback(v10, a2, &v21, (__int64)v20);
    ThreadUnlock1(v14, v13, v15);
    ThreadUnlock1(v17, v16, v18);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v11;
}
