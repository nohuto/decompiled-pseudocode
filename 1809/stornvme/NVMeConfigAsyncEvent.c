/*
 * XREFs of NVMeConfigAsyncEvent @ 0x1C0014908
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0006510 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1528);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 811) = 0;
    memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
    v5 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)(a1 + 864) = v5;
    *(_DWORD *)(a1 + 800) = 1;
    *(_BYTE *)(v5 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
    v6 = *(_QWORD *)(a1 + 896);
    *(_DWORD *)(v6 + 4140) = *(_DWORD *)(a1 + 56) & (*(_DWORD *)(v2 + 92) & 0x300 | ((*(_BYTE *)(v2 + 261) & 8) << 7) | 0x1F);
    *(_BYTE *)(v6 + 4096) = 9;
    *(_BYTE *)(v6 + 4136) = 11;
    ProcessCommand(a1, a1 + 808);
    LOBYTE(v7) = a2;
    return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v7, 10000LL);
  }
  return result;
}
