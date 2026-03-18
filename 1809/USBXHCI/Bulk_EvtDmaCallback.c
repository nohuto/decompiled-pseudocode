/*
 * XREFs of Bulk_EvtDmaCallback @ 0x1C002F7B0
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C0023E60 (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x1C002FF50 (Bulk_MapTransfers.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C0031FC4 (Bulk_Stage_MapIntoRing.c)
 */

__int64 __fastcall Bulk_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(*a4 + 56LL);
  a4[7] = a3;
  result = Bulk_Stage_MapIntoRing(a4, 0LL);
  if ( !_InterlockedXor((volatile signed __int32 *)(v4 + 336), 1u) )
  {
    result = TR_AttemptStateChange(v4, 3, 3);
    if ( (_DWORD)result == 3 )
      return Bulk_MapTransfers(v4, 0LL);
  }
  return result;
}
