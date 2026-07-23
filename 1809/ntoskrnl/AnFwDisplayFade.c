/*
 * XREFs of AnFwDisplayFade @ 0x14094FBA8
 * Callers:
 *     BgDisplayFade @ 0x14094F608 (BgDisplayFade.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     BgpGxRectangleSize @ 0x14016EDD4 (BgpGxRectangleSize.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpGetBitsPerPixel @ 0x14016F2E0 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14016F4C8 (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     BgpClearScreen @ 0x140327904 (BgpClearScreen.c)
 *     BgpGxParseBitmap @ 0x14094F848 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14094F98C (BgpGxReadRectangle.c)
 *     BgpGxRectangleDestroy @ 0x14095021C (BgpGxRectangleDestroy.c)
 *     BgpGxFindSubRectangle @ 0x140950240 (BgpGxFindSubRectangle.c)
 *     LogFwStat @ 0x140950754 (LogFwStat.c)
 *     BgpTxtGetRegionContext @ 0x1409508BC (BgpTxtGetRegionContext.c)
 *     BgpGxRectangleCreate @ 0x14095121C (BgpGxRectangleCreate.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140951424 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140951440 (AnFwpDisableProgressTimer.c)
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
  unsigned int v9; // esi
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // edx
  unsigned int v17; // r11d
  unsigned int v18; // r11d
  unsigned int v19; // eax
  int Rectangle; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rsi
  int v27; // edi
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  _QWORD *v30; // rsi
  __int64 v31; // r15
  unsigned int v33; // edx
  char v34; // [rsp+38h] [rbp-39h]
  char v35; // [rsp+39h] [rbp-38h]
  char v36; // [rsp+3Ah] [rbp-37h] BYREF
  char v37; // [rsp+3Bh] [rbp-36h]
  unsigned int v38; // [rsp+3Ch] [rbp-35h]
  int *v39; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v40[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned int BitsPerPixel; // [rsp+58h] [rbp-19h]
  int *v42; // [rsp+60h] [rbp-11h] BYREF
  _DWORD *v43; // [rsp+68h] [rbp-9h]
  __int64 v44; // [rsp+70h] [rbp-1h] BYREF
  __int64 v45; // [rsp+78h] [rbp+7h] BYREF
  __int64 v46; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v47[4]; // [rsp+88h] [rbp+17h] BYREF

  v0 = 0LL;
  v45 = 0LL;
  v1 = 0LL;
  v46 = 0LL;
  v2 = 0LL;
  v38 = 0;
  v3 = 0LL;
  SubRectangle = 0;
  v43 = 0LL;
  v5 = 0;
  v40[0] = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  if ( (dword_140406AD0 & 0x2000) != 0 )
    return (unsigned int)SubRectangle;
  if ( (dword_140406AD0 & 0x200000) != 0 )
    goto LABEL_69;
  RegionContext = BgpTxtGetRegionContext(qword_140406B90);
  v7 = BgpTxtGetRegionContext(qword_140406B98);
  v8 = v7;
  if ( !RegionContext || !v7 )
  {
    SubRectangle = -1073741670;
    goto LABEL_36;
  }
  xmmword_140404A00 = *(_OWORD *)RegionContext;
  qword_140404A10 = *(_QWORD *)(RegionContext + 16);
  dword_140404A18 = *(_DWORD *)(RegionContext + 24);
  xmmword_140404A38 = *(_OWORD *)v7;
  qword_140404A48 = *(_QWORD *)(v7 + 16);
  dword_140404A50 = *(_DWORD *)(v7 + 24);
  BgpFwFreeMemory(RegionContext);
  BgpFwFreeMemory(v8);
  AnFwpDisableProgressTimer();
  AnFwDisableBackgroundUpdateTimer();
  v34 = 0;
  v35 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  v9 = BitsPerPixel;
  LogFwStat(1LL, 5LL, 0LL);
  if ( !qword_140406B18 )
  {
    v37 = 1;
    goto LABEL_13;
  }
  v37 = 0;
  v10 = BgpGxParseBitmap((__int64)qword_140406B18, &v39);
  v1 = v39;
  SubRectangle = v10;
  if ( v10 < 0 )
    goto LABEL_41;
  v11 = v39[2];
  if ( v9 != v11 )
  {
    v12 = BgpGxRectangleSize(*v39, v39[1], v11);
    v39 = 0LL;
    v5 = ((v12 + 15) & 0xFFFFFFF0) + 32;
    SubRectangle = BgpGxConvertRectangleEx((__int64)v1, v9, &v39, 0);
    if ( SubRectangle >= 0 )
    {
      v47[0] = v1;
      v1 = v39;
      v38 = 1;
      goto LABEL_10;
    }
LABEL_41:
    v3 = v44;
LABEL_69:
    AnFwpDisableProgressTimer();
    AnFwDisableBackgroundUpdateTimer();
    SubRectangle = BgpClearScreen(0xFF000000);
    if ( v0 )
      BgpGxRectangleDestroy(v0);
    if ( v45 )
      BgpGxRectangleDestroy(v45);
    if ( v1 )
      BgpGxRectangleDestroy(v1);
    if ( v46 )
      BgpGxRectangleDestroy(v46);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    return (unsigned int)SubRectangle;
  }
LABEL_10:
  v13 = BgpGxRectangleSize(*v1, v1[1], v9);
  v14 = qword_140406B2C + dword_140406B34;
  v15 = HIDWORD(qword_140406B2C) + dword_140406B38;
  v16 = xmmword_140404A00 + DWORD2(xmmword_140404A00);
  v5 += ((v13 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v13 + 15) & 0xFFFFFFF0) + 32);
  v17 = DWORD1(xmmword_140404A00) + HIDWORD(xmmword_140404A00);
  if ( (unsigned int)xmmword_140404A00 <= (int)qword_140406B2C + dword_140406B34
    && (unsigned int)xmmword_140404A00 >= (unsigned int)qword_140406B2C
    && DWORD1(xmmword_140404A00) >= HIDWORD(qword_140406B2C)
    && DWORD1(xmmword_140404A00) <= v15 )
  {
    if ( v16 < (unsigned int)qword_140406B2C || v16 > v14 || v17 < HIDWORD(qword_140406B2C) || v17 > v15 )
      goto LABEL_51;
    v34 = 1;
  }
  v18 = xmmword_140404A38 + DWORD2(xmmword_140404A38);
  v19 = DWORD1(xmmword_140404A38) + HIDWORD(xmmword_140404A38);
  if ( (unsigned int)xmmword_140404A38 >= (unsigned int)qword_140406B2C
    && (unsigned int)xmmword_140404A38 <= v14
    && DWORD1(xmmword_140404A38) >= HIDWORD(qword_140406B2C)
    && DWORD1(xmmword_140404A38) <= v15 )
  {
    if ( v18 >= (unsigned int)qword_140406B2C && v18 <= v14 && v19 >= HIDWORD(qword_140406B2C) && v19 <= v15 )
    {
      v35 = 1;
      goto LABEL_12;
    }
LABEL_51:
    SubRectangle = -1073741823;
    goto LABEL_36;
  }
LABEL_12:
  if ( !v34 )
  {
LABEL_13:
    Rectangle = BgpGxReadRectangle(v40, (__int64)&xmmword_140404A00);
    v0 = v40[0];
    SubRectangle = Rectangle;
    if ( Rectangle < 0 )
      goto LABEL_36;
    v21 = *(_DWORD *)v40[0];
    v22 = *(_DWORD *)(v40[0] + 4LL);
    v43 = (_DWORD *)v40[0];
    v23 = BgpGxRectangleSize(v21, v22, BitsPerPixel);
    v5 += 2 * (((v23 + 15) & 0xFFFFFFF0) + 32) + ((v23 + 15) & 0xFFFFFFF0) + 32;
  }
  if ( !v35 )
  {
    v24 = BgpGxReadRectangle(&v42, (__int64)&xmmword_140404A38);
    v2 = v42;
    SubRectangle = v24;
    if ( v24 < 0 )
      goto LABEL_36;
    v25 = BgpGxRectangleSize(*v42, v42[1], BitsPerPixel);
    v5 += 2 * (((v25 + 15) & 0xFFFFFFF0) + 32) + ((v25 + 15) & 0xFFFFFFF0) + 32;
  }
  v26 = qword_140406B2C;
  v27 = HIDWORD(qword_140406C50);
  v42 = (int *)qword_140406B2C;
  if ( !v37 )
  {
    SubRectangle = BgpGxFindSubRectangle(
                     (_DWORD)v1,
                     HIDWORD(qword_140406C50),
                     (unsigned int)v40,
                     (unsigned int)&v39,
                     (__int64)&v36);
    if ( SubRectangle >= 0 )
    {
      v28 = v38;
      v47[v38] = v1;
      v38 = v28 + 1;
      if ( v36 )
      {
        v37 = 1;
        v1 = 0LL;
      }
      else
      {
        LODWORD(v42) = (_DWORD)v39 + (_DWORD)v42;
        HIDWORD(v42) += HIDWORD(v39);
        v26 = (__int64)v42;
        v1 = (int *)v40[0];
      }
    }
  }
  if ( !v34 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v43, v27, (unsigned int)v40, (unsigned int)&v39, (__int64)&v36);
    if ( SubRectangle >= 0 )
    {
      v33 = v38;
      v47[v38] = v43;
      v38 = v33 + 1;
      if ( v36 )
      {
        v43 = 0LL;
        v34 = 1;
      }
      else
      {
        v43 = (_DWORD *)v40[0];
        LODWORD(xmmword_140404A00) = (_DWORD)v39 + xmmword_140404A00;
        DWORD1(xmmword_140404A00) += HIDWORD(v39);
      }
    }
  }
  if ( !v35 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v2, v27, (unsigned int)v40, (unsigned int)&v39, (__int64)&v36);
    if ( SubRectangle >= 0 )
    {
      v29 = v38;
      v47[v38] = v2;
      v38 = v29 + 1;
      if ( v36 )
      {
        v35 = 1;
        v2 = 0LL;
      }
      else
      {
        LODWORD(xmmword_140404A38) = (_DWORD)v39 + xmmword_140404A38;
        DWORD1(xmmword_140404A38) += HIDWORD(v39);
        v2 = (int *)v40[0];
      }
    }
  }
  if ( !v37 )
  {
    LODWORD(v40[0]) = v1[1];
    HIDWORD(v40[0]) = *v1;
    SubRectangle = BgpGxRectangleCreate(v40, BitsPerPixel, &v46);
    if ( SubRectangle < 0 )
    {
      v0 = (__int64)v43;
      goto LABEL_36;
    }
    memset(*(void **)(v46 + 24), 0, *(unsigned int *)(v46 + 12));
  }
  v0 = (__int64)v43;
  if ( !v34 )
  {
    LODWORD(v40[0]) = v43[1];
    HIDWORD(v40[0]) = *v43;
    SubRectangle = BgpGxRectangleCreate(v40, BitsPerPixel, &v45);
    if ( SubRectangle < 0 )
      goto LABEL_36;
    memset(*(void **)(v45 + 24), 0, *(unsigned int *)(v45 + 12));
  }
  if ( v35 )
    goto LABEL_35;
  LODWORD(v40[0]) = v2[1];
  HIDWORD(v40[0]) = *v2;
  SubRectangle = BgpGxRectangleCreate(v40, BitsPerPixel, &v44);
  if ( SubRectangle >= 0 )
  {
    memset(*(void **)(v44 + 24), 0, *(unsigned int *)(v44 + 12));
LABEL_35:
    LogFwStat(0LL, 5LL, 0LL);
    dword_1404049E4 = 0;
    byte_1404049F0 = v34;
    byte_1404049F1 = v35;
    byte_1404049F2 = v37;
    qword_140404A20 = v45;
    qword_140404A30 = v46;
    qword_140404A60 = v44;
    dword_1404049E0 = 100;
    qword_1404049E8 = v26;
    qword_1404049F8 = v0;
    qword_140404A28 = (__int64)v1;
    qword_140404A58 = (__int64)v2;
    KeResetEvent(&stru_1404DCE90);
    KeInitializeTimerEx(&Timer, NotificationTimer);
    KeInitializeDpc(&stru_1404DCDD0, AnFwpFadeAnimationTimer, 0LL);
    byte_1404C75A1 = 1;
    LogFwStat(1LL, 7LL, 0LL);
    KeSetCoalescableTimer(&Timer, 0LL, 0x1Eu, 0, &stru_1404DCDD0);
    dword_140406AD0 |= 0x2000u;
    dword_140406AEC = v5;
  }
LABEL_36:
  if ( v38 )
  {
    v30 = v47;
    v31 = v38;
    do
    {
      BgpGxRectangleDestroy(*v30++);
      --v31;
    }
    while ( v31 );
  }
  if ( SubRectangle < 0 )
    goto LABEL_41;
  return (unsigned int)SubRectangle;
}
