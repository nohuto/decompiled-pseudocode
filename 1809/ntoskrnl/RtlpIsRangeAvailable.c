/*
 * XREFs of RtlpIsRangeAvailable @ 0x1407408E0
 * Callers:
 *     RtlFindRange @ 0x1407406E0 (RtlFindRange.c)
 *     RtlIsRangeAvailable @ 0x140740830 (RtlIsRangeAvailable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlGetNextRange @ 0x1407409C0 (RtlGetNextRange.c)
 */

char __fastcall RtlpIsRangeAvailable(
        PRTL_RANGE_LIST_ITERATOR Iterator,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        BOOLEAN MoveForwards,
        __int64 a8,
        unsigned __int8 (__fastcall *a9)(__int64))
{
  struct _RTL_RANGE *Current; // rdx
  PLIST_ENTRY MergedHead; // rax
  unsigned __int64 Start; // rax
  bool v16; // cf
  PRTL_RANGE Range; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _RTL_RANGE *)Iterator->Current;
  for ( Range = Current; ; Current = Range )
  {
    if ( !Current )
      return 1;
    MergedHead = Iterator->MergedHead;
    if ( MoveForwards )
    {
      if ( !MergedHead && a3 < Current->Start )
        return 1;
    }
    else if ( !MergedHead && a2 > Current->End )
    {
      return 1;
    }
    Start = Current->Start;
    v16 = Current->Start < a2;
    if ( Current->Start > a2 )
    {
      if ( a3 < Start )
        goto LABEL_9;
      v16 = Start < a2;
    }
    if ( (!v16 || Current->End >= a2)
      && (!a5 || (Current->Flags & 1) == 0)
      && (Current->Attributes & a4) == 0
      && (!a6 || Current->Owner)
      && (!a9 || !a9(a8)) )
    {
      break;
    }
LABEL_9:
    RtlGetNextRange(Iterator, &Range, MoveForwards);
  }
  return 0;
}
