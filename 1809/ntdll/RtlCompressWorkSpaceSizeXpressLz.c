/*
 * XREFs of RtlCompressWorkSpaceSizeXpressLz @ 0x180089290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompressWorkSpaceSizeXpressLz(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  if ( !a1 )
  {
    *a2 = 61223;
LABEL_3:
    *a3 = 0;
    return 0LL;
  }
  if ( a1 == 256 )
  {
    *a2 = 393223;
    goto LABEL_3;
  }
  return 3221225659LL;
}
