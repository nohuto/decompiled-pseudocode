/*
 * XREFs of ndisCheckMiniportWakeUpCapable @ 0x1C003483C
 * Callers:
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C007340C (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 */

char __fastcall ndisCheckMiniportWakeUpCapable(__int64 a1)
{
  int v1; // eax
  int v3; // ecx

  v1 = *(_DWORD *)(a1 + 1048);
  v3 = 2;
  if ( ((unsigned int)(v1 - 2) <= 2
     || (unsigned int)(*(_DWORD *)(a1 + 1040) - 2) <= 2
     || (unsigned int)(*(_DWORD *)(a1 + 1044) - 2) <= 2
     || (*(_BYTE *)(a1 + 1004) & 6) != 0)
    && *(_DWORD *)(a1 + 1268)
    && (unsigned int)(*(_DWORD *)(a1 + 1272) - 2) <= 2
    && (*(_DWORD *)(a1 + 1228) & 0x3800) != 0 )
  {
    *(_DWORD *)(a1 + 124) |= 0x4000000u;
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 124) &= ~0x4000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        121,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        a1);
    if ( (byte_1C00E8082 & 8) != 0 )
      McTemplateK0jqxqd(
        v3,
        (unsigned int)&InitializeAdapterInfo,
        a1 + 4008,
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        3,
        0);
    return 0;
  }
}
