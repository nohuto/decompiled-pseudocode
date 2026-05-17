/*
 * XREFs of RtlFindClosestEncodableLength @ 0x1800EEA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClosestEncodableLength(unsigned __int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( a1 <= 0xFFFFFFFF )
    goto LABEL_12;
  if ( a1 > 0xFFFFFFFF00LL )
    goto LABEL_16;
  v2 = a1 & 0xFFFFFFFF00LL;
  if ( a1 == (a1 & 0xFFFFFFFFFFFFFF00uLL) )
    goto LABEL_12;
  a1 = v2 + 256;
  *a2 = v2 + 256;
  if ( (unsigned __int64)(v2 + 256) > 0xFFFFFFFF00LL )
  {
LABEL_16:
    if ( a1 > 0xFFFFFFFF0000LL )
      goto LABEL_8;
    v3 = a1 & 0xFFFFFFFF0000LL;
    if ( a1 == (a1 & 0xFFFFFFFFFFFF0000uLL) )
      goto LABEL_12;
    a1 = v3 + 0x10000;
    *a2 = v3 + 0x10000;
    if ( (unsigned __int64)(v3 + 0x10000) > 0xFFFFFFFF0000LL )
    {
LABEL_8:
      if ( a1 > 0xFFFFFFFF00000000uLL )
      {
        *a2 = 0LL;
        return 3221225473LL;
      }
      if ( a1 != (a1 & 0xFFFFFFFF00000000uLL) )
      {
        *a2 = (a1 & 0xFFFFFFFF00000000uLL) + 0x100000000LL;
        return 0LL;
      }
LABEL_12:
      *a2 = a1;
    }
  }
  return 0LL;
}
