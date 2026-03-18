/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C00542A0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C004D798 (GreGetBitmapBitsSize.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C0054774 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0054DA4 (GreGetDIBitsInternal.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        HDC a1,
        HSURF a2,
        __int64 a3,
        int a4,
        __int64 a5,
        struct tagBITMAPINFO *Address,
        unsigned int a7,
        unsigned int a8)
{
  volatile void *v8; // r15
  unsigned int biSize; // r13d
  size_t v10; // rsi
  struct tagBITMAPINFO *v11; // rdi
  unsigned int BitmapSizeInternal; // eax
  struct tagBITMAPINFO *v13; // rax
  bool v14; // zf
  int v15; // eax
  HANDLE v16; // rax
  unsigned int DIBitsInternal; // r15d
  unsigned int Length; // [rsp+58h] [rbp-E0h]
  int v21; // [rsp+68h] [rbp-D0h]
  HANDLE SecureHandle; // [rsp+78h] [rbp-C0h]
  _DWORD v25[10]; // [rsp+C8h] [rbp-70h] BYREF

  Length = a8;
  v21 = 1;
  SecureHandle = 0LL;
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v8 = (volatile void *)(a5 & -(__int64)(a4 != 0));
  biSize = Address->bmiHeader.biSize;
  ProbeForWrite(Address, Address->bmiHeader.biSize, 1u);
  if ( v8 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    LODWORD(v10) = 12;
    if ( biSize == 12 && !HIWORD(Address->bmiHeader.biHeight) )
      goto LABEL_13;
    LODWORD(v10) = 0;
    if ( biSize >= 0x28 && !Address->bmiHeader.biBitCount )
      LODWORD(v10) = 40;
  }
  if ( (_DWORD)v10 )
  {
LABEL_13:
    memmove(v25, Address, (unsigned int)v10);
    v25[0] = v10;
LABEL_14:
    v11 = (struct tagBITMAPINFO *)v25;
    goto LABEL_15;
  }
  if ( biSize == 40 )
    Address->bmiHeader.biClrUsed = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7, biSize);
  v10 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_14;
  v13 = (struct tagBITMAPINFO *)Win32AllocPool(BitmapSizeInternal, 1886221383LL);
  v11 = v13;
  if ( v13 )
    memset(v13, 0, (unsigned int)v10);
  if ( v11 )
  {
    if ( (struct tagBITMAPINFO *)((char *)Address + v10) < Address
      || (unsigned __int64)Address + v10 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v11, Address, v10);
    v11->bmiHeader.biSize = biSize;
    if ( GreGetBitmapSizeInternal(v11, a7, biSize) != (_DWORD)v10 )
    {
LABEL_21:
      LODWORD(v10) = 0;
      goto LABEL_52;
    }
    if ( biSize >= 0x28 )
      v11->bmiHeader.biClrUsed = 0;
    if ( a4 )
    {
      if ( v11->bmiHeader.biSize < 0x28 )
      {
        if ( !LOWORD(v11->bmiHeader.biWidth) || !LOWORD(v11->bmiHeader.biHeight) )
          goto LABEL_40;
        v14 = HIWORD(v11->bmiHeader.biHeight) == 0;
      }
      else
      {
        if ( !v11->bmiHeader.biWidth || !v11->bmiHeader.biPlanes )
          goto LABEL_40;
        v14 = v11->bmiHeader.biBitCount == 0;
      }
      v15 = 0;
      if ( !v14 )
      {
LABEL_41:
        v21 = v15;
        goto LABEL_15;
      }
LABEL_40:
      v15 = 1;
      goto LABEL_41;
    }
  }
LABEL_15:
  if ( (_DWORD)v10 && v8 && v11 )
  {
    if ( v11->bmiHeader.biSize < 0x28 || v11->bmiHeader.biCompression - 1 > 1 || v11->bmiHeader.biSizeImage )
    {
      if ( a8 || (Length = GreGetBitmapBitsSize((__int64)v11)) != 0 )
      {
        ProbeForWrite(v8, Length, 4u);
        if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
          v16 = (HANDLE)GrepSecureVirtualMemory(v8, Length, 4LL);
        else
          v16 = MmSecureVirtualMemory((PVOID)v8, Length, 4u);
        SecureHandle = v16;
      }
      LODWORD(v10) = SecureHandle != 0LL ? v10 : 0;
      goto LABEL_52;
    }
    goto LABEL_21;
  }
LABEL_52:
  if ( v8 && v21 || !(_DWORD)v10 || !v11 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, a2, (__int64)v8, v11, a7, Length, v10);
    if ( DIBitsInternal )
      memmove(Address, v11, (unsigned int)v10);
  }
  if ( SecureHandle )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(SecureHandle);
    else
      MmUnsecureVirtualMemory(SecureHandle);
  }
  if ( v11 )
  {
    if ( v11 != (struct tagBITMAPINFO *)v25 )
      Win32FreePool(v11);
  }
  return DIBitsInternal;
}
