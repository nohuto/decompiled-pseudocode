/*
 * XREFs of NVMeBuildPollingConfiguration @ 0x1C0014798
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     IsDumpMode @ 0x1C000ABC8 (IsDumpMode.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeBuildPollingConfiguration(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // eax
  int v8; // eax

  LOBYTE(v2) = IsDumpMode(a1);
  if ( !(_BYTE)v2 )
  {
    *(_BYTE *)(v3 + 811) = 0;
    memset(*(void **)(v3 + 896), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
    v4 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)(a1 + 864) = v4;
    *(_DWORD *)(a1 + 800) = 1;
    *(_BYTE *)(v4 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
    v5 = *(_QWORD *)(a1 + 896);
    v6 = *(_QWORD *)(a1 + 1632);
    *(_BYTE *)(v5 + 4096) = 10;
    *(_QWORD *)(v5 + 4120) = v6;
    *(_BYTE *)(v5 + 4136) = -48;
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4224LL) = NVMeBuildDevicePollingConfiguration;
    ProcessCommand(a1, a1 + 808);
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, 0LL, 10000LL);
    LOBYTE(v2) = *(_BYTE *)(a1 + 3728);
    if ( !(_BYTE)v2 )
    {
      if ( !*(_DWORD *)(a1 + 60) )
        return v2;
      *(_BYTE *)(a1 + 3728) = 1;
    }
    v7 = *(_DWORD *)(a1 + 3748);
    if ( v7 )
    {
      if ( v7 > 0x64 )
        v7 = 100;
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 60);
    }
    *(_DWORD *)(a1 + 3732) = v7;
    v8 = *(_DWORD *)(a1 + 3752);
    if ( !v8 )
      v8 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 3736) = v8;
    v2 = *(_DWORD *)(a1 + 3756);
    if ( (v2 & 1) != 0 )
    {
      *(_DWORD *)(a1 + 3740) = v2;
    }
    else
    {
      v2 = (*(_DWORD *)(a1 + 3740) ^ (*(_DWORD *)(a1 + 104) >> 1)) & 0xFE;
      *(_DWORD *)(a1 + 3740) ^= v2;
    }
  }
  return v2;
}
