/*
 * XREFs of EditionIsGpqForegroundInaccessible @ 0x1C00AFB20
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0006948 (MSGLUA_GPQFOREGROUND.c)
 *     IsGpqForegroundAccessible @ 0x1C00AFFBC (IsGpqForegroundAccessible.c)
 */

__int64 __fastcall EditionIsGpqForegroundInaccessible(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = IsGpqForegroundAccessible(a1);
  v2 = 0;
  if ( !v1 )
  {
    MSGLUA_GPQFOREGROUND();
    return 1;
  }
  return v2;
}
