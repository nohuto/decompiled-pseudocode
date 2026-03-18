/*
 * XREFs of ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C025827C
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C0258330 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C0258470 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C025886C (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceAttributes(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        struct InteractiveControlDevice *a2)
{
  __int64 result; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const char *v6; // [rsp+50h] [rbp-28h]
  __int64 v7; // [rsp+58h] [rbp-20h]

  result = InteractiveControlParser::BuildDeviceShapeDescriptor(a2);
  if ( (int)result < 0 )
    result = 0LL;
  if ( *((_DWORD *)a1 + 18) )
  {
    result = InteractiveControlParser::FindDigitizerForDevice(a2);
    if ( (int)result < 0 )
    {
      if ( dword_1C031F308 > 3u )
      {
        v7 = 48LL;
        v6 = "Failed to find digitizer during initialization.";
        TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E8FD6, 0LL, 0LL, 3u, &pData);
      }
      return 0LL;
    }
  }
  return result;
}
