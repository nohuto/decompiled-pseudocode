/*
 * XREFs of TtmpPushTerminalState @ 0x14087F67C
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x14087E97C (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpCallSetInputMode @ 0x14087ED68 (TtmpCallSetInputMode.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x14087F740 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiGetTerminalById @ 0x14087FD00 (TtmiGetTerminalById.c)
 */

char __fastcall TtmpPushTerminalState(__int64 a1, __int64 a2)
{
  int v2; // r8d
  char v3; // bl
  int TerminalById; // eax
  __int64 v7; // rbp
  __int64 v8; // r8
  unsigned int v9; // r8d
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 596);
  v3 = 0;
  v11 = 0LL;
  if ( v2 != -1 )
  {
    TerminalById = TtmiGetTerminalById(&v11, a1);
    if ( TerminalById >= 0 )
    {
      v7 = v11;
      v8 = *(unsigned int *)(v11 + 276);
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 || (unsigned int)(v8 - 2) > 1 )
      {
        TtmpQueueTerminalDisplayStateOntoDevice(a1, a2, v8);
        if ( (*(_DWORD *)(a2 + 600) & 0x80u) == 0 )
          v9 = 0;
        else
          v9 = *(_DWORD *)(v7 + 48);
        if ( *(_QWORD *)(a2 + 64) )
          TtmpCallSetInputMode(a1, a2, v9);
      }
      else
      {
        return 1;
      }
    }
    else
    {
      TtmiLogError("TtmpPushTerminalState", 3068, TerminalById, -1);
    }
  }
  return v3;
}
