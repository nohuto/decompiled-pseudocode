/*
 * XREFs of sub_18003E26C @ 0x18003E26C
 * Callers:
 *     sub_18003E2FC @ 0x18003E2FC (sub_18003E2FC.c)
 *     sub_18003E380 @ 0x18003E380 (sub_18003E380.c)
 *     sub_1800F99D4 @ 0x1800F99D4 (sub_1800F99D4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003E26C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
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
  v3 = (volatile signed __int32 *)a1[10];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_18006403C(a1);
}
