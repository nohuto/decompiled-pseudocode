/*
 * XREFs of sub_1800A2764 @ 0x1800A2764
 * Callers:
 *     sub_1800A3820 @ 0x1800A3820 (sub_1800A3820.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A2764(__int64 a1, int a2, _QWORD *a3)
{
  volatile signed __int32 *v4; // rbx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = *a3;
  *(_QWORD *)(a1 + 8) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = (volatile signed __int32 *)a3[1];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return a1;
}
