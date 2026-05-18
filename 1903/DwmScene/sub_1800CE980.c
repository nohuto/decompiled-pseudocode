/*
 * XREFs of sub_1800CE980 @ 0x1800CE980
 * Callers:
 *     sub_180021790 @ 0x180021790 (sub_180021790.c)
 *     sub_180021800 @ 0x180021800 (sub_180021800.c)
 *     sub_1800420C8 @ 0x1800420C8 (sub_1800420C8.c)
 *     sub_1800B6460 @ 0x1800B6460 (sub_1800B6460.c)
 *     sub_1800B6E30 @ 0x1800B6E30 (sub_1800B6E30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800CE980(_QWORD *a1))()
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))a1[12];
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (volatile signed __int32 *)a1[10];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180063F2C((__int64)a1);
}
