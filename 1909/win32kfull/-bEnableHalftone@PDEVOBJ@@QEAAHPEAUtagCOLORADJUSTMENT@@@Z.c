/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00C62BC
 * Callers:
 *     EngHTBlt @ 0x1C00C0A94 (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C00C4FDC (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00C6D50 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00D51B4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreCreateHalftonePalette @ 0x1C02AFD6C (GreCreateHalftonePalette.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00C5780 (HT_CreateDeviceHalftoneInfo.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00C66B4 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C00C6AC8 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  __int16 v6; // r8
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 ThreadWin32Thread; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  signed __int32 v15; // ett
  __int64 v16; // rbx
  unsigned int v17; // edi
  signed __int32 v19; // ett
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rbx
  _QWORD *v23; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-D8h] BYREF
  int v25; // [rsp+30h] [rbp-D0h]
  int Src; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh]
  __int16 v28; // [rsp+46h] [rbp-BAh]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int128 v30; // [rsp+50h] [rbp-B0h]
  _WORD *v31; // [rsp+60h] [rbp-A0h]
  __int64 *v32; // [rsp+68h] [rbp-98h]
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
  _QWORD v44[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-40h] BYREF
  int v46; // [rsp+C8h] [rbp-38h]
  _WORD v47[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)this;
  v25 = 0;
  v24 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                        (PALMEMOBJ *)&v24,
                        *(_DWORD *)(v2 + 2376),
                        (struct _GDIINFO *)(v2 + 2136)) )
  {
LABEL_36:
    v17 = 0;
    goto LABEL_16;
  }
  v28 = 0;
  memset(v44, 0, sizeof(v44));
  v5 = *(_QWORD *)this;
  Src = 1213491459;
  v43 = 0;
  v27 = *(_WORD *)(v5 + 2380);
  v42 = *(_BYTE *)(v5 + 2383);
  if ( *(_DWORD *)(v5 + 2372) > 0x12u )
  {
    v6 = 17;
    v28 = 17;
  }
  else
  {
    v6 = *(unsigned __int8 *)(v5 + 2372);
    v28 = v6;
  }
  v7 = *(_DWORD *)(v5 + 2332) + *(_DWORD *)(v5 + 2328) + *(_DWORD *)(v5 + 2336);
  v30 = 0LL;
  v29 = 0LL;
  v39 = *(_WORD *)(v5 + 2328);
  v40 = *(_WORD *)(v5 + 2332);
  v41 = *(_WORD *)(v5 + 2336);
  v33 = v7 / 3;
  if ( v6 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 2408) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v5 + 2412) - 4) <= 0xFC
      && *(_QWORD *)(v5 + 2416)
      && *(_QWORD *)(v5 + 2424)
      && *(_QWORD *)(v5 + 2432) )
    {
      LODWORD(v44[0]) = 32;
      WORD2(v44[0]) = *(_WORD *)(v5 + 2408);
      HIWORD(v44[0]) = *(_WORD *)(v5 + 2412);
      v44[1] = *(_QWORD *)(v5 + 2416);
      v44[2] = *(_QWORD *)(v5 + 2424);
      v44[3] = *(_QWORD *)(v5 + 2432);
      *(_QWORD *)&v30 = v44;
    }
    else
    {
      v28 = 17;
    }
  }
  memset(v47, 0, 0x2AuLL);
  v47[0] = *(_WORD *)(v5 + 2244);
  v47[1] = *(_WORD *)(v5 + 2248);
  v47[2] = *(_WORD *)(v5 + 2252);
  v47[3] = *(_WORD *)(v5 + 2256);
  v47[4] = *(_WORD *)(v5 + 2260);
  v47[5] = *(_WORD *)(v5 + 2264);
  v47[6] = *(_WORD *)(v5 + 2268);
  v47[7] = *(_WORD *)(v5 + 2272);
  v47[8] = *(_WORD *)(v5 + 2276);
  v47[9] = *(_WORD *)(v5 + 2280);
  v47[10] = *(_WORD *)(v5 + 2284);
  v47[11] = *(_WORD *)(v5 + 2288);
  v47[12] = *(_WORD *)(v5 + 2292);
  v47[13] = *(_WORD *)(v5 + 2296);
  v47[14] = *(_WORD *)(v5 + 2300);
  v47[15] = *(_WORD *)(v5 + 2304);
  v47[16] = *(_WORD *)(v5 + 2308);
  v47[17] = *(_WORD *)(v5 + 2312);
  v47[18] = *(_WORD *)(v5 + 2316);
  v47[19] = *(_WORD *)(v5 + 2320);
  v47[20] = *(_WORD *)(v5 + 2324);
  v31 = v47;
  v45 = 0LL;
  v46 = 0;
  LOWORD(v45) = *(_WORD *)(v5 + 2340);
  WORD1(v45) = *(_WORD *)(v5 + 2344);
  WORD2(v45) = *(_WORD *)(v5 + 2348);
  HIWORD(v45) = *(_WORD *)(v5 + 2352);
  LOWORD(v46) = *(_WORD *)(v5 + 2356);
  HIWORD(v46) = *(_WORD *)(v5 + 2360);
  v32 = &v45;
  v34 = *(_WORD *)(v5 + 2176);
  v35 = *(_WORD *)(v5 + 2180);
  v36 = *(_WORD *)(v5 + 2364);
  if ( a2 )
  {
    v10 = *(_OWORD *)&a2->caSize;
    v11 = *(_QWORD *)&a2->caContrast;
  }
  else
  {
    v10 = DefaultCA;
    v11 = 0LL;
  }
  v38 = v11;
  v37 = v10;
  v23 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9);
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src, &v23) <= 0 )
  {
    EngSetLastError(8u);
    v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21);
    if ( v22 && PDEVOBJ::bAllowShareAccess(this) && (*(_DWORD *)(v22 + 104) || *(_DWORD *)(v22 + 108)) )
      *(_QWORD *)(v22 + 288) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
    goto LABEL_36;
  }
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess(this)
    && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
  {
    *(_QWORD *)(ThreadWin32Thread + 288) = v23;
    *(_DWORD *)(ThreadWin32Thread + 296) = gcModeChanges;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 1512LL) = v23;
  }
  v14 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v15 = *(_DWORD *)(v14 + 40);
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 40), v15 & 0xFFFFFDFF, v15) );
  v16 = *(_QWORD *)this;
  v17 = 1;
  if ( (*(_DWORD *)(v16 + 40) & 1) == 0 && (unsigned int)XEPALOBJ::bEqualEntries(&v24, *(_QWORD *)(v16 + 1808)) )
  {
    _m_prefetchw((const void *)(v16 + 40));
    do
      v19 = *(_DWORD *)(v16 + 40);
    while ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 40), v19 | 0x200, v19) );
  }
  LOBYTE(v13) = 8;
  *v23 = *v24;
  HmgSetOwner(*v24, 0LL, v13);
  v25 = 1;
LABEL_16:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v24);
  return v17;
}
