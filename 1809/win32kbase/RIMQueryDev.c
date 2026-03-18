/*
 * XREFs of RIMQueryDev @ 0x1C0088FEC
 * Callers:
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     RIMRefreshDeviceAttributes @ 0x1C010F3C0 (RIMRefreshDeviceAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C0052924 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00890E4 (WPP_RECORDER_SF_DDDD.c)
 *     RIMGetKbdExId @ 0x1C00891A0 (RIMGetKbdExId.c)
 *     WPP_RECORDER_SF_qL @ 0x1C01223E0 (WPP_RECORDER_SF_qL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  ULONG *v5; // rbx
  NTSTATUS v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // esi
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // edx
  int IoStatusBlock; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp+8h]

  v3 = *(unsigned __int8 *)(a2 + 48);
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
  v11 = v6;
  if ( v6 < 0 )
    WPP_RECORDER_SF_qL(v8, v7, v9, v10, IoStatusBlock, a2, v6);
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    v13 = RIMGetKbdExId(*(HANDLE *)(a2 + 224));
    v16 = *(unsigned __int8 *)(a2 + 464);
    v17 = *(unsigned __int8 *)(a2 + 465);
    if ( v13 < 0 )
    {
      *(_DWORD *)(a2 + 492) = v16;
      *(_DWORD *)(a2 + 496) = v17;
      LODWORD(v20) = v17;
      LODWORD(v19) = v16;
      WPP_RECORDER_SF_qDD(
        v16,
        2u,
        0x13u,
        0x15u,
        (__int64)&WPP_5e106e1955d43df0565e3144618cade0_Traceguids,
        a2,
        v19,
        v20);
    }
    else
    {
      WPP_RECORDER_SF_DDDD(v16, v17, v14, v15, IoStatusBlock, v16, v17, v21, SBYTE4(v21));
      *(_QWORD *)(a2 + 492) = v21;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v11;
}
