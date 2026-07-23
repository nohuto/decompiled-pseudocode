/*
 * XREFs of SmProcessQueryStoreStats @ 0x1408AC494
 * Callers:
 *     PfpPrivSourceEnum @ 0x1405B2B60 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x1408B92AC (EtwpLogMemInfoWs.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SmpProcessQueryStoreStats @ 0x140306778 (SmpProcessQueryStoreStats.c)
 */

__int64 __fastcall SmProcessQueryStoreStats(void *a1, _QWORD *a2, _QWORD *a3)
{
  int StoreStats; // r8d
  char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v10; // [rsp+2Ch] [rbp-60Ch]
  unsigned int v11; // [rsp+40h] [rbp-5F8h]
  char v12; // [rsp+4Ch] [rbp-5ECh] BYREF

  StoreStats = SmpProcessQueryStoreStats(a1);
  if ( StoreStats >= 0 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v6 = &v12;
      v7 = 8LL;
      do
      {
        v8 = *(unsigned int *)v6;
        v6 += 8;
        *a2 += v10 * v8;
        --v7;
      }
      while ( v7 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v11 << 12;
  }
  return (unsigned int)StoreStats;
}
