/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C00D7FBC
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C00D7EA0 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C01F6410 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D7B08 (zzzUnhookWindowsHookEx.c)
 *     AddHmodDependency @ 0x1C00D84E4 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00D8520 (GetHmodTableIndex.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01B0444 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  __int64 v7; // rsi
  __int64 v9; // rcx
  char v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  ACCESS_MASK v14; // ebx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbx
  int HmodTableIndex; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  __int64 *v23; // r8
  PRKPROCESS *v24; // r13
  PRKPROCESS *v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // [rsp+20h] [rbp-A8h]
  __int64 *v36; // [rsp+28h] [rbp-A0h]
  __int64 v37; // [rsp+30h] [rbp-98h]
  PRKPROCESS *v38; // [rsp+38h] [rbp-90h]
  __int64 v39; // [rsp+68h] [rbp-60h] BYREF
  __int64 v40; // [rsp+70h] [rbp-58h]
  __int64 v42; // [rsp+D8h] [rbp+10h]

  v42 = a2;
  v7 = a3;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v9 = 1426LL;
    goto LABEL_66;
  }
  if ( !a5 )
  {
    v9 = 1427LL;
LABEL_66:
    UserSetLastError(v9, a2);
    return 0LL;
  }
  if ( a3 )
  {
    v10 = byte_1C02DD0A8[a4 + 1];
    if ( (v10 & 2) == 0 )
    {
      v9 = 1429LL;
      goto LABEL_66;
    }
    if ( *(_QWORD *)(v7 + 448) != *(_QWORD *)(gptiCurrent + 448LL) )
      goto LABEL_11;
    v11 = *(_QWORD *)(gptiCurrent + 416LL);
    a2 = *(_QWORD *)(v7 + 416);
    if ( v11 != a2 )
    {
      if ( !a1 && (v10 & 0x24) == 0 )
        goto LABEL_7;
      if ( !gbEnforceUIPI
        && (*(_DWORD *)(a2 + 772) != *(_DWORD *)(v11 + 772) || *(_DWORD *)(a2 + 776) != *(_DWORD *)(v11 + 776))
        && (*(_DWORD *)(v7 + 480) & 0x400000) == 0 )
      {
        goto LABEL_11;
      }
      if ( (*(_DWORD *)(v7 + 480) & 0xC) != 0 && (v10 & 0x10) == 0 )
      {
        v9 = 1458LL;
        goto LABEL_66;
      }
    }
  }
  else if ( !a1 && (byte_1C02DD0A8[a4 + 1] & 0x24) == 0 )
  {
LABEL_7:
    v9 = 1428LL;
    goto LABEL_66;
  }
  v12 = a4 + 1;
  v37 = v12;
  if ( (byte_1C02DD0A8[v12] & 4) != 0 )
  {
    v13 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)*(_QWORD *)(v13 + 872) < 0x4000 && *(int *)(v13 + 12) >= 0 )
      {
        UserSetLastError(5LL, v13);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 4LL);
        return 0LL;
      }
    }
  }
  if ( a4 )
  {
    if ( a4 == 1 )
      v14 = 32;
    else
      v14 = 8;
  }
  else
  {
    v14 = 16;
  }
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 880LL), v14) )
  {
LABEL_11:
    v9 = 5LL;
    goto LABEL_66;
  }
  if ( v14 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL) + 32LL) & 4) != 0 )
  {
    v9 = 1459LL;
    goto LABEL_66;
  }
  LOBYTE(v15) = 5;
  v16 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 448LL), v15, 96LL);
  v17 = v16;
  v35 = v16;
  v18 = v16;
  if ( !v16 )
    return 0LL;
  *(_DWORD *)(v16 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(v42);
    *(_DWORD *)(v18 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126LL, v20);
      HMFreeObject(v18);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
    v17 = v18;
  }
  v21 = (unsigned int)(a4 + 1);
  v22 = 1 << (a4 + 1);
  if ( v7 )
  {
    v23 = (__int64 *)(v7 + 896 + 8 * v12);
    v36 = v23;
    *(_DWORD *)(v7 + 672) |= v22;
    if ( *(_QWORD *)(v7 + 472) )
    {
      v24 = *(PRKPROCESS **)(v7 + 416);
      v25 = *(PRKPROCESS **)(gptiCurrent + 416LL);
      v38 = v25;
      if ( v24 != v25 )
      {
        KeAttachProcess(*v24);
        v25 = v38;
        v23 = v36;
      }
      v21 = *(_QWORD *)(v7 + 472);
      *(_DWORD *)(v21 + 56) = *(_DWORD *)(v7 + 672);
      if ( v24 != v25 )
      {
        KeDetachProcess();
        v23 = v36;
      }
      v12 = v37;
    }
    v17 = v35;
  }
  else
  {
    v23 = (__int64 *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL + 8 * v12);
    *(_DWORD *)(v18 + 64) |= 1u;
    v26 = *(__int64 **)(gptiCurrent + 456LL);
    v21 = *v26;
    *(_DWORD *)(*v26 + 16) |= v22;
    v7 = 0LL;
  }
  *(_QWORD *)(v17 + 72) = v7;
  *(_DWORD *)(v18 + 64) |= a6 & 0x42;
  *(_DWORD *)(v18 + 48) = a4;
  *(_QWORD *)(v18 + 56) = a5 - a1;
  *(_QWORD *)(v18 + 40) = *v23;
  *v23 = v18;
  if ( (byte_1C02DD0A8[v12] & 4) != 0 )
  {
    v39 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v39;
    v40 = v18;
    _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v28, v27, v29) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v18, v30);
      return 0LL;
    }
    v18 = ThreadUnlock1(v28, v27, v29);
    if ( !v18 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v18 + 64) & 1) != 0 && (byte_1C02DD0A8[v12] & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (byte_1C02DD0A8[v12] & 4) != 0 )
    {
      v39 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v39;
      v40 = v18;
      _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
      GenerateMouseMove(0LL);
      v18 = ThreadUnlock1(v32, v31, v33);
      if ( a4 == 1 )
      {
        v21 = *(_QWORD *)(gptiCurrent + 416LL);
        gppiInputProvider = v21;
      }
    }
  }
  if ( a4 == 9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  return v18;
}
