/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStop @ 0x1C00E8240
 * Callers:
 *     EnablePTPDevices @ 0x1C00E51B0 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceTouchPadEnabledStatusChangeStop(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &TouchPadEnabledStatusChangeStop, (const GUID *)&Context.Flags);
  return result;
}
