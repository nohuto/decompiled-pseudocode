/*
 * XREFs of NVMeSetArbitration @ 0x1C0017108
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeSetArbitration(__int64 a1, char a2)
{
  __int64 v3; // rcx
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // al
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8

  v3 = *(_QWORD *)(a1 + 1528);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v6 = *(_BYTE *)(a1 + 42);
    if ( v6 == 0xFF )
    {
      v5 = *(_BYTE *)(v3 + 72);
    }
    else
    {
      if ( v6 <= 1u )
      {
LABEL_9:
        v7 = *(void **)(a1 + 896);
        *(_BYTE *)(a1 + 811) = 0;
        memset(v7, 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
        v8 = *(_QWORD *)(a1 + 896);
        *(_QWORD *)(a1 + 864) = v8;
        *(_DWORD *)(a1 + 800) = 1;
        *(_BYTE *)(v8 + 4253) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
        v9 = *(_QWORD *)(a1 + 896);
        LODWORD(v8) = (*(_DWORD *)(v9 + 4140) ^ v5) & 7;
        *(_BYTE *)(v9 + 4096) = 9;
        *(_DWORD *)(v9 + 4140) ^= v8;
        *(_BYTE *)(v9 + 4136) = 1;
        ProcessCommand(a1, a1 + 808);
        LOBYTE(v10) = a2;
        WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v10, 10000LL);
        return;
      }
      do
      {
        v6 >>= 1;
        ++v5;
      }
      while ( v6 > 1u );
    }
    if ( v5 >= 7u )
      v5 = 7;
    goto LABEL_9;
  }
}
