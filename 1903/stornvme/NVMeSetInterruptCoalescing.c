/*
 * XREFs of NVMeSetInterruptCoalescing @ 0x1C0018308
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

_UNKNOWN **__fastcall NVMeSetInterruptCoalescing(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v3; // di
  char v4; // bl
  __int64 v5; // rax
  char v6; // al
  _BYTE *v7; // rcx
  char v8; // al
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v3 = *(_BYTE *)(a1 + 40);
    v4 = *(_BYTE *)(a1 + 41);
    *(_BYTE *)(a1 + 819) = 0;
    memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
    v5 = *(_QWORD *)(a1 + 904);
    *(_QWORD *)(a1 + 872) = v5;
    *(_DWORD *)(a1 + 808) = 1;
    *(_BYTE *)(v5 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
    v6 = v4;
    v7 = *(_BYTE **)(a1 + 904);
    if ( !v4 )
      v6 = 0;
    v7[4140] = v6;
    v8 = v3;
    if ( !v3 )
      v8 = 0;
    v7[4096] = 9;
    v7[4141] = v8;
    v7[4136] = 8;
    ProcessCommand(a1, a1 + 816);
    return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
