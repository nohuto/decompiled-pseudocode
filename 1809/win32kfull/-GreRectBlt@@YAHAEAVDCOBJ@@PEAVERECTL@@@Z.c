/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A4848
 * Callers:
 *     GreRectangle @ 0x1C00A3F7C (GreRectangle.c)
 * Callees:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C004CA9C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009D094 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00A0014 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A4AFC (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // edx
  int v12; // r8d
  int v13; // r8d
  __int128 v14; // xmm0
  HDC v16[6]; // [rsp+48h] [rbp-C0h] BYREF
  char v17; // [rsp+78h] [rbp-90h]
  int v18; // [rsp+7Ch] [rbp-8Ch]
  int v19; // [rsp+A0h] [rbp-68h]
  char v20; // [rsp+B8h] [rbp-50h]
  _BYTE v21[48]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v22[104]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v23[32]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v24; // [rsp+178h] [rbp+70h]
  __int64 v25; // [rsp+180h] [rbp+78h]
  __int64 v26; // [rsp+198h] [rbp+90h]
  __int64 v27; // [rsp+1A8h] [rbp+A0h]
  __int64 v28; // [rsp+1B8h] [rbp+B0h]
  __int128 v29; // [rsp+1F0h] [rbp+E8h]
  __int64 v30; // [rsp+228h] [rbp+120h]
  int v31; // [rsp+230h] [rbp+128h]
  int v32; // [rsp+234h] [rbp+12Ch]

  v2 = *(_QWORD *)a1;
  v27 = 0LL;
  v32 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 976) + 212LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v16[5] = 0LL;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v21);
  DCOBJ::DCOBJ((DCOBJ *)v22);
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v16, (DC **)a1);
  v7 = 1;
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v20 & 1) == 0 )
    {
LABEL_12:
      v7 = 0;
      goto LABEL_21;
    }
    v8 = *(_QWORD *)a1;
    v26 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v24 = *(_QWORD *)(v26 + 128);
    v25 = *(_QWORD *)(v8 + 88);
    if ( (v6 & 0xE8) != 0 )
    {
      v28 = v8 + 1208;
      v9 = *(_QWORD *)(v8 + 976);
      if ( (*(_DWORD *)(v9 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v8, *(_QWORD *)(v9 + 160));
        v8 = *(_QWORD *)a1;
      }
      v10 = *(_QWORD *)(v8 + 976);
      v11 = *(_DWORD *)(v10 + 152);
      if ( (v11 & 1) != 0 || (*(_DWORD *)(v8 + 316) & 1) != 0 )
      {
        *(_DWORD *)(v10 + 152) = v11 & 0xFFFFFFFE;
        *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v28, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v25, v24, v26, 1);
      }
      if ( (*(_DWORD *)(v28 + 120) & 0x100) != 0 )
        goto LABEL_12;
      v8 = *(_QWORD *)a1;
      v30 = *(_QWORD *)(*(_QWORD *)a1 + 1200LL);
      if ( (*(_DWORD *)(v28 + 120) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v8 + 976) + 213LL) == 1 )
      {
        v12 = 43520;
LABEL_18:
        v13 = v5 | v12;
        if ( (*(_DWORD *)(v8 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v14 = *(_OWORD *)a2;
        v27 = 0LL;
        v31 = v13;
        v29 = v14;
        v7 = BLTRECORD::bBitBlt((BLTRECORD *)v23, (DC **)a1, a1, v6);
        goto LABEL_21;
      }
    }
    else
    {
      v28 = 0LL;
    }
    v12 = (_DWORD)v5 << 8;
    goto LABEL_18;
  }
LABEL_21:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v16);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v23);
  return v7;
}
