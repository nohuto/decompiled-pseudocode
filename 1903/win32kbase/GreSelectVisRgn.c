/*
 * XREFs of GreSelectVisRgn @ 0x1C00162B0
 * Callers:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C001F930 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     NtUserGetDC @ 0x1C0029560 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C003C510 (GetMonitorDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C001631C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C001649C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     HmgShareLockEx @ 0x1C001BA50 (HmgShareLockEx.c)
 */

__int64 __fastcall GreSelectVisRgn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v9 = 0;
  v10 = 0;
  v4 = a2;
  LOBYTE(a2) = 1;
  v8 = HmgShareLockEx(a1, a2, 0LL);
  v5 = v8;
  v6 = GreSelectVisRgnInternal(&v8, v4, a3);
  if ( v5 )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v8);
  return v6;
}
