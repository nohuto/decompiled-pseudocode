/*
 * XREFs of sub_1800CEA90 @ 0x1800CEA90
 * Callers:
 *     sub_1800218A0 @ 0x1800218A0 (sub_1800218A0.c)
 *     sub_180021910 @ 0x180021910 (sub_180021910.c)
 *     sub_1800421D8 @ 0x1800421D8 (sub_1800421D8.c)
 *     sub_1800B6570 @ 0x1800B6570 (sub_1800B6570.c)
 *     sub_1800B6F40 @ 0x1800B6F40 (sub_1800B6F40.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800CEA90(_QWORD *a1))()
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
  return sub_18006403C((__int64)a1);
}
