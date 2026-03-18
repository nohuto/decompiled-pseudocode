/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00CF134
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ADDE0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00B16A4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C00CEAE8 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C0287704 (GreCreateHalftonePalette.c)
 * Callees:
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C0017E58 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00D3F58 (HT_CreateDeviceHalftoneInfo.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C0106D54 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  __int64 v2; // rax
  __int64 v5; // r11
  unsigned int v6; // eax
  __int16 v7; // di
  int v8; // r9d
  int v9; // r8d
  int v10; // r10d
  int v11; // ecx
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int64 ThreadWin32Thread; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  signed __int32 v17; // ett
  __int64 v18; // rbx
  unsigned int v19; // edi
  signed __int32 v21; // ett
  __int64 v22; // rdx
  __int64 v23; // rdi
  _QWORD *v24; // [rsp+28h] [rbp-D8h] BYREF
  int v25; // [rsp+30h] [rbp-D0h]
  int Src; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh]
  __int16 v28; // [rsp+46h] [rbp-BAh]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int128 v30; // [rsp+50h] [rbp-B0h]
  _WORD *v31; // [rsp+60h] [rbp-A0h]
  _WORD *v32; // [rsp+68h] [rbp-98h]
  __int16 v33; // [rsp+70h] [rbp-90h]
  __int16 v34; // [rsp+72h] [rbp-8Eh]
  __int16 v35; // [rsp+74h] [rbp-8Ch]
  __int16 v36; // [rsp+76h] [rbp-8Ah]
  __int128 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int16 v39; // [rsp+90h] [rbp-70h]
  __int16 v40; // [rsp+92h] [rbp-6Eh]
  __int16 v41; // [rsp+94h] [rbp-6Ch]
  char v42; // [rsp+96h] [rbp-6Ah]
  char v43; // [rsp+97h] [rbp-69h]
  int v44; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v45; // [rsp+A4h] [rbp-5Ch]
  __int16 v46; // [rsp+A6h] [rbp-5Ah]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  _WORD v50[8]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v51[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)this;
  v25 = 0;
  v24 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                        (PALMEMOBJ *)&v24,
                        *(_DWORD *)(v2 + 2368),
                        (struct _GDIINFO *)(v2 + 2128)) )
  {
LABEL_36:
    v19 = 0;
    goto LABEL_15;
  }
  v5 = *(_QWORD *)this;
  Src = 1213491459;
  v43 = 0;
  v27 = *(_WORD *)(v5 + 2372);
  v42 = *(_BYTE *)(v5 + 2375);
  v6 = *(_DWORD *)(v5 + 2364);
  if ( v6 > 0x12 )
  {
    v7 = 17;
    v28 = 17;
  }
  else
  {
    v7 = (unsigned __int8)v6;
    v28 = (unsigned __int8)v6;
  }
  v8 = *(_DWORD *)(v5 + 2324);
  v9 = *(_DWORD *)(v5 + 2320);
  v10 = *(_DWORD *)(v5 + 2328);
  v39 = v9;
  v40 = v8;
  v41 = v10;
  v11 = v10 + v9 + v8;
  v29 = 0LL;
  v30 = 0LL;
  v33 = v11 / 3;
  if ( v7 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 2400) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v5 + 2404) - 4) <= 0xFC
      && *(_QWORD *)(v5 + 2408)
      && *(_QWORD *)(v5 + 2416)
      && *(_QWORD *)(v5 + 2424) )
    {
      v44 = 32;
      v45 = *(_WORD *)(v5 + 2400);
      v46 = *(_WORD *)(v5 + 2404);
      v47 = *(_QWORD *)(v5 + 2408);
      v48 = *(_QWORD *)(v5 + 2416);
      v49 = *(_QWORD *)(v5 + 2424);
      *(_QWORD *)&v30 = &v44;
    }
    else
    {
      v28 = 17;
    }
  }
  v51[0] = *(_WORD *)(v5 + 2236);
  v51[1] = *(_WORD *)(v5 + 2240);
  v51[2] = *(_WORD *)(v5 + 2244);
  v51[3] = *(_WORD *)(v5 + 2248);
  v51[4] = *(_WORD *)(v5 + 2252);
  v51[5] = *(_WORD *)(v5 + 2256);
  v51[6] = *(_WORD *)(v5 + 2260);
  v51[7] = *(_WORD *)(v5 + 2264);
  v51[8] = *(_WORD *)(v5 + 2268);
  v51[9] = *(_WORD *)(v5 + 2272);
  v51[10] = *(_WORD *)(v5 + 2276);
  v51[11] = *(_WORD *)(v5 + 2280);
  v51[12] = *(_WORD *)(v5 + 2284);
  v51[13] = *(_WORD *)(v5 + 2288);
  v51[14] = *(_WORD *)(v5 + 2292);
  v51[15] = *(_WORD *)(v5 + 2296);
  v51[16] = *(_WORD *)(v5 + 2300);
  v51[17] = *(_WORD *)(v5 + 2304);
  v51[18] = *(_WORD *)(v5 + 2308);
  v51[19] = *(_WORD *)(v5 + 2312);
  v51[20] = *(_WORD *)(v5 + 2316);
  v31 = v51;
  v50[0] = *(_WORD *)(v5 + 2332);
  v50[1] = *(_WORD *)(v5 + 2336);
  v50[2] = *(_WORD *)(v5 + 2340);
  v50[3] = *(_WORD *)(v5 + 2344);
  v50[4] = *(_WORD *)(v5 + 2348);
  v50[5] = *(_WORD *)(v5 + 2352);
  v32 = v50;
  v34 = *(_WORD *)(v5 + 2168);
  v35 = *(_WORD *)(v5 + 2172);
  v36 = *(_WORD *)(v5 + 2356);
  if ( a2 )
  {
    v12 = *(_OWORD *)&a2->caSize;
    v13 = *(_QWORD *)&a2->caContrast;
  }
  else
  {
    v12 = DefaultCA;
    v13 = 0LL;
  }
  v38 = v13;
  v37 = v12;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (unsigned int)(v11 / 3));
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src) <= 0 )
  {
    EngSetLastError(8u);
    v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
    if ( v23 && PDEVOBJ::bAllowShareAccess(this) && (*(_DWORD *)(v23 + 104) || *(_DWORD *)(v23 + 108)) )
      *(_QWORD *)(v23 + 288) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1504LL) = 0LL;
    goto LABEL_36;
  }
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess(this)
    && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
  {
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 296) = gcModeChanges;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 1504LL) = 0LL;
  }
  v16 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v17 = *(_DWORD *)(v16 + 40);
  while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 40), v17 & 0xFFFFFDFF, v17) );
  v18 = *(_QWORD *)this;
  v19 = 1;
  if ( (*(_DWORD *)(v18 + 40) & 1) == 0
    && (unsigned int)XEPALOBJ::bEqualEntries((__int64 *)&v24, *(_QWORD *)(v18 + 1800)) )
  {
    _m_prefetchw((const void *)(v18 + 40));
    do
      v21 = *(_DWORD *)(v18 + 40);
    while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 40), v21 | 0x200, v21) );
  }
  LOBYTE(v15) = 8;
  MEMORY[0] = *v24;
  HmgSetOwner(*v24, 0LL, v15);
  v25 = 1;
LABEL_15:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v24);
  return v19;
}
