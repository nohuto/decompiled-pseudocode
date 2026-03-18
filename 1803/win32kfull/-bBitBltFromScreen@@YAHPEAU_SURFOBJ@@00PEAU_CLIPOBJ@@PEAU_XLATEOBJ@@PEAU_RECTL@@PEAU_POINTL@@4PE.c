/*
 * XREFs of ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02756D8
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02718A0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C010B5E4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02498F8 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0270C10 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0271028 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0271074 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0275644 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0276318 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C027673C (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0276C54 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffCopyBits @ 0x1C0296A70 (OffCopyBits.c)
 */

__int64 __fastcall bBitBltFromScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // ebx
  struct _CLIPOBJ *v12; // r13
  int v13; // r12d
  DHPDEV dhpdev; // rsi
  int v15; // r14d
  int v16; // r15d
  struct _SURFOBJ *v18; // rsi
  int i; // eax
  __int64 v20; // r8
  int v21; // eax
  struct _SURFOBJ *v22; // r15
  struct _DISPSURF *v23; // rcx
  int v24; // esi
  struct _XLATEOBJ *v25; // r14
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rax
  ULONG iUniq; // r11d
  int v30; // r10d
  FLONG flXlate; // ecx
  ULONG v32; // r8d
  ULONG *pulXlate; // rdx
  struct SURFACE *v34; // rax
  BOOL (__stdcall *v35)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+78h] [rbp-88h]
  int v39; // [rsp+7Ch] [rbp-84h]
  struct _XLATEOBJ *v40; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v41; // [rsp+88h] [rbp-78h]
  struct _SURFOBJ *v42; // [rsp+90h] [rbp-70h]
  struct _CLIPOBJ *v43; // [rsp+98h] [rbp-68h]
  struct _RECTL *v44; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v45; // [rsp+A8h] [rbp-58h]
  __int64 *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  _DWORD v50[12]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v51[56]; // [rsp+100h] [rbp+0h] BYREF
  struct _DISPSURF *v52; // [rsp+138h] [rbp+38h]
  __int64 v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  int v55[4]; // [rsp+150h] [rbp+50h]
  _BYTE v56[40]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v57; // [rsp+188h] [rbp+88h]
  char v58; // [rsp+190h] [rbp+90h]
  int v59; // [rsp+194h] [rbp+94h]
  __int64 v60; // [rsp+1B0h] [rbp+B0h]
  int v61[2]; // [rsp+1B8h] [rbp+B8h]
  struct _RECTL v62; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v63[2]; // [rsp+1E0h] [rbp+E0h] BYREF

  v49 = (__int64)a3;
  v11 = 0;
  v12 = a4;
  v48 = (__int64)a8;
  v13 = 1;
  dhpdev = a2->dhpdev;
  v41 = a1;
  v42 = a2;
  v45 = a9;
  v15 = a6->left - a7->x;
  v16 = a6->top - a7->y;
  v43 = a4;
  v44 = a6;
  v46 = (__int64 *)a7;
  v47 = (__int64)a10;
  v38 = v15;
  v39 = v16;
  v62 = *a6;
  if ( a4 && a4->iDComplexity && !bIntersect(&a4->rclBounds, &v62, &v62) )
    return 1LL;
  v62.left -= v15;
  v62.right -= v15;
  v62.top -= v16;
  v62.bottom -= v16;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v50,
    v45,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a11 ^ (unsigned __int16)(a11 >> 4)) & 0xF0F);
  if ( !v50[0] )
    return v11;
  v18 = v41;
  v57 = 0LL;
  v58 = 0;
  v59 = 0;
  MULTISURF::vInit((MULTISURF *)v56, v41, v44);
  for ( i = MSURF::bFindSurface((MSURF *)v51, v42, 0LL, &v62); i; i = MSURF::bNextSurface((MSURF *)v51) )
  {
    v20 = v53;
    if ( (*(_DWORD *)(*(_QWORD *)(v53 + 24) + 1816LL) & 0x8000000) == 0 )
    {
      v21 = IsMetaRedirectionBitmap(v18);
      v20 = v53;
      if ( !v21 )
      {
        v22 = *(struct _SURFOBJ **)v61;
        v23 = v52;
LABEL_12:
        v24 = 0;
        v40 = 0LL;
        v25 = a5;
        if ( *((_DWORD *)v23 + 6) )
        {
          v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v20);
          v27 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 128);
          if ( !v27 )
          {
            if ( !a5 )
              goto LABEL_19;
            if ( *(_QWORD *)&a5[2].iUniq )
            {
              v27 = *(_QWORD *)&a5[2].iUniq;
              goto LABEL_22;
            }
            if ( (a5->flXlate & 1) != 0 )
            {
LABEL_19:
              v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v42);
              if ( v22 == v41 )
                v27 = *(_QWORD *)(v28 + 128);
            }
            else
            {
              v24 = 1;
            }
          }
          if ( !v24 )
          {
LABEL_22:
            if ( a5 )
              iUniq = a5[1].iUniq;
            else
              iUniq = 0;
            if ( a5 )
              v30 = *(_DWORD *)&a5[1].iSrcType;
            else
              v30 = 0;
            if ( a5 )
              flXlate = a5[1].flXlate;
            else
              flXlate = 0;
            if ( a5 )
              v32 = a5[3].iUniq;
            else
              v32 = 0;
            if ( a5 )
              pulXlate = a5[2].pulXlate;
            else
              pulXlate = 0LL;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (__int64 *)&v40,
                                 (__int64)pulXlate,
                                 v32,
                                 *(_QWORD *)(v26 + 128),
                                 v27,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 flXlate,
                                 v30,
                                 iUniq,
                                 0x2000) )
            {
              v25 = v40;
              v20 = v53;
              v12 = v43;
              goto LABEL_39;
            }
          }
          v12 = v43;
          v13 = 0;
        }
        else
        {
LABEL_39:
          if ( *(_BYTE *)(v54 + 20) )
          {
            v37 = *(_QWORD *)(v54 + 4);
            LODWORD(v63[0]) = v38 + *(_DWORD *)(v54 + 4);
            LODWORD(v63[1]) = v38 + *(_DWORD *)(v54 + 12);
            HIDWORD(v63[0]) = v39 + *(_DWORD *)(v54 + 8);
            HIDWORD(v63[1]) = v39 + *(_DWORD *)(v54 + 16);
          }
          else
          {
            v37 = *v46;
            *(struct _RECTL *)v63 = *v44;
          }
          v34 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v20);
          if ( a11 == 52428 )
          {
            if ( (*((_DWORD *)v34 + 28) & 0x400) != 0 )
              v35 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v52 + 7) + 2832LL);
            else
              v35 = EngCopyBits;
            v13 &= OffCopyBits(
                     (int)v35,
                     (int)&gptlZero,
                     (int)v22,
                     v55[0],
                     v53,
                     v12,
                     (__int64)v25,
                     (__int64)v63,
                     (__int64)&v37);
          }
          else
          {
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v50, v52, v34);
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v53) + 112) & 1) != 0 )
              v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v52 + 7) + 2824LL);
            else
              v36 = EngBitBlt;
            v13 &= OffBitBlt(
                     (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v36,
                     (LONG *)&gptlZero,
                     (__int64)v22,
                     *(_DWORD **)v55,
                     v53,
                     v49,
                     v12,
                     (__int64)v25,
                     v63,
                     &v37,
                     v48,
                     (__int64)v45,
                     (_DWORD *)v47,
                     a11);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v50, *((_DWORD *)v52 + 4));
          }
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v40);
        v18 = v41;
        continue;
      }
    }
    if ( v60 )
    {
      v23 = v52;
      v22 = *(struct _SURFOBJ **)(*(_QWORD *)(v60 + 8) + 8LL * *((unsigned int *)v52 + 4));
      if ( v22 )
        goto LABEL_12;
    }
  }
  v11 = v13;
  MULTISURF::~MULTISURF((MULTISURF *)v56);
  return v11;
}
