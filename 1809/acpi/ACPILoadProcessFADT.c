/*
 * XREFs of ACPILoadProcessFADT @ 0x1C00BACDC
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00BA420 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0025D3C (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeClearRegisters @ 0x1C0026004 (ACPIGpeClearRegisters.c)
 *     ACPIProcessHardwareInformation @ 0x1C009BB88 (ACPIProcessHardwareInformation.c)
 *     ACPILoadProcessFACS @ 0x1C00BA7D4 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessDSDT @ 0x1C00BAC18 (ACPILoadProcessDSDT.c)
 */

__int64 ACPILoadProcessFADT()
{
  __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // rdx
  bool v3; // zf

  v0 = *((_QWORD *)AcpiInformation + 1);
  if ( *(_BYTE *)(v0 + 8) >= 5u && (*(_DWORD *)(v0 + 112) & 0x100000) != 0 )
    *((_BYTE *)AcpiInformation + 133) = 1;
  result = ACPILoadProcessFACS();
  if ( (int)result >= 0 || *((_BYTE *)AcpiInformation + 133) )
  {
    if ( !*((_BYTE *)AcpiInformation + 133) )
    {
      result = ACPIProcessHardwareInformation();
      if ( (int)result < 0 )
        return result;
      ACPIGpeClearRegisters();
      ACPIGpeEnableDisableEvents(0, v2);
    }
    *((_DWORD *)AcpiInformation + 31) = 0;
    *((_DWORD *)AcpiInformation + 32) = 0;
    v3 = (*(_DWORD *)(v0 + 112) & 0x200) == 0;
    *((_BYTE *)AcpiInformation + 132) = (*(_DWORD *)(v0 + 112) & 0x200) != 0;
    if ( !v3 && (*((_BYTE *)AcpiInformation + 133) || (*(_DWORD *)(v0 + 112) & 0x200000) != 0) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x11u,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
      KeBugCheckEx(0xA5u, 0x11uLL, 0xCuLL, *(unsigned int *)(v0 + 112), 0LL);
    }
    return ACPILoadProcessDSDT();
  }
  return result;
}
