/*
 * XREFs of InternalRemoveProp @ 0x1C0165C24
 * Callers:
 *     NtUserShutdownBlockReasonCreate @ 0x1C0109F70 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InternalRemoveProp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = *(_QWORD *)(a1 + 144);
  if ( (_WORD)a2 == word_1C032A65C )
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  return RealInternalRemoveProp(v3, a2, a3, v3);
}
