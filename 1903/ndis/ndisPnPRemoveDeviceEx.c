/*
 * XREFs of ndisPnPRemoveDeviceEx @ 0x1C00A50AC
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x1C009DBC0 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118B70 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPreReleaseHardware @ 0x1C0119350 (ndisWdfPreReleaseHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 */

__int64 __fastcall ndisPnPRemoveDeviceEx(__int64 a1)
{
  unsigned int v2; // eax
  bool v3; // zf
  int v4; // eax
  __int64 result; // rax
  __int64 InputBuffer; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  char v8; // [rsp+3Ch] [rbp-Ch]
  char v9; // [rsp+3Dh] [rbp-Bh]
  __int16 v10; // [rsp+3Eh] [rbp-Ah]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      29,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1);
  v2 = *(_DWORD *)(a1 + 124) & 0xFFFEFFFF;
  *(_DWORD *)(a1 + 1520) = 5;
  *(_DWORD *)(a1 + 124) = v2 | 0x10;
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a1)
    && ((*(_DWORD *)(a1 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a1 + 2684) & 0x200) != 0)
    && *(_DWORD *)(a1 + 1832) == 14 )
  {
    v3 = *(_BYTE *)(a1 + 1001) == 2;
    InputBuffer = *(_QWORD *)(a1 + 3832);
    v10 = 0;
    v7 = 4;
    v8 = 0;
    if ( !v3
      || (*(_DWORD *)(a1 + 1008) & 1) == 0
      || *(_DWORD *)(a1 + 1012) < 0x10u
      || *(_DWORD *)(a1 + 1016) < 0x4Au
      || (unsigned int)(*(_DWORD *)(a1 + 1044) - 3) > 1
      || (*(_DWORD *)(a1 + 1052) & 1) == 0
      || (v4 = *(_DWORD *)(a1 + 1028) & 3, v9 = 1, (_BYTE)v4 != 3) )
    {
      v9 = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  result = ndisPnPRemoveDevice(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4,
             13,
             30,
             (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
             a1);
  return result;
}
