/*
 * XREFs of sub_18007A2D0 @ 0x18007A2D0
 * Callers:
 *     RtlTimeToSecondsSince1980 @ 0x18007A160 (RtlTimeToSecondsSince1980.c)
 *     sub_18007A238 @ 0x18007A238 (sub_18007A238.c)
 *     RtlTimeToSecondsSince1970 @ 0x18007A290 (RtlTimeToSecondsSince1970.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007A2D0(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rdx

  v3 = a1;
  if ( a1 < 0 )
    a1 = -a1;
  v4 = (unsigned __int64)(((unsigned __int64)a1 * (unsigned __int128)a2) >> 64) >> a3;
  if ( v3 < 0 )
    return -(__int64)v4;
  return v4;
}
