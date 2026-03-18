/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029EBBC
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029A580 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     OffBitBlt @ 0x1C00838A0 (OffBitBlt.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02708AC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0299868 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C02999D4 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0299D10 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C029E61C (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     OffCopyBits @ 0x1C02C0DE8 (OffCopyBits.c)
 */

__int64 __fastcall bBitBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        struct _POINTL *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  DHPDEV dhpdev; // rbx
  struct _XLATEOBJ *v12; // r14
  LONG left; // ecx
  LONG top; // edx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // r12d
  _QWORD *v19; // rsi
  __int64 v20; // r15
  int v21; // ebx
  __int64 v22; // rdi
  int v23; // esi
  int v24; // eax
  int v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // esi
  int v30; // r14d
  ULONG v31; // r8d
  SURFOBJ *v32; // rax
  SURFOBJ *v33; // r8
  __int64 v34; // rcx
  BOOL (__stdcall *v35)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rsi
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // r9
  struct PALETTE *v42; // rsi
  struct PALETTE *v43; // rax
  int v44; // r10d
  int iUniq; // edi
  int flXlate; // ecx
  int v47; // r8d
  __int64 pulXlate; // rdx
  int v49; // edx
  __int16 v50; // di
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v52; // rdi
  struct SURFACE *v53; // rax
  BOOL (__stdcall *v54)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v55; // rbx
  _QWORD *v56; // rax
  __int16 v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+74h] [rbp-8Ch]
  int v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  int v62[2]; // [rsp+88h] [rbp-78h]
  __int64 v63; // [rsp+90h] [rbp-70h]
  int v64[2]; // [rsp+98h] [rbp-68h]
  SIZEL sizl; // [rsp+A0h] [rbp-60h]
  __int64 v66; // [rsp+A8h] [rbp-58h] BYREF
  SURFOBJ *pso; // [rsp+B0h] [rbp-50h]
  HSURF hsurf; // [rsp+B8h] [rbp-48h]
  _QWORD *v69; // [rsp+C0h] [rbp-40h]
  _QWORD *v70; // [rsp+C8h] [rbp-38h]
  const struct _RECTL *v71; // [rsp+D0h] [rbp-30h]
  struct _XLATEOBJ *v72; // [rsp+D8h] [rbp-28h]
  __int64 v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  struct PALETTE *v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  __int64 v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v81; // [rsp+128h] [rbp+28h]
  _DWORD v82[12]; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v83; // [rsp+160h] [rbp+60h] BYREF
  __int64 v84; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v85; // [rsp+178h] [rbp+78h]
  unsigned __int128 rclBounds; // [rsp+180h] [rbp+80h] BYREF

  dhpdev = a1->dhpdev;
  v12 = a4;
  v79 = (__int64)a2;
  v71 = a5;
  v72 = a4;
  left = a5->left;
  top = a5->top;
  v78 = (__int64)a7;
  v16 = left - a6->x;
  v17 = top - a6->y;
  v76 = (__int64)a9;
  v61 = 0LL;
  sizl = 0LL;
  pso = 0LL;
  v60 = v17;
  v18 = 1;
  v59 = v16;
  v77 = (__int64)a8;
  *(_QWORD *)&v83.left = 0LL;
  *(_QWORD *)&v83.right = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  rclBounds = 0uLL;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)&v80, (struct _VDEV *)dhpdev, v16, v17);
  v19 = v81;
  v70 = v81;
  if ( !v81
    || (MULTIBRUSH::MULTIBRUSH(
          (MULTIBRUSH *)v82,
          a8,
          *((_DWORD *)dhpdev + 4),
          (struct _VDEV *)dhpdev,
          *((struct _SURFOBJ **)dhpdev + 6),
          ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F),
        !v82[0]) )
  {
    v18 = 0;
    goto LABEL_63;
  }
  if ( a3 )
    rclBounds = (unsigned __int128)a3->rclBounds;
  v58 = a1->fjBitmap & 0x40;
  do
  {
    v20 = v19[1];
    v21 = v59;
    v22 = v20;
    v69 = v19;
    v23 = v60;
    while ( 1 )
    {
      v83.left = v21 + *(_DWORD *)(v22 + 28);
      v83.right = v21 + *(_DWORD *)(v22 + 36);
      v83.top = v23 + *(_DWORD *)(v22 + 32);
      v83.bottom = v23 + *(_DWORD *)(v22 + 40);
      if ( !bIntersect(v71, &v83, &v83) )
        goto LABEL_58;
      v24 = bIntersect(&v83, (const struct _RECTL *)(v20 + 28), &v83);
      v25 = 0;
      if ( !v24 )
        goto LABEL_58;
      *(_QWORD *)v64 = v22 + 72;
      LODWORD(v61) = v83.left - v21;
      hsurf = 0LL;
      HIDWORD(v61) = v83.top - v23;
      v26 = *(_QWORD *)(v22 + 64);
      v27 = *(_QWORD *)(v20 + 64);
      v63 = v26;
      *(_QWORD *)v62 = v27;
      if ( v26 != v27 )
      {
        if ( !*(_DWORD *)(v22 + 20) )
          goto LABEL_58;
        v28 = *(_QWORD *)(v22 + 48);
        v29 = v83.right - v83.left;
        v30 = v83.bottom - v83.top;
        sizl.cx = v83.right - v83.left;
        v31 = *(_DWORD *)(v28 + 2108);
        sizl.cy = v83.bottom - v83.top;
        hsurf = (HSURF)EngCreateBitmap(sizl, 0, v31, 0, 0LL);
        v32 = EngLockSurface(hsurf);
        v25 = 0;
        pso = v32;
        v33 = v32;
        if ( v32 )
        {
          v34 = *(_QWORD *)(v28 + 2552);
          v84 = 0LL;
          v85 = __PAIR64__(v30, v29);
          if ( (*(_DWORD *)(v34 + 112) & 0x400) != 0 )
            v35 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v28 + 2840);
          else
            v35 = EngCopyBits;
          v36 = OffCopyBits((int)v35, (int)&gptlZero, (int)v32, v64[0], v63, 0LL, 0LL, (__int64)&v84, (__int64)&v61);
          v33 = pso;
          v18 &= v36;
          v25 = 0;
        }
        v61 = 0LL;
        v12 = v72;
        v26 = (__int64)v33;
        *(_QWORD *)v64 = &gptlZero;
        v27 = *(_QWORD *)v62;
        v63 = (__int64)v33;
      }
      if ( v26 )
      {
        v37 = *(_QWORD *)(v20 + 48);
        v38 = (__int64)v12;
        v66 = 0LL;
        if ( v27 == v26 )
          goto LABEL_39;
        v39 = *(_DWORD *)(v20 + 24);
        if ( !v39 && !*(_DWORD *)(v22 + 24) )
          goto LABEL_39;
        v40 = *(_QWORD *)(v22 + 56);
        v41 = *(_QWORD *)(v40 + 2552);
        v74 = *(_QWORD *)(*(_QWORD *)(v20 + 56) + 2552LL);
        v73 = v41;
        v75 = ppalDefault;
        v42 = ppalDefault;
        if ( v39 && (*(_DWORD *)(v37 + 2172) & 0x100) != 0 )
        {
          v43 = DrvRealizeHalftonePalette((_QWORD *)v37, 0);
          v40 = *(_QWORD *)(v22 + 56);
          v42 = v43;
          v41 = v73;
          v25 = 0;
        }
        v44 = 32 * (*(_DWORD *)(v40 + 2172) & 0x100);
        if ( v12 )
          iUniq = v12[1].iUniq;
        else
          iUniq = 0;
        if ( v12 )
        {
          v25 = *(_DWORD *)&v12[1].iSrcType;
          flXlate = v12[1].flXlate;
        }
        else
        {
          flXlate = 0;
        }
        if ( v12 )
          v47 = v12[3].iUniq;
        else
          v47 = 0;
        if ( v12 )
          pulXlate = (__int64)v12[2].pulXlate;
        else
          pulXlate = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v66,
                             pulXlate,
                             v47,
                             *(_QWORD *)(v41 + 128),
                             *(_QWORD *)(v74 + 128),
                             (__int64)v75,
                             (__int64)v42,
                             flXlate,
                             v25,
                             iUniq,
                             v44) )
        {
          v38 = v66;
LABEL_39:
          if ( !a3 || bIntersect((const struct _RECTL *)&rclBounds, &v83, &a3->rclBounds) )
          {
            if ( a10 == 52428 )
            {
              v49 = v62[0];
              v50 = *(_WORD *)(*(_QWORD *)v62 + 78LL);
              if ( v58 )
                *(_WORD *)(*(_QWORD *)v62 + 78LL) = v50 | 0x40;
              if ( (*(_DWORD *)(*(_QWORD *)(v37 + 2552) + 112LL) & 0x400) != 0 )
                v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v37 + 2840);
              else
                v51 = EngCopyBits;
              v18 &= OffCopyBits((int)v51, (int)v20 + 72, v49, v64[0], v63, a3, v38, (__int64)&v83, (__int64)&v61);
              *(_WORD *)(*(_QWORD *)v62 + 78LL) = v50;
            }
            else
            {
              v52 = *(_QWORD *)v62;
              v53 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v62);
              MULTIBRUSH::LoadElement((MULTIBRUSH *)v82, (struct _DISPSURF *)v20, v53);
              if ( (*(_DWORD *)(*(_QWORD *)(v37 + 2552) + 112LL) & 1) != 0 )
                v54 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v37 + 2832);
              else
                v54 = EngBitBlt;
              v18 &= OffBitBlt(
                       (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v54,
                       (int *)(v20 + 72),
                       v52,
                       *(_DWORD **)v64,
                       v63,
                       v79,
                       a3,
                       v38,
                       &v83.left,
                       &v61,
                       v78,
                       v77,
                       (__int64 *)v76,
                       a10);
              MULTIBRUSH::StoreElement((MULTIBRUSH *)v82, *(_DWORD *)(v20 + 16));
            }
          }
          else
          {
            a3->rclBounds = (RECTL)rclBounds;
          }
        }
        else
        {
          v18 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
      }
      v55 = hsurf;
      if ( hsurf )
      {
        EngUnlockSurface(pso);
        EngDeleteSurface(v55);
      }
      v23 = v60;
      v21 = v59;
LABEL_58:
      v56 = (_QWORD *)*v69;
      v69 = v56;
      if ( !v56 )
        break;
      v22 = v56[1];
    }
    v19 = (_QWORD *)*v70;
    v70 = v19;
  }
  while ( v19 );
  if ( a3 )
    a3->rclBounds = (RECTL)rclBounds;
LABEL_63:
  if ( v80 )
    Win32FreePool(v80);
  return v18;
}
