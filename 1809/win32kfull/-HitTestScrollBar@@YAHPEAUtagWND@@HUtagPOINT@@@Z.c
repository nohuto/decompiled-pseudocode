/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02286D4
 * Callers:
 *     FindNCHitEx @ 0x1C010E214 (FindNCHitEx.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0020010 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C0106D0C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01C424C (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  LONG x; // ebx
  LONG v5; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  LONG *v12; // r14
  int v13; // r15d
  __int64 v14; // rcx
  LONG v15; // ebp
  int v16; // ebx
  LONG *v17; // rcx
  LONG *v18; // rax
  LONG *v19; // rdx
  LONG *v20; // r14
  LONG y; // [rsp+24h] [rbp-94h]
  char v23[36]; // [rsp+30h] [rbp-88h] BYREF
  char v24; // [rsp+54h] [rbp-64h] BYREF
  char v25; // [rsp+58h] [rbp-60h] BYREF
  char v26; // [rsp+60h] [rbp-58h] BYREF
  char v27; // [rsp+64h] [rbp-54h] BYREF

  x = a3.x;
  y = a3.y;
  v5 = a3.y;
  v7 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v11 = 0;
  v12 = (LONG *)v7;
  if ( v7 )
  {
    v13 = *(_DWORD *)(v7 + 12);
  }
  else
  {
    v14 = *(_QWORD *)(v8 + 40);
    if ( (*(_BYTE *)(v14 + 26) & 0x40) == 0 || a2 )
      v15 = x - *(_DWORD *)(v14 + 88);
    else
      v15 = *(_DWORD *)(v14 + 96) - x;
    v16 = *(_DWORD *)(v14 + 92);
    LOBYTE(v13) = GetWndSBDisableFlags((__int64)a1, a2, v9, v10);
    v5 = y - v16;
    x = v15;
  }
  if ( (v13 & 3) == 3 )
    return 4294967294LL;
  if ( v12 )
  {
    v17 = v12 + 16;
    v18 = v12 + 17;
    v19 = v12 + 14;
    v20 = v12 + 13;
  }
  else
  {
    CalcSBStuff((__int64)a1, (__int64)v23, a2);
    v17 = (LONG *)&v26;
    v18 = (LONG *)&v27;
    v19 = (LONG *)&v25;
    v20 = (LONG *)&v24;
  }
  if ( !a2 )
    v5 = x;
  if ( v5 < *v20 )
  {
    if ( (v13 & 1) == 0 )
      return 60LL;
    return 4294967294LL;
  }
  if ( v5 >= *v19 )
  {
    if ( (v13 & 2) == 0 )
      return 61LL;
    return 4294967294LL;
  }
  if ( v5 < *v18 )
    return 62LL;
  LOBYTE(v11) = v5 < *v17;
  return (unsigned int)(v11 + 63);
}
