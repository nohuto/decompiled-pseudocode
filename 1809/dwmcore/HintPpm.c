/*
 * XREFs of HintPpm @ 0x18014A494
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180049690 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x1800CC774 (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     McTemplateU0ix @ 0x18014A7D0 (McTemplateU0ix.c)
 */

NTSTATUS __fastcall HintPpm(int a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v1 = a1;
  InputBuffer = 5LL;
  v6 = 6;
  result = NtPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    return McTemplateU0ix(v4, v3, result, v1);
  return result;
}
