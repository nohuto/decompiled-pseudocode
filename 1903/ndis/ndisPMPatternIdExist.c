/*
 * XREFs of ndisPMPatternIdExist @ 0x1C00353A0
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0023410 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0034BA4 (ndisMiniportPreAddWoLPattern.c)
 *     ndisSetAddWakeUpPattern @ 0x1C007668C (ndisSetAddWakeUpPattern.c)
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
