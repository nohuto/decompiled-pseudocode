/*
 * XREFs of NtUserPaintMonitor @ 0x1C02323C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C01167A0 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  BOOL v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+28h] [rbp-60h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h]
  RECT v19; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-38h]
  __int64 v22; // [rsp+58h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp-20h]
  __int64 v25; // [rsp+70h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (RECT *)MmUserProbeAddress;
  v19 = *a3;
  v7 = ValidateHmonitor(a1);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
    v20 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v20;
    v21 = v9;
    if ( v9 )
      HMLockObject(v9);
    v23 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v23;
    v24 = v7;
    HMLockObject(v7);
    v17 = v9;
    v18 = 0LL;
    v8 = xxxDesktopPaintCallback(v7, a2, &v19, (__int64)&v17);
    ThreadUnlock1(v11, v10, v12);
    ThreadUnlock1(v14, v13, v15);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
