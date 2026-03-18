/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C01FFCCC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0038D48 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C012FA58 (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01A2874 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  LONG x; // ebx
  LONG v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r15
  int v11; // edi
  __int64 v12; // rcx
  LONG v13; // r14d
  int v14; // ebx
  _DWORD *v16; // r14
  LONG y; // [rsp+24h] [rbp-94h]
  _BYTE v18[64]; // [rsp+30h] [rbp-88h] BYREF

  x = a3.x;
  y = a3.y;
  v5 = a3.y;
  v7 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    v11 = *(_DWORD *)(v7 + 12);
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 40);
    if ( (*(_BYTE *)(v12 + 26) & 0x40) == 0 || a2 )
      v13 = x - *(_DWORD *)(v12 + 88);
    else
      v13 = *(_DWORD *)(v12 + 96) - x;
    v14 = *(_DWORD *)(v12 + 92);
    LOBYTE(v11) = GetWndSBDisableFlags((__int64)a1, a2);
    v5 = y - v14;
    x = v13;
  }
  if ( (v11 & 3) == 3 )
    return 4294967294LL;
  if ( v10 )
  {
    v16 = (_DWORD *)(v10 + 16);
  }
  else
  {
    v16 = v18;
    CalcSBStuff((__int64)a1, (__int64)v18, a2);
  }
  if ( !a2 )
    v5 = x;
  if ( v5 < v16[9] )
    return (v11 & 1) != 0 ? -2 : 60;
  if ( v5 >= v16[10] )
    return (v11 & 2) != 0 ? -2 : 61;
  if ( v5 < v16[13] )
    return 62LL;
  LOBYTE(v9) = v5 < v16[12];
  return (unsigned int)(v9 + 63);
}
