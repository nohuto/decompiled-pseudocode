/*
 * XREFs of xxxMNMouseMove @ 0x1C020D738
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     TrackMouseEvent @ 0x1C00DC540 (TrackMouseEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C020A1C0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C020A934 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C020B04C (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C020B6E8 (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C020C99C (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C020F408 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C022E8CC (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 **a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  char v14; // al
  ULONG_PTR v15; // rbx
  __int64 v16; // rax
  __int64 *v18[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v20; // [rsp+38h] [rbp-28h]
  _BYTE v21[4]; // [rsp+48h] [rbp-18h] BYREF
  int v22; // [rsp+4Ch] [rbp-14h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  unsigned int v24; // [rsp+80h] [rbp+20h] BYREF
  int v25; // [rsp+90h] [rbp+30h]

  v25 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, **a1);
  if ( *v18[0] == *(_QWORD *)(*v18[0] + 64) && __PAIR64__(SHIWORD(v25), (__int16)a3) != *(_QWORD *)(a2 + 12) )
  {
    v6 = SHIWORD(v25);
    *(_DWORD *)(a2 + 12) = (__int16)a3;
    *(_DWORD *)(a2 + 16) = v6;
    v7 = xxxMNFindWindowFromPoint(v18, &v24, a3);
    if ( IsMFMWFPWindow(v7) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
      v19 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v19;
      v20 = v7;
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    }
    if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
      xxxMNUpdateDraggingInfo(a2, v7, v24);
    if ( *(_DWORD *)(a2 + 20) != 1 )
    {
LABEL_14:
      if ( v7 == 4294967291LL )
      {
        if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
        {
          xxxMNSwitchToAlternateMenu(v18, a2);
LABEL_18:
          xxxMNButtonDown(v18, a2, v24, 0);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v5);
        }
      }
      else
      {
        if ( v7 == 0xFFFFFFFFLL )
          goto LABEL_18;
        if ( v7 )
        {
          v9 = safe_cast_fnid_to_PMENUWND(v7);
          if ( !(unsigned int)IsWindowBeingDestroyed(v10) && v9 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v18, *(_QWORD *)(v9 + 8));
            v13 = *(_DWORD *)(a2 + 8);
            if ( (v13 & 0x100) != 0 && (v13 & 0x8000) == 0 && (**(_DWORD **)v18[0] & 0x100000) == 0 )
            {
              v23 = *(_QWORD *)v7;
              v22 = 2;
              TrackMouseEvent((__int64)v21);
              **(_DWORD **)v18[0] |= 0x100000u;
              xxxSendMessage(v7);
            }
            v14 = xxxSendMessage(v7);
            if ( (v14 & 0x10) != 0 && (v14 & 3) == 0 && !xxxSendMessage(v7) )
            {
              v12 = *v18[0];
              if ( *(_QWORD *)(v9 + 8) == *v18[0] )
                xxxMNHideNextHierarchy(v18);
            }
          }
LABEL_35:
          ThreadUnlock1(v12, v11);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v5);
        }
      }
      if ( !*(_QWORD *)(*v18[0] + 56) )
      {
        xxxMNSelectItem(v18, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v5);
      }
      v15 = *(_QWORD *)(*v18[0] + 56);
      v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
      v19 = *(_QWORD *)(v16 + 416);
      *(_QWORD *)(v16 + 416) = &v19;
      v20 = v15;
      if ( v15 )
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      xxxSendMessage(v15);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, (struct tagWND *)v15);
      goto LABEL_35;
    }
    if ( v7
      && (v7 != 0xFFFFFFFFLL
       || !*(_QWORD *)(*v18[0] + 8)
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v18[0] + 8) + 40LL) + 31LL) & 0x20) == 0) )
    {
      *(_DWORD *)(a2 + 20) = -1;
      goto LABEL_14;
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v5);
}
