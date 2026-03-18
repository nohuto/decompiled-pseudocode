/*
 * XREFs of OkayToCloseDesktop @ 0x1C00B1120
 * Callers:
 *     <none>
 * Callees:
 *     CheckHandleFlag @ 0x1C00B18C8 (CheckHandleFlag.c)
 */

__int64 __fastcall OkayToCloseDesktop(PRKPROCESS *a1)
{
  PRKPROCESS v2; // rdi

  v2 = a1[1];
  if ( !*((_BYTE *)a1 + 24) )
    return 0LL;
  if ( (unsigned int)PsGetProcessSessionIdEx(*a1) == -1 )
    return 3221225506LL;
  if ( (*((_DWORD *)v2 + 12) & 0x10) == 0 )
    return 3221225473LL;
  if ( !(unsigned int)CheckHandleFlag(*a1) && !(unsigned int)CheckHandleFlag(*a1) )
    return 0LL;
  return 2147483665LL;
}
