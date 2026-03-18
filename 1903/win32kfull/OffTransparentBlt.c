/*
 * XREFs of OffTransparentBlt @ 0x1C003F4BC
 * Callers:
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C003F280 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161660 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029E590 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0041650 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffTransparentBlt(
        __int64 (__fastcall *a1)(__int64, __int64, struct _CLIPOBJ *, __int64, __int64 *, __int64 *, int, int),
        int *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        struct _CLIPOBJ *a6,
        __int64 a7,
        __int64 *a8,
        __int64 *a9,
        int a10,
        int a11)
{
  int v11; // r14d
  int v12; // esi
  __int64 *v13; // rdi
  __int64 *v14; // rbx
  int v15; // r15d
  int v16; // r12d
  unsigned int v17; // ebx
  __int64 v21; // [rsp+70h] [rbp-31h] BYREF
  __int64 v22; // [rsp+78h] [rbp-29h]
  __int64 v23; // [rsp+80h] [rbp-21h] BYREF
  __int64 v24; // [rsp+88h] [rbp-19h]

  v11 = a2[1];
  v12 = *a2;
  v13 = a8;
  v14 = a9;
  v15 = *a4;
  v16 = a4[1];
  CLIPOBJ_vOffset(a6, *a2, v11);
  v21 = 0LL;
  v22 = 0LL;
  if ( a8 )
  {
    LODWORD(v21) = v12 + *(_DWORD *)a8;
    LODWORD(v22) = v12 + *((_DWORD *)a8 + 2);
    HIDWORD(v21) = v11 + *((_DWORD *)a8 + 1);
    v13 = &v21;
    HIDWORD(v22) = v11 + *((_DWORD *)a8 + 3);
  }
  v23 = 0LL;
  v24 = 0LL;
  if ( a9 )
  {
    LODWORD(v23) = v15 + *(_DWORD *)a9;
    LODWORD(v24) = v15 + *((_DWORD *)a9 + 2);
    HIDWORD(v23) = v16 + *((_DWORD *)a9 + 1);
    v14 = &v23;
    HIDWORD(v24) = v16 + *((_DWORD *)a9 + 3);
  }
  v17 = a1(a3, a5, a6, a7, v13, v14, a10, a11);
  CLIPOBJ_vOffset(a6, -v12, -v11);
  return v17;
}
