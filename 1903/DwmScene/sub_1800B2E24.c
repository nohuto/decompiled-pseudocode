/*
 * XREFs of sub_1800B2E24 @ 0x1800B2E24
 * Callers:
 *     sub_1800B4384 @ 0x1800B4384 (sub_1800B4384.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800B2E24(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r9
  volatile signed __int32 *v3; // rbx
  __int64 v4; // r8
  signed __int32 v6; // eax

  *a1 = 0LL;
  v2 = 0LL;
  a1[1] = 0LL;
  v3 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v4 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v6 + 1, v6) )
      {
        v3 = (volatile signed __int32 *)a2[1];
        v2 = *a2;
        if ( v3 )
          _InterlockedIncrement(v3 + 3);
        break;
      }
    }
  }
  *a1 = v2;
  a1[1] = v3;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return a1;
}
