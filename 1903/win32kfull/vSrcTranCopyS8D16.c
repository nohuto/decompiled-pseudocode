/*
 * XREFs of vSrcTranCopyS8D16 @ 0x1C02785C0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z @ 0x1C0276184 (-vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z.c)
 */

void __fastcall vSrcTranCopyS8D16(
        unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  unsigned __int8 *v14; // r10
  unsigned __int8 *v15; // rbx
  int v16; // edi
  size_t v17; // rcx
  void (*v18)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **); // [rsp+58h] [rbp-50h]

  v14 = a1;
  v15 = &gajCopyBuffer;
  v16 = 0;
  v17 = (unsigned int)(2 * (a6 - a5) + 8);
  if ( (unsigned int)v17 > 0x1F40 )
  {
    v15 = (unsigned __int8 *)PALLOCMEM2(v17, 1869899079LL, 0);
    if ( !v15 )
      return;
    v16 = 1;
    v14 = a1;
  }
  vSrcTranCopyS8D16New(v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, v18, v15);
  if ( v16 )
    Win32FreePool(v15);
}
