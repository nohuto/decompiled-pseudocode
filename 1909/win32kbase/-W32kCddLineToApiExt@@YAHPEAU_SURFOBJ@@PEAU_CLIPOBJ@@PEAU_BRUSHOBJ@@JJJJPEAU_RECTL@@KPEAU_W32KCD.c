/*
 * XREFs of ?W32kCddLineToApiExt@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00B05E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kCddLineToApiExt(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9,
        struct _W32KCDD_ENG_CALLBACKS *a10)
{
  int v14; // eax
  unsigned int v15; // r10d

  v14 = IsW32kCddLineToSupported();
  v15 = 0;
  if ( v14 >= 0 )
    return (unsigned int)W32kCddLineTo(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return v15;
}
