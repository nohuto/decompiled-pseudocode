/*
 * XREFs of OffTextOut @ 0x1C02C17F4
 * Callers:
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029E250 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0041650 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?STROBJ_vOffset@@YAXPEAU_STROBJ@@JJ@Z @ 0x1C02C11E0 (-STROBJ_vOffset@@YAXPEAU_STROBJ@@JJ@Z.c)
 */

__int64 __fastcall OffTextOut(
        __int64 (__fastcall *a1)(__int64, struct _STROBJ *, __int64, struct _CLIPOBJ *, __int64, __int64 *, __int64, __int64, __int64, int),
        int *a2,
        __int64 a3,
        struct _STROBJ *a4,
        __int64 a5,
        struct _CLIPOBJ *a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 *v13; // rbx
  int v16; // edi
  int v17; // esi
  int v18; // esi
  int v19; // edi
  unsigned int v20; // ebx
  __int64 v22; // [rsp+80h] [rbp-68h] BYREF
  __int64 v23; // [rsp+88h] [rbp-60h]

  v13 = a8;
  v16 = *a2;
  v17 = a2[1];
  v22 = 0LL;
  v23 = 0LL;
  if ( a8 )
  {
    LODWORD(v22) = v16 + *(_DWORD *)a8;
    LODWORD(v23) = v16 + *((_DWORD *)a8 + 2);
    HIDWORD(v22) = v17 + *((_DWORD *)a8 + 1);
    v13 = &v22;
    HIDWORD(v23) = v17 + *((_DWORD *)a8 + 3);
  }
  STROBJ_vOffset(a4, v16, v17);
  CLIPOBJ_vOffset(a6, v16, v17);
  v18 = -v17;
  v19 = -v16;
  v20 = a1(a3, a4, a5, a6, a7, v13, a9, a10, a11, a12);
  STROBJ_vOffset(a4, v19, v18);
  CLIPOBJ_vOffset(a6, v19, v18);
  return v20;
}
