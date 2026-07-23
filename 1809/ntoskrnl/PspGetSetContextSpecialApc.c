/*
 * XREFs of PspGetSetContextSpecialApc @ 0x1401C5390
 * Callers:
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 * Callees:
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 */

__int64 __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  result = PspGetSetContextInternal(a1, *a4, v7);
  if ( (_BYTE)result )
    _fxrstor((void *)(v4 + 256));
  if ( v7[0] )
    return KeSignalGate(v7[0], 1LL, v6);
  return result;
}
