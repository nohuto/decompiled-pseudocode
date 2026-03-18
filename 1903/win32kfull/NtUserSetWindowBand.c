/*
 * XREFs of NtUserSetWindowBand @ 0x1C0110360
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00C9440 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0110508 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowBand(__int64 a1, struct tagWND *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagWND *v15; // rbx
  int v16; // esi
  int v17; // ebx
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h]
  __int64 v22; // [rsp+30h] [rbp-20h]
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v24; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+48h] [rbp-8h]
  struct tagWND *v26; // [rsp+88h] [rbp+38h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0) )
  {
    v17 = 0;
    goto LABEL_11;
  }
  v20 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v20;
  v21 = v6;
  HMLockObject(v6);
  if ( (unsigned int)ValidateHWNDIA(a2, &v26) )
  {
    if ( GetProp(v8, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL) )
    {
      v19 = 5LL;
    }
    else
    {
      v15 = v26;
      if ( (unsigned __int64)v26 < 0xFFFFFFFFFFFFFFFEuLL || a3 == 1 )
      {
        if ( (unsigned __int64)v26 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
        {
          v16 = 1;
          v23 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v23;
          v24 = v15;
          HMLockObject(v15);
        }
        else
        {
          v16 = 0;
        }
        v17 = xxxSetWindowBand(v8, v15, a3, 1LL);
        if ( v16 )
          ThreadUnlock1(v10, v9, v11);
        goto LABEL_10;
      }
      v19 = 87LL;
    }
    v17 = 0;
    UserSetLastError(v19, v12, v13, v14);
  }
  else
  {
    v17 = 0;
  }
LABEL_10:
  ThreadUnlock1(v10, v9, v11);
LABEL_11:
  UserSessionSwitchLeaveCrit(v7);
  return v17;
}
