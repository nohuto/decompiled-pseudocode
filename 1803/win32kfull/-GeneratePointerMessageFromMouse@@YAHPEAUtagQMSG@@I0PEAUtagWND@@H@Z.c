/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01AABF0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0019B5C (-IsMiPMouseMessage@@YAHI@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C01AAF08 (-GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01AB2E0 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01AB578 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01AB6AC (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
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
  unsigned int *v11; // r12
  unsigned __int64 v12; // r8
  int v13; // edi
  struct tagPOINT v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _DWORD *v22; // rcx
  unsigned int v23; // eax
  _DWORD *v25; // rax
  _OWORD v26[6]; // [rsp+38h] [rbp-31h] BYREF

  memset(v26, 0, sizeof(v26));
  v9 = *(_DWORD **)(gptiCurrent + 1248LL);
  if ( !v9 )
  {
    v9 = (_DWORD *)Win32AllocPoolZInit(128LL, 1347253077LL);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(gptiCurrent + 1248LL) = v9;
  }
  if ( a5 && (*v9 & 0x10) != 0 )
  {
    *v9 &= ~0x10u;
    **(_DWORD **)(gptiCurrent + 1248LL) &= ~4u;
  }
  if ( IsMiPMouseMessage(*((_DWORD *)a3 + 6)) )
  {
    v10 = *(_OWORD *)a3;
    *(_QWORD *)&v26[0] = 0x100000004LL;
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
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    DWORD2(v26[0]) = GetNextFrameId();
    *(_QWORD *)&v26[1] = ghMouseDevice;
    *((_QWORD *)&v26[1] + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v11 = (unsigned int *)((char *)a1 + 24);
    v12 = *((_QWORD *)a3 + 4);
    LODWORD(v26[4]) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v26[5] = *((_QWORD *)a3 + 16);
    DWORD1(v26[4]) = 1;
    HIDWORD(v26[0]) = GetPointerFlagsFromMouse(
                        (unsigned int *)a1 + 6,
                        a2,
                        v12,
                        (unsigned int *)&v26[4] + 3,
                        (enum tagPOINTER_BUTTON_CHANGE_TYPE *)((char *)&v26[5] + 8));
    v13 = HIDWORD(v26[0]);
    if ( HIDWORD(v26[0]) )
    {
      if ( (**(_DWORD **)(gptiCurrent + 1248LL) & 4) == 0 )
      {
        v13 = HIDWORD(v26[0]) | 0x2000;
        HIDWORD(v26[0]) |= 0x2000u;
      }
      if ( (*((_DWORD *)a3 + 25) & 0x2000) != 0 )
      {
        v13 |= 0x400000u;
        HIDWORD(v26[0]) = v13;
      }
      LODWORD(v26[2]) = *((__int16 *)a3 + 20);
      DWORD1(v26[2]) = *((__int16 *)a3 + 21);
      v14 = MiPConvertPoint((const struct tagPOINT *)&v26[2]);
      *(_QWORD *)&v26[3] = *(_QWORD *)&v26[2];
      *((struct tagPOINT *)&v26[2] + 1) = v14;
      *((struct tagPOINT *)&v26[3] + 1) = v14;
      *((_QWORD *)a1 + 13) = gptiCurrent;
      if ( (v13 & 0x180000) != 0 )
      {
        v15 = *((unsigned __int16 *)a3 + 17);
        DWORD2(v26[4]) = (__int16)v15;
      }
      else
      {
        v15 = WORD6(v26[0]) & 0xE1F7;
      }
      *((_QWORD *)a1 + 4) = (unsigned int)(v15 << 16) | 1LL;
      v16 = *(_QWORD *)(gptiCurrent + 1248LL);
      v17 = v26[1];
      *(_OWORD *)(v16 + 24) = v26[0];
      v18 = v26[2];
      *(_OWORD *)(v16 + 40) = v17;
      v19 = v26[3];
      *(_OWORD *)(v16 + 56) = v18;
      v20 = v26[4];
      *(_OWORD *)(v16 + 72) = v19;
      v21 = v26[5];
      *(_OWORD *)(v16 + 88) = v20;
      *(_OWORD *)(v16 + 104) = v21;
      **(_DWORD **)(gptiCurrent + 1248LL) |= 1u;
      if ( a5 )
      {
        if ( ((*v11 - 579) & 0xFFFFFFFB) == 0 )
        {
          v22 = *(_DWORD **)(gptiCurrent + 1248LL);
          if ( (*v22 & 4) != 0 )
          {
            *v22 |= 0x10u;
            **(_DWORD **)(gptiCurrent + 1248LL) &= ~2u;
          }
        }
      }
      v23 = *v11;
      if ( *v11 < 0x241 || v23 > 0x242 && v23 - 581 > 1 )
      {
        StopMiPIdleNotificationTimer(a4);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1248LL) + 120LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_29:
  v25 = *(_DWORD **)(gptiCurrent + 1248LL);
  if ( v25 )
    *v25 &= ~1u;
  return 0LL;
}
