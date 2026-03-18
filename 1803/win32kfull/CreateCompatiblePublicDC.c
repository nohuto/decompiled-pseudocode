/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C0133238
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C0132C8C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C01E1E54 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C01E2234 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreGetTextAlign @ 0x1C000CF4C (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C000D0B8 (GreSetTextAlign.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     GreGetLayout @ 0x1C002D278 (GreGetLayout.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     NtGdiGetDCObject @ 0x1C00DA180 (NtGdiGetDCObject.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  HBRUSH DCObject; // rax
  int v8; // r15d
  int v9; // r14d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  int TextAlign; // eax
  char v15[4]; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+64h] [rbp-34h]
  unsigned int v17; // [rsp+68h] [rbp-30h]

  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 1LL)
    || (DCObject = (HBRUSH)NtGdiGetDCObject((__int64)a1, 327680), !(unsigned int)GreExtGetObjectW(DCObject, 32LL, v15)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  v8 = v17;
  v9 = v16;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v16, v17, 0, 0LL, 0LL);
  v11 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v11 )
      GreDeleteObject(v11);
    return 0LL;
  }
  GreSelectBitmap(v6, v11);
  GetDPIServerInfo(v13, v12);
  GreSelectFont(a1);
  GreSelectFont(a1);
  GreSelectFont(v6);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v6, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, (unsigned int)(v9 - 1), 1LL);
  NtGdiBitBltInternal(v6, 0, 0, v9, v8, a1, 0, 0, 13369376, 0, 0);
  result = v6;
  *a2 = v11;
  return result;
}
