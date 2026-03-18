/*
 * XREFs of IrqLibpSetSciConnectionData @ 0x1C00B89A8
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0094260 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

NTSTATUS __fastcall IrqLibpSetSciConnectionData(__int64 a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _QWORD Data[12]; // [rsp+40h] [rbp-78h] BYREF

  memset(Data, 0, sizeof(Data));
  v2 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)&Data[1] = *(_OWORD *)a1;
  LODWORD(Data[0]) = 1;
  v3 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)&Data[3] = v2;
  v4 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)&Data[5] = v3;
  v5 = *(_OWORD *)(a1 + 64);
  *(_OWORD *)&Data[7] = v4;
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)&Data[9] = v5;
  Data[11] = v4;
  return IoSetDevicePropertyData(
           *(PDEVICE_OBJECT *)(RootDeviceExtension + 736),
           &INTERRUPT_CONNECTION_DATA_PKEY,
           0,
           0,
           0x1003u,
           0x60u,
           Data);
}
