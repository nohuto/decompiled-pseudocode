/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C020A4AC
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x1C01F9D84 (MNFreePopup.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  ULONG_PTR v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v16; // [rsp+58h] [rbp-18h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v13, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v13[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v13[0] + 24LL) )
    {
      v3 = *(_QWORD *)v13[0];
      if ( *(_QWORD *)(*(_QWORD *)v13[0] + 16LL) )
        v4 = *(_QWORD *)(v3 + 16);
      else
        v4 = *(_QWORD *)(v3 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
      v15 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v15;
      v16 = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      xxxSendMessage(v4);
      ThreadUnlock1(v7, v6);
    }
    if ( *(_QWORD *)(*(_QWORD *)v13[0] + 40LL) )
    {
      if ( *(int *)(*(_QWORD *)v13[0] + 80LL) >= 0 )
      {
        v2 = *(_QWORD *)v13[0];
        if ( *(_DWORD *)(*(_QWORD *)v13[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13[0] + 40LL) + 40LL)
                                                               + 44LL) )
        {
          v2 = *(_QWORD *)v13[0];
          *(_DWORD *)(*(_QWORD *)(96LL * *(int *)(*(_QWORD *)v13[0] + 80LL)
                                + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13[0] + 40LL) + 88LL))
                    + 4LL) &= ~0x80u;
        }
      }
    }
    if ( (**(_DWORD **)v13[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v13[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v13[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v13[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v13[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v13[0] + 8LL) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)v13[0] + 8LL);
      v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
      v15 = *(_QWORD *)(v9 + 416);
      *(_QWORD *)(v9 + 416) = &v15;
      v16 = v8;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      xxxSendMessage(*(_QWORD *)(*(_QWORD *)v13[0] + 8LL));
      ThreadUnlock1(v11, v10);
    }
    **(_DWORD **)v13[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v13[0] + 16LL) )
    {
      v12 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v13[0] + 16LL));
      if ( v12 )
      {
        *(_QWORD *)(v12 + 8) = 0LL;
        v2 = *(_QWORD *)v13[0];
        *(_QWORD *)(v12 + 16) = *(_QWORD *)v13[0];
      }
    }
    if ( (**(_DWORD **)v13[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v13[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, *(_QWORD *)v13[0]);
      MNFreePopup(v14);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v2);
}
