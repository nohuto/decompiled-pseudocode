/*
 * XREFs of IoctlQueryTemperatureInfoProcess @ 0x1C0011050
 * Callers:
 *     IoctlToNVMe @ 0x1C0002698 (IoctlToNVMe.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     KelvinToCelsius @ 0x1C0011934 (KelvinToCelsius.c)
 */

__int64 __fastcall IoctlQueryTemperatureInfoProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edx

  v2 = *(_QWORD *)(a1 + 1528);
  GetSrbExtension(a2);
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v6 = *(_QWORD *)(v5 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 24);
    v7 = 16LL;
  }
  v8 = *(_DWORD *)(v5 + v7);
  if ( v8 >= 0x44 )
  {
    NVMeZeroMemory((void *)(v6 + 28), v8 - 28);
    *(_DWORD *)(v6 + 32) = 40;
    *(_DWORD *)(v6 + 28) = 40;
    *(_WORD *)(v6 + 36) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 268));
    *(_WORD *)(v6 + 38) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 266));
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return (unsigned int)-1056964605;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
}
