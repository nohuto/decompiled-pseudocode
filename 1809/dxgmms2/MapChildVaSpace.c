/*
 * XREFs of MapChildVaSpace @ 0x1C002511C
 * Callers:
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z @ 0x1C00B2424 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapChildVaSpace(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, __int64, __int64))DxgCoreInterface[68])(
           a1,
           a2,
           a3,
           0x800000LL,
           a5,
           a6,
           a7);
}
