/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0240AD8
 * Callers:
 *     FindNCHitEx @ 0x1C00F2358 (FindNCHitEx.c)
 * Callees:
 *     CalcSBStuff @ 0x1C004B584 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C00EB194 (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D73E0 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  LONG *v10; // rsi
  int v11; // r14d
  LONG y; // r15d
  LONG x; // ebx
  __int64 v14; // rcx
  LONG *v15; // rcx
  LONG *v16; // rax
  LONG *v17; // rdx
  LONG *v18; // rsi
  int v21[9]; // [rsp+30h] [rbp-50h] BYREF
  char v22; // [rsp+54h] [rbp-2Ch] BYREF
  char v23; // [rsp+58h] [rbp-28h] BYREF
  char v24; // [rsp+60h] [rbp-20h] BYREF
  char v25; // [rsp+64h] [rbp-1Ch] BYREF

  v5 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v9 = 0;
  v10 = (LONG *)v5;
  if ( v5 )
  {
    v11 = *(_DWORD *)(v5 + 12);
    y = a3.y;
    x = a3.x;
  }
  else
  {
    v14 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v14 + 26) & 0x40) == 0 || a2 )
      x = a3.x - *(_DWORD *)(v14 + 88);
    else
      x = *(_DWORD *)(v14 + 96) - a3.x;
    y = a3.y - *(_DWORD *)(v14 + 92);
    LOBYTE(v11) = GetWndSBDisableFlags((__int64)a1, a2, v7, v8);
  }
  if ( (v11 & 3) == 3 )
    return 4294967294LL;
  if ( v10 )
  {
    v15 = v10 + 16;
    v16 = v10 + 17;
    v17 = v10 + 14;
    v18 = v10 + 13;
  }
  else
  {
    CalcSBStuff((__int64)a1, v21, a2);
    v15 = (LONG *)&v24;
    v16 = (LONG *)&v25;
    v17 = (LONG *)&v23;
    v18 = (LONG *)&v22;
  }
  if ( a2 )
    x = y;
  if ( x < *v18 )
  {
    if ( (v11 & 1) == 0 )
      return 60LL;
    return 4294967294LL;
  }
  if ( x >= *v17 )
  {
    if ( (v11 & 2) == 0 )
      return 61LL;
    return 4294967294LL;
  }
  if ( x < *v16 )
    return 62LL;
  LOBYTE(v9) = x < *v15;
  return (unsigned int)(v9 + 63);
}
