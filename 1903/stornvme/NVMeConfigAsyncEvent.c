/*
 * XREFs of NVMeConfigAsyncEvent @ 0x1C00141F4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  _BYTE *v4; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1536);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 819) = 0;
    memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
    v3 = *(_QWORD *)(a1 + 904);
    *(_QWORD *)(a1 + 872) = v3;
    *(_DWORD *)(a1 + 808) = 1;
    *(_BYTE *)(v3 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
    v4 = *(_BYTE **)(a1 + 904);
    v4[4140] = *(_BYTE *)(a1 + 56) & (((*(_BYTE *)(v1 + 261) & 8) << 7) | 0x1F);
    v4[4096] = 9;
    v4[4136] = 11;
    ProcessCommand(a1, a1 + 816);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
