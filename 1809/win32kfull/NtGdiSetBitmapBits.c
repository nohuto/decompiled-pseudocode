/*
 * XREFs of NtGdiSetBitmapBits @ 0x1C0076D30
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapBits @ 0x1C0076E50 (GreSetBitmapBits.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall NtGdiSetBitmapBits(HSURF a1, SIZE_T Size, char *Address)
{
  SIZE_T v4; // r14
  HANDLE v6; // rax
  void *v7; // rdi
  unsigned int v8; // ebx

  v4 = (unsigned int)Size;
  if ( (_DWORD)Size
    && ((unsigned __int64)&Address[(unsigned int)Size] > MmUserProbeAddress || &Address[(unsigned int)Size] < Address) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
    v6 = (HANDLE)GrepSecureVirtualMemory(Address, v4, 2LL);
  else
    v6 = MmSecureVirtualMemory(Address, v4, 2u);
  v7 = v6;
  v8 = v6 != 0LL;
  if ( v8 )
    v8 = GreSetBitmapBits(a1);
  if ( v7 )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v7);
    else
      MmUnsecureVirtualMemory(v7);
  }
  return v8;
}
