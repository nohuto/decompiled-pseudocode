/*
 * XREFs of SmpConfigureDosDevices @ 0x140008EF0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x140008F18 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureDosDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return SmpSaveRegistryValue(a6, a1, a3, 1LL, 0LL);
}
