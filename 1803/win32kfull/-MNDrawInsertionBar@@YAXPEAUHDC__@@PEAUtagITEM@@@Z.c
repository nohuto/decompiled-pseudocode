/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C001080C
 * Callers:
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  _DWORD *v2; // r10
  unsigned int v3; // ebx
  int v4; // r14d
  int v5; // r9d
  int v6; // edi
  int v7; // esi
  int v8; // r8d
  __int64 v9; // r15
  int v10; // r11d
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h]
  int v13; // [rsp+40h] [rbp-21h]
  int v14; // [rsp+44h] [rbp-1Dh]
  __int64 v15; // [rsp+48h] [rbp-19h]
  int v16; // [rsp+50h] [rbp-11h]
  int v17; // [rsp+54h] [rbp-Dh]
  int v18; // [rsp+58h] [rbp-9h]
  int v19; // [rsp+5Ch] [rbp-5h]
  __int64 v20; // [rsp+60h] [rbp-1h]
  int v21; // [rsp+68h] [rbp+7h]
  int v22; // [rsp+6Ch] [rbp+Bh]
  int v23; // [rsp+70h] [rbp+Fh]
  int v24; // [rsp+74h] [rbp+13h]
  __int64 v25; // [rsp+78h] [rbp+17h]

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD *)(*(_QWORD *)a2 + 4LL) & 0x80000000;
  if ( *(int *)(*(_QWORD *)a2 + 4LL) < 0 || (*(_DWORD *)(*(_QWORD *)a2 + 4LL) & 0x40000000) != 0 )
  {
    v4 = v2[16];
    v5 = v2[17];
    v6 = *(_DWORD *)(gpsi + 2168LL);
    v7 = *(_DWORD *)(gpsi + 2172LL);
    v13 = v6;
    v14 = v7;
    v11 = v4 + v6;
    if ( v3 )
    {
      v8 = v5;
      v12 = v5;
    }
    else
    {
      v8 = v5 + v2[19] - v7;
      v12 = v8;
    }
    v9 = *(_QWORD *)(gpsi + 4800LL);
    v10 = v2[18];
    v16 = v4 + 2 * v6;
    v15 = v9;
    v18 = v10 - 4 * v6;
    v19 = v7 / 2;
    if ( v3 )
      v17 = v5;
    else
      v17 = v5 + v2[19] - v7 / 2;
    v22 = v8;
    v20 = v9;
    v21 = v4 + v10 - 2 * v6;
    v23 = v6;
    v24 = v7;
    v25 = v9;
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)&v11, 3u);
  }
}
