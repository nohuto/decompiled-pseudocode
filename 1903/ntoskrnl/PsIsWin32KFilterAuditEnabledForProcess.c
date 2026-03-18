/*
 * XREFs of PsIsWin32KFilterAuditEnabledForProcess @ 0x14012F180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsWin32KFilterAuditEnabledForProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2128) & 0x8000) != 0;
}
