/*
 * XREFs of RtlCompressWorkSpaceSizeXpressHuff @ 0x1401398E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompressWorkSpaceSizeXpressHuff(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  if ( !a1 )
  {
    *a2 = 166495;
LABEL_3:
    *a3 = 5161;
    return 0LL;
  }
  if ( a1 == 256 )
  {
    *a2 = 1415999;
    goto LABEL_3;
  }
  return 3221225659LL;
}
