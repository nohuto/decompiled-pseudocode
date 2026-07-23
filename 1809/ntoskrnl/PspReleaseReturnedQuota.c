/*
 * XREFs of PspReleaseReturnedQuota @ 0x1402E9BF4
 * Callers:
 *     PspExpandQuota @ 0x14012A9D8 (PspExpandQuota.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspReleaseReturnedQuota(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r8

  v2 = 0LL;
  v3 = *(_QWORD **)(a2 + 40);
  if ( v3 != (_QWORD *)(a2 + 40) )
  {
    do
    {
      v2 += _InterlockedExchange64(v3 - 1, 0LL);
      if ( !*(_DWORD *)((char *)v3 + 432 - ((__int64)(int)a1 << 7)) )
        v2 += _InterlockedExchange64(v3 - 2, 0LL);
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != (_QWORD *)(a2 + 40) );
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(a2 + 32))(a1, v2);
  }
  return v2;
}
