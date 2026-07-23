/*
 * XREFs of KsepStringDuplicateUnicode @ 0x14067F344
 * Callers:
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140681ABC (KseShimDriverIoCallbacks.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1400F4D5C (KsepPoolAllocatePaged.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlAssert @ 0x1402EFA50 (RtlAssert.c)
 */

__int64 __fastcall KsepStringDuplicateUnicode(__int64 a1, const void **a2)
{
  size_t v4; // rbx
  _WORD *Paged; // rax
  _WORD *v6; // rbp
  __int64 result; // rax
  __int64 v8; // rax

  if ( !a2 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 197261;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x28Du, 0LL);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = *(unsigned __int16 *)a2 + 2LL;
  Paged = KsepPoolAllocatePaged(v4);
  v6 = Paged;
  if ( !Paged )
    return 3221225495LL;
  memmove(Paged, a2[1], v4 - 2);
  v6[(v4 >> 1) - 1] = 0;
  *(_QWORD *)(a1 + 8) = v6;
  *(_WORD *)a1 = v4 - 2;
  result = 0LL;
  *(_WORD *)(a1 + 2) = v4;
  return result;
}
