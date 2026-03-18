/*
 * XREFs of EngDitherColor @ 0x1C0259570
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00B16A4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0265550 (-PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?vComputeSubspaces@@YAPEAU_VERTEX_DATA@@KPEAU1@@Z @ 0x1C0258D28 (-vComputeSubspaces@@YAPEAU_VERTEX_DATA@@KPEAU1@@Z.c)
 *     ?vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C0258FB4 (-vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z.c)
 *     ?vDitherColor8bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C02592B8 (-vDitherColor8bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z.c)
 */

ULONG __stdcall EngDitherColor(HDEV hdev, ULONG iMode, ULONG rgb, ULONG *pul)
{
  ULONG v4; // esi
  ULONG v5; // ebx
  ULONG v6; // r14d
  unsigned __int8 v8; // bp
  int v9; // esi
  struct _VERTEX_DATA *v10; // r8
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE v16[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = HIWORD(rgb);
  v5 = 0;
  v6 = rgb >> 8;
  v8 = rgb;
  if ( *((_DWORD *)hdev + 526) == 524296 )
  {
    if ( iMode == 2 )
    {
      memset(pul, 0, 0x20uLL);
      v12 = ((unsigned int)(unsigned __int8)((unsigned __int16)(151 * (unsigned __int8)v6
                                                              + 77 * v8
                                                              + 28 * (unsigned __int8)v4) >> 8)
           + 1) >> 2;
      if ( v12 )
      {
        v13 = v12;
        do
        {
          v14 = jSwapSubSpace[v13 + 191];
          pul[v14] |= jSwapSubSpace[--v13 + 128];
          --v12;
        }
        while ( v12 );
      }
      return 1;
    }
    v9 = *((_DWORD *)hdev + 525);
    if ( (unsigned int)(v9 - 2) <= 1 )
    {
      v10 = vComputeSubspaces(rgb, (struct _VERTEX_DATA *)v16);
      v11 = (v10 - (struct _VERTEX_DATA *)v16) >> 3;
      if ( v9 == 3 )
        vDitherColor8bpp(pul, (struct _VERTEX_DATA *)v16, v10, v11);
      else
        vDitherColor4bpp(pul, (struct _VERTEX_DATA *)v16, v10, v11);
      return 1;
    }
  }
  return v5;
}
