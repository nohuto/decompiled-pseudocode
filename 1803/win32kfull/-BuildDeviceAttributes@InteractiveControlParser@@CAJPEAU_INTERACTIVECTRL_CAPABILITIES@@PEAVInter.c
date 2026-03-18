/*
 * XREFs of ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C0216110
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C02161C0 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C02162DC (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C021663C (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceAttributes(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        struct InteractiveControlDevice *a2)
{
  __int64 result; // rax
  const GUID *v5; // r8
  const GUID *v6; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const char *v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]

  result = InteractiveControlParser::BuildDeviceShapeDescriptor(a2);
  if ( (int)result < 0 )
    result = 0LL;
  if ( *((_DWORD *)a1 + 18) )
  {
    result = InteractiveControlParser::FindDigitizerForDevice(a2);
    if ( (int)result < 0 )
    {
      if ( dword_1C031C7D0 > 3u )
      {
        v9 = 48LL;
        v8 = "Failed to find digitizer during initialization.";
        TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E4366, v5, v6, 3u, &pData);
      }
      return 0LL;
    }
  }
  return result;
}
