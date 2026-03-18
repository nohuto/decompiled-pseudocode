/*
 * XREFs of ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0012028
 * Callers:
 *     PDEVOBJ_bCreateHalftoneBrushesWrap @ 0x1C0136A70 (PDEVOBJ_bCreateHalftoneBrushesWrap.c)
 * Callees:
 *     HT_CreateStandardMonoPattern @ 0x1C00114C8 (HT_CreateStandardMonoPattern.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00133E4 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C010209C (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0112F44 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall PDEVOBJ::bCreateHalftoneBrushes(PDEVOBJ *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r14
  int v5; // eax
  int v6; // r15d
  __int64 v7; // r8
  int v8; // eax
  __int64 v10; // rsi
  __int64 v11; // [rsp+68h] [rbp-9h] BYREF
  char v12; // [rsp+70h] [rbp-1h]
  int v13; // [rsp+74h] [rbp+3h]
  __int16 v14; // [rsp+78h] [rbp+7h] BYREF
  char v15; // [rsp+7Ah] [rbp+9h]
  char v16; // [rsp+7Bh] [rbp+Ah]
  __int16 v17; // [rsp+7Ch] [rbp+Bh]
  unsigned __int16 v18; // [rsp+80h] [rbp+Fh]
  unsigned __int16 v19; // [rsp+82h] [rbp+11h]
  __int64 v20; // [rsp+88h] [rbp+17h]
  _QWORD v21[5]; // [rsp+90h] [rbp+1Fh] BYREF

  if ( PDEVOBJ::pDevHTInfo(this) || (unsigned int)PDEVOBJ::bEnableHalftone(this, 0LL) )
  {
    LODWORD(v2) = 0;
    v3 = 1456LL;
    v4 = 0LL;
    do
    {
      v20 = 0LL;
      v16 = byte_1C02D1ED0[v4];
      v14 = 1;
      v15 = 4;
      v17 = 3848;
      v5 = (unsigned int)PDEVOBJ::pDevHTInfo(this);
      v6 = HT_CreateStandardMonoPattern(v5, &v14);
      if ( v6 <= 0 )
        break;
      memset(v21, 0, 0x20uLL);
      v21[2] = 0LL;
      v11 = 0LL;
      v13 = 0;
      HIDWORD(v21[0]) = v18;
      LODWORD(v21[1]) = v19;
      LODWORD(v21[0]) = 1;
      LODWORD(v21[3]) = 1;
      v12 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v21, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v11 )
        goto LABEL_11;
      v12 |= 1u;
      LOBYTE(v7) = 5;
      HmgSetOwner(*(_QWORD *)(v11 + 32), 0LL, v7);
      LODWORD(v2) = v2 + 1;
      ++v4;
      *(_QWORD *)(v3 + *(_QWORD *)this) = *(_QWORD *)(v11 + 32);
      v3 += 8LL;
      v20 = *(_QWORD *)(v11 + 72);
      v8 = (unsigned int)PDEVOBJ::pDevHTInfo(this);
      if ( (unsigned int)HT_CreateStandardMonoPattern(v8, &v14) != v6 )
      {
LABEL_11:
        SURFMEM::~SURFMEM((SURFMEM *)&v11);
        break;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v11);
    }
    while ( v3 < 1504 );
    if ( (int)v2 >= 6 )
    {
      SETFLAG(1, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x100u);
      return 1LL;
    }
    v2 = (int)v2;
    if ( (int)v2 > 0 )
    {
      v10 = 8LL * (int)v2 + 1456;
      do
      {
        v10 -= 8LL;
        --v2;
        bDeleteSurface(*(_QWORD *)(v10 + *(_QWORD *)this));
      }
      while ( v2 > 0 );
    }
  }
  return 0LL;
}
