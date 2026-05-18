/*
 * XREFs of sub_1800986BC @ 0x1800986BC
 * Callers:
 *     sub_180012B00 @ 0x180012B00 (sub_180012B00.c)
 *     sub_1800138E0 @ 0x1800138E0 (sub_1800138E0.c)
 * Callees:
 *     sub_18009BF80 @ 0x18009BF80 (sub_18009BF80.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800986BC(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  volatile signed __int32 *v4; // rbx

  *a1 = &Spectre::Engine::MeshInstance::`vftable';
  v2 = (volatile signed __int32 *)a1[20];
  if ( v2 && !_InterlockedDecrement(v2 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[18];
  if ( v3 && !_InterlockedDecrement(v3 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  sub_18009BF80(a1 + 13);
  v4 = (volatile signed __int32 *)a1[12];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return sub_18008E07C(a1);
}
