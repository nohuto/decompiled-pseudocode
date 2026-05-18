/*
 * XREFs of sub_1800987CC @ 0x1800987CC
 * Callers:
 *     sub_180012B50 @ 0x180012B50 (sub_180012B50.c)
 *     sub_180013930 @ 0x180013930 (sub_180013930.c)
 * Callees:
 *     sub_18009C090 @ 0x18009C090 (sub_18009C090.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800987CC(_QWORD *a1)
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
  sub_18009C090(a1 + 13);
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
  return sub_18008E18C(a1);
}
