/*
 * XREFs of ndisSSUpdateOidCacheValue @ 0x1C00B9118
 * Callers:
 *     ndisOidPostStatistics @ 0x1C0010D40 (ndisOidPostStatistics.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ndisSSGetOidCacheEntry @ 0x1C00B8E40 (ndisSSGetOidCacheEntry.c)
 */

__int64 __fastcall ndisSSUpdateOidCacheValue(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rbx
  void *v6; // rcx
  PVOID PoolWithTag; // rax
  int v8; // edx

  v1 = a1[4];
  v2 = *a1;
  result = (__int64)ndisSSGetOidCacheEntry(*(_QWORD *)(*a1 + 4448LL), *(_DWORD *)(v1 + 32));
  v5 = result;
  if ( result )
  {
    *(_DWORD *)(result + 16) = *(_DWORD *)(v4 + 40);
    *(_BYTE *)(result + 20) = 0;
    if ( !*(_DWORD *)(v4 + 40) )
    {
      result = *(unsigned int *)(result + 4);
      if ( *(_DWORD *)(v1 + 48) >= (unsigned int)result )
      {
        v6 = *(void **)(v5 + 8);
        if ( !v6 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)result, 0x7373444Eu);
          *(_QWORD *)(v5 + 8) = PoolWithTag;
          v6 = PoolWithTag;
          if ( !PoolWithTag )
          {
            result = (__int64)&WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v8) = 2;
              return WPP_RECORDER_SF_q(
                       *((_QWORD *)WPP_GLOBAL_Control + 8),
                       v8,
                       15,
                       39,
                       (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
                       v2);
            }
            return result;
          }
          LODWORD(result) = *(_DWORD *)(v5 + 4);
        }
        result = (__int64)memmove(v6, *(const void **)(v1 + 40), (unsigned int)result);
        *(_BYTE *)(v5 + 20) = 1;
      }
    }
  }
  return result;
}
