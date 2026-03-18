/*
 * XREFs of NtGdiCreateBitmap @ 0x1C0101CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall NtGdiCreateBitmap(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, char *Address)
{
  __int64 Bitmap; // rdi
  void *v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  SIZE_T v12; // rsi
  char *v13; // rcx
  HANDLE v14; // rax
  unsigned int v16; // [rsp+80h] [rbp+8h]

  v16 = a1;
  Bitmap = 1LL;
  v9 = 0LL;
  if ( Address )
  {
    v10 = (((unsigned int)a1 * (unsigned __int16)a3 * (unsigned __int64)(unsigned __int16)a4 + 15) >> 3) & 0x1FFFFFFFFFFFFFFELL;
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = a2 * v10;
      if ( v11 > 0xFFFFFFFF )
        LODWORD(v11) = 0;
    }
    else
    {
      LODWORD(v11) = 0;
    }
    Bitmap = (_DWORD)v11 != 0;
    if ( (_DWORD)v11 )
    {
      v12 = (int)v11;
      v13 = &Address[(int)v11];
      if ( (unsigned __int64)v13 > MmUserProbeAddress || v13 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
        v14 = (HANDLE)GrepSecureVirtualMemory(Address, v12, 2LL);
      else
        v14 = MmSecureVirtualMemory(Address, v12, 2u);
      v9 = v14;
      Bitmap &= -(__int64)(v14 != 0LL);
      a1 = v16;
    }
  }
  if ( Bitmap )
    Bitmap = GreCreateBitmap(a1, a2, a3, a4, Address);
  if ( v9 )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v9);
    else
      MmUnsecureVirtualMemory(v9);
  }
  return Bitmap;
}
