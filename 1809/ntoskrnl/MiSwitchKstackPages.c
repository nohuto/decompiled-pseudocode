/*
 * XREFs of MiSwitchKstackPages @ 0x14015EC94
 * Callers:
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x14015EA10 (MiJumpStackTarget.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiSwitchKstackPages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  MiLockNestedPageAtDpcInline(a1, a2, a3);
  MiCopyPfnEntryEx(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
