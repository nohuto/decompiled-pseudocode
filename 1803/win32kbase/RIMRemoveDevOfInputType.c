/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C00F822C
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C00E55D0 (RIMRemoveInputOfType.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     RIMFreeSpecificDev @ 0x1C00F7964 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChange @ 0x1C00FC564 (rimDoRimDevChange.c)
 *     rimOnPnpRemoveComplete @ 0x1C00FD584 (rimOnPnpRemoveComplete.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00FD9C4 (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 v7; // r8
  int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi

  v3 = (__int64 *)(a1 + 408);
LABEL_2:
  v5 = *v3;
  v6 = v3;
  while ( v5 )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48)) & a2) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 184);
      if ( (v8 & 0x1000) == 0 )
      {
        *(_DWORD *)(v7 + 184) = v8 | 8;
        rimOnPnpRemoveComplete(a1, *v6);
        v12 = *v6;
        if ( *(_QWORD *)(*v6 + 248) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
          v12 = *v6;
        }
        *v6 = *(_QWORD *)(v12 + 40);
        *(_QWORD *)(v12 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v12);
        rimDoRimDevChange(a1, v12, 3LL);
        RIMFreeSpecificDev(a1, v12);
        goto LABEL_2;
      }
    }
    v6 = (__int64 *)(v7 + 40);
    v5 = *(_QWORD *)(v7 + 40);
  }
  return 0LL;
}
