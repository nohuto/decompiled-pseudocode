/*
 * XREFs of KsepStringDuplicate @ 0x140739310
 * Callers:
 *     KsepRegistryOpenKey @ 0x14070CFC0 (KsepRegistryOpenKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070D218 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14071AD10 (KseAddHardwareId.c)
 *     KsepCacheDeviceInsertData @ 0x14074CB80 (KsepCacheDeviceInsertData.c)
 *     KsepStringTransform @ 0x14074D168 (KsepStringTransform.c)
 *     KsepDbCacheReadDevice @ 0x14074D20C (KsepDbCacheReadDevice.c)
 *     KsepDbGetSdbString @ 0x140882C54 (KsepDbGetSdbString.c)
 *     KsepStringSplitMultiString @ 0x140884164 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140884444 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1401540C0 (KsepPoolAllocatePaged.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlAssert @ 0x14030E410 (RtlAssert.c)
 */

__int64 __fastcall KsepStringDuplicate(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  size_t v5; // rbx
  PVOID Paged; // rax
  PVOID v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 197202;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x252u, 0LL);
  }
  *(_QWORD *)a1 = 0LL;
  v4 = -1LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( v5 > 0xFFFE )
    return 3221225990LL;
  Paged = KsepPoolAllocatePaged(v5);
  v7 = Paged;
  if ( !Paged )
    return 3221225495LL;
  memmove(Paged, a2, v5);
  *(_QWORD *)(a1 + 8) = v7;
  *(_WORD *)a1 = v5 - 2;
  result = 0LL;
  *(_WORD *)(a1 + 2) = v5;
  return result;
}
