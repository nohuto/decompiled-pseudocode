/*
 * XREFs of ndisGetNewPatternEntryId @ 0x1C00BBE64
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00BA0A0 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00BB708 (ndisMiniportPreAddWoLPattern.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00E8424 (ndisSetAddWakeUpPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetNewPatternEntryId(__int64 **a1)
{
  __int64 *v1; // rdx
  unsigned int i; // r8d
  unsigned int v4; // ecx

  v1 = *a1;
  for ( i = 0; v1; i = v4 )
  {
    v4 = *((_DWORD *)v1 + 10);
    if ( v4 > i + 1 )
      break;
    v1 = (__int64 *)*v1;
  }
  return i + 1;
}
