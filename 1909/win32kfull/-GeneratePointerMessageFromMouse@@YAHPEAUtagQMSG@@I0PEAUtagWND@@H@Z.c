/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E1998
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C002A7A4 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C01E1CB8 (-GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E2380 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E2998 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E2C40 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        unsigned int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  _DWORD *v9; // rax
  __int128 v10; // xmm0
  int NextFrameId; // eax
  unsigned int *v12; // r12
  unsigned __int64 v13; // r8
  int v14; // edi
  struct tagPOINT v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  _DWORD *v23; // rcx
  unsigned int v24; // eax
  _DWORD *v26; // rax
  _OWORD v27[6]; // [rsp+38h] [rbp-31h] BYREF

  memset(v27, 0, sizeof(v27));
  v9 = *(_DWORD **)(gptiCurrent + 1280LL);
  if ( !v9 )
  {
    v9 = (_DWORD *)Win32AllocPoolZInit(128LL, 1347253077LL);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(gptiCurrent + 1280LL) = v9;
  }
  if ( a5 && (*v9 & 0x10) != 0 )
  {
    *v9 &= ~0x10u;
    **(_DWORD **)(gptiCurrent + 1280LL) &= ~4u;
  }
  if ( IsMiPMouseMessage(*((_DWORD *)a3 + 6)) )
  {
    v10 = *(_OWORD *)a3;
    *(_QWORD *)&v27[0] = 0x100000004LL;
    *(_OWORD *)a1 = v10;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a1 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)a3 + 3);
    *((_OWORD *)a1 + 4) = *((_OWORD *)a3 + 4);
    *((_OWORD *)a1 + 5) = *((_OWORD *)a3 + 5);
    *((_OWORD *)a1 + 6) = *((_OWORD *)a3 + 6);
    *((_OWORD *)a1 + 7) = *((_OWORD *)a3 + 7);
    *((_OWORD *)a1 + 8) = *((_OWORD *)a3 + 8);
    *((_OWORD *)a1 + 9) = *((_OWORD *)a3 + 9);
    *((_QWORD *)a1 + 20) = *((_QWORD *)a3 + 20);
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    NextFrameId = GetNextFrameId();
    *(_QWORD *)&v27[1] = -1LL;
    DWORD2(v27[0]) = NextFrameId;
    *((_QWORD *)&v27[1] + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v12 = (unsigned int *)((char *)a1 + 24);
    v13 = *((_QWORD *)a3 + 4);
    LODWORD(v27[4]) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v27[5] = *((_QWORD *)a3 + 16);
    DWORD1(v27[4]) = 1;
    HIDWORD(v27[0]) = GetPointerFlagsFromMouse(
                        (unsigned int *)a1 + 6,
                        a2,
                        v13,
                        (unsigned int *)&v27[4] + 3,
                        (enum tagPOINTER_BUTTON_CHANGE_TYPE *)((char *)&v27[5] + 8));
    v14 = HIDWORD(v27[0]);
    if ( HIDWORD(v27[0]) )
    {
      if ( (**(_DWORD **)(gptiCurrent + 1280LL) & 4) == 0 )
      {
        v14 = HIDWORD(v27[0]) | 0x2000;
        HIDWORD(v27[0]) |= 0x2000u;
      }
      if ( (*((_DWORD *)a3 + 25) & 0x2000) != 0 )
      {
        v14 |= 0x400000u;
        HIDWORD(v27[0]) = v14;
      }
      LODWORD(v27[2]) = *((__int16 *)a3 + 20);
      DWORD1(v27[2]) = *((__int16 *)a3 + 21);
      v15 = MiPConvertPoint((const struct tagPOINT *)&v27[2]);
      *(_QWORD *)&v27[3] = *(_QWORD *)&v27[2];
      *((struct tagPOINT *)&v27[2] + 1) = v15;
      *((struct tagPOINT *)&v27[3] + 1) = v15;
      *((_QWORD *)a1 + 13) = gptiCurrent;
      if ( (v14 & 0x180000) != 0 )
      {
        DWORD2(v27[4]) = *((__int16 *)a3 + 17);
        v16 = WORD4(v27[4]);
      }
      else
      {
        v16 = WORD6(v27[0]) & 0xE1F7;
      }
      *((_QWORD *)a1 + 4) = (unsigned int)(v16 << 16) | 1LL;
      v17 = *(_QWORD *)(gptiCurrent + 1280LL);
      v18 = v27[1];
      *(_OWORD *)(v17 + 24) = v27[0];
      v19 = v27[2];
      *(_OWORD *)(v17 + 40) = v18;
      v20 = v27[3];
      *(_OWORD *)(v17 + 56) = v19;
      v21 = v27[4];
      *(_OWORD *)(v17 + 72) = v20;
      v22 = v27[5];
      *(_OWORD *)(v17 + 88) = v21;
      *(_OWORD *)(v17 + 104) = v22;
      **(_DWORD **)(gptiCurrent + 1280LL) |= 1u;
      if ( a5 )
      {
        if ( ((*v12 - 579) & 0xFFFFFFFB) == 0 )
        {
          v23 = *(_DWORD **)(gptiCurrent + 1280LL);
          if ( (*v23 & 4) != 0 )
          {
            *v23 |= 0x10u;
            **(_DWORD **)(gptiCurrent + 1280LL) &= ~2u;
          }
        }
      }
      v24 = *v12;
      if ( *v12 < 0x241 || v24 > 0x242 && v24 - 581 > 1 )
      {
        StopMiPIdleNotificationTimer(a4);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1280LL) + 120LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_29:
  v26 = *(_DWORD **)(gptiCurrent + 1280LL);
  if ( v26 )
    *v26 &= ~1u;
  return 0LL;
}
