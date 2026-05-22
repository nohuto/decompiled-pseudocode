/*
 * XREFs of ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x18009313C
 * Callers:
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x180099790 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800998E0 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180093394 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 */

__int64 __fastcall MPCInputInfoHelper::PopulateAugmentedInput(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        __int16 a6,
        __int64 a7)
{
  int v9; // edi
  char v10; // dl
  float v11; // xmm0_4

  v9 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a1, 0LL, 1024LL, a2, a7);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a7 + 716) = a3;
    *(_BYTE *)(a7 + 784) = 0;
    memset_0((void *)(a7 + 720), 0, 0x40uLL);
    v10 = *(_BYTE *)(a7 + 704);
    *(_DWORD *)(a7 + 724) = 8;
    *(_BYTE *)(a7 + 771) = 1;
    *(_DWORD *)(a7 + 728) = v10 != 0 ? 8 : 0;
    if ( v10 )
      v11 = FLOAT_1_0;
    else
      v11 = 0.0;
    *(_WORD *)(a7 + 766) = a5;
    *(_WORD *)(a7 + 768) = a6;
    *(float *)(a7 + 760) = v11;
    *(_WORD *)(a7 + 764) = a4;
    memset_0((void *)(a7 + 788), 0, 0xA0uLL);
  }
  return (unsigned int)v9;
}
