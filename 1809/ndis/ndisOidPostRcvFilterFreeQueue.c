/*
 * XREFs of ndisOidPostRcvFilterFreeQueue @ 0x1C003B930
 * Callers:
 *     <none>
 * Callees:
 *     ndisFreeReceiveQueue @ 0x1C003B594 (ndisFreeReceiveQueue.c)
 */

void __fastcall ndisOidPostRcvFilterFreeQueue(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( !v3 || v3 == 65539 && (*(_DWORD *)(v2 + 120) & 4) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v4 + 48) >= 0xCu )
      {
        ndisFreeReceiveQueue(v2, *(_DWORD *)(*(_QWORD *)(v4 + 40) + 8LL));
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
  }
}
