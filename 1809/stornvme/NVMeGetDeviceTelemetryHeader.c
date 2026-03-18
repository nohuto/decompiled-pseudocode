/*
 * XREFs of NVMeGetDeviceTelemetryHeader @ 0x1C0012308
 * Callers:
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall NVMeGetDeviceTelemetryHeader(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = *(_QWORD *)(a2 + 64);
    v4 = 60LL;
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = 16LL;
  }
  if ( v3 && *(_DWORD *)(a2 + v4) >= 0x28u )
  {
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
