/*
 * XREFs of sub_18003E15C @ 0x18003E15C
 * Callers:
 *     sub_18003E1EC @ 0x18003E1EC (sub_18003E1EC.c)
 *     sub_18003E270 @ 0x18003E270 (sub_18003E270.c)
 *     sub_1800F98C4 @ 0x1800F98C4 (sub_1800F98C4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003E15C(_QWORD *a1)
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
  return sub_180063F2C(a1);
}
