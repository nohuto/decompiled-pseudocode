/*
 * XREFs of TtmpPushTerminalState @ 0x1408BB810
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1408BAAFC (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     TtmpCallSetInputMode @ 0x1408BAEDC (TtmpCallSetInputMode.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1408BB8D4 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiGetTerminalById @ 0x1408BBE94 (TtmiGetTerminalById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

char __fastcall TtmpPushTerminalState(__int64 a1, __int64 a2)
{
  int v2; // r8d
  char v3; // bl
  __int64 v6; // rbp
  __int64 v7; // r8
  unsigned int v8; // r8d
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 596);
  v3 = 0;
  v10 = 0LL;
  if ( v2 != -1 )
  {
    if ( (int)TtmiGetTerminalById(&v10, a1) >= 0 )
    {
      v6 = v10;
      v7 = *(unsigned int *)(v10 + 276);
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 || (unsigned int)(v7 - 2) > 1 )
      {
        TtmpQueueTerminalDisplayStateOntoDevice(a1, a2, v7);
        if ( (*(_DWORD *)(a2 + 600) & 0x80u) == 0 )
          v8 = 0;
        else
          v8 = *(_DWORD *)(v6 + 48);
        if ( *(_QWORD *)(a2 + 64) )
          TtmpCallSetInputMode(a1, a2, v8);
      }
      else
      {
        return 1;
      }
    }
    else
    {
      TtmiLogError("TtmpPushTerminalState");
    }
  }
  return v3;
}
