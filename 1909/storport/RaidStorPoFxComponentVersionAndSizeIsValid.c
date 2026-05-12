/*
 * XREFs of RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C001E5AC
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C001E354 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003F4F4 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxComponentVersionAndSizeIsValid(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( (unsigned int)a1[1] < 0x20 )
      return 0;
  }
  else if ( v1 == 2 && (unsigned int)a1[1] < 0x28 )
  {
    return 0;
  }
  return (unsigned int)(v1 - 1) <= 1;
}
