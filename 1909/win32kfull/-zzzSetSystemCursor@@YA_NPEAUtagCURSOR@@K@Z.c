/*
 * XREFs of ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01CC2F8
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C0234ED0 (NtUserSetSystemCursor.c)
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C005983C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     CheckWinstaAttributeAccess @ 0x1C00889B0 (CheckWinstaAttributeAccess.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall zzzSetSystemCursor(struct tagCURSOR *a1, __int64 a2)
{
  _WORD *v2; // rax
  unsigned int i; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  v2 = (_WORD *)gasyscur[0];
  for ( i = 0; i < 0x13; ++i )
  {
    if ( *v2 == (_WORD)a2 )
      break;
    v2 += 276;
  }
  if ( i == 19 || !(unsigned int)CheckWinstaAttributeAccess(16LL, a2) )
    return 0;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    return 0;
  }
  v9 = *((_QWORD *)a1 + 6);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v10 = gasyscur[69 * i + 1];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7);
  v15 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
  v16 = v10;
  if ( v10 )
    HMLockObject(v10);
  zzzInternalSetSystemCursor(v9, i, 0LL, 3);
  ThreadUnlock1(v13, v12, v14);
  return 1;
}
