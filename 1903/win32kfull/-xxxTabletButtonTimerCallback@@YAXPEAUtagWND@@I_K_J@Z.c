/*
 * XREFs of ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01DC4D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     SetRITTimer @ 0x1C011E2C0 (SetRITTimer.c)
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01DC424 (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletButtonTimerCallback(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  if ( gpTabBtnAction )
  {
    v5 = *(_DWORD *)(a4 + 48);
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = a4;
    HMLockObject(a4);
    v7 = v5 & 0x10;
    xxxTabletButtonExecuteAction(gpTabBtnAction, v7 != 0, 0LL);
    if ( v7 )
    {
      gpTabBtnAction = 0LL;
    }
    else
    {
      v8 = 500LL;
      if ( *(_DWORD *)(a4 + 52) != 500 )
        gtmridTabletButtonTimer = SetRITTimer(gtmridTabletButtonTimer, 0x1F4u, (__int64)xxxTabletButtonTimerCallback, 0);
    }
    ThreadUnlock1(v9, v8, v10);
  }
}
