/*
 * XREFs of RtlGetNextRange @ 0x1407607B0
 * Callers:
 *     ArbOverrideConflict @ 0x140760150 (ArbOverrideConflict.c)
 *     ArbShareDriverExclusive @ 0x140760218 (ArbShareDriverExclusive.c)
 *     RtlpIsRangeAvailable @ 0x1407606D4 (RtlpIsRangeAvailable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetNextRange(PRTL_RANGE_LIST_ITERATOR Iterator, PRTL_RANGE *Range, BOOLEAN MoveForwards)
{
  PLIST_ENTRY RangeListHead; // r11
  _QWORD *Current; // rax
  _LIST_ENTRY *v7; // r8
  PLIST_ENTRY MergedHead; // rax
  struct _LIST_ENTRY **p_Blink; // rcx
  NTSTATUS result; // eax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v12; // rcx

  RangeListHead = Iterator->RangeListHead;
  if ( LODWORD(Iterator->RangeListHead[1].Blink) != Iterator->Stamp )
    return -1073741811;
  Current = Iterator->Current;
  if ( Current )
  {
    if ( MoveForwards )
      v7 = (_LIST_ENTRY *)Current[5];
    else
      v7 = (_LIST_ENTRY *)Current[6];
    MergedHead = Iterator->MergedHead;
    p_Blink = &v7[-3].Blink;
    if ( MergedHead )
    {
      if ( v7 != MergedHead )
      {
LABEL_8:
        Iterator->Current = p_Blink;
        result = 0;
        *Range = (PRTL_RANGE)p_Blink;
        return result;
      }
      if ( MoveForwards )
        Blink = MergedHead[1].Blink;
      else
        Blink = MergedHead[2].Flink;
      Iterator->MergedHead = 0LL;
      p_Blink = &Blink[-3].Blink;
    }
    if ( p_Blink + 5 != (struct _LIST_ENTRY **)RangeListHead )
    {
      if ( (*((_BYTE *)p_Blink + 34) & 1) != 0 )
      {
        Iterator->MergedHead = (PLIST_ENTRY)(p_Blink + 2);
        if ( MoveForwards )
          v12 = p_Blink[2];
        else
          v12 = p_Blink[3];
        p_Blink = &v12[-3].Blink;
      }
      goto LABEL_8;
    }
    Iterator->Current = 0LL;
  }
  *Range = 0LL;
  return -2147483622;
}
