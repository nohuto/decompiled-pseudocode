/*
 * XREFs of MiSwitchKstackPages @ 0x1402C44FC
 * Callers:
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x1402C4220 (MiJumpStackTarget.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiSwitchKstackPages(__int64 a1, __int128 *a2)
{
  __int64 result; // rax

  MiLockNestedPageAtDpcInline(a1);
  MiCopyPfnEntryEx(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
