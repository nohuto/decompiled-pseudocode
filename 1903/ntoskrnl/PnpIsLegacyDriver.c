/*
 * XREFs of PnpIsLegacyDriver @ 0x140734014
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140733AA4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x1409635AC (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
