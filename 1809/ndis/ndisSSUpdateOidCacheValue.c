/*
 * XREFs of ndisSSUpdateOidCacheValue @ 0x1C00757C8
 * Callers:
 *     ndisOidPostStatistics @ 0x1C0008520 (ndisOidPostStatistics.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisSSGetOidCacheEntry @ 0x1C00754E8 (ndisSSGetOidCacheEntry.c)
 */

void __fastcall ndisSSUpdateOidCacheValue(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  _DWORD *v3; // rax
  __int64 v4; // r9
  _DWORD *v5; // rbx
  unsigned int v6; // eax
  void *v7; // rcx
  PVOID PoolWithTag; // rax

  v1 = a1[4];
  v2 = *a1;
  v3 = ndisSSGetOidCacheEntry(*(_QWORD *)(*a1 + 4488), *(_DWORD *)(v1 + 32));
  v5 = v3;
  if ( v3 )
  {
    v3[4] = *(_DWORD *)(v4 + 40);
    *((_BYTE *)v3 + 20) = 0;
    if ( !*(_DWORD *)(v4 + 40) )
    {
      v6 = v3[1];
      if ( *(_DWORD *)(v1 + 48) >= v6 )
      {
        v7 = (void *)*((_QWORD *)v5 + 1);
        if ( !v7 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x7373444Eu);
          *((_QWORD *)v5 + 1) = PoolWithTag;
          v7 = PoolWithTag;
          if ( !PoolWithTag )
          {
            if ( (unsigned __int8)byte_1C00A025E >= 2u )
              WPP_SF_q(0x26u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, v2);
            return;
          }
          v6 = v5[1];
        }
        memmove(v7, *(const void **)(v1 + 40), v6);
        *((_BYTE *)v5 + 20) = 1;
      }
    }
  }
}
