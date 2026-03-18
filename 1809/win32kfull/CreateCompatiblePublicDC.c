/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C0151E08
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C0151824 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0151B08 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0207A40 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0207E64 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     NtGdiGetDCObject @ 0x1C0099E10 (NtGdiGetDCObject.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetTextAlign @ 0x1C00A70F4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00A72C0 (GreSetTextAlign.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, HSURF *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v8; // rdi
  __int64 v9; // r8
  HSURF DCObject; // rax
  int v11; // r15d
  int v12; // r14d
  HSURF CompatibleBitmapInternal; // rax
  HSURF v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  int TextAlign; // eax
  char v18[4]; // [rsp+60h] [rbp-38h] BYREF
  int v19; // [rsp+64h] [rbp-34h]
  int v20; // [rsp+68h] [rbp-30h]

  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1, v4, v5);
  v8 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 1LL)
    || (DCObject = (HSURF)NtGdiGetDCObject(a1, 327680LL, v9), !(unsigned int)GreExtGetObjectW(DCObject, 32LL, v18)) )
  {
    GreDeleteDC(v8);
    return 0LL;
  }
  v11 = v20;
  v12 = v19;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v19, v20, 0, 0LL, 0LL);
  v14 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v8);
    if ( v14 )
      GreDeleteObject(v14);
    return 0LL;
  }
  GreSelectBitmap(v8, v14);
  GetDPIServerInfo(v16, v15);
  GreSelectFont(a1);
  GreSelectFont(a1);
  GreSelectFont(v8);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v8, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v8, (unsigned int)(v12 - 1), 1LL);
  NtGdiBitBltInternal(v8, 0, 0, v12, v11, a1, 0, 0, 13369376, 0, 0);
  result = v8;
  *a2 = v14;
  return result;
}
