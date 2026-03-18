/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0275BAC
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02718A0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C010B5E4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C023FF9C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0270C10 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C0270D70 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0271074 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0275644 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     OffCopyBits @ 0x1C0296A70 (OffCopyBits.c)
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
  unsigned int v14; // r15d
  LONG left; // ecx
  LONG top; // edx
  _QWORD *v17; // rsi
  __int64 v18; // r13
  int v19; // ebx
  __int64 v20; // rdi
  int v21; // esi
  int v22; // eax
  int v23; // r11d
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // esi
  int v28; // r14d
  ULONG v29; // r8d
  SURFOBJ *v30; // rax
  SURFOBJ *v31; // r8
  __int64 v32; // rcx
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // rsi
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r9
  struct PALETTE *v40; // rsi
  struct PALETTE *v41; // rax
  int v42; // r10d
  int iUniq; // edi
  int flXlate; // ecx
  int v45; // r8d
  __int64 pulXlate; // rdx
  int v47; // edx
  __int16 v48; // di
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v50; // rdi
  struct SURFACE *v51; // rax
  BOOL (__stdcall *v52)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v53; // rbx
  _QWORD *v54; // rax
  __int16 v56; // [rsp+70h] [rbp-90h]
  int v57; // [rsp+74h] [rbp-8Ch]
  int v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  int v60[2]; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  int v62[2]; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h] BYREF
  SURFOBJ *pso; // [rsp+A8h] [rbp-58h]
  SIZEL sizl; // [rsp+B0h] [rbp-50h]
  HSURF hsurf; // [rsp+B8h] [rbp-48h]
  _QWORD *v67; // [rsp+C0h] [rbp-40h]
  _QWORD *v68; // [rsp+C8h] [rbp-38h]
  const struct _RECTL *v69; // [rsp+D0h] [rbp-30h]
  struct _XLATEOBJ *v70; // [rsp+D8h] [rbp-28h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  struct PALETTE *v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  __int64 v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v79; // [rsp+128h] [rbp+28h]
  _DWORD v80[12]; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v81; // [rsp+160h] [rbp+60h] BYREF
  __int64 v82; // [rsp+170h] [rbp+70h] BYREF
  int v83; // [rsp+178h] [rbp+78h]
  int v84; // [rsp+17Ch] [rbp+7Ch]
  RECTL rclBounds; // [rsp+180h] [rbp+80h] BYREF

  dhpdev = a1->dhpdev;
  v12 = a4;
  pso = 0LL;
  v14 = 1;
  v77 = (__int64)a2;
  v69 = a5;
  v70 = a4;
  left = a5->left;
  top = a5->top;
  v76 = (__int64)a7;
  v58 = top - a6->y;
  v57 = left - a6->x;
  v75 = (__int64)a8;
  v74 = (__int64)a9;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)&v78, (struct _VDEV *)dhpdev, v57, v58);
  v17 = v79;
  v68 = v79;
  if ( !v79
    || (MULTIBRUSH::MULTIBRUSH(
          (MULTIBRUSH *)v80,
          a8,
          *((_DWORD *)dhpdev + 4),
          (struct _VDEV *)dhpdev,
          *((struct _SURFOBJ **)dhpdev + 6),
          ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F),
        !v80[0]) )
  {
    v14 = 0;
    goto LABEL_63;
  }
  if ( a3 )
    rclBounds = a3->rclBounds;
  v56 = a1->fjBitmap & 0x40;
  do
  {
    v18 = v17[1];
    v19 = v57;
    v20 = v18;
    v67 = v17;
    v21 = v58;
    while ( 1 )
    {
      v81.left = v19 + *(_DWORD *)(v20 + 28);
      v81.right = v19 + *(_DWORD *)(v20 + 36);
      v81.top = v21 + *(_DWORD *)(v20 + 32);
      v81.bottom = v21 + *(_DWORD *)(v20 + 40);
      if ( !bIntersect(v69, &v81, &v81) )
        goto LABEL_58;
      v22 = bIntersect(&v81, (const struct _RECTL *)(v18 + 28), &v81);
      v23 = 0;
      if ( !v22 )
        goto LABEL_58;
      *(_QWORD *)v62 = v20 + 72;
      LODWORD(v59) = v81.left - v19;
      hsurf = 0LL;
      HIDWORD(v59) = v81.top - v21;
      v24 = *(_QWORD *)(v20 + 64);
      v25 = *(_QWORD *)(v18 + 64);
      v61 = v24;
      *(_QWORD *)v60 = v25;
      if ( v24 != v25 )
      {
        if ( !*(_DWORD *)(v20 + 20) )
          goto LABEL_58;
        v26 = *(_QWORD *)(v20 + 48);
        v27 = v81.right - v81.left;
        v28 = v81.bottom - v81.top;
        sizl.cx = v81.right - v81.left;
        v29 = *(_DWORD *)(v26 + 2100);
        sizl.cy = v81.bottom - v81.top;
        hsurf = (HSURF)EngCreateBitmap(sizl, 0, v29, 0, 0LL);
        v30 = EngLockSurface(hsurf);
        v23 = 0;
        pso = v30;
        v31 = v30;
        if ( v30 )
        {
          v32 = *(_QWORD *)(v26 + 2544);
          v82 = 0LL;
          v83 = v27;
          v84 = v28;
          if ( (*(_DWORD *)(v32 + 112) & 0x400) != 0 )
            v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v26 + 2832);
          else
            v33 = EngCopyBits;
          v34 = OffCopyBits((int)v33, (int)&gptlZero, (int)v30, v62[0], v61, 0LL, 0LL, (__int64)&v82, (__int64)&v59);
          v31 = pso;
          v14 &= v34;
          v23 = 0;
        }
        v59 = 0LL;
        v12 = v70;
        v24 = (__int64)v31;
        *(_QWORD *)v62 = &gptlZero;
        v25 = *(_QWORD *)v60;
        v61 = (__int64)v31;
      }
      if ( v24 )
      {
        v35 = *(_QWORD *)(v18 + 48);
        v36 = (__int64)v12;
        v63 = 0LL;
        if ( v25 == v24 )
          goto LABEL_39;
        v37 = *(_DWORD *)(v18 + 24);
        if ( !v37 && !*(_DWORD *)(v20 + 24) )
          goto LABEL_39;
        v38 = *(_QWORD *)(v20 + 56);
        v39 = *(_QWORD *)(v38 + 2544);
        v72 = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 2544LL);
        v71 = v39;
        v73 = ppalDefault;
        v40 = ppalDefault;
        if ( v37 && (*(_DWORD *)(v35 + 2164) & 0x100) != 0 )
        {
          v41 = DrvRealizeHalftonePalette((_QWORD *)v35, 0);
          v38 = *(_QWORD *)(v20 + 56);
          v40 = v41;
          v39 = v71;
          v23 = 0;
        }
        v42 = 32 * (*(_DWORD *)(v38 + 2164) & 0x100);
        if ( v12 )
          iUniq = v12[1].iUniq;
        else
          iUniq = 0;
        if ( v12 )
        {
          v23 = *(_DWORD *)&v12[1].iSrcType;
          flXlate = v12[1].flXlate;
        }
        else
        {
          flXlate = 0;
        }
        if ( v12 )
          v45 = v12[3].iUniq;
        else
          v45 = 0;
        if ( v12 )
          pulXlate = (__int64)v12[2].pulXlate;
        else
          pulXlate = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v63,
                             pulXlate,
                             v45,
                             *(_QWORD *)(v39 + 128),
                             *(_QWORD *)(v72 + 128),
                             (__int64)v73,
                             (__int64)v40,
                             flXlate,
                             v23,
                             iUniq,
                             v42) )
        {
          v36 = v63;
LABEL_39:
          if ( !a3 || bIntersect(&rclBounds, &v81, &a3->rclBounds) )
          {
            if ( a10 == 52428 )
            {
              v47 = v60[0];
              v48 = *(_WORD *)(*(_QWORD *)v60 + 78LL);
              if ( v56 )
                *(_WORD *)(*(_QWORD *)v60 + 78LL) = v48 | 0x40;
              if ( (*(_DWORD *)(*(_QWORD *)(v35 + 2544) + 112LL) & 0x400) != 0 )
                v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v35 + 2832);
              else
                v49 = EngCopyBits;
              v14 &= OffCopyBits((int)v49, (int)v18 + 72, v47, v62[0], v61, a3, v36, (__int64)&v81, (__int64)&v59);
              *(_WORD *)(*(_QWORD *)v60 + 78LL) = v48;
            }
            else
            {
              v50 = *(_QWORD *)v60;
              v51 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v60);
              MULTIBRUSH::LoadElement((MULTIBRUSH *)v80, (struct _DISPSURF *)v18, v51);
              if ( (*(_DWORD *)(*(_QWORD *)(v35 + 2544) + 112LL) & 1) != 0 )
                v52 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v35 + 2824);
              else
                v52 = EngBitBlt;
              v14 &= OffBitBlt(
                       (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v52,
                       (LONG *)(v18 + 72),
                       v50,
                       *(_DWORD **)v62,
                       v61,
                       v77,
                       a3,
                       v36,
                       &v81,
                       &v59,
                       v76,
                       v75,
                       (_DWORD *)v74,
                       a10);
              MULTIBRUSH::StoreElement((MULTIBRUSH *)v80, *(_DWORD *)(v18 + 16));
            }
          }
          else
          {
            a3->rclBounds = rclBounds;
          }
        }
        else
        {
          v14 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v63);
      }
      v53 = hsurf;
      if ( hsurf )
      {
        EngUnlockSurface(pso);
        EngDeleteSurface(v53);
      }
      v21 = v58;
      v19 = v57;
LABEL_58:
      v54 = (_QWORD *)*v67;
      v67 = v54;
      if ( !v54 )
        break;
      v20 = v54[1];
    }
    v17 = (_QWORD *)*v68;
    v68 = v17;
  }
  while ( v17 );
  if ( a3 )
    a3->rclBounds = rclBounds;
LABEL_63:
  if ( v78 )
    Win32FreePool(v78);
  return v14;
}
