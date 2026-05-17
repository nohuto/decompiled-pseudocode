/*
 * XREFs of AlpcUnregisterCompletionListWorkerThread @ 0x18006FC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcUnregisterCompletionListWorkerThread(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rtt

  while ( 1 )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( !HIWORD(v1) || (v1 & 0xFFFFFF) != 0xFFFFFF )
      break;
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 64),
                 v1 & 0xFFFFFFFFFFFFLL | ((HIWORD(v1) - 1) << 48),
                 v1) )
      return 1LL;
  }
  return 0LL;
}
