/*
 * XREFs of ndisPMPatternIdExist @ 0x1C00BB600
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00BA0A0 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00BB708 (ndisMiniportPreAddWoLPattern.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00E8424 (ndisSetAddWakeUpPattern.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisPMPatternIdExist(__int64 **a1, int a2)
{
  __int64 *i; // rax

  for ( i = *a1; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 10) == a2 )
    {
      LOBYTE(i) = 1;
      return (char)i;
    }
  }
  return (char)i;
}
