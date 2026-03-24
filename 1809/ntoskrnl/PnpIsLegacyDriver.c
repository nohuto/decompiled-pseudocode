/*
 * XREFs of PnpIsLegacyDriver @ 0x1407096A0
 * Callers:
 *     IopUnloadDriver @ 0x1407089C8 (IopUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140709154 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IovpBuildDriverObjectList @ 0x14092442C (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
