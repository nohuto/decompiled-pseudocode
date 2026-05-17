/*
 * XREFs of sub_18000630C @ 0x18000630C
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     sub_18000AB50 @ 0x18000AB50 (sub_18000AB50.c)
 *     sub_18000AD08 @ 0x18000AD08 (sub_18000AD08.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18000630C(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 52));
  v1 = *(_DWORD *)(a1 + 52);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
