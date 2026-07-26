/*
 * XREFs of ndisSSGetCachedOidValue @ 0x1C00FC41C
 * Callers:
 *     ndisOidPreGenStats @ 0x1C00B3AA0 (ndisOidPreGenStats.c)
 *     ndisOidPreStatistics @ 0x1C00E4560 (ndisOidPreStatistics.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     ndisSSGetOidCacheEntry @ 0x1C00754E8 (ndisSSGetOidCacheEntry.c)
 */

char __fastcall ndisSSGetCachedOidValue(__int64 a1)
{
  __int64 v1; // rsi
  const void **v3; // rax
  const void **v4; // rbx
  int v5; // edx
  unsigned int v6; // eax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = (const void **)ndisSSGetOidCacheEntry(*(_QWORD *)(*(_QWORD *)a1 + 4488LL), *(_DWORD *)(v1 + 32));
  v4 = v3;
  if ( v3 )
  {
    v5 = *((_DWORD *)v3 + 4);
    if ( v5 == -1073676265 || v5 == -1073741637 || v5 == 65537 )
    {
      *(_DWORD *)(a1 + 40) = v5;
      return 1;
    }
    if ( *((_BYTE *)v3 + 20) )
    {
      v6 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)(v1 + 48) >= v6 )
      {
        memmove(*(void **)(v1 + 40), v4[1], v6);
        *(_DWORD *)(v1 + 52) = *((_DWORD *)v4 + 1);
        *(_DWORD *)(a1 + 40) = 0;
        return 1;
      }
    }
  }
  return 0;
}
