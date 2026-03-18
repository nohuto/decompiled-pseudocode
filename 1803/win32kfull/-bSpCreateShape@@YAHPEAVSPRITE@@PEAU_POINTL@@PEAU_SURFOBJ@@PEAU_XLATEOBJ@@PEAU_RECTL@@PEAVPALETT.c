/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C024D9A0
 * Callers:
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C024E2F4 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C024E528 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C024F110 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F00 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F30 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00FE72C (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010505C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02498F8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C027658C (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0276C54 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffCopyBits @ 0x1C0296A70 (OffCopyBits.c)
 */

__int64 __fastcall bSpCreateShape(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        ULONG a7,
        unsigned int a8,
        struct _RECTL *a9)
{
  SPRITERANGELOCK *v10; // r13
  ULONG v11; // ebx
  signed int v12; // r14d
  signed int v13; // r12d
  SURFOBJ *Surface; // rcx
  __int64 v15; // rax
  struct _SURFOBJ *v16; // r14
  char *v17; // rcx
  int v18; // r8d
  int v19; // eax
  int v20; // edx
  _DWORD *v21; // rdx
  LONG left; // ebx
  int v23; // ecx
  struct _SURFOBJ *v24; // rdi
  int v25; // ecx
  int v26; // eax
  HDEV hdev; // rbx
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r12
  __int64 v30; // rdi
  __int64 v31; // r15
  __int64 v32; // rbx
  unsigned int v33; // [rsp+50h] [rbp-B0h]
  _QWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  _QWORD v38[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C4h] [rbp-3Ch]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int64 v44; // [rsp+F0h] [rbp-10h]
  struct _RECTL v45; // [rsp+100h] [rbp+0h] BYREF
  __int64 v46[2]; // [rsp+110h] [rbp+10h] BYREF

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 120LL);
  v11 = a7;
  v37 = (__int64)a4;
  v35[0] = a2;
  *(_QWORD *)&v45.left = a9;
  v33 = 0;
  SPRITERANGELOCK::vLockExclusive(v10);
  v36 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v36);
  *((_QWORD *)a1 + 18) = a6;
  v12 = a5->right - a5->left;
  v13 = a5->bottom - a5->top;
  if ( !a7 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 72LL);
  Surface = (SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !Surface
    || (Surface->iType || (Surface->fjBitmap & 0x20) != 0) && a8
    || Surface->iBitmapFormat != v11
    || Surface->sizlBitmap.cx < v12
    || Surface->sizlBitmap.cy < v13 )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( Surface->iBitmapFormat != v11 )
      {
        EngUnlockSurface(Surface);
        v15 = *((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 16) = 0LL;
        *(_DWORD *)a1 &= ~0x40u;
        Surface = 0LL;
        *((_QWORD *)a1 + 30) = 0LL;
        if ( v15 )
          *(_DWORD *)(v15 + 16) &= ~0x40u;
      }
    }
    else
    {
      vSpDeleteSurface(Surface);
      Surface = 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x40) == 0 && *((_QWORD *)a1 + 30) && a8 )
    {
      Surface = EngLockSurface(*((HSURF *)a1 + 30));
      if ( !Surface )
        goto LABEL_23;
      *(_DWORD *)a1 |= 0x40u;
    }
    if ( Surface )
    {
LABEL_24:
      *((_QWORD *)a1 + 16) = Surface;
      goto LABEL_25;
    }
LABEL_23:
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v12, v13);
    goto LABEL_24;
  }
LABEL_25:
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockShared(v10);
  v16 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !v16 )
    goto LABEL_65;
  v17 = (char *)a1 + 136;
  v18 = -a5->left;
  v33 = 1;
  *((_DWORD *)a1 + 34) = v18;
  v19 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  *((_DWORD *)a1 + 35) = v19;
  if ( a6 )
  {
    v17 = (char *)a1 + 136;
    v20 = **((_DWORD **)a6 + 14) | *(_DWORD *)(*((_QWORD *)a6 + 14) + 8LL);
  }
  else
  {
    v20 = 0;
  }
  *((_DWORD *)a1 + 39) = v20;
  v21 = *(_DWORD **)&v45.left;
  left = a5->left;
  HIDWORD(v46[0]) = a5->top;
  v46[1] = *(_QWORD *)&a5->right;
  LODWORD(v46[0]) = left;
  if ( *(_QWORD *)&v45.left )
  {
    v23 = *((_DWORD *)v17 + 1);
    v45.left = **(_DWORD **)&v45.left - v18;
    v45.right = v21[2] - v18;
    v45.top = v21[1] - v23;
    v45.bottom = v21[3] - v23;
    ERECTL::operator*=((int *)v46, &v45.left);
    left = v46[0];
  }
  if ( ERECTL::bEmpty((ERECTL *)v46) )
    goto LABEL_65;
  if ( (*(_DWORD *)a1 & 0x40) == 0 )
  {
    v24 = a3;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)a1 & 0x200) != 0 )
  {
    v24 = a3;
    if ( *(HSURF *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 344) == a3->hsurf )
    {
LABEL_37:
      v45 = *(struct _RECTL *)v46;
      v40 = 0LL;
      v25 = *(_DWORD *)v35[0];
      v45.right = *(_DWORD *)v35[0] + LODWORD(v46[1]);
      v41 = 0;
      v42 = 0;
      v45.left = v25 + left;
      v26 = *(_DWORD *)(v35[0] + 4LL);
      v45.top = v26 + HIDWORD(v46[0]);
      v45.bottom = v26 + HIDWORD(v46[1]);
      MULTISURF::vInit((MULTISURF *)v39, v24, &v45);
      v38[0] = 0LL;
      v35[0] = 0LL;
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x400) != 0 )
      {
        hdev = v16->hdev;
        if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v39, hdev) )
        {
          SPRITERANGELOCK::vUnlock(v10);
          SPRITERANGELOCK::vLockExclusive(v10);
          vSpDeleteSurface(*((SURFOBJ **)a1 + 16));
          *((_QWORD *)a1 + 16) = 0LL;
          SPRITERANGELOCK::vUnlock(v10);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v38);
          MULTISURF::~MULTISURF((MULTISURF *)v39);
          return 0LL;
        }
      }
      else
      {
        hdev = v24->hdev;
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x400) == 0 )
        {
          v29 = EngCopyBits;
LABEL_43:
          if ( SURFREFVIEW::bMap((SURFREFVIEW *)v38, (struct _SURFOBJ *)v43)
            && SURFREFVIEW::bMap((SURFREFVIEW *)v35, v16) )
          {
            v30 = 0LL;
            if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
            {
              v30 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
              GreLockDisplayDevice(*(_QWORD *)(v30 + 48));
            }
            v31 = v43;
            v32 = 0LL;
            if ( v43 )
            {
              if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v43) + 112) & 0x4000) != 0
                 || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v31) + 112) < 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v31) + 112) & 0x200) == 0 )
              {
                v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v31);
                GreLockDisplayDevice(*(_QWORD *)(v32 + 48));
              }
              v31 = v43;
            }
            OffCopyBits((int)v29, (_DWORD)a1 + 136, (int)v16, (int)&gptlZero, v31, 0LL, v37, (__int64)v46, v44);
            if ( (*(_DWORD *)a1 & 0x200) != 0
              && *((struct _SURFOBJ **)a1 + 16) == v16
              && *(HSURF *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 344) == a3->hsurf )
            {
              *(_DWORD *)a1 |= 0x80u;
            }
            if ( v32 )
              GreUnlockDisplayDevice(*(_QWORD *)(v32 + 48));
            if ( v30 )
              GreUnlockDisplayDevice(*(_QWORD *)(v30 + 48));
          }
          else
          {
            v33 = 0;
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v38);
          MULTISURF::~MULTISURF((MULTISURF *)v39);
          goto LABEL_65;
        }
      }
      v29 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 354);
      goto LABEL_43;
    }
  }
  *(_DWORD *)a1 |= 0x80u;
LABEL_65:
  SPRITERANGELOCK::vUnlock(v10);
  return v33;
}
