/*
 * XREFs of KiPrepareFlushCurrentAffinity @ 0x140294028
 * Callers:
 *     KeFlushSingleCurrentTb @ 0x140156FD8 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173D9C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall KiPrepareFlushCurrentAffinity(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 result; // rax
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  a1[1] = 0;
  *a1 = 1310721;
  result = (unsigned __int64)memset(a1 + 2, 0, 0xA0uLL);
  Group = CurrentPrcb->Group;
  GroupSetMember = CurrentPrcb->GroupSetMember;
  if ( *(_WORD *)a1 <= (unsigned __int16)Group )
  {
    result = (unsigned int)(Group + 1);
    *(_WORD *)a1 = Group + 1;
  }
  *(_QWORD *)&a1[2 * Group + 2] |= GroupSetMember;
  return result;
}
