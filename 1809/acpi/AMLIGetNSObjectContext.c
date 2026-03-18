/*
 * XREFs of AMLIGetNSObjectContext @ 0x1C00023AC
 * Callers:
 *     IsNsobjPciBus @ 0x1C009A45C (IsNsobjPciBus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectContext(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 104LL);
}
