/*
 * XREFs of xxxMNMouseMove @ 0x1C0225318
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     TrackMouseEvent @ 0x1C0011C40 (TrackMouseEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0221C60 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0222438 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0222B70 (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C022321C (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0224500 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0227184 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02470F4 (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 **a1, __int64 a2, int a3)
{
  __int64 *v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  struct tagWND *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  char v19; // al
  __int64 v20; // r9
  struct tagWND *v21; // rbx
  __int64 v22; // rax
  __int64 *v24[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  struct tagWND *v26; // [rsp+38h] [rbp-28h]
  __int64 v27; // [rsp+40h] [rbp-20h]
  _DWORD v28[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  __int64 v30; // [rsp+58h] [rbp-8h]
  unsigned int v31; // [rsp+80h] [rbp+20h] BYREF
  int v32; // [rsp+90h] [rbp+30h]

  v32 = a3;
  v4 = *a1;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, *v4);
  if ( *v24[0] == *(_QWORD *)(*v24[0] + 64) && __PAIR64__(SHIWORD(v32), (__int16)a3) != *(_QWORD *)(a2 + 12) )
  {
    v9 = SHIWORD(v32);
    *(_DWORD *)(a2 + 12) = (__int16)a3;
    *(_DWORD *)(a2 + 16) = v9;
    v10 = (struct tagWND *)xxxMNFindWindowFromPoint(v24, &v31, a3, v8);
    if ( IsMFMWFPWindow((__int64)v10) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
      v25 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v25;
      v26 = v10;
      if ( v10 )
        HMLockObject(v10);
    }
    if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
      xxxMNUpdateDraggingInfo(a2, v10, v31);
    if ( *(_DWORD *)(a2 + 20) != 1 )
    {
LABEL_14:
      if ( v10 == (struct tagWND *)4294967291LL )
      {
        if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
        {
          xxxMNSwitchToAlternateMenu(v24, a2);
LABEL_18:
          xxxMNButtonDown(v24, a2, v31, 0LL);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v6, v7, v8);
        }
      }
      else
      {
        if ( v10 == (struct tagWND *)0xFFFFFFFFLL )
          goto LABEL_18;
        if ( v10 )
        {
          v12 = safe_cast_fnid_to_PMENUWND((__int64)v10);
          if ( !(unsigned int)IsWindowBeingDestroyed(v13) && v12 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v24, *(_QWORD *)(v12 + 8));
            v17 = *(_DWORD *)(a2 + 8);
            if ( (v17 & 0x100) != 0 && (v17 & 0x8000) == 0 && (**(_DWORD **)v24[0] & 0x100000) == 0 )
            {
              v18 = *(_QWORD *)v10;
              v28[0] = 0;
              v30 = 0LL;
              v28[1] = 2;
              v29 = v18;
              TrackMouseEvent((__int64)v28);
              **(_DWORD **)v24[0] |= 0x100000u;
              xxxSendMessage((ULONG_PTR)v10);
            }
            v19 = xxxSendMessage((ULONG_PTR)v10);
            if ( (v19 & 0x10) != 0 && (v19 & 3) == 0 && !xxxSendMessage((ULONG_PTR)v10) )
            {
              v15 = *v24[0];
              if ( *(_QWORD *)(v12 + 8) == *v24[0] )
                xxxMNHideNextHierarchy(v24, v14, v16, v20);
            }
          }
LABEL_35:
          ThreadUnlock1(v15, v14, v16);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v6, v7, v8);
        }
      }
      if ( !*(_QWORD *)(*v24[0] + 56) )
      {
        xxxMNSelectItem(v24, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v6, v7, v8);
      }
      v21 = *(struct tagWND **)(*v24[0] + 56);
      v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
      v25 = *(_QWORD *)(v22 + 408);
      *(_QWORD *)(v22 + 408) = &v25;
      v26 = v21;
      if ( v21 )
        HMLockObject(v21);
      xxxSendMessage((ULONG_PTR)v21);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v21);
      goto LABEL_35;
    }
    if ( v10
      && (v10 != (struct tagWND *)0xFFFFFFFFLL
       || !*(_QWORD *)(*v24[0] + 8)
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v24[0] + 8) + 40LL) + 31LL) & 0x20) == 0) )
    {
      *(_DWORD *)(a2 + 20) = -1;
      goto LABEL_14;
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v6, v7, v8);
}
