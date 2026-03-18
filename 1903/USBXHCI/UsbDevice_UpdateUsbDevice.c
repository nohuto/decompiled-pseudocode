/*
 * XREFs of UsbDevice_UpdateUsbDevice @ 0x1C003D3DC
 * Callers:
 *     UsbDevice_UcxEvtUpdate @ 0x1C003CF00 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C003D220 (UsbDevice_UpdateCompletion.c)
 * Callees:
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0004CDC (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     RootHub_SetPortResumeTime @ 0x1C0022820 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0026C58 (RootHub_Update20HardwareLpmParameters.c)
 *     Etw_DeviceUpdate @ 0x1C003EBB4 (Etw_DeviceUpdate.c)
 */

__int64 __fastcall UsbDevice_UpdateUsbDevice(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a2 + 24);
  if ( (v2 & 8) != 0 && *(_BYTE *)(a2 + 52) )
  {
    *(_BYTE *)(a1 + 136) = 1;
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)v5;
    *(_WORD *)(a1 + 132) = *(_WORD *)(v5 + 16);
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 568) = *(_BYTE *)(a2 + 60) & 1;
    RootHub_Update20HardwareLpmParameters(
      *(_QWORD **)(*(_QWORD *)(a1 + 8) + 152LL),
      *(_DWORD *)(a1 + 44),
      *(_DWORD *)(a2 + 60),
      *(_BYTE *)(a1 + 135));
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 0x40) != 0 )
  {
    RootHub_SetPortResumeTime(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL), *(_DWORD *)(a1 + 44), *(_WORD *)(a2 + 64));
    *(_BYTE *)(a1 + 569) = 1;
  }
  XilUsbDevice_QueryAttributesFromTrustlet(a1);
  return Etw_DeviceUpdate(v6, a1);
}
