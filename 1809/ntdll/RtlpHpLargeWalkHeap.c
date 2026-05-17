/*
 * XREFs of RtlpHpLargeWalkHeap @ 0x18005B604
 * Callers:
 *     RtlpHpHeapWalk @ 0x18005B76C (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpLargeAllocGetMetadata @ 0x18006651C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeAllocReport @ 0x18010D14C (RtlpHpLargeAllocReport.c)
 */

__int64 __fastcall RtlpHpLargeWalkHeap(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned int v7; // r11d
  unsigned __int64 *Metadata; // rax
  _QWORD *v9; // r11

  v3 = a1;
  if ( *a2 )
  {
    Metadata = (unsigned __int64 *)RtlpHpLargeAllocGetMetadata(a1, *a2);
    v5 = (unsigned __int64)v9;
    if ( Metadata )
    {
      v5 = *Metadata;
      if ( !*Metadata )
      {
        v5 = Metadata[1];
        if ( !v5 )
        {
          while ( Metadata != *(unsigned __int64 **)(v3 + 72) )
          {
            v5 = *(_QWORD *)((Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL) + 8);
            if ( Metadata != (unsigned __int64 *)v5 && v5 )
              goto LABEL_15;
            Metadata = (unsigned __int64 *)(Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL);
          }
          return (unsigned int)-2147483622;
        }
      }
    }
    goto LABEL_15;
  }
  v4 = a1 + 72;
  if ( (*(_BYTE *)(a1 + 80) & 1) == 0 )
  {
    v6 = *(_QWORD *)v4;
    v5 = *(_QWORD *)v4;
LABEL_6:
    if ( !v6 )
      return (unsigned int)-2147483622;
LABEL_15:
    RtlpHpLargeAllocReport(v3, v5, a2);
    return v7;
  }
  v5 = *(_QWORD *)v4;
  if ( *(_QWORD *)v4 )
  {
    v6 = v4 ^ v5;
    goto LABEL_6;
  }
  return (unsigned int)-2147483622;
}
