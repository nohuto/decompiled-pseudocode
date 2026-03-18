/*
 * XREFs of NVMeSetInterruptCoalescing @ 0x1C00174C4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

_UNKNOWN **__fastcall NVMeSetInterruptCoalescing(__int64 a1, char a2)
{
  _UNKNOWN **result; // rax
  char v5; // di
  char v6; // bl
  __int64 v7; // rax
  char v8; // al
  _BYTE *v9; // rcx
  char v10; // al
  __int64 v11; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v5 = *(_BYTE *)(a1 + 40);
    v6 = *(_BYTE *)(a1 + 41);
    *(_BYTE *)(a1 + 811) = 0;
    memset(*(void **)(a1 + 896), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
    v7 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)(a1 + 864) = v7;
    *(_DWORD *)(a1 + 800) = 1;
    *(_BYTE *)(v7 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
    v8 = v6;
    v9 = *(_BYTE **)(a1 + 896);
    if ( !v6 )
      v8 = 0;
    v9[4140] = v8;
    v10 = v5;
    if ( !v5 )
      v10 = 0;
    v9[4096] = 9;
    v9[4141] = v10;
    v9[4136] = 8;
    ProcessCommand(a1, a1 + 808);
    LOBYTE(v11) = a2;
    return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v11, 10000LL);
  }
  return result;
}
