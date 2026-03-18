/*
 * XREFs of NtGdiCheckBitmapBits @ 0x1C029A080
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02998A0 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(HDC a1, void *a2, char *a3, int a4, SIZE_T Size, int a6, int a7, char *Address)
{
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  int v14; // ecx
  char *v15; // rdx
  unsigned int v16; // esi
  HANDLE v17; // rsi
  HANDLE v18; // rax
  void *v19; // rbx
  ULONG v21; // ecx
  _QWORD v22[11]; // [rsp+40h] [rbp-58h] BYREF

  memset(v22, 0, 0x20uLL);
  v12 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_31;
  v13 = 3LL * (unsigned int)Size;
  if ( v13 > 0xFFFFFFFF || (int)v13 + 3 < (unsigned int)v13 )
  {
    v21 = 534;
LABEL_32:
    EngSetLastError(v21);
    return 0LL;
  }
  v14 = (v13 + 3) & 0xFFFFFFFC;
  if ( a7 != v14 )
  {
LABEL_31:
    v21 = 87;
    goto LABEL_32;
  }
  LODWORD(v22[0]) = 5;
  HIDWORD(v22[0]) = Size;
  LODWORD(v22[1]) = 1;
  HIDWORD(v22[1]) = (v13 + 3) & 0xFFFFFFFC;
  v22[2] = 0LL;
  LODWORD(v22[3]) = 0;
  if ( v14 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = &a3[v14];
    if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (_DWORD)Size
    && ((unsigned __int64)&Address[(unsigned int)Size] > MmUserProbeAddress || &Address[(unsigned int)Size] < Address) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v16 = (v13 + 3) & 0xFFFFFFFC;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
  {
    v17 = (HANDLE)GrepSecureVirtualMemory(a3, v16, 2LL);
    v18 = (HANDLE)GrepSecureVirtualMemory(Address, (unsigned int)Size, 4LL);
  }
  else
  {
    v17 = MmSecureVirtualMemory(a3, v16, 2u);
    v18 = MmSecureVirtualMemory(Address, (unsigned int)Size, 4u);
  }
  v19 = v18;
  if ( v17 )
  {
    if ( v18 )
      v12 = GreCheckBitmapBits(a1, a2, (struct _DEVBITMAPINFO *)v22, a3, (unsigned __int8 *)Address);
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v17);
    else
      MmUnsecureVirtualMemory(v17);
  }
  if ( v19 )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v19);
    else
      MmUnsecureVirtualMemory(v19);
  }
  return v12;
}
