/*
 * XREFs of RIMQueryDev @ 0x1C00729FC
 * Callers:
 *     rimOnPnpArrived @ 0x1C00690B0 (rimOnPnpArrived.c)
 *     RIMRefreshDeviceAttributes @ 0x1C013A350 (RIMRefreshDeviceAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C007193C (WPP_RECORDER_SF_qDD.c)
 *     RIMGetKbdExId @ 0x1C00728B0 (RIMGetKbdExId.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0072B1C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C011EFA0 (WPP_RECORDER_SF_qd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  ULONG *v5; // rbx
  NTSTATUS v6; // eax
  int v7; // edx
  unsigned int v8; // esi
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbx
  int v14; // eax
  int v15; // ecx
  int IoStatusBlock; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 48);
  v17 = 0LL;
  v5 = (ULONG *)(a1 + 32 * (v3 + 4));
  if ( (_BYTE)v3 == 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 224),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 256),
         v5[2],
         0LL,
         0,
         (PVOID)(a2 + v5[3]),
         v5[4]);
  *(_DWORD *)(a2 + 292) = v6;
  v8 = v6;
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_qd((_DWORD)gRimLog, v7, 1, 20, (__int64)&WPP_03619aaa3eac3f95e9b05f540081c405_Traceguids, a2, v6);
  }
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 224), &v17) < 0 )
    {
      v14 = *(unsigned __int8 *)(a2 + 464);
      v15 = *(unsigned __int8 *)(a2 + 465);
      *(_DWORD *)(a2 + 492) = v14;
      *(_DWORD *)(a2 + 496) = v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_qDD(
          (_DWORD)gRimLog,
          v10,
          1,
          22,
          (__int64)&WPP_03619aaa3eac3f95e9b05f540081c405_Traceguids,
          a2,
          v14,
          v15);
      }
    }
    else
    {
      v13 = v17;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD(
          *(unsigned __int8 *)(a2 + 465),
          *(unsigned __int8 *)(a2 + 464),
          v11,
          v12,
          IoStatusBlock,
          *(_BYTE *)(a2 + 464),
          *(_BYTE *)(a2 + 465),
          v17,
          SBYTE4(v17));
      *(_QWORD *)(a2 + 492) = v13;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v8;
}
