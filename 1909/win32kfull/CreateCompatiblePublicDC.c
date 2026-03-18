/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C0158BC0
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021EE84 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F2E8 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiGetDCObject @ 0x1C00BFC70 (NtGdiGetDCObject.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  __int64 v14; // r8
  int TextAlign; // eax
  unsigned int v16[8]; // [rsp+60h] [rbp-38h] BYREF

  memset(v16, 0, sizeof(v16));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (HBRUSH)NtGdiGetDCObject((__int64)a1, 327680),
        !(unsigned int)GreExtGetObjectW(DCObject, 32LL, (char *)v16)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  v8 = v16[2];
  v9 = v16[1];
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v16[1], v16[2], 0, 0LL, 0LL);
  v11 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v11 )
      GreDeleteObject(v11);
    return 0LL;
  }
  GreSelectBitmap(v6, v11);
  GetDPIServerInfo(v13, v12, v14);
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
