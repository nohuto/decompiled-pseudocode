/*
 * XREFs of EtwTraceStopPowerEventCalloutWorker @ 0x1C009714C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     McTemplateK0dxq @ 0x1C00E9848 (McTemplateK0dxq.c)
 */

__int64 __fastcall EtwTraceStopPowerEventCalloutWorker(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0dxq(a1, (unsigned int)&StopPowerEventCalloutWorker, a3, a1, a2, a3);
  return result;
}
