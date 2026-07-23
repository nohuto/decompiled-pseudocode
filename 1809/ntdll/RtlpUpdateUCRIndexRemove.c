/*
 * XREFs of RtlpUpdateUCRIndexRemove @ 0x180081F60
 * Callers:
 *     RtlpRemoveUCRBlock @ 0x180081EDC (RtlpRemoveUCRBlock.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 */

void __fastcall RtlpUpdateUCRIndexRemove(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 320);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 + 8);
    v5 = (unsigned __int64)a2[5] >> 12;
    while ( v5 >= v4 )
    {
      v6 = *(_QWORD *)v3;
      if ( !*(_QWORD *)v3 )
      {
        LODWORD(v5) = *(_DWORD *)(v3 + 8) - 1;
        break;
      }
      v3 = *(_QWORD *)v3;
      v4 = *(unsigned int *)(v6 + 8);
    }
    RtlpHeapRemoveListEntry(a1, v3, 0, a2, v5, a2[5]);
  }
}
