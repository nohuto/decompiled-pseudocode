/*
 * XREFs of sub_1800B5F48 @ 0x1800B5F48
 * Callers:
 *     sub_180018070 @ 0x180018070 (sub_180018070.c)
 *     unknown_libname_4 @ 0x18001B9F0 (unknown_libname_4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B5F48(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  return sub_18006C360(a1);
}
