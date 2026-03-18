/*
 * XREFs of KiSystemServiceTraceTableCompareFunction @ 0x1408804F0
 * Callers:
 *     KiGetSystemServiceTraceTable @ 0x1408803A0 (KiGetSystemServiceTraceTable.c)
 *     KiTrackSystemCallEntry @ 0x140880510 (KiTrackSystemCallEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSystemServiceTraceTableCompareFunction(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 <= v2 )
    return (unsigned int)-(a1 < v2);
  else
    return 1LL;
}
