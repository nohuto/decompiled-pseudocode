/*
 * XREFs of sub_1800CFCC0 @ 0x1800CFCC0
 * Callers:
 *     sub_180039830 @ 0x180039830 (sub_180039830.c)
 *     sub_1800B6420 @ 0x1800B6420 (sub_1800B6420.c)
 *     sub_1800B6E10 @ 0x1800B6E10 (sub_1800B6E10.c)
 *     sub_1800CFD80 @ 0x1800CFD80 (sub_1800CFD80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800CFCC0(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
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
  return sub_180063F2C((__int64)a1);
}
