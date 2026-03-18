/*
 * XREFs of rimDoSecondaryRimDevChangeCallback @ 0x1C00FC980
 * Callers:
 *     rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C00FC720 (rimDoScheduledSecondaryRimPnpWorkPending.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoSecondaryRimDevChangeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v9; // r8d
  int v10; // eax
  int v11; // r8d
  void (__fastcall *v12)(_DWORD *); // r10
  _DWORD v13[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 852) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_QWORD *)(a1 + 616) )
  {
    v9 = *(unsigned __int8 *)(a4 + 48);
    v13[0] = a5;
    v10 = RimDeviceTypeToRimInputType(a4, v9);
    v15 = *(_QWORD *)(a4 + 32);
    v13[2] = v10;
    v13[1] = v11;
    v14 = a3;
    v16 = a2;
    v12(v13);
  }
}
