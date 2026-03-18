/*
 * XREFs of TtmpUpdatePrimaryDisplayWnf @ 0x1408BBB4C
 * Callers:
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x1408BB75C (TtmpPushTerminalDisplayStateOntoDevice.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     TtmpStartCallout @ 0x1408BB9D0 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1408BBABC (TtmpStopCallout.c)
 */

char __fastcall TtmpUpdatePrimaryDisplayWnf(unsigned int *a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  _BYTE v8[48]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+90h] [rbp+18h] BYREF

  v9 = a3;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v6 = *(_DWORD *)(a2 + 72);
    if ( (v6 & 1) != 0 )
    {
      memset(v8, 0, 0x28uLL);
      TtmpStartCallout((__int64)v8, a1, a2, 6, (__int64)ZwUpdateWnfStateData, a3);
      ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v9, 4LL);
      LOBYTE(v6) = TtmpStopCallout((__int64)v8, 0);
    }
  }
  return v6;
}
