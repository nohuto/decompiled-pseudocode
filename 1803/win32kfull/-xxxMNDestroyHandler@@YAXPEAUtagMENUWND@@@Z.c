/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C01E45B8
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     MNFreePopup @ 0x1C01D51B4 (MNFreePopup.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  ULONG_PTR v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  ULONG_PTR v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v18; // [rsp+58h] [rbp-18h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v15, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v15, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v15[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v15[0] + 24LL) )
    {
      v3 = *(_QWORD *)v15[0];
      if ( *(_QWORD *)(*(_QWORD *)v15[0] + 16LL) )
        v4 = *(_QWORD *)(v3 + 16);
      else
        v4 = *(_QWORD *)(v3 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
      v17 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
      v18 = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      xxxSendMessage(v4);
      ThreadUnlock1(v7, v6, v8);
    }
    if ( *(_QWORD *)(*(_QWORD *)v15[0] + 40LL) )
    {
      if ( *(int *)(*(_QWORD *)v15[0] + 80LL) >= 0 )
      {
        v2 = *(_QWORD *)v15[0];
        if ( *(_DWORD *)(*(_QWORD *)v15[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL)
                                                               + 44LL) )
        {
          v2 = *(_QWORD *)v15[0];
          *(_DWORD *)(*(_QWORD *)(96LL * *(int *)(*(_QWORD *)v15[0] + 80LL)
                                + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 88LL))
                    + 4LL) &= ~0x80u;
        }
      }
    }
    if ( (**(_DWORD **)v15[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v15[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v15[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v15[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v15[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v15[0] + 8LL) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)v15[0] + 8LL);
      v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
      v17 = *(_QWORD *)(v10 + 408);
      *(_QWORD *)(v10 + 408) = &v17;
      v18 = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      xxxSendMessage(*(_QWORD *)(*(_QWORD *)v15[0] + 8LL));
      ThreadUnlock1(v12, v11, v13);
    }
    **(_DWORD **)v15[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v15[0] + 16LL) )
    {
      v14 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v15[0] + 16LL));
      if ( v14 )
      {
        *(_QWORD *)(v14 + 8) = 0LL;
        v2 = *(_QWORD *)v15[0];
        *(_QWORD *)(v14 + 16) = *(_QWORD *)v15[0];
      }
    }
    if ( (**(_DWORD **)v15[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v15[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, *(_QWORD *)v15[0]);
      MNFreePopup(v16);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v2);
}
