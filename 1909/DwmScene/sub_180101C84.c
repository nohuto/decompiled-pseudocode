/*
 * XREFs of sub_180101C84 @ 0x180101C84
 * Callers:
 *     sub_180101CF0 @ 0x180101CF0 (sub_180101CF0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180101C84(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &Spectre::Engine::Aimer::`vftable';
  v2 = (volatile signed __int32 *)a1[13];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return sub_18008E18C(a1);
}
