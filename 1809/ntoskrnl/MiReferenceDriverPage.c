/*
 * XREFs of MiReferenceDriverPage @ 0x1402A6328
 * Callers:
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5594 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140030D40 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiReferenceDriverPage(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = MiAreChargesNeededToLockPage(a1);
  if ( (_DWORD)result )
    *(_BYTE *)(v2 + 35) |= 0x20u;
  ++*(_WORD *)(v2 + 32);
  return result;
}
