/*
 * XREFs of RegisterLPK @ 0x1C0126B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterLPK(__int64 a1, __int64 a2)
{
  *(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 752) = a1;
  return 1LL;
}
