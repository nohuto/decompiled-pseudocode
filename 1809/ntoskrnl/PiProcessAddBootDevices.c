/*
 * XREFs of PiProcessAddBootDevices @ 0x14075AAB8
 * Callers:
 *     PipAddDevicesToBootDriverWorker @ 0x1409D93F4 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x14015A65C (PoFxPrepareDevice.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 */

__int64 __fastcall PiProcessAddBootDevices(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+34h] [rbp+Ch]
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v2 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v2 + 300) == 770 && (*(_DWORD *)(v2 + 396) & 0x6002) == 0 && !*(_QWORD *)(v2 + 432) )
  {
    PiPnpRtlBeginOperation(&P);
    v4 = 0;
    v5 = BYTE2(PnpShutdownEvent.Limit);
    if ( (int)PipCallDriverAddDevice(v2, (__int64)&v4) >= 0 )
      PoFxPrepareDevice(v2, 0);
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
  return 0LL;
}
