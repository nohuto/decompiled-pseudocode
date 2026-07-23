/*
 * XREFs of PnpIsLegacyDriver @ 0x14070A940
 * Callers:
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14070A3F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IovpBuildDriverObjectList @ 0x14092542C (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
