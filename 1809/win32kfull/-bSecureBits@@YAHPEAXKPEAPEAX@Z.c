/*
 * XREFs of ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x1C0295818
 * Callers:
 *     NtGdiEngCreatePalette @ 0x1C0129F00 (NtGdiEngCreatePalette.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall bSecureBits(char *Address, SIZE_T Size, void **a3)
{
  unsigned int v5; // ebx
  char *v6; // rcx
  unsigned int v7; // r14d
  HANDLE v8; // rax

  v5 = 1;
  *a3 = 0LL;
  if ( Address )
  {
    if ( (_DWORD)Size )
    {
      v6 = &Address[(unsigned int)Size];
      if ( (unsigned __int64)v6 > MmUserProbeAddress || v6 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v7 = Size;
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      v8 = (HANDLE)GrepSecureVirtualMemory(Address, v7, 2LL);
    else
      v8 = MmSecureVirtualMemory(Address, v7, 2u);
    *a3 = v8;
    return v8 != 0LL;
  }
  return v5;
}
