/*
 * XREFs of RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0024F30
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C0024880 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0041480 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxDeviceVersionAndSizeIsValid(int *a1)
{
  int v2; // ecx
  bool v3; // cf

  v2 = *a1;
  if ( v2 == 1 )
  {
    v3 = (unsigned int)a1[1] < 0x10;
LABEL_4:
    if ( v3 )
      return 0;
    return (unsigned int)(v2 - 1) <= 2;
  }
  if ( v2 == 2 || v2 == 3 )
  {
    v3 = (unsigned int)a1[1] < 0x18;
    goto LABEL_4;
  }
  return (unsigned int)(v2 - 1) <= 2;
}
