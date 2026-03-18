/*
 * XREFs of RIMQueryDev @ 0x1C00F80CC
 * Callers:
 *     RIMRefreshDeviceAttributes @ 0x1C00E4610 (RIMRefreshDeviceAttributes.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C00F0B24 (WPP_RECORDER_SF_qDD.c)
 *     RIMGetKbdExId @ 0x1C00F7C9C (RIMGetKbdExId.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00F8308 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_qL @ 0x1C00F8410 (WPP_RECORDER_SF_qL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // esi
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rbx
  int IoStatusBlock; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v4 = 32LL * *(unsigned __int8 *)(a2 + 48);
  if ( *(_BYTE *)(a2 + 48) == 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v5 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 224),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 256),
         *(_DWORD *)(v4 + a1 + 128),
         0LL,
         0,
         (PVOID)(a2 + *(unsigned int *)(v4 + a1 + 132)),
         *(_DWORD *)(v4 + a1 + 136));
  *(_DWORD *)(a2 + 292) = v5;
  v9 = v5;
  if ( v5 < 0 )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, IoStatusBlock, a2, v5);
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    v10 = RIMGetKbdExId(*(HANDLE *)(a2 + 224), &v20);
    v13 = *(unsigned __int8 *)(a2 + 464);
    v14 = *(unsigned __int8 *)(a2 + 465);
    if ( v10 < 0 )
    {
      *(_DWORD *)(a2 + 492) = v13;
      *(_DWORD *)(a2 + 496) = v14;
      LODWORD(v19) = v14;
      LODWORD(v18) = v13;
      WPP_RECORDER_SF_qDD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0x15u,
        (__int64)&WPP_d70bfcf03e853c5bfd6e82def874f5bb_Traceguids,
        a2,
        v18,
        v19);
    }
    else
    {
      v15 = v20;
      WPP_RECORDER_SF_DDDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        v11,
        v12,
        IoStatusBlock,
        v13,
        v14,
        v20,
        SBYTE4(v20));
      *(_QWORD *)(a2 + 492) = v15;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v9;
}
