/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C00BD390
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0025F08 (GreGetBitmapBitsSize.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00BD8A4 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreGetDIBitsInternal @ 0x1C00BE2FC (GreGetDIBitsInternal.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *Address,
        unsigned int a7,
        unsigned int a8)
{
  volatile void *v10; // r12
  unsigned int biSize; // ebx
  size_t v12; // r14
  unsigned int BitmapSizeInternal; // eax
  struct tagBITMAPINFO *v14; // rax
  struct tagBITMAPINFO *v15; // rsi
  unsigned int v16; // r13d
  int biHeight; // eax
  int v18; // ecx
  unsigned int v19; // eax
  bool v20; // zf
  int v21; // eax
  unsigned int biWidth_high; // eax
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int DIBitsInternal; // ebx
  unsigned int Length; // [rsp+58h] [rbp-E0h]
  int v28; // [rsp+60h] [rbp-D8h]
  int v29; // [rsp+68h] [rbp-D0h]
  int v30; // [rsp+70h] [rbp-C8h]
  HANDLE SecureHandle; // [rsp+88h] [rbp-B0h]
  int v34; // [rsp+98h] [rbp-A0h]
  _DWORD v36[10]; // [rsp+C8h] [rbp-70h] BYREF

  v34 = a2;
  v30 = a3;
  v28 = a4;
  Length = a8;
  v29 = 1;
  SecureHandle = 0LL;
  memset(v36, 0, sizeof(v36));
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v10 = (volatile void *)(a5 & -(__int64)(a4 != 0));
  biSize = Address->bmiHeader.biSize;
  ProbeForWrite(Address, Address->bmiHeader.biSize, 1u);
  if ( v10 )
    goto LABEL_45;
  LODWORD(v12) = 12;
  if ( biSize == 12 && !HIWORD(Address->bmiHeader.biHeight) )
    goto LABEL_42;
  if ( biSize < 0x28 )
  {
LABEL_45:
    LODWORD(v12) = 0;
  }
  else
  {
    LODWORD(v12) = 0;
    if ( !Address->bmiHeader.biBitCount )
      LODWORD(v12) = 40;
  }
  if ( (_DWORD)v12 )
  {
LABEL_42:
    memmove(v36, Address, (unsigned int)v12);
    v36[0] = v12;
LABEL_43:
    v15 = (struct tagBITMAPINFO *)v36;
LABEL_44:
    v16 = a7;
    goto LABEL_34;
  }
  if ( biSize == 40 )
    Address->bmiHeader.biClrUsed = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7, biSize);
  v12 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_43;
  v14 = (struct tagBITMAPINFO *)Win32AllocPool(BitmapSizeInternal, 1886221383LL);
  v15 = v14;
  if ( v14 )
    memset(v14, 0, (unsigned int)v12);
  if ( !v15 )
    goto LABEL_44;
  if ( (struct tagBITMAPINFO *)((char *)Address + v12) < Address || (unsigned __int64)Address + v12 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, Address, v12);
  v15->bmiHeader.biSize = biSize;
  v16 = a7;
  if ( GreGetBitmapSizeInternal(v15, a7, biSize) != (_DWORD)v12 )
  {
LABEL_58:
    LODWORD(v12) = 0;
    goto LABEL_61;
  }
  if ( biSize >= 0x28 )
    v15->bmiHeader.biClrUsed = 0;
  if ( v28 )
  {
    if ( v15->bmiHeader.biSize < 0x28 )
    {
      biWidth_high = HIWORD(v15->bmiHeader.biWidth);
      v23 = biWidth_high;
      if ( biWidth_high >= a3 )
        v23 = a3;
      v30 = v23;
      v24 = biWidth_high - v23;
      if ( v24 >= a4 )
        v24 = a4;
      v28 = v24;
      if ( !LOWORD(v15->bmiHeader.biWidth) || !LOWORD(v15->bmiHeader.biHeight) )
        goto LABEL_49;
      v20 = HIWORD(v15->bmiHeader.biHeight) == 0;
    }
    else
    {
      biHeight = v15->bmiHeader.biHeight;
      if ( biHeight < 0 )
        biHeight = -biHeight;
      v18 = biHeight;
      if ( biHeight >= a3 )
        v18 = a3;
      v30 = v18;
      v19 = biHeight - v18;
      if ( v19 >= a4 )
        v19 = a4;
      v28 = v19;
      if ( !v15->bmiHeader.biWidth || !v15->bmiHeader.biPlanes )
        goto LABEL_49;
      v20 = v15->bmiHeader.biBitCount == 0;
    }
    v21 = 0;
    if ( !v20 )
    {
LABEL_33:
      v29 = v21;
      goto LABEL_34;
    }
LABEL_49:
    v21 = 1;
    goto LABEL_33;
  }
LABEL_34:
  if ( (_DWORD)v12 && v10 && v15 )
  {
    if ( v15->bmiHeader.biSize < 0x28 || v15->bmiHeader.biCompression - 1 > 1 || v15->bmiHeader.biSizeImage )
    {
      if ( a8 || (Length = GreGetBitmapBitsSize((__int64)v15)) != 0 )
      {
        ProbeForWrite(v10, Length, 4u);
        SecureHandle = MmSecureVirtualMemory((PVOID)v10, Length, 4u);
      }
      LODWORD(v12) = SecureHandle != 0LL ? v12 : 0;
      goto LABEL_61;
    }
    goto LABEL_58;
  }
LABEL_61:
  if ( v10 && v29 || !(_DWORD)v12 || !v15 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, v34, v30, v28, (__int64)v10, v15, v16, Length, v12);
    if ( DIBitsInternal )
      memmove(Address, v15, (unsigned int)v12);
  }
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v15 )
  {
    if ( v15 != (struct tagBITMAPINFO *)v36 )
      Win32FreePool(v15);
  }
  return DIBitsInternal;
}
