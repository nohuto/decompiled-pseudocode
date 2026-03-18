/*
 * XREFs of GreScaleRgn @ 0x1C0282620
 * Callers:
 *     NtGdiScaleRgn @ 0x1C02933E0 (NtGdiScaleRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0055B68 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011EE18 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreScaleRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  DC *v6[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[32]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v8[9]; // [rsp+50h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a2, 0, 0);
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = 0;
  if ( v8[0] && v6[0] )
  {
    if ( (unsigned int)DC::bDpiScaleTransform(v6[0]) )
      RGNOBJ::vScale(
        v8,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v4 + 524), (__m128)*(unsigned int *)(v4 + 528)).m128_u64[0]);
    v3 = 1;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v6);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v7);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
  return v3;
}
