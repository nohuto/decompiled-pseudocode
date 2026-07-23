/*
 * XREFs of RtlCopyLuidAndAttributesArray @ 0x1800E4AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlCopyLuidAndAttributesArray(ULONG Count, PLUID_AND_ATTRIBUTES Src, PLUID_AND_ATTRIBUTES Dest)
{
  signed __int64 v3; // rdx
  __int64 v4; // r9

  if ( Count )
  {
    v3 = (char *)Src - (char *)Dest;
    v4 = Count;
    do
    {
      *Dest = *(PLUID_AND_ATTRIBUTES)((char *)Dest + v3);
      ++Dest;
      --v4;
    }
    while ( v4 );
  }
}
