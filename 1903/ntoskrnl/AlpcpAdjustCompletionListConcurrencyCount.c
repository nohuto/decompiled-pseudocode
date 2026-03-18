/*
 * XREFs of AlpcpAdjustCompletionListConcurrencyCount @ 0x1406C3D00
 * Callers:
 *     NtAlpcSetInformation @ 0x1406C37E0 (NtAlpcSetInformation.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x14011C408 (AlpcpQueueIoCompletionPort.c)
 */

char __fastcall AlpcpAdjustCompletionListConcurrencyCount(__int64 *a1, unsigned __int32 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rsi
  signed __int32 v6; // edi
  unsigned __int32 v7; // edx
  __int64 v8; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = a1[45];
  _m_prefetchw((const void *)(v3 + 144));
  v6 = *(_DWORD *)(v3 + 144);
  while ( v6 != a2 )
  {
    v7 = v6;
    LODWORD(v2) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 144), a2, v6);
    v6 = (int)v2;
    if ( (_DWORD)v2 == v7 )
    {
      if ( !a1[4] )
        return (char)v2;
      if ( v7 < a2 )
      {
        v8 = a2 - v7;
        do
        {
          LOBYTE(v2) = AlpcpQueueIoCompletionPort(a1, 1, 0, 0);
          --v8;
        }
        while ( v8 );
      }
    }
    else if ( (unsigned int)v2 >= a2 )
    {
      return (char)v2;
    }
  }
  return (char)v2;
}
