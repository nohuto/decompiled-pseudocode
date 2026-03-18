/*
 * XREFs of AnFwDisplayFade @ 0x14098EBD8
 * Callers:
 *     BgDisplayFade @ 0x14098E608 (BgDisplayFade.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KeSetCoalescableTimer @ 0x1400B2900 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     BgpGxRectangleSize @ 0x140178494 (BgpGxRectangleSize.c)
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     BgpGetBitsPerPixel @ 0x140178A38 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x140178BD0 (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     BgpClearScreen @ 0x140348F70 (BgpClearScreen.c)
 *     BgpGxParseBitmap @ 0x14098E85C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14098E9A4 (BgpGxReadRectangle.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 *     BgpGxFindSubRectangle @ 0x14098F278 (BgpGxFindSubRectangle.c)
 *     LogFwStat @ 0x14098F79C (LogFwStat.c)
 *     BgpTxtGetRegionContext @ 0x14098F908 (BgpTxtGetRegionContext.c)
 *     BgpGxRectangleCreate @ 0x14099026C (BgpGxRectangleCreate.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140990474 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140990490 (AnFwpDisableProgressTimer.c)
 */

__int64 AnFwDisplayFade()
{
  __int64 v0; // rdi
  int *v1; // r12
  int *v2; // r13
  __int64 v3; // rsi
  int SubRectangle; // r14d
  unsigned int v5; // r15d
  __int64 RegionContext; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r8d
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // edx
  unsigned int v16; // r11d
  unsigned int v17; // r11d
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rsi
  int v26; // edi
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  _QWORD *v29; // rsi
  __int64 v30; // r15
  unsigned int v32; // edx
  char v33; // [rsp+38h] [rbp-49h]
  char v34; // [rsp+39h] [rbp-48h]
  char v35; // [rsp+3Ah] [rbp-47h] BYREF
  char v36; // [rsp+3Bh] [rbp-46h]
  unsigned int v37; // [rsp+3Ch] [rbp-45h]
  unsigned int BitsPerPixel; // [rsp+40h] [rbp-41h]
  __int64 v39; // [rsp+48h] [rbp-39h] BYREF
  int *v40; // [rsp+50h] [rbp-31h] BYREF
  int *v41; // [rsp+58h] [rbp-29h] BYREF
  int *v42; // [rsp+60h] [rbp-21h]
  __int64 v43; // [rsp+68h] [rbp-19h] BYREF
  int *v44; // [rsp+70h] [rbp-11h] BYREF
  int v45; // [rsp+78h] [rbp-9h] BYREF
  int v46; // [rsp+7Ch] [rbp-5h]
  int v47; // [rsp+80h] [rbp-1h]
  __int64 v48; // [rsp+88h] [rbp+7h] BYREF
  __int64 v49; // [rsp+90h] [rbp+Fh] BYREF
  _QWORD v50[4]; // [rsp+98h] [rbp+17h] BYREF

  v47 = 0;
  v0 = 0LL;
  v48 = 0LL;
  v1 = 0LL;
  v49 = 0LL;
  v2 = 0LL;
  v37 = 0;
  v3 = 0LL;
  v39 = 0LL;
  SubRectangle = 0;
  v5 = 0;
  v42 = 0LL;
  v41 = 0LL;
  v44 = 0LL;
  v40 = 0LL;
  v43 = 0LL;
  if ( (dword_14042C030 & 0x2000) != 0 )
    return (unsigned int)SubRectangle;
  if ( (dword_14042C030 & 0x200000) != 0 )
    goto LABEL_69;
  RegionContext = BgpTxtGetRegionContext(qword_14042C0F0);
  v7 = BgpTxtGetRegionContext(qword_14042C0F8);
  v8 = v7;
  if ( !RegionContext || !v7 )
  {
    SubRectangle = -1073741670;
    goto LABEL_36;
  }
  xmmword_140429E50 = *(_OWORD *)RegionContext;
  qword_140429E60 = *(_QWORD *)(RegionContext + 16);
  dword_140429E68 = *(_DWORD *)(RegionContext + 24);
  xmmword_140429E88 = *(_OWORD *)v7;
  qword_140429E98 = *(_QWORD *)(v7 + 16);
  dword_140429EA0 = *(_DWORD *)(v7 + 24);
  BgpFwFreeMemory(RegionContext);
  BgpFwFreeMemory(v8);
  AnFwpDisableProgressTimer();
  AnFwDisableBackgroundUpdateTimer();
  v33 = 0;
  v34 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  LogFwStat(1LL, 5LL, 0LL);
  if ( !qword_14042C078 )
  {
    v36 = 1;
    goto LABEL_13;
  }
  v36 = 0;
  v9 = BgpGxParseBitmap((__int64)qword_14042C078, &v44);
  v1 = v44;
  SubRectangle = v9;
  if ( v9 < 0 )
    goto LABEL_41;
  v10 = v44[2];
  if ( BitsPerPixel != v10 )
  {
    v11 = BgpGxRectangleSize(*v44, v44[1], v10);
    v44 = 0LL;
    v5 = ((v11 + 15) & 0xFFFFFFF0) + 32;
    SubRectangle = BgpGxConvertRectangleEx((__int64)v1, BitsPerPixel, &v44, 0);
    if ( SubRectangle >= 0 )
    {
      v50[0] = v1;
      v1 = v44;
      v37 = 1;
      goto LABEL_10;
    }
LABEL_41:
    v3 = v43;
LABEL_69:
    AnFwpDisableProgressTimer();
    AnFwDisableBackgroundUpdateTimer();
    SubRectangle = BgpClearScreen(0xFF000000);
    if ( v0 )
      BgpGxRectangleDestroy(v0);
    if ( v48 )
      BgpGxRectangleDestroy(v48);
    if ( v1 )
      BgpGxRectangleDestroy(v1);
    if ( v49 )
      BgpGxRectangleDestroy(v49);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    return (unsigned int)SubRectangle;
  }
LABEL_10:
  v12 = BgpGxRectangleSize(*v1, v1[1], BitsPerPixel);
  v13 = qword_14042C08C + dword_14042C094;
  v14 = HIDWORD(qword_14042C08C) + dword_14042C098;
  v15 = xmmword_140429E50 + DWORD2(xmmword_140429E50);
  v5 += ((v12 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v12 + 15) & 0xFFFFFFF0) + 32);
  v16 = DWORD1(xmmword_140429E50) + HIDWORD(xmmword_140429E50);
  if ( (unsigned int)xmmword_140429E50 <= (int)qword_14042C08C + dword_14042C094
    && (unsigned int)xmmword_140429E50 >= (unsigned int)qword_14042C08C
    && DWORD1(xmmword_140429E50) >= HIDWORD(qword_14042C08C)
    && DWORD1(xmmword_140429E50) <= v14 )
  {
    if ( v15 < (unsigned int)qword_14042C08C || v15 > v13 || v16 < HIDWORD(qword_14042C08C) || v16 > v14 )
      goto LABEL_51;
    v33 = 1;
  }
  v17 = xmmword_140429E88 + DWORD2(xmmword_140429E88);
  v18 = DWORD1(xmmword_140429E88) + HIDWORD(xmmword_140429E88);
  if ( (unsigned int)xmmword_140429E88 >= (unsigned int)qword_14042C08C
    && (unsigned int)xmmword_140429E88 <= v13
    && DWORD1(xmmword_140429E88) >= HIDWORD(qword_14042C08C)
    && DWORD1(xmmword_140429E88) <= v14 )
  {
    if ( v17 >= (unsigned int)qword_14042C08C && v17 <= v13 && v18 >= HIDWORD(qword_14042C08C) && v18 <= v14 )
    {
      v34 = 1;
      goto LABEL_12;
    }
LABEL_51:
    SubRectangle = -1073741823;
    goto LABEL_36;
  }
LABEL_12:
  if ( !v33 )
  {
LABEL_13:
    v19 = BgpGxReadRectangle(&v41, (__int64)&xmmword_140429E50);
    v0 = (__int64)v41;
    SubRectangle = v19;
    if ( v19 < 0 )
      goto LABEL_36;
    v20 = *v41;
    v21 = v41[1];
    v42 = v41;
    v22 = BgpGxRectangleSize(v20, v21, BitsPerPixel);
    v5 += 2 * (((v22 + 15) & 0xFFFFFFF0) + 32) + ((v22 + 15) & 0xFFFFFFF0) + 32;
  }
  if ( !v34 )
  {
    v23 = BgpGxReadRectangle(&v40, (__int64)&xmmword_140429E88);
    v2 = v40;
    SubRectangle = v23;
    if ( v23 < 0 )
      goto LABEL_36;
    v24 = BgpGxRectangleSize(*v40, v40[1], BitsPerPixel);
    v5 += 2 * (((v24 + 15) & 0xFFFFFFF0) + 32) + ((v24 + 15) & 0xFFFFFFF0) + 32;
  }
  v25 = qword_14042C08C;
  v26 = HIDWORD(qword_14042C1B0);
  v40 = (int *)qword_14042C08C;
  if ( !v36 )
  {
    SubRectangle = BgpGxFindSubRectangle(
                     (_DWORD)v1,
                     HIDWORD(qword_14042C1B0),
                     (unsigned int)&v41,
                     (unsigned int)&v39,
                     (__int64)&v35);
    if ( SubRectangle >= 0 )
    {
      v27 = v37;
      v50[v37] = v1;
      v37 = v27 + 1;
      if ( v35 )
      {
        v36 = 1;
        v1 = 0LL;
      }
      else
      {
        LODWORD(v40) = v39 + (_DWORD)v40;
        HIDWORD(v40) += HIDWORD(v39);
        v25 = (__int64)v40;
        v1 = v41;
      }
    }
  }
  if ( !v33 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v42, v26, (unsigned int)&v41, (unsigned int)&v39, (__int64)&v35);
    if ( SubRectangle >= 0 )
    {
      v32 = v37;
      v50[v37] = v42;
      v37 = v32 + 1;
      if ( v35 )
      {
        v42 = 0LL;
        v33 = 1;
      }
      else
      {
        v42 = v41;
        LODWORD(xmmword_140429E50) = v39 + xmmword_140429E50;
        DWORD1(xmmword_140429E50) += HIDWORD(v39);
      }
    }
  }
  if ( !v34 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v2, v26, (unsigned int)&v41, (unsigned int)&v39, (__int64)&v35);
    if ( SubRectangle >= 0 )
    {
      v28 = v37;
      v50[v37] = v2;
      v37 = v28 + 1;
      if ( v35 )
      {
        v34 = 1;
        v2 = 0LL;
      }
      else
      {
        LODWORD(xmmword_140429E88) = v39 + xmmword_140429E88;
        DWORD1(xmmword_140429E88) += HIDWORD(v39);
        v2 = v41;
      }
    }
  }
  if ( !v36 )
  {
    v45 = v1[1];
    v46 = *v1;
    SubRectangle = BgpGxRectangleCreate(&v45, BitsPerPixel, &v49);
    if ( SubRectangle < 0 )
    {
      v0 = (__int64)v42;
      goto LABEL_36;
    }
    memset(*(void **)(v49 + 24), 0, *(unsigned int *)(v49 + 12));
  }
  v0 = (__int64)v42;
  if ( !v33 )
  {
    v45 = v42[1];
    v46 = *v42;
    SubRectangle = BgpGxRectangleCreate(&v45, BitsPerPixel, &v48);
    if ( SubRectangle < 0 )
      goto LABEL_36;
    memset(*(void **)(v48 + 24), 0, *(unsigned int *)(v48 + 12));
  }
  if ( v34 )
    goto LABEL_35;
  v45 = v2[1];
  v46 = *v2;
  SubRectangle = BgpGxRectangleCreate(&v45, BitsPerPixel, &v43);
  if ( SubRectangle >= 0 )
  {
    memset(*(void **)(v43 + 24), 0, *(unsigned int *)(v43 + 12));
LABEL_35:
    LogFwStat(0LL, 5LL, 0LL);
    dword_140429E34 = 0;
    byte_140429E40 = v33;
    byte_140429E41 = v34;
    byte_140429E42 = v36;
    qword_140429E70 = v48;
    qword_140429E80 = v49;
    qword_140429EB0 = v43;
    dword_140429E30 = 100;
    qword_140429E38 = v25;
    qword_140429E48 = v0;
    qword_140429E78 = (__int64)v1;
    qword_140429EA8 = (__int64)v2;
    KeResetEvent(&stru_140509420);
    KeInitializeTimerEx(&Timer, NotificationTimer);
    KeInitializeDpc(&stru_140509360, AnFwpFadeAnimationTimer, 0LL);
    byte_1404F2AE1 = 1;
    LogFwStat(1LL, 7LL, 0LL);
    KeSetCoalescableTimer(&Timer, 0LL, 0x1Eu, 0, &stru_140509360);
    dword_14042C030 |= 0x2000u;
    dword_14042C04C = v5;
  }
LABEL_36:
  if ( v37 )
  {
    v29 = v50;
    v30 = v37;
    do
    {
      BgpGxRectangleDestroy(*v29++);
      --v30;
    }
    while ( v30 );
  }
  if ( SubRectangle < 0 )
    goto LABEL_41;
  return (unsigned int)SubRectangle;
}
