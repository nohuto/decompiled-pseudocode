/*
 * XREFs of sub_1800CFDD0 @ 0x1800CFDD0
 * Callers:
 *     sub_180039940 @ 0x180039940 (sub_180039940.c)
 *     sub_1800B6530 @ 0x1800B6530 (sub_1800B6530.c)
 *     sub_1800B6F20 @ 0x1800B6F20 (sub_1800B6F20.c)
 *     sub_1800CFE90 @ 0x1800CFE90 (sub_1800CFE90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800CFDD0(_QWORD *a1))()
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
  return sub_18006403C((__int64)a1);
}
