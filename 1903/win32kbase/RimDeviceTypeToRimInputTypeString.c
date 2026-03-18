/*
 * XREFs of RimDeviceTypeToRimInputTypeString @ 0x1C013A9CC
 * Callers:
 *     RIMOpenDev @ 0x1C0067A60 (RIMOpenDev.c)
 *     rimInputApc @ 0x1C006E9D0 (rimInputApc.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006F2B0 (RIMStartDeviceSpecificRead.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00B4054 (RIMLogDeviceHealthTelemetry.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMDeliverConfigRequest @ 0x1C014312C (RIMDeliverConfigRequest.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall RimDeviceTypeToRimInputTypeString(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  const wchar_t *result; // rax
  int v5; // ecx

  if ( !a2 )
    return L"RIM_INPUT_TYPE_MOUSE";
  v2 = a2 - 1;
  if ( !v2 )
    return L"RIM_INPUT_TYPE_KEYBOARD";
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      if ( *(_BYTE *)(a1 + 48) != 3 )
        return L"RIM_INPUT_TYPE_HID_GEN";
    }
    else
    {
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 480) + 24LL);
      if ( v5 == 7 )
        return L"RIM_INPUT_TYPE_HID_PTP";
      if ( (unsigned int)(v5 - 5) <= 1 )
        return L"RIM_INPUT_TYPE_HID_PEN";
      if ( (unsigned int)(v5 - 1) <= 3 )
        return L"RIM_INPUT_TYPE_HID_TCH";
    }
    return &pwsz;
  }
  if ( v3 != 1 )
    return &pwsz;
  result = L"RIM_INPUT_TYPE_PTP_CONFIG";
  if ( (*(_DWORD *)(a1 + 184) & 0x1000) == 0 )
    return L"RIM_INPUT_TYPE_TCH_CONFIG";
  return result;
}
