/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C0157E00
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C0157790 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021F3C4 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F828 (xxxClientPSMTextOut.c)
 * Callees:
 *     NtGdiGetDCObject @ 0x1C0032C50 (NtGdiGetDCObject.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 DPIServerInfo; // rax
  __int64 v13; // rbx
  int TextAlign; // eax
  unsigned int v15[8]; // [rsp+60h] [rbp-38h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (HBRUSH)NtGdiGetDCObject((__int64)a1, 327680),
        !(unsigned int)GreExtGetObjectW(DCObject, 32LL, (char *)v15)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  v8 = v15[2];
  v9 = v15[1];
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v15[1], v15[2], 0, 0LL, 0LL);
  v11 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v11 )
      GreDeleteObject(v11);
    return 0LL;
  }
  GreSelectBitmap(v6);
  DPIServerInfo = GetDPIServerInfo();
  v13 = GreSelectFont((__int64)a1, *(_QWORD *)(DPIServerInfo + 24));
  GreSelectFont((__int64)a1, v13);
  GreSelectFont((__int64)v6, v13);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v6, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, (unsigned int)(v9 - 1), 1LL);
  NtGdiBitBltInternal(v6, 0, 0, v9, v8, a1, 0, 0, 13369376, 0, 0);
  result = v6;
  *a2 = v11;
  return result;
}
