/*
 * XREFs of ndisCheckMiniportWakeUpCapable @ 0x1C0015804
 * Callers:
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C004A498 (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
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
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(121LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
    if ( (byte_1C00A2082 & 8) != 0 )
      McTemplateK0jqxqd(
        v3,
        (unsigned int)&InitializeAdapterInfo,
        a1 + 4040,
        a1 + 4040,
        *(_DWORD *)(a1 + 4088),
        *(_QWORD *)(a1 + 4056),
        3,
        0);
    return 0;
  }
}
