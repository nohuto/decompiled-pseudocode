/*
 * XREFs of PopEtAggregateKeyCopyFromProcess @ 0x1406D45D0
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1406D4324 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     PsGetProcessId @ 0x140004670 (PsGetProcessId.c)
 *     PopEtAggregateKeyCopy @ 0x140614C74 (PopEtAggregateKeyCopy.c)
 */

void __fastcall PopEtAggregateKeyCopyFromProcess(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a2 + 1896);
  v7 = 0LL;
  v8 = 0LL;
  v6 = *(_OWORD *)(v3 + 448);
  if ( (*(_DWORD *)(a3 + 8) & 1) != 0 )
  {
    LODWORD(v8) = (unsigned int)PsGetProcessId((PEPROCESS)a2);
    v7 = *(_QWORD *)(a2 + 1912);
  }
  PopEtAggregateKeyCopy(a1, &v6);
}
