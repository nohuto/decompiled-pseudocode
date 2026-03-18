/*
 * XREFs of NVMeBuildPollingConfiguration @ 0x1C0013FC8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeBuildPollingConfiguration(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 819) = 0;
    memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 904);
    *(_QWORD *)(a1 + 872) = v2;
    *(_DWORD *)(a1 + 808) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
    v3 = *(_QWORD *)(a1 + 904);
    v4 = *(_QWORD *)(a1 + 1640);
    *(_BYTE *)(v3 + 4096) = 10;
    *(_QWORD *)(v3 + 4120) = v4;
    *(_BYTE *)(v3 + 4136) = -48;
    *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4224LL) = NVMeBuildDevicePollingConfiguration;
    ProcessCommand(a1, a1 + 816);
    WaitForCommandCompleteWithCustomTimeout(a1);
    if ( !*(_BYTE *)(a1 + 3736) )
    {
      if ( !*(_DWORD *)(a1 + 60) )
        return;
      *(_BYTE *)(a1 + 3736) = 1;
    }
    v5 = *(_DWORD *)(a1 + 3756);
    if ( v5 )
    {
      if ( v5 > 0x64 )
        v5 = 100;
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 60);
    }
    *(_DWORD *)(a1 + 3740) = v5;
    v6 = *(_DWORD *)(a1 + 3760);
    if ( !v6 )
      v6 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 3744) = v6;
    v7 = *(_DWORD *)(a1 + 3764);
    if ( (v7 & 1) != 0 )
      *(_DWORD *)(a1 + 3748) = v7;
    else
      *(_DWORD *)(a1 + 3748) ^= (*(_DWORD *)(a1 + 3748) ^ (*(_DWORD *)(a1 + 104) >> 1)) & 0xFE;
  }
}
