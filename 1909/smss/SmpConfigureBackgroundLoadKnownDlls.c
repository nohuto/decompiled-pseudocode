/*
 * XREFs of SmpConfigureBackgroundLoadKnownDlls @ 0x14000D220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureBackgroundLoadKnownDlls(__int64 a1, int a2, _DWORD *a3, int a4)
{
  BOOL v4; // eax

  v4 = a4 == 4 && a2 == 4 && *a3 != 0;
  SmpBackgroundLoadKnownDlls = v4;
  return 0LL;
}
