/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C0054144
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C0054000 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C0235B60 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C0053630 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C0053674 (GetHmodTableIndex.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0054F14 (zzzUnhookWindowsHookEx.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E7EAC (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ACCESS_MASK v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rbx
  int HmodTableIndex; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 *v22; // r8
  PRKPROCESS *v23; // rcx
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _DWORD v32[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v33; // [rsp+38h] [rbp-70h] BYREF
  __int64 v34; // [rsp+40h] [rbp-68h]
  __int64 v35; // [rsp+48h] [rbp-60h]
  __int64 v36; // [rsp+50h] [rbp-58h]
  __int64 v37; // [rsp+58h] [rbp-50h]
  __int64 v38; // [rsp+60h] [rbp-48h]
  __int64 v39; // [rsp+B0h] [rbp+8h]
  unsigned int *v40; // [rsp+B8h] [rbp+10h]

  v40 = (unsigned int *)a2;
  v39 = a1;
  v6 = (int)a4;
  v7 = a3;
  v8 = a1;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v32[0] = 0x4000;
  v32[1] = -1;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v9 = 1426LL;
    goto LABEL_74;
  }
  if ( !(_DWORD)a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (_DWORD)v6 == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (_DWORD)v6 == 9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !a5 )
  {
    v9 = 1427LL;
LABEL_74:
    UserSetLastError(v9, a2, a3, a4);
    return 0LL;
  }
  v36 = gptiCurrent;
  if ( v7 )
  {
    LOBYTE(a1) = *((_BYTE *)&unk_1C02DF858 + v6 + 1);
    if ( (a1 & 2) == 0 )
    {
      v9 = 1429LL;
      goto LABEL_74;
    }
    if ( *(_QWORD *)(v7 + 448) != *(_QWORD *)(gptiCurrent + 448LL) )
      goto LABEL_17;
    if ( *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(v7 + 416) )
    {
      if ( !v8 && (a1 & 0x24) == 0 )
        goto LABEL_13;
      if ( !(unsigned __int8)Enforced(a1) )
      {
        v10 = *(_QWORD *)(gptiCurrent + 416LL);
        a2 = *(_QWORD *)(v7 + 416);
        if ( (*(_DWORD *)(a2 + 772) != *(_DWORD *)(v10 + 772) || *(_DWORD *)(a2 + 776) != *(_DWORD *)(v10 + 776))
          && (*(_DWORD *)(v7 + 480) & 0x400000) == 0 )
        {
          goto LABEL_17;
        }
      }
      if ( (*(_DWORD *)(v7 + 480) & 0xC) != 0 && (*((_BYTE *)&unk_1C02DF858 + v6 + 1) & 0x10) == 0 )
      {
        v9 = 1458LL;
        goto LABEL_74;
      }
    }
  }
  else if ( !v8 && (*((_BYTE *)&unk_1C02DF858 + v6 + 1) & 0x24) == 0 )
  {
LABEL_13:
    v9 = 1428LL;
    goto LABEL_74;
  }
  v38 = v6;
  if ( (*((_BYTE *)&unk_1C02DF858 + v6 + 1) & 4) != 0
    && !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, v32)
    && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) >= 0 )
  {
    UserSetLastError(5LL, v11, v12, v13);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 4LL);
    return 0LL;
  }
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 1 )
      v14 = 32;
    else
      v14 = 8;
  }
  else
  {
    v14 = 16;
  }
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), v14) )
  {
LABEL_17:
    v9 = 5LL;
    goto LABEL_74;
  }
  if ( v14 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL) + 32LL) & 4) != 0 )
  {
    v9 = 1459LL;
    goto LABEL_74;
  }
  LOBYTE(a3) = 5;
  v15 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 448LL), a3);
  v16 = v15;
  v37 = v15;
  if ( !v15 )
    return 0LL;
  *(_DWORD *)(v15 + 68) = -1;
  if ( v39 )
  {
    HmodTableIndex = GetHmodTableIndex(v40);
    *(_DWORD *)(v16 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126LL, v18, v19, v20);
      HMFreeObject(v16);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency(HmodTableIndex);
  }
  v21 = (unsigned int)(v6 + 1);
  if ( v7 )
  {
    v22 = (__int64 *)(v7 + 912 + 8 * v6);
    *(_DWORD *)(v7 + 672) |= 1 << (v6 + 1);
    if ( *(_QWORD *)(v7 + 472) )
    {
      v23 = *(PRKPROCESS **)(v7 + 416);
      if ( v23 == *(PRKPROCESS **)(gptiCurrent + 416LL) )
      {
        v24 = 0;
      }
      else
      {
        KeAttachProcess(*v23);
        v24 = 1;
        v22 = (__int64 *)(v7 + 912 + 8 * v6);
      }
      v21 = *(_QWORD *)(v7 + 472);
      *(_DWORD *)(v21 + 56) = *(_DWORD *)(v7 + 672);
      if ( v24 )
      {
        KeDetachProcess();
        v22 = (__int64 *)(v7 + 912 + 8 * v6);
      }
    }
    *(_QWORD *)(v16 + 72) = v7;
  }
  else
  {
    v22 = (__int64 *)(*(_QWORD *)(gptiCurrent + 456LL) + 48LL + 8 * v6);
    *(_DWORD *)(v16 + 64) |= 1u;
    *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL) |= 1 << (v6 + 1);
    *(_QWORD *)(v16 + 72) = 0LL;
  }
  *(_DWORD *)(v16 + 64) |= a6 & 0x42;
  *(_DWORD *)(v16 + 48) = v6;
  *(_QWORD *)(v16 + 56) = a5 - v39;
  *(_QWORD *)(v16 + 40) = *v22;
  *v22 = v16;
  if ( (*((_BYTE *)&unk_1C02DF858 + v6 + 1) & 4) != 0 )
  {
    v33 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v33;
    v34 = v16;
    HMLockObject(v16);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v26, v25, v27) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v16);
      return 0LL;
    }
    v16 = ThreadUnlock1(v26, v25, v27);
    if ( !v16 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v16 + 64) & 1) != 0 && (*((_BYTE *)&unk_1C02DF858 + v6 + 1) & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (*((_BYTE *)&unk_1C02DF858 + v6 + 1) & 4) != 0 )
    {
      v33 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v33;
      v34 = v16;
      HMLockObject(v16);
      GenerateMouseMove(0LL);
      v16 = ThreadUnlock1(v29, v28, v30);
      if ( (_DWORD)v6 == 1 )
      {
        v21 = *(_QWORD *)(gptiCurrent + 416LL);
        gppiInputProvider = v21;
      }
    }
  }
  if ( !(_DWORD)v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  if ( (_DWORD)v6 == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  if ( (_DWORD)v6 == 9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  return v16;
}
