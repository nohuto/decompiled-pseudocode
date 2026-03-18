/*
 * XREFs of IrqLibpSetSciConnectionData @ 0x1C00BE4D4
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C009D3A4 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

NTSTATUS __fastcall IrqLibpSetSciConnectionData(__int128 *a1)
{
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 Data; // [rsp+40h] [rbp-78h] BYREF
  __int128 v8; // [rsp+48h] [rbp-70h]
  __int128 v9; // [rsp+58h] [rbp-60h]
  __int128 v10; // [rsp+68h] [rbp-50h]
  __int128 v11; // [rsp+78h] [rbp-40h]
  __int128 v12; // [rsp+88h] [rbp-30h]
  __int64 v13; // [rsp+98h] [rbp-20h]

  v1 = *a1;
  Data = 1LL;
  v2 = a1[1];
  v8 = v1;
  v3 = a1[2];
  v9 = v2;
  v4 = a1[3];
  v10 = v3;
  v5 = a1[4];
  v11 = v4;
  *(_QWORD *)&v4 = *((_QWORD *)a1 + 10);
  v12 = v5;
  v13 = v4;
  return IoSetDevicePropertyData(
           *(PDEVICE_OBJECT *)(RootDeviceExtension + 736),
           &INTERRUPT_CONNECTION_DATA_PKEY,
           0,
           0,
           0x1003u,
           0x60u,
           &Data);
}
