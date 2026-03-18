/*
 * XREFs of VmSplitMemoryRange @ 0x1408ECFE0
 * Callers:
 *     <none>
 * Callees:
 *     VmpSplitMemoryRange @ 0x14032AF18 (VmpSplitMemoryRange.c)
 */

__int64 __fastcall VmSplitMemoryRange(unsigned __int64 a1, __int64 a2)
{
  volatile LONG *v5; // rcx

  if ( a2 == -1 || (a1 & 0xFFF) != 0 )
    return 3221225485LL;
  v5 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[19];
  if ( v5 )
    return VmpSplitMemoryRange(v5, a1 >> 12, a2);
  else
    return 3221225608LL;
}
