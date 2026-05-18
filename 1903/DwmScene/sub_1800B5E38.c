/*
 * XREFs of sub_1800B5E38 @ 0x1800B5E38
 * Callers:
 *     sub_180018000 @ 0x180018000 (sub_180018000.c)
 *     unknown_libname_4 @ 0x18001B8E0 (unknown_libname_4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B5E38(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  return sub_18006C250(a1);
}
