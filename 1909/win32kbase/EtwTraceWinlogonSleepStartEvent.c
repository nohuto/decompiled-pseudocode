/*
 * XREFs of EtwTraceWinlogonSleepStartEvent @ 0x1C00A8460
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0065F24 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     McTemplateK0q @ 0x1C010D17C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceWinlogonSleepStartEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0q(a1, &WinlogonSleepStartEvent, a3, (unsigned int)a1);
  return result;
}
