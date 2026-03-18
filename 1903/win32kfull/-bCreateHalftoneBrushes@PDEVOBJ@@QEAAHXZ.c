/*
 * XREFs of ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C003A8C0
 * Callers:
 *     PDEVOBJ_bCreateHalftoneBrushesWrap @ 0x1C003C420 (PDEVOBJ_bCreateHalftoneBrushesWrap.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0036D30 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_CreateStandardMonoPattern @ 0x1C003A4B0 (HT_CreateStandardMonoPattern.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003BBA0 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C01084E0 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bCreateHalftoneBrushes(PDEVOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rsi
  void *v11; // rax
  int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rax
  __int64 v19; // rsi
  __int64 v20; // [rsp+68h] [rbp-19h] BYREF
  char v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+74h] [rbp-Dh]
  __int16 v23; // [rsp+78h] [rbp-9h] BYREF
  char v24; // [rsp+7Ah] [rbp-7h]
  char v25; // [rsp+7Bh] [rbp-6h]
  __int16 v26; // [rsp+7Ch] [rbp-5h]
  __int64 v27; // [rsp+7Eh] [rbp-3h]
  __int16 v28; // [rsp+86h] [rbp+5h]
  __int64 v29; // [rsp+88h] [rbp+7h]
  _DWORD v30[4]; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+A0h] [rbp+1Fh]
  __int64 v32; // [rsp+A8h] [rbp+27h]

  v27 = 0LL;
  v28 = 0;
  if ( PDEVOBJ::pDevHTInfo(this, a2, a3, a4) || (unsigned int)PDEVOBJ::bEnableHalftone(this, 0LL) )
  {
    LODWORD(v8) = 0;
    v9 = 0LL;
    v10 = 1456LL;
    do
    {
      v23 = 1;
      v25 = byte_1C02E4140[v9];
      v24 = 4;
      v26 = 3848;
      v29 = 0LL;
      v11 = PDEVOBJ::pDevHTInfo(this, v5, v6, v7);
      v12 = HT_CreateStandardMonoPattern((__int64)v11, &v23);
      if ( v12 <= 0 )
        break;
      v30[1] = WORD1(v27);
      v30[2] = WORD2(v27);
      v30[3] = 0;
      v32 = 1LL;
      v30[0] = 1;
      v31 = 0LL;
      v20 = 0LL;
      v21 = 0;
      v22 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v20, (struct _DEVBITMAPINFO *)v30, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v20 )
        goto LABEL_11;
      v21 |= 1u;
      LOBYTE(v13) = 5;
      HmgSetOwner(*(_QWORD *)(v20 + 32), 0LL, v13);
      LODWORD(v8) = v8 + 1;
      v14 = *(_QWORD *)this;
      ++v9;
      *(_QWORD *)(v10 + v14) = *(_QWORD *)(v20 + 32);
      v10 += 8LL;
      v29 = *(_QWORD *)(v20 + 72);
      v17 = PDEVOBJ::pDevHTInfo(this, v14, v15, v16);
      if ( (unsigned int)HT_CreateStandardMonoPattern((__int64)v17, &v23) != v12 )
      {
LABEL_11:
        SURFMEM::~SURFMEM((SURFMEM *)&v20);
        break;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v20);
    }
    while ( v10 < 1504 );
    if ( (int)v8 >= 6 )
    {
      SETFLAG(1, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x100u);
      return 1LL;
    }
    v8 = (int)v8;
    if ( (int)v8 > 0 )
    {
      v19 = 8LL * (int)v8 + 1456;
      do
      {
        v19 -= 8LL;
        --v8;
        bDeleteSurface(*(_QWORD *)(v19 + *(_QWORD *)this));
      }
      while ( v8 > 0 );
    }
  }
  return 0LL;
}
