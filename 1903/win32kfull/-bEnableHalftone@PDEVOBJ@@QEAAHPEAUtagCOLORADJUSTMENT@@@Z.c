/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003BBA0
 * Callers:
 *     EngHTBlt @ 0x1C0036378 (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C003A8C0 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C007A4F0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F50C4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreCreateHalftonePalette @ 0x1C02B021C (GreCreateHalftonePalette.c)
 * Callees:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C003B064 (HT_CreateDeviceHalftoneInfo.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C003BF98 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C003C3AC (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  __int16 v6; // r8
  int v7; // ecx
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 ThreadWin32Thread; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  signed __int32 v13; // ett
  __int64 v14; // rbx
  unsigned int v15; // edi
  signed __int32 v17; // ett
  __int64 v18; // rbx
  _QWORD *v19; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v20; // [rsp+28h] [rbp-D8h] BYREF
  int v21; // [rsp+30h] [rbp-D0h]
  int Src; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+44h] [rbp-BCh]
  __int16 v24; // [rsp+46h] [rbp-BAh]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int128 v26; // [rsp+50h] [rbp-B0h]
  _WORD *v27; // [rsp+60h] [rbp-A0h]
  __int64 *v28; // [rsp+68h] [rbp-98h]
  __int16 v29; // [rsp+70h] [rbp-90h]
  __int16 v30; // [rsp+72h] [rbp-8Eh]
  __int16 v31; // [rsp+74h] [rbp-8Ch]
  __int16 v32; // [rsp+76h] [rbp-8Ah]
  __int128 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int16 v35; // [rsp+90h] [rbp-70h]
  __int16 v36; // [rsp+92h] [rbp-6Eh]
  __int16 v37; // [rsp+94h] [rbp-6Ch]
  char v38; // [rsp+96h] [rbp-6Ah]
  char v39; // [rsp+97h] [rbp-69h]
  _QWORD v40[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-40h] BYREF
  int v42; // [rsp+C8h] [rbp-38h]
  _WORD v43[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)this;
  v21 = 0;
  v20 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                        (PALMEMOBJ *)&v20,
                        *(_DWORD *)(v2 + 2376),
                        (struct _GDIINFO *)(v2 + 2136)) )
  {
LABEL_36:
    v15 = 0;
    goto LABEL_16;
  }
  v24 = 0;
  memset(v40, 0, sizeof(v40));
  v5 = *(_QWORD *)this;
  Src = 1213491459;
  v39 = 0;
  v23 = *(_WORD *)(v5 + 2380);
  v38 = *(_BYTE *)(v5 + 2383);
  if ( *(_DWORD *)(v5 + 2372) > 0x12u )
  {
    v6 = 17;
    v24 = 17;
  }
  else
  {
    v6 = *(unsigned __int8 *)(v5 + 2372);
    v24 = v6;
  }
  v7 = *(_DWORD *)(v5 + 2332) + *(_DWORD *)(v5 + 2328) + *(_DWORD *)(v5 + 2336);
  v26 = 0LL;
  v25 = 0LL;
  v35 = *(_WORD *)(v5 + 2328);
  v36 = *(_WORD *)(v5 + 2332);
  v37 = *(_WORD *)(v5 + 2336);
  v29 = v7 / 3;
  if ( v6 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 2408) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v5 + 2412) - 4) <= 0xFC
      && *(_QWORD *)(v5 + 2416)
      && *(_QWORD *)(v5 + 2424)
      && *(_QWORD *)(v5 + 2432) )
    {
      LODWORD(v40[0]) = 32;
      WORD2(v40[0]) = *(_WORD *)(v5 + 2408);
      HIWORD(v40[0]) = *(_WORD *)(v5 + 2412);
      v40[1] = *(_QWORD *)(v5 + 2416);
      v40[2] = *(_QWORD *)(v5 + 2424);
      v40[3] = *(_QWORD *)(v5 + 2432);
      *(_QWORD *)&v26 = v40;
    }
    else
    {
      v24 = 17;
    }
  }
  memset(v43, 0, 0x2AuLL);
  v43[0] = *(_WORD *)(v5 + 2244);
  v43[1] = *(_WORD *)(v5 + 2248);
  v43[2] = *(_WORD *)(v5 + 2252);
  v43[3] = *(_WORD *)(v5 + 2256);
  v43[4] = *(_WORD *)(v5 + 2260);
  v43[5] = *(_WORD *)(v5 + 2264);
  v43[6] = *(_WORD *)(v5 + 2268);
  v43[7] = *(_WORD *)(v5 + 2272);
  v43[8] = *(_WORD *)(v5 + 2276);
  v43[9] = *(_WORD *)(v5 + 2280);
  v43[10] = *(_WORD *)(v5 + 2284);
  v43[11] = *(_WORD *)(v5 + 2288);
  v43[12] = *(_WORD *)(v5 + 2292);
  v43[13] = *(_WORD *)(v5 + 2296);
  v43[14] = *(_WORD *)(v5 + 2300);
  v43[15] = *(_WORD *)(v5 + 2304);
  v43[16] = *(_WORD *)(v5 + 2308);
  v43[17] = *(_WORD *)(v5 + 2312);
  v43[18] = *(_WORD *)(v5 + 2316);
  v43[19] = *(_WORD *)(v5 + 2320);
  v43[20] = *(_WORD *)(v5 + 2324);
  v27 = v43;
  v41 = 0LL;
  v42 = 0;
  LOWORD(v41) = *(_WORD *)(v5 + 2340);
  WORD1(v41) = *(_WORD *)(v5 + 2344);
  WORD2(v41) = *(_WORD *)(v5 + 2348);
  HIWORD(v41) = *(_WORD *)(v5 + 2352);
  LOWORD(v42) = *(_WORD *)(v5 + 2356);
  HIWORD(v42) = *(_WORD *)(v5 + 2360);
  v28 = &v41;
  v30 = *(_WORD *)(v5 + 2176);
  v31 = *(_WORD *)(v5 + 2180);
  v32 = *(_WORD *)(v5 + 2364);
  if ( a2 )
  {
    v8 = *(_OWORD *)&a2->caSize;
    v9 = *(_QWORD *)&a2->caContrast;
  }
  else
  {
    v8 = DefaultCA;
    v9 = 0LL;
  }
  v34 = v9;
  v33 = v8;
  v19 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src, &v19) <= 0 )
  {
    EngSetLastError(8u);
    v18 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v18 && PDEVOBJ::bAllowShareAccess(this) && (*(_DWORD *)(v18 + 104) || *(_DWORD *)(v18 + 108)) )
      *(_QWORD *)(v18 + 288) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
    goto LABEL_36;
  }
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess(this)
    && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
  {
    *(_QWORD *)(ThreadWin32Thread + 288) = v19;
    *(_DWORD *)(ThreadWin32Thread + 296) = gcModeChanges;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 1512LL) = v19;
  }
  v12 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v13 = *(_DWORD *)(v12 + 40);
  while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 40), v13 & 0xFFFFFDFF, v13) );
  v14 = *(_QWORD *)this;
  v15 = 1;
  if ( (*(_DWORD *)(v14 + 40) & 1) == 0 && (unsigned int)XEPALOBJ::bEqualEntries(&v20, *(_QWORD *)(v14 + 1808)) )
  {
    _m_prefetchw((const void *)(v14 + 40));
    do
      v17 = *(_DWORD *)(v14 + 40);
    while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 40), v17 | 0x200, v17) );
  }
  LOBYTE(v11) = 8;
  *v19 = *v20;
  HmgSetOwner(*v20, 0LL, v11);
  v21 = 1;
LABEL_16:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v20);
  return v15;
}
