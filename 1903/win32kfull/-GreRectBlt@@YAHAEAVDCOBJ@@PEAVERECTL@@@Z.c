/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FBAD4
 * Callers:
 *     GreRectangle @ 0x1C00FA310 (GreRectangle.c)
 * Callees:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B5A8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058A1C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C0072DD0 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00FBD30 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // edx
  int v14; // r8d
  int v15; // r8d
  __int128 v16; // xmm0
  _BYTE v18[40]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  char v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+74h] [rbp-8Ch]
  char v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int16 v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  __int16 v28; // [rsp+B8h] [rbp-48h]
  _BYTE v29[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v30; // [rsp+120h] [rbp+20h]
  __int64 v31; // [rsp+128h] [rbp+28h]
  __int64 v32; // [rsp+140h] [rbp+40h]
  __int64 v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+160h] [rbp+60h]
  __int128 v35; // [rsp+198h] [rbp+98h]
  __int64 v36; // [rsp+1D0h] [rbp+D0h]
  int v37; // [rsp+1D8h] [rbp+D8h]
  int v38; // [rsp+1DCh] [rbp+DCh]

  v2 = *(_QWORD *)a1;
  v33 = 0LL;
  v38 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 976) + 212LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  v7 = 1;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 256;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 256;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v18, a1);
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v22 & 1) != 0 )
    {
      v11 = *(_QWORD *)a1;
      v32 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      v30 = *(_QWORD *)(v32 + 128);
      v31 = *(_QWORD *)(v11 + 88);
      if ( (v6 & 0xE8) == 0 )
      {
        v34 = 0LL;
        goto LABEL_12;
      }
      v34 = v11 + 1184;
      v12 = *(_QWORD *)(v11 + 976);
      if ( (*(_DWORD *)(v12 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v11, *(_QWORD *)(v12 + 160));
        v11 = *(_QWORD *)a1;
      }
      v9 = *(_QWORD *)(v11 + 976);
      v13 = *(_DWORD *)(v9 + 152);
      if ( (v13 & 1) != 0 || (*(_DWORD *)(v11 + 316) & 1) != 0 )
      {
        *(_DWORD *)(v9 + 152) = v13 & 0xFFFFFFFE;
        *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v34, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v31, v30, v32, 1);
      }
      v8 = v34;
      if ( (*(_DWORD *)(v34 + 120) & 0x100) == 0 )
      {
        v11 = *(_QWORD *)a1;
        v36 = *(_QWORD *)(*(_QWORD *)a1 + 1176LL);
        if ( (*(_DWORD *)(v34 + 120) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v11 + 976) + 213LL) == 1 )
        {
          v14 = 43520;
          goto LABEL_13;
        }
LABEL_12:
        v14 = (_DWORD)v5 << 8;
LABEL_13:
        v15 = v5 | v14;
        if ( (*(_DWORD *)(v11 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v16 = *(_OWORD *)a2;
        v37 = v15;
        v35 = v16;
        v7 = BLTRECORD::bBitBlt((BLTRECORD *)v29, (DC **)a1, a1, v6);
        goto LABEL_16;
      }
    }
    v7 = 0;
  }
LABEL_16:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v18, v8, (SURFACE **)v9, v10);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v29);
  return v7;
}
