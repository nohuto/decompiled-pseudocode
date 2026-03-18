/*
 * XREFs of NtUserSetWindowBand @ 0x1C00174B0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00177A8 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006AB10 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowBand(__int64 a1, HWND a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct tagWND *v9; // rbx
  int v10; // esi
  int v11; // ebx
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+48h] [rbp-8h]
  struct tagWND *v20; // [rsp+88h] [rbp+38h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0) )
  {
    v11 = 0;
    goto LABEL_11;
  }
  v14 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v14;
  v15 = v6;
  HMLockObject(v6);
  if ( (unsigned int)ValidateHWNDIA(a2, &v20) )
  {
    if ( GetProp(v8, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL) )
    {
      v13 = 5LL;
    }
    else
    {
      v9 = v20;
      if ( (unsigned __int64)v20 < 0xFFFFFFFFFFFFFFFEuLL || a3 == 1 )
      {
        if ( (unsigned __int64)v20 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
        {
          v10 = 1;
          v17 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v17;
          v18 = v9;
          HMLockObject(v9);
        }
        else
        {
          v10 = 0;
        }
        v11 = xxxSetWindowBand(v8, v9, a3, 1LL);
        if ( v10 )
          ThreadUnlock1();
        goto LABEL_10;
      }
      v13 = 87LL;
    }
    v11 = 0;
    UserSetLastError(v13);
  }
  else
  {
    v11 = 0;
  }
LABEL_10:
  ThreadUnlock1();
LABEL_11:
  UserSessionSwitchLeaveCrit(v7);
  return v11;
}
