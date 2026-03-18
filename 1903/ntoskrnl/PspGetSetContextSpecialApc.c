/*
 * XREFs of PspGetSetContextSpecialApc @ 0x1401CB850
 * Callers:
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 * Callees:
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 */

__int64 __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  result = PspGetSetContextInternal(a1, *a4, v6);
  if ( (_BYTE)result )
    _fxrstor((void *)(v4 + 256));
  if ( v6[0] )
    return KeSignalGate(v6[0], 1u);
  return result;
}
