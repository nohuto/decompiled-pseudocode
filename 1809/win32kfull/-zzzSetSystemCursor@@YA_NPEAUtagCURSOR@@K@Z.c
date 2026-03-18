/*
 * XREFs of ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01B8648
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C021D300 (NtUserSetSystemCursor.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     CheckWinstaAttributeAccess @ 0x1C00A56F0 (CheckWinstaAttributeAccess.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00D889C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCu.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall zzzSetSystemCursor(struct tagCURSOR *a1, __int16 a2)
{
  _WORD *v2; // rax
  unsigned int i; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_WORD **)gasyscur;
  for ( i = 0; i < 0x13; ++i )
  {
    if ( *v2 == a2 )
      break;
    v2 += 276;
  }
  if ( i == 19 || !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    return 0;
  }
  v8 = *((_QWORD *)a1 + 6);
  v9 = *(_QWORD *)&gasyscur[276 * i + 4];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
  v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v13;
  v13[1] = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  zzzInternalSetSystemCursor(v8, i, 0LL, 3);
  ThreadUnlock1(v12, v11);
  return 1;
}
