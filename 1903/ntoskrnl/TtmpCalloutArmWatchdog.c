/*
 * XREFs of TtmpCalloutArmWatchdog @ 0x1408BB6B4
 * Callers:
 *     TtmpStartCallout @ 0x1408BC100 (TtmpStartCallout.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 */

int __fastcall TtmpCalloutArmWatchdog(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  __int64 v5; // rdi
  _QWORD InputBuffer[12]; // [rsp+30h] [rbp-19h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+5Fh] BYREF

  if ( a1 )
  {
    v4 = &retaddr;
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
    {
      memset(InputBuffer, 0, sizeof(InputBuffer));
      InputBuffer[4] = *(int *)(a1 + 16);
      InputBuffer[5] = *(_QWORD *)(a1 + 8);
      LODWORD(InputBuffer[0]) = 21;
      InputBuffer[1] = v5;
      InputBuffer[2] = __PAIR64__(a2, a3);
      LODWORD(InputBuffer[3]) = 416;
      InputBuffer[6] = KeGetCurrentThread();
      InputBuffer[10] = InputBuffer;
      InputBuffer[9] = &TtmpCalloutWatchdogCallback;
      InputBuffer[7] = a4;
      LODWORD(v4) = NtPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    }
  }
  return (int)v4;
}
