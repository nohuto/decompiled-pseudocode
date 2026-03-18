/*
 * XREFs of ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C007A9DC
 * Callers:
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x1C007A8C4 (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02C7FC0 (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02C8138 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0112AB4 (-bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C01161B0 (-bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall bEngFastFillEnum(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        unsigned int a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *),
        void *a6)
{
  bool v6; // cf
  ULONG v10; // ecx
  unsigned int v11; // ebx
  POINTFIX *pptfx; // rdx
  ULONG count; // edi
  ULONG v15; // r14d
  struct _PATHDATA v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+40h] [rbp-C0h]
  unsigned int v18; // [rsp+44h] [rbp-BCh]
  _QWORD v19[40]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = *((_DWORD *)a1 + 1) < 2u;
  v18 = a3;
  *(_QWORD *)&v16.flags = 0LL;
  v16.pptfx = 0LL;
  if ( !v6 )
  {
    *(_DWORD *)a1 &= ~8u;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 72LL) = *(_QWORD *)(*((_QWORD *)a1 + 1) + 32LL);
    if ( EPATHOBJ::bEnum(a1, &v16) )
    {
      if ( (v16.flags & 2) != 0 )
        return (unsigned int)bFill(a1, a2, v18, a4, a6);
      if ( *((_DWORD *)a1 + 1) > 0x28u )
        return (unsigned int)bFill(a1, a2, v18, a4, a6);
      count = v16.count;
      if ( v16.count > 0x28 )
        return (unsigned int)bFill(a1, a2, v18, a4, a6);
      memmove(v19, v16.pptfx, 8LL * v16.count);
      while ( 1 )
      {
        v17 = EPATHOBJ::bEnum(a1, &v16);
        if ( (v16.flags & 1) != 0 )
          break;
        v15 = count + v16.count;
        if ( count + v16.count > 0x28 )
          break;
        memmove(&v19[count], v16.pptfx, 8LL * v16.count);
        count = v15;
        if ( !v17 )
          goto LABEL_16;
      }
      count = 0;
LABEL_16:
      if ( !count )
        return (unsigned int)bFill(a1, a2, v18, a4, a6);
      pptfx = (POINTFIX *)v19;
      v10 = count;
    }
    else
    {
      v10 = v16.count;
      v11 = 1;
      if ( v16.count <= 1 )
        goto LABEL_6;
      pptfx = v16.pptfx;
    }
    v11 = bFastFill(v10, pptfx, a2, a4, a5, a6);
LABEL_6:
    if ( v11 )
      return v11;
    return (unsigned int)bFill(a1, a2, v18, a4, a6);
  }
  return 1LL;
}
