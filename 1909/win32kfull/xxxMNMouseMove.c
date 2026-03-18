/*
 * XREFs of xxxMNMouseMove @ 0x1C0224DD8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     TrackMouseEvent @ 0x1C00EA080 (TrackMouseEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0221720 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0221EF8 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0222630 (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0222CDC (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0226C44 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02469B4 (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 **a1, __int64 a2, int a3)
{
  __int64 *v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  struct tagWND *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  char v18; // al
  struct tagWND *v19; // rbx
  __int64 v20; // rax
  __int64 *v22[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  struct tagWND *v24; // [rsp+38h] [rbp-28h]
  __int64 v25; // [rsp+40h] [rbp-20h]
  _DWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  __int64 v28; // [rsp+58h] [rbp-8h]
  unsigned int v29; // [rsp+80h] [rbp+20h] BYREF
  int v30; // [rsp+90h] [rbp+30h]

  v30 = a3;
  v4 = *a1;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, *v4);
  if ( *v22[0] == *(_QWORD *)(*v22[0] + 64) && __PAIR64__(SHIWORD(v30), (__int16)a3) != *(_QWORD *)(a2 + 12) )
  {
    v8 = SHIWORD(v30);
    *(_DWORD *)(a2 + 12) = (__int16)a3;
    *(_DWORD *)(a2 + 16) = v8;
    v9 = (struct tagWND *)xxxMNFindWindowFromPoint(v22, &v29, a3);
    if ( IsMFMWFPWindow((__int64)v9) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
      v23 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
      v24 = v9;
      if ( v9 )
        HMLockObject(v9);
    }
    if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
      xxxMNUpdateDraggingInfo(a2, v9, v29);
    if ( *(_DWORD *)(a2 + 20) != 1 )
    {
LABEL_14:
      if ( v9 == (struct tagWND *)4294967291LL )
      {
        if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
        {
          xxxMNSwitchToAlternateMenu(v22, a2);
LABEL_18:
          xxxMNButtonDown(v22, a2, v29, 0);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v6, v7);
        }
      }
      else
      {
        if ( v9 == (struct tagWND *)0xFFFFFFFFLL )
          goto LABEL_18;
        if ( v9 )
        {
          v11 = safe_cast_fnid_to_PMENUWND((__int64)v9);
          if ( !(unsigned int)IsWindowBeingDestroyed(v12) && v11 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v22, *(_QWORD *)(v11 + 8));
            v16 = *(_DWORD *)(a2 + 8);
            if ( (v16 & 0x100) != 0 && (v16 & 0x8000) == 0 && (**(_DWORD **)v22[0] & 0x100000) == 0 )
            {
              v17 = *(_QWORD *)v9;
              v26[0] = 0;
              v28 = 0LL;
              v26[1] = 2;
              v27 = v17;
              TrackMouseEvent((__int64)v26);
              **(_DWORD **)v22[0] |= 0x100000u;
              xxxSendMessage((ULONG_PTR)v9);
            }
            v18 = xxxSendMessage((ULONG_PTR)v9);
            if ( (v18 & 0x10) != 0 && (v18 & 3) == 0 && !xxxSendMessage((ULONG_PTR)v9) )
            {
              v14 = *v22[0];
              if ( *(_QWORD *)(v11 + 8) == *v22[0] )
                xxxMNHideNextHierarchy(v22, v13, v15);
            }
          }
LABEL_35:
          ThreadUnlock1(v14, v13, v15);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v6, v7);
        }
      }
      if ( !*(_QWORD *)(*v22[0] + 56) )
      {
        xxxMNSelectItem(v22, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v6, v7);
      }
      v19 = *(struct tagWND **)(*v22[0] + 56);
      v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
      v23 = *(_QWORD *)(v20 + 408);
      *(_QWORD *)(v20 + 408) = &v23;
      v24 = v19;
      if ( v19 )
        HMLockObject(v19);
      xxxSendMessage((ULONG_PTR)v19);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v19);
      goto LABEL_35;
    }
    if ( v9
      && (v9 != (struct tagWND *)0xFFFFFFFFLL
       || !*(_QWORD *)(*v22[0] + 8)
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v22[0] + 8) + 40LL) + 31LL) & 0x20) == 0) )
    {
      *(_DWORD *)(a2 + 20) = -1;
      goto LABEL_14;
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v6, v7);
}
