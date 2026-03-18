/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C0014F10
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001D18 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003F74 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeGetCommandEffectsLog(__int64 a1)
{
  __int64 v1; // rsi
  void **v3; // rbx
  __int64 v4; // r8
  bool v5; // zf
  void *v6; // rcx
  int v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 PhysicalAddress; // [rsp+70h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 904);
  PhysicalAddress = 0LL;
  v7 = 0;
  if ( !*(_BYTE *)(a1 + 16) && (*(_BYTE *)(*(_QWORD *)(a1 + 1536) + 261LL) & 2) != 0 )
  {
    v3 = (void **)(a1 + 3688);
    v4 = *(_QWORD *)(a1 + 3688);
    if ( v4 )
    {
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v4, &v7);
      v5 = PhysicalAddress == 0;
    }
    else
    {
      NVMeAllocateDmaBuffer(a1, 0x1000u);
      v5 = *v3 == 0LL;
    }
    if ( !v5 )
    {
      memset(*v3, 0, 0x1000uLL);
      v6 = *(void **)(a1 + 904);
      *(_BYTE *)(a1 + 819) = 0;
      memset(v6, 0, 0x10A0uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
      *(_QWORD *)(a1 + 872) = *(_QWORD *)(a1 + 904);
      *(_DWORD *)(a1 + 808) = 1;
      *(_BYTE *)(v1 + 4253) |= 3u;
      *(_WORD *)(v1 + 4244) = 0;
      BuildGetLogPageCommand(a1, v1, 5u, 0x1000u, PhysicalAddress, -1, 0LL, 0);
      *(_BYTE *)(v1 + 4253) |= 4u;
      *(_QWORD *)(v1 + 4200) = *v3;
      *(_QWORD *)(v1 + 4208) = PhysicalAddress;
      *(_QWORD *)(a1 + 3696) = PhysicalAddress;
      *(_DWORD *)(v1 + 4240) = 4096;
      ProcessCommand(a1, a1 + 816);
      WaitForCommandCompleteWithCustomTimeout(a1);
    }
  }
}
