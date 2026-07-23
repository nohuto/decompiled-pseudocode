/*
 * XREFs of TtmpUpdatePrimaryDisplayWnf @ 0x1408BC27C
 * Callers:
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x1408BBE8C (TtmpPushTerminalDisplayStateOntoDevice.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     TtmpStartCallout @ 0x1408BC100 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1408BC1EC (TtmpStopCallout.c)
 */

char __fastcall TtmpUpdatePrimaryDisplayWnf(unsigned int *a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  _BYTE v8[48]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int Buffer; // [rsp+90h] [rbp+18h] BYREF

  Buffer = a3;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v6 = *(_DWORD *)(a2 + 72);
    if ( (v6 & 1) != 0 )
    {
      memset(v8, 0, 0x28uLL);
      TtmpStartCallout((__int64)v8, a1, a2, 6, (__int64)ZwUpdateWnfStateData, a3);
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
      LOBYTE(v6) = TtmpStopCallout((__int64)v8, 0);
    }
  }
  return v6;
}
