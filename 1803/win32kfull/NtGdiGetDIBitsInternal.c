/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C00A57D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0016930 (GreGetBitmapBitsSize.c)
 *     GreGetBitmapSizeInternal @ 0x1C00A5C80 (GreGetBitmapSizeInternal.c)
 *     GreGetDIBitsInternal @ 0x1C00A60BC (GreGetDIBitsInternal.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char *Address,
        unsigned int a7,
        unsigned int a8)
{
  volatile void *v8; // r12
  unsigned int v9; // r13d
  size_t v10; // r14
  unsigned int BitmapSizeInternal; // eax
  struct tagBITMAPINFO *v12; // rax
  struct tagBITMAPINFO *v13; // rsi
  unsigned int biHeight; // edx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  bool v17; // zf
  int v18; // eax
  unsigned int biWidth_high; // eax
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int DIBitsInternal; // ebx
  unsigned int Length; // [rsp+58h] [rbp-E0h]
  int v25; // [rsp+60h] [rbp-D8h]
  int v26; // [rsp+68h] [rbp-D0h]
  int v27; // [rsp+70h] [rbp-C8h]
  HANDLE SecureHandle; // [rsp+88h] [rbp-B0h]
  int v31; // [rsp+98h] [rbp-A0h]
  _DWORD v33[10]; // [rsp+C8h] [rbp-70h] BYREF

  v31 = a2;
  v27 = a3;
  v25 = a4;
  Length = a8;
  v26 = 1;
  SecureHandle = 0LL;
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v8 = (volatile void *)(a5 & -(__int64)(a4 != 0));
  v9 = *(_DWORD *)Address;
  ProbeForWrite(Address, *(unsigned int *)Address, 1u);
  if ( v8 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    LODWORD(v10) = 12;
    if ( v9 == 12 && !*((_WORD *)Address + 5) )
      goto LABEL_39;
    LODWORD(v10) = 0;
    if ( v9 >= 0x28 && !*((_WORD *)Address + 7) )
      LODWORD(v10) = 40;
  }
  if ( (_DWORD)v10 )
  {
LABEL_39:
    memmove(v33, Address, (unsigned int)v10);
    v33[0] = v10;
LABEL_40:
    v13 = (struct tagBITMAPINFO *)v33;
    goto LABEL_31;
  }
  if ( v9 == 40 )
    *((_DWORD *)Address + 8) = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7);
  v10 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_40;
  v12 = (struct tagBITMAPINFO *)Win32AllocPool(BitmapSizeInternal, 1886221383LL);
  v13 = v12;
  if ( v12 )
    memset(v12, 0, (unsigned int)v10);
  if ( v13 )
  {
    if ( &Address[v10] < Address || (unsigned __int64)&Address[v10] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v13, Address, v10);
    v13->bmiHeader.biSize = v9;
    if ( (unsigned int)GreGetBitmapSizeInternal(v13, a7) != (_DWORD)v10 )
    {
LABEL_58:
      LODWORD(v10) = 0;
      goto LABEL_61;
    }
    if ( v9 >= 0x28 )
      v13->bmiHeader.biClrUsed = 0;
    if ( v25 )
    {
      if ( v13->bmiHeader.biSize < 0x28 )
      {
        biWidth_high = HIWORD(v13->bmiHeader.biWidth);
        v20 = biWidth_high;
        if ( biWidth_high >= a3 )
          v20 = a3;
        v27 = v20;
        v21 = biWidth_high - v20;
        if ( v21 >= a4 )
          v21 = a4;
        v25 = v21;
        if ( !LOWORD(v13->bmiHeader.biWidth) || !LOWORD(v13->bmiHeader.biHeight) )
          goto LABEL_49;
        v17 = HIWORD(v13->bmiHeader.biHeight) == 0;
      }
      else
      {
        biHeight = -v13->bmiHeader.biHeight;
        if ( v13->bmiHeader.biHeight >= 0 )
          biHeight = v13->bmiHeader.biHeight;
        v15 = biHeight;
        if ( biHeight >= a3 )
          v15 = a3;
        v27 = v15;
        v16 = biHeight - v15;
        if ( v16 >= a4 )
          v16 = a4;
        v25 = v16;
        if ( !v13->bmiHeader.biWidth || !v13->bmiHeader.biPlanes )
          goto LABEL_49;
        v17 = v13->bmiHeader.biBitCount == 0;
      }
      v18 = 0;
      if ( !v17 )
      {
LABEL_30:
        v26 = v18;
        goto LABEL_31;
      }
LABEL_49:
      v18 = 1;
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( (_DWORD)v10 && v8 && v13 )
  {
    if ( v13->bmiHeader.biSize < 0x28 || v13->bmiHeader.biCompression - 1 > 1 || v13->bmiHeader.biSizeImage )
    {
      if ( a8 || (Length = GreGetBitmapBitsSize((__int64)v13)) != 0 )
      {
        ProbeForWrite(v8, Length, 4u);
        SecureHandle = MmSecureVirtualMemory((PVOID)v8, Length, 4u);
      }
      LODWORD(v10) = SecureHandle != 0LL ? v10 : 0;
      goto LABEL_61;
    }
    goto LABEL_58;
  }
LABEL_61:
  if ( v8 && v26 || !(_DWORD)v10 || !v13 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, v31, v27, v25, (__int64)v8, v13, a7, Length, v10);
    if ( DIBitsInternal )
      memmove(Address, v13, (unsigned int)v10);
  }
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v13 )
  {
    if ( v13 != (struct tagBITMAPINFO *)v33 )
      Win32FreePool(v13);
  }
  return DIBitsInternal;
}
