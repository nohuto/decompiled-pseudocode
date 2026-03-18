/*
 * XREFs of OffAlphaBlend @ 0x1C0083C40
 * Callers:
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0083A30 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0162630 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0299F10 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00856E0 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffAlphaBlend(
        __int64 (__fastcall *a1)(__int64, __int64, struct _CLIPOBJ *, __int64, __int64 *, __int64 *, __int64),
        int *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        struct _CLIPOBJ *a6,
        __int64 a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10)
{
  int v10; // r14d
  int v11; // esi
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  int v14; // r15d
  int v15; // r12d
  int v16; // r8d
  unsigned int v17; // ebx
  __int64 v21; // [rsp+68h] [rbp-29h] BYREF
  __int64 v22; // [rsp+70h] [rbp-21h]
  __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  __int64 v24; // [rsp+80h] [rbp-11h]

  v10 = a2[1];
  v11 = *a2;
  v12 = a8;
  v13 = a9;
  v14 = *a4;
  v15 = a4[1];
  CLIPOBJ_vOffset(a6, *a2, v10);
  v21 = 0LL;
  v22 = 0LL;
  if ( a8 )
  {
    LODWORD(v21) = v11 + *(_DWORD *)a8;
    LODWORD(v22) = v11 + *((_DWORD *)a8 + 2);
    HIDWORD(v21) = v10 + *((_DWORD *)a8 + 1);
    v12 = &v21;
    HIDWORD(v22) = v10 + *((_DWORD *)a8 + 3);
  }
  v23 = 0LL;
  v24 = 0LL;
  if ( a9 )
  {
    v16 = *((_DWORD *)a9 + 3);
    LODWORD(v23) = v14 + *(_DWORD *)a9;
    LODWORD(v24) = v14 + *((_DWORD *)a9 + 2);
    v13 = &v23;
    HIDWORD(v23) = v15 + *((_DWORD *)a9 + 1);
    HIDWORD(v24) = v15 + v16;
  }
  v17 = a1(a3, a5, a6, a7, v12, v13, a10);
  CLIPOBJ_vOffset(a6, -v11, -v10);
  return v17;
}
