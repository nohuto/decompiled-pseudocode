/*
 * XREFs of NVMeGetDeviceTelemetryHeader @ 0x1C0011320
 * Callers:
 *     ScsiToNVMe @ 0x1C0003140 (ScsiToNVMe.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0003DCC (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003F74 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C000DDB0 (BuildGetLogPageCommandForTelemetryLog.c)
 */

__int64 __fastcall NVMeGetDeviceTelemetryHeader(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  void *v6; // r14
  __int64 v7; // rax
  int v8; // edx
  __int64 SrbExtension; // rbx
  unsigned int v10; // edx
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-18h]
  void *v14; // [rsp+78h] [rbp+38h]
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 PhysicalAddress; // [rsp+88h] [rbp+48h]

  v15 = a3;
  v3 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(void **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(void **)(a2 + 24);
    v7 = 16LL;
  }
  v14 = 0LL;
  LODWORD(v15) = 512;
  PhysicalAddress = 0LL;
  if ( v6 && *(_DWORD *)(a2 + v7) >= 0x28u )
  {
    if ( *(_BYTE *)(a1 + 16) )
    {
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v6, &v15);
      if ( !PhysicalAddress || (v8 = v15, (unsigned int)v15 < 0x200) )
      {
        *(_BYTE *)(a2 + 3) = 4;
        return 3238002691LL;
      }
      if ( (unsigned int)v15 > 0x200 )
        v8 = 512;
      v14 = v6;
      LODWORD(v15) = v8;
    }
    else
    {
      NVMeAllocateDmaBuffer(a1, 0x200u);
      v6 = 0LL;
    }
    if ( v6 )
    {
      SrbExtension = GetSrbExtension(a2);
      NVMeZeroMemory(v6, v10);
      *(_BYTE *)(SrbExtension + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      BuildGetLogPageCommandForTelemetryLog(a1, SrbExtension, v11, v15, PhysicalAddress, v13, 0LL, 1);
      *(_BYTE *)(SrbExtension + 4253) |= 4u;
      *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageTelemetryHeaderCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v14;
      *(_QWORD *)(SrbExtension + 4208) = PhysicalAddress;
      *(_DWORD *)(SrbExtension + 4240) = v15;
      *(_QWORD *)(SrbExtension + 4232) = 0LL;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
    return v3;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
