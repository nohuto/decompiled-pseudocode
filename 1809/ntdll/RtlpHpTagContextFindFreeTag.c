/*
 * XREFs of RtlpHpTagContextFindFreeTag @ 0x180065094
 * Callers:
 *     RtlpHpTagContextAllocateTag @ 0x180064ED0 (RtlpHpTagContextAllocateTag.c)
 * Callees:
 *     <none>
 */

__int64 RtlpHpTagContextFindFreeTag()
{
  unsigned __int16 v0; // dx
  __int16 v1; // r8
  unsigned __int16 v2; // ax

  v0 = 0;
  if ( word_180163AC2 != 1024 )
  {
    v1 = word_180163AC0;
    do
    {
      v2 = 0;
      if ( v1 != 1024 )
        v2 = v1;
      v1 = v2 + 1;
    }
    while ( *(_QWORD *)(qword_180163AB8 + 8LL * v2) );
    return (unsigned __int16)(v2 + 1);
  }
  return v0;
}
