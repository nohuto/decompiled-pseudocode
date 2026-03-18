/*
 * XREFs of ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C00C4FDC
 * Callers:
 *     PDEVOBJ_bCreateHalftoneBrushesWrap @ 0x1C00C6B40 (PDEVOBJ_bCreateHalftoneBrushesWrap.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00C144C (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_CreateStandardMonoPattern @ 0x1C00C4BCC (HT_CreateStandardMonoPattern.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00C62BC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00E2390 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bCreateHalftoneBrushes(PDEVOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rsi
  void *v9; // rax
  int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // rax
  __int64 v16; // rsi
  __int64 v17; // [rsp+68h] [rbp-19h] BYREF
  char v18; // [rsp+70h] [rbp-11h]
  int v19; // [rsp+74h] [rbp-Dh]
  __int16 v20; // [rsp+78h] [rbp-9h] BYREF
  char v21; // [rsp+7Ah] [rbp-7h]
  char v22; // [rsp+7Bh] [rbp-6h]
  __int16 v23; // [rsp+7Ch] [rbp-5h]
  __int64 v24; // [rsp+7Eh] [rbp-3h]
  __int16 v25; // [rsp+86h] [rbp+5h]
  __int64 v26; // [rsp+88h] [rbp+7h]
  _DWORD v27[4]; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+A0h] [rbp+1Fh]
  __int64 v29; // [rsp+A8h] [rbp+27h]

  v24 = 0LL;
  v25 = 0;
  if ( PDEVOBJ::pDevHTInfo(this, a2, a3) || (unsigned int)PDEVOBJ::bEnableHalftone(this, 0LL) )
  {
    LODWORD(v6) = 0;
    v7 = 0LL;
    v8 = 1456LL;
    do
    {
      v20 = 1;
      v22 = byte_1C02E3700[v7];
      v21 = 4;
      v23 = 3848;
      v26 = 0LL;
      v9 = PDEVOBJ::pDevHTInfo(this, v4, v5);
      v10 = HT_CreateStandardMonoPattern((__int64)v9, &v20);
      if ( v10 <= 0 )
        break;
      v27[1] = WORD1(v24);
      v27[2] = WORD2(v24);
      v27[3] = 0;
      v29 = 1LL;
      v27[0] = 1;
      v28 = 0LL;
      v17 = 0LL;
      v18 = 0;
      v19 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v17, (struct _DEVBITMAPINFO *)v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v17 )
        goto LABEL_11;
      v18 |= 1u;
      LOBYTE(v11) = 5;
      HmgSetOwner(*(_QWORD *)(v17 + 32), 0LL, v11);
      LODWORD(v6) = v6 + 1;
      v12 = *(_QWORD *)this;
      ++v7;
      *(_QWORD *)(v8 + v12) = *(_QWORD *)(v17 + 32);
      v8 += 8LL;
      v26 = *(_QWORD *)(v17 + 72);
      v14 = PDEVOBJ::pDevHTInfo(this, v12, v13);
      if ( (unsigned int)HT_CreateStandardMonoPattern((__int64)v14, &v20) != v10 )
      {
LABEL_11:
        SURFMEM::~SURFMEM((SURFMEM *)&v17);
        break;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v17);
    }
    while ( v8 < 1504 );
    if ( (int)v6 >= 6 )
    {
      SETFLAG(1, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x100u);
      return 1LL;
    }
    v6 = (int)v6;
    if ( (int)v6 > 0 )
    {
      v16 = 8LL * (int)v6 + 1456;
      do
      {
        v16 -= 8LL;
        --v6;
        bDeleteSurface(*(_QWORD *)(v16 + *(_QWORD *)this));
      }
      while ( v6 > 0 );
    }
  }
  return 0LL;
}
