/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221F74
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x1C0210A24 (MNFreePopup.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  ULONG_PTR v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG_PTR v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  _QWORD v18[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v19[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v18, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v18[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v18[0] + 24LL) )
    {
      v5 = *(_QWORD *)v18[0];
      if ( *(_QWORD *)(*(_QWORD *)v18[0] + 16LL) )
        v6 = *(_QWORD *)(v5 + 16);
      else
        v6 = *(_QWORD *)(v5 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
      v20 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
      v21 = v6;
      HMLockObject(v6);
      xxxSendMessage(v6);
      ThreadUnlock1(v9, v8, v10);
    }
    if ( *(_QWORD *)(*(_QWORD *)v18[0] + 40LL) )
    {
      if ( *(int *)(*(_QWORD *)v18[0] + 80LL) >= 0 )
      {
        v2 = *(_QWORD *)v18[0];
        if ( *(_DWORD *)(*(_QWORD *)v18[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 40LL) + 40LL)
                                                               + 44LL) )
        {
          v2 = *(_QWORD *)v18[0];
          v3 = 96LL * *(int *)(*(_QWORD *)v18[0] + 80LL);
          *(_DWORD *)(*(_QWORD *)(v3 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 40LL) + 88LL)) + 4LL) &= ~0x80u;
        }
      }
    }
    if ( (**(_DWORD **)v18[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v18[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v18[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v18[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v18[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v18[0] + 8LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)v18[0] + 8LL);
      v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
      v20 = *(_QWORD *)(v12 + 408);
      *(_QWORD *)(v12 + 408) = &v20;
      v21 = v11;
      HMLockObject(v11);
      xxxSendMessage(*(_QWORD *)(*(_QWORD *)v18[0] + 8LL));
      ThreadUnlock1(v14, v13, v15);
    }
    **(_DWORD **)v18[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v18[0] + 16LL) )
    {
      v16 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v18[0] + 16LL));
      v17 = v16;
      if ( v16 )
      {
        *(_QWORD *)(v16 + 8) = 0LL;
        if ( *(_QWORD *)(v16 + 16) )
        {
          v2 = *(_QWORD *)v18[0];
          if ( *(_QWORD *)(v16 + 16) != *(_QWORD *)v18[0] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18[0]);
        }
        *(_QWORD *)(v17 + 16) = *(_QWORD *)v18[0];
      }
    }
    if ( (**(_DWORD **)v18[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v18[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, *(_QWORD *)v18[0]);
      MNFreePopup(v19);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v2, v3, v4);
}
