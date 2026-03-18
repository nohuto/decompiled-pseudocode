/*
 * XREFs of OffBitBlt @ 0x1C00F4008
 * Callers:
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0061E30 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F4190 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159BC0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02643D0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C02672E8 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02848C0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02889D8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0288ED0 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00F507C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffBitBlt(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int),
        int *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        struct _CLIPOBJ *a7,
        __int64 a8,
        _DWORD *a9,
        _DWORD *a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13,
        int a14)
{
  int v14; // r15d
  int v16; // r14d
  _DWORD *v17; // rsi
  _DWORD *v18; // rdi
  unsigned int v19; // ebx
  _DWORD v21[2]; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v22[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v23; // [rsp+70h] [rbp-51h]
  __int64 v24; // [rsp+78h] [rbp-49h]
  __int64 v25; // [rsp+80h] [rbp-41h]
  __int64 v26; // [rsp+88h] [rbp-39h]
  __int64 v27; // [rsp+90h] [rbp-31h]
  __int64 v28; // [rsp+98h] [rbp-29h]
  __int64 (__fastcall *v29)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int); // [rsp+A0h] [rbp-21h]
  _DWORD v30[4]; // [rsp+A8h] [rbp-19h] BYREF

  v14 = a2[1];
  v16 = *a2;
  v17 = a10;
  v18 = a13;
  v27 = a5;
  v26 = a6;
  v25 = a8;
  v24 = a11;
  v28 = a3;
  v29 = a1;
  v23 = a12;
  CLIPOBJ_vOffset(a7, v16, v14);
  v30[0] = v16 + *a9;
  v30[2] = v16 + a9[2];
  v30[1] = v14 + a9[1];
  v30[3] = v14 + a9[3];
  if ( a10 )
  {
    v21[0] = *a10 + *a4;
    v17 = v21;
    v21[1] = a4[1] + a10[1];
  }
  if ( a13 )
  {
    v22[0] = v16 + *a13;
    v18 = v22;
    v22[1] = v14 + a13[1];
  }
  v19 = v29(v28, v27, v26, a7, v25, v30, v17, v24, v23, v18, a14);
  CLIPOBJ_vOffset(a7, -v16, -v14);
  return v19;
}
