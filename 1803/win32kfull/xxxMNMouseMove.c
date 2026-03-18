/*
 * XREFs of xxxMNMouseMove @ 0x1C01E7844
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     TrackMouseEvent @ 0x1C0064544 (TrackMouseEvent.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C01E42DC (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C01E4A38 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C01E5130 (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C01E57A4 (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C01E6A2C (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C01E945C (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02057B0 (xxxMNUpdateDraggingInfo.c)
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
  __int64 v13; // r8
  int v14; // eax
  char v15; // al
  ULONG_PTR v16; // rbx
  __int64 v17; // rax
  __int64 *v19[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v21; // [rsp+38h] [rbp-28h]
  _BYTE v22[4]; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+4Ch] [rbp-14h]
  __int64 v24; // [rsp+50h] [rbp-10h]
  unsigned int v25; // [rsp+80h] [rbp+20h] BYREF
  int v26; // [rsp+90h] [rbp+30h]

  v26 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, **a1);
  if ( *v19[0] == *(_QWORD *)(*v19[0] + 64) && __PAIR64__(SHIWORD(v26), (__int16)a3) != *(_QWORD *)(a2 + 12) )
  {
    v6 = SHIWORD(v26);
    *(_DWORD *)(a2 + 12) = (__int16)a3;
    *(_DWORD *)(a2 + 16) = v6;
    v7 = xxxMNFindWindowFromPoint(v19, &v25, a3);
    if ( IsMFMWFPWindow(v7) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
      v20 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
      v21 = v7;
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    }
    if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
      xxxMNUpdateDraggingInfo(a2, v7, v25);
    if ( *(_DWORD *)(a2 + 20) != 1 )
    {
LABEL_14:
      if ( v7 == 4294967291LL )
      {
        if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
        {
          xxxMNSwitchToAlternateMenu(v19, a2);
LABEL_18:
          xxxMNButtonDown(v19, a2, v25, 0);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v5);
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
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, *(_QWORD *)(v9 + 8));
            v14 = *(_DWORD *)(a2 + 8);
            if ( (v14 & 0x100) != 0 && (v14 & 0x8000) == 0 && (**(_DWORD **)v19[0] & 0x100000) == 0 )
            {
              v24 = *(_QWORD *)v7;
              v23 = 2;
              TrackMouseEvent((__int64)v22);
              **(_DWORD **)v19[0] |= 0x100000u;
              xxxSendMessage(v7);
            }
            v15 = xxxSendMessage(v7);
            if ( (v15 & 0x10) != 0 && (v15 & 3) == 0 && !xxxSendMessage(v7) )
            {
              v12 = *v19[0];
              if ( *(_QWORD *)(v9 + 8) == *v19[0] )
                xxxMNHideNextHierarchy(v19);
            }
          }
LABEL_35:
          ThreadUnlock1(v12, v11, v13);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v5);
        }
      }
      if ( !*(_QWORD *)(*v19[0] + 56) )
      {
        xxxMNSelectItem(v19, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v5);
      }
      v16 = *(_QWORD *)(*v19[0] + 56);
      v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
      v20 = *(_QWORD *)(v17 + 408);
      *(_QWORD *)(v17 + 408) = &v20;
      v21 = v16;
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      xxxSendMessage(v16);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, (struct tagWND *)v16);
      goto LABEL_35;
    }
    if ( v7
      && (v7 != 0xFFFFFFFFLL
       || !*(_QWORD *)(*v19[0] + 8)
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v19[0] + 8) + 40LL) + 31LL) & 0x20) == 0) )
    {
      *(_DWORD *)(a2 + 20) = -1;
      goto LABEL_14;
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v5);
}
