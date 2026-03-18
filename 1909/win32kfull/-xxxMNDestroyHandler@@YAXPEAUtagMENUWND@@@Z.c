/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221A34
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x1C02104E4 (MNFreePopup.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  ULONG_PTR v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  ULONG_PTR v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  _QWORD v17[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v18[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v17, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v17[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v17[0] + 24LL) )
    {
      v4 = *(_QWORD *)v17[0];
      if ( *(_QWORD *)(*(_QWORD *)v17[0] + 16LL) )
        v5 = *(_QWORD *)(v4 + 16);
      else
        v5 = *(_QWORD *)(v4 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3);
      v19 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v19;
      v20 = v5;
      HMLockObject(v5);
      xxxSendMessage(v5);
      ThreadUnlock1(v8, v7, v9);
    }
    if ( *(_QWORD *)(*(_QWORD *)v17[0] + 40LL) )
    {
      if ( *(int *)(*(_QWORD *)v17[0] + 80LL) >= 0 )
      {
        v2 = *(_QWORD *)v17[0];
        if ( *(_DWORD *)(*(_QWORD *)v17[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 40LL) + 40LL)
                                                               + 44LL) )
        {
          v2 = *(_QWORD *)v17[0];
          v3 = 96LL * *(int *)(*(_QWORD *)v17[0] + 80LL);
          *(_DWORD *)(*(_QWORD *)(v3 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 40LL) + 88LL)) + 4LL) &= ~0x80u;
        }
      }
    }
    if ( (**(_DWORD **)v17[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v17[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v17[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v17[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v17[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v17[0] + 8LL) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)v17[0] + 8LL);
      v11 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3);
      v19 = *(_QWORD *)(v11 + 408);
      *(_QWORD *)(v11 + 408) = &v19;
      v20 = v10;
      HMLockObject(v10);
      xxxSendMessage(*(_QWORD *)(*(_QWORD *)v17[0] + 8LL));
      ThreadUnlock1(v13, v12, v14);
    }
    **(_DWORD **)v17[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v17[0] + 16LL) )
    {
      v15 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v17[0] + 16LL));
      v16 = v15;
      if ( v15 )
      {
        *(_QWORD *)(v15 + 8) = 0LL;
        if ( *(_QWORD *)(v15 + 16) )
        {
          v2 = *(_QWORD *)v17[0];
          if ( *(_QWORD *)(v15 + 16) != *(_QWORD *)v17[0] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17[0]);
        }
        *(_QWORD *)(v16 + 16) = *(_QWORD *)v17[0];
      }
    }
    if ( (**(_DWORD **)v17[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v17[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, *(_QWORD *)v17[0]);
      MNFreePopup(v18);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v2, v3);
}
