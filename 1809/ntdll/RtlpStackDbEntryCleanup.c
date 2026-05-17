/*
 * XREFs of RtlpStackDbEntryCleanup @ 0x180116144
 * Callers:
 *     RtlStackDbStackAdd @ 0x1801158F0 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180115FB4 (RtlStackDbStackRemove.c)
 *     RtlpStackDbEntryCreate @ 0x1801161C8 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlpStackDbSegmentRemoveRef @ 0x180116AD4 (RtlpStackDbSegmentRemoveRef.c)
 */

__int64 __fastcall RtlpStackDbEntryCleanup(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v4; // ebx
  _QWORD *v6; // rdi

  v2 = 0;
  v4 = ((unsigned int)*(unsigned __int8 *)(a2 + 19) + 7) >> 3;
  if ( v4 )
  {
    v6 = (_QWORD *)(a2 + 24);
    do
    {
      if ( !*v6 )
        break;
      RtlpStackDbSegmentRemoveRef(a1);
      ++v2;
      ++v6;
    }
    while ( v2 < v4 );
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(a2, *(_QWORD *)(a1 + 64));
}
