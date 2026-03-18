/*
 * XREFs of NtGdiCreateDIBitmapInternal @ 0x1C00FFEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C004EF84 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     GreCreateDIBitmapComp @ 0x1C0100130 (GreCreateDIBitmapComp.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        int a2,
        __int64 a3,
        char a4,
        char *Address,
        struct tagBITMAPINFO *Src,
        unsigned int a7,
        size_t a8,
        SIZE_T Size)
{
  struct tagBITMAPINFO *v11; // r14
  __int64 v12; // rdi
  void *v13; // rsi
  char *v14; // rdx
  HANDLE v15; // rax
  __int64 DIBitmapReal; // rax
  struct tagBITMAPINFO *v18; // [rsp+78h] [rbp-50h] BYREF
  HANDLE v19; // [rsp+80h] [rbp-48h]
  int v20; // [rsp+D8h] [rbp+10h]

  v20 = a2;
  v11 = 0LL;
  v18 = 0LL;
  v12 = 1LL;
  v13 = 0LL;
  v19 = 0LL;
  if ( Src && (_DWORD)a8 )
  {
    if ( !(unsigned int)bCaptureBitmapInfo(Src, a7, (unsigned int)a8, (const struct tagBITMAPINFO **)&v18) )
      goto LABEL_15;
    if ( Address )
    {
      if ( (_DWORD)Size )
      {
        if ( ((unsigned __int8)Address & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = &Address[(unsigned int)Size];
        if ( (unsigned __int64)v14 > MmUserProbeAddress || v14 < Address )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v15 = (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails)
          ? (HANDLE)GrepSecureVirtualMemory(Address, (unsigned int)Size, 2LL)
          : MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
      v19 = v15;
      v13 = v15;
      if ( !v15 )
LABEL_15:
        v12 = 0LL;
    }
    v11 = v18;
    a2 = v20;
  }
  if ( v12 == 1 )
  {
    if ( (a4 & 2) != 0 )
      DIBitmapReal = GreCreateDIBitmapReal(
                       a1,
                       a2,
                       Address,
                       &v11->bmiHeader.biSize,
                       a7,
                       a8,
                       Size,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    else
      DIBitmapReal = GreCreateDIBitmapComp(a1, (__int64)Address, (__int64)v11, a7, a8, Size);
    v12 = DIBitmapReal;
  }
  if ( v11 )
    FreeThreadBufferWithTag(v11);
  if ( v13 )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v13);
    else
      MmUnsecureVirtualMemory(v13);
  }
  return v12;
}
