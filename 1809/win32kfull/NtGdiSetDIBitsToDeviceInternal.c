/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x1C004F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C004EF84 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *Address,
        struct tagBITMAPINFO *Src,
        char a12,
        SIZE_T Size,
        size_t a14,
        int a15,
        __int64 a16)
{
  unsigned int v16; // edi
  void *v17; // rbx
  int v18; // r14d
  char *v19; // rcx
  HANDLE v20; // rax
  __int64 v22; // [rsp+90h] [rbp-48h] BYREF

  v16 = 1;
  v17 = 0LL;
  v22 = 0LL;
  v18 = a12 & 3;
  if ( !(unsigned int)bCaptureBitmapInfo(Src, v18, (unsigned int)a14, (const struct tagBITMAPINFO **)&v22) )
    goto LABEL_13;
  if ( Address )
  {
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = &Address[(unsigned int)Size];
      if ( (unsigned __int64)v19 > MmUserProbeAddress || v19 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v20 = (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails)
        ? (HANDLE)GrepSecureVirtualMemory(Address, (unsigned int)Size, 2LL)
        : MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
    v17 = v20;
    if ( !v20 )
LABEL_13:
      v16 = 0;
  }
  if ( v16 == 1 )
    v16 = GreSetDIBitsToDeviceInternal(a1, a5, a6, a7, a8, a9, (__int64)Address, v22, v18, Size, a14, a15, a16);
  if ( v17 )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v17);
    else
      MmUnsecureVirtualMemory(v17);
  }
  if ( v22 )
    FreeThreadBufferWithTag(v22);
  return v16;
}
