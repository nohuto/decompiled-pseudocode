/*
 * XREFs of GreCreateDIBitmapComp @ 0x1C012C748
 * Callers:
 *     NtGdiCreateDIBitmapInternal @ 0x1C00300F0 (NtGdiCreateDIBitmapInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00595B4 (GreStretchDIBitsInternal.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     GreSetDIBitsInternal @ 0x1C012C848 (GreSetDIBitsInternal.c)
 */

__int64 __fastcall GreCreateDIBitmapComp(
        HDC a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // ebp
  unsigned int v14; // esi
  __int64 CompatibleBitmapInternal; // rdi
  DYNAMICMODECHANGESHARELOCK *v17; // rcx

  v11 = a7;
  if ( a7 > 2 || a6 && *a6 >= 0x28u && (unsigned int)(a6[4] - 4) <= 1 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v14 = -a3;
    if ( a3 >= 0 )
      v14 = a3;
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, a2, v14, 0, 0LL, 0LL);
    if ( CompatibleBitmapInternal )
    {
      if ( (a4 & 4) == 0 || !a5 || !a6 || (unsigned int)GreSetDIBitsInternal(a1, a5, (__int64)a6, v11, a9, a8, a11) )
        return CompatibleBitmapInternal;
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a7);
      GreDeleteObject(CompatibleBitmapInternal);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
    }
  }
  return 0LL;
}
