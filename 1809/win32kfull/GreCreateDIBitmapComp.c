/*
 * XREFs of GreCreateDIBitmapComp @ 0x1C0100130
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C00FFEB0 (NtGdiCreateDIBitmapInternal.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     GreSetDIBitsInternal @ 0x1C0100230 (GreSetDIBitsInternal.c)
 */

HSURF __fastcall GreCreateDIBitmapComp(
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
  HSURF CompatibleBitmapInternal; // rax
  HSURF v16; // rdi
  DYNAMICMODECHANGESHARELOCK *v18; // rcx

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
    v16 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      if ( (a4 & 4) == 0
        || !a5
        || !a6
        || (unsigned int)GreSetDIBitsInternal(a1, CompatibleBitmapInternal, a5, (__int64)a6, v11, a9, a8, a11) )
      {
        return v16;
      }
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a7);
      GreDeleteObject(v16);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v18);
    }
  }
  return 0LL;
}
