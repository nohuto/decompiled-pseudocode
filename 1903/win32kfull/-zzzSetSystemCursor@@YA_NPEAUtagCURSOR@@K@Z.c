/*
 * XREFs of ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01CC488
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C02354F0 (NtUserSetSystemCursor.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B834C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall zzzSetSystemCursor(struct tagCURSOR *a1, __int64 a2)
{
  _WORD *v2; // rax
  unsigned int i; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

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
  v10 = *((_QWORD *)a1 + 6);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v11 = gasyscur[69 * i + 1];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7, v8);
  v16 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
  v17 = v11;
  if ( v11 )
    HMLockObject(v11);
  zzzInternalSetSystemCursor(v10, i, 0LL, 3);
  ThreadUnlock1(v14, v13, v15);
  return 1;
}
