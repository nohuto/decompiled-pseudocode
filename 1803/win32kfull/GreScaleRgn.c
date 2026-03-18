/*
 * XREFs of GreScaleRgn @ 0x1C026E60C
 * Callers:
 *     NtGdiScaleRgn @ 0x1C0280220 (NtGdiScaleRgn.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0079BB4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011D5D4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GreScaleRgn(HDC a1, HRGN a2)
{
  DC *v3; // rbx
  unsigned int v4; // edi
  DC *v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a2, 0);
  MDCOBJ::MDCOBJ((MDCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v7[0] && v6[0] )
  {
    if ( (unsigned int)DC::bDpiScaleTransform(v6[0]) )
      RGNOBJ::vScale(v7, *(_QWORD *)((char *)v3 + 532));
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v4;
}
