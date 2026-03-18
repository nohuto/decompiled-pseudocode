/*
 * XREFs of NVMeGetDeviceTelemetryData @ 0x1C0012174
 * Callers:
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall NVMeGetDeviceTelemetryData(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v7; // [rsp+88h] [rbp+38h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_QWORD *)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 16LL;
  }
  if ( v4 && *(_DWORD *)(a2 + v5) >= 0x200u )
  {
    HIBYTE(v7) = a3[10];
    BYTE2(v7) = a3[11];
    BYTE1(v7) = a3[12];
    LOBYTE(v7) = a3[13];
    NVMeAllocateDmaBuffer(a1, v7 << 9);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
