/*
 * XREFs of sub_1800CBB64 @ 0x1800CBB64
 * Callers:
 *     sub_180020628 @ 0x180020628 (sub_180020628.c)
 *     sub_1800CBBB0 @ 0x1800CBBB0 (sub_1800CBBB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800CBB64(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_18006403C((__int64)a1);
}
