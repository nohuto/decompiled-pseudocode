/*
 * XREFs of RaidGetTotalStorPoFxDeviceSize @ 0x1C0021474
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C00211F4 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003E104 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     RaidGetStorPoFxComponent @ 0x1C0016898 (RaidGetStorPoFxComponent.c)
 *     RaidGetStorPoFxFState @ 0x1C002187C (RaidGetStorPoFxFState.c)
 */

__int64 __fastcall RaidGetTotalStorPoFxDeviceSize(int *a1)
{
  unsigned int v2; // edi
  char *StorPoFxComponent; // rax
  int v4; // r9d
  int v5; // r10d
  char *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  _DWORD *StorPoFxFState; // rax
  int v10; // edx
  int v11; // ecx

  v2 = 0;
  while ( 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(a1, v2++);
    v6 = StorPoFxComponent;
    if ( !StorPoFxComponent )
      break;
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      StorPoFxFState = (_DWORD *)RaidGetStorPoFxFState(v6, v8);
      v8 = (unsigned int)(v10 + 1);
      if ( !StorPoFxFState )
        break;
      v11 = 32;
      if ( *StorPoFxFState != 1 )
        v11 = 0;
      v7 += v11;
    }
  }
  return (unsigned int)(v5 + v4);
}
