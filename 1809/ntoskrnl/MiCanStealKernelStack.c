/*
 * XREFs of MiCanStealKernelStack @ 0x14012D69C
 * Callers:
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x14015EA10 (MiJumpStackTarget.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 */

_BOOL8 __fastcall MiCanStealKernelStack(__int64 a1, __int16 a2)
{
  __int16 v2; // r10
  __int64 v3; // r9
  unsigned __int64 v4; // rdx

  v2 = a2;
  v3 = a1;
  v4 = (a1 + 0x58000000000LL) / 48;
  return v4 <= 0xFFFFFFFFFLL
      && ((*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0
      && ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 2
      && ((MiFlags & 0x800) == 0
       || ((MiGetLeafPfnBuddy(a1, v4, a1 + 0x58000000000LL, a1) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0)
      && (*(_BYTE *)(v3 + 34) & 7) == 6
      && *(_WORD *)(v3 + 32) == v2;
}
