/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C005B43C
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0059BC0 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C00554D4 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C0055BCC (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0058A18 (RimDeviceTypeToRimInputType.c)
 *     RIMFreeSpecificDev @ 0x1C005B798 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C005C370 (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi

  v3 = (__int64 *)(a1 + 424);
LABEL_2:
  v5 = *v3;
  v6 = v3;
  while ( v5 )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48)) & a2) != 0 )
    {
      v9 = *(_DWORD *)(v8 + 184);
      if ( (v9 & 0x2000) == 0 )
      {
        *(_DWORD *)(v8 + 184) = v9 | 8;
        rimOnPnpRemoveComplete(a1, *v6, v8);
        v13 = *v6;
        if ( *(_QWORD *)(*v6 + 248) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
          v13 = *v6;
        }
        *v6 = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(v13 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v13);
        rimDoRimDevChange(a1, v13, 3LL);
        RIMFreeSpecificDev(a1, v13);
        goto LABEL_2;
      }
    }
    v6 = (__int64 *)(v8 + 40);
    v5 = *(_QWORD *)(v8 + 40);
  }
  return 0LL;
}
