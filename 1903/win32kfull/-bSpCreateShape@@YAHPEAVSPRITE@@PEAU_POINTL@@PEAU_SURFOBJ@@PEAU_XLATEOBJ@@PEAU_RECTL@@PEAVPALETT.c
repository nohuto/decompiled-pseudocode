/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C016226C
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0161E34 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027E370 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C027E528 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C003CC10 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C003D63C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043F98 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0097650 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027B110 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C029FBBC (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A02D0 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffCopyBits @ 0x1C02C1298 (OffCopyBits.c)
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
  SPRITERANGELOCK *v10; // r14
  ULONG v11; // ebx
  signed int v12; // esi
  signed int v13; // r12d
  SURFOBJ *Surface; // rcx
  struct _SURFOBJ *v15; // rsi
  LONG left; // r8d
  int v17; // eax
  int v18; // edx
  __int64 v19; // rdx
  LONG v20; // ebx
  int v21; // eax
  int v22; // ecx
  struct _SURFOBJ *v24; // r15
  __int64 v25; // rax
  LONG x; // ecx
  LONG y; // eax
  HDEV hdev; // rbx
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  unsigned int v30; // [rsp+50h] [rbp-B0h]
  struct _POINTL *v31; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h]
  _QWORD v35[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v36[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-48h]
  char v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C4h] [rbp-3Ch]
  struct _SURFOBJ *v40; // [rsp+E8h] [rbp-18h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  struct _RECTL v42; // [rsp+100h] [rbp+0h] BYREF
  __int64 v43[2]; // [rsp+110h] [rbp+10h] BYREF

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 120LL);
  v11 = a7;
  v34 = (__int64)a4;
  v32[0] = a3;
  v31 = a2;
  *(_QWORD *)&v42.left = a9;
  v30 = 0;
  SPRITERANGELOCK::vLockExclusive(v10);
  v33 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v33);
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
        v25 = *((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 16) = 0LL;
        *(_DWORD *)a1 &= ~0x40u;
        Surface = 0LL;
        *((_QWORD *)a1 + 30) = 0LL;
        if ( v25 )
          *(_DWORD *)(v25 + 16) &= ~0x40u;
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
        goto LABEL_34;
      *(_DWORD *)a1 |= 0x40u;
    }
    if ( Surface )
    {
LABEL_35:
      *((_QWORD *)a1 + 16) = Surface;
      goto LABEL_11;
    }
LABEL_34:
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v12, v13);
    goto LABEL_35;
  }
LABEL_11:
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockShared(v10);
  v15 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !v15 )
    goto LABEL_20;
  left = a5->left;
  v30 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v17 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  *((_DWORD *)a1 + 35) = v17;
  if ( a6 )
    v18 = **((_DWORD **)a6 + 14) | *(_DWORD *)(*((_QWORD *)a6 + 14) + 8LL);
  else
    v18 = 0;
  *((_DWORD *)a1 + 39) = v18;
  v19 = *(_QWORD *)&v42.left;
  v20 = a5->left;
  HIDWORD(v43[0]) = a5->top;
  v43[1] = *(_QWORD *)&a5->right;
  LODWORD(v43[0]) = v20;
  if ( *(_QWORD *)&v42.left )
  {
    v21 = *(_DWORD *)(*(_QWORD *)&v42.left + 4LL);
    v42.left = left + **(_DWORD **)&v42.left;
    v42.right = left + *(_DWORD *)(v19 + 8);
    v22 = *((_DWORD *)a1 + 35);
    v42.top = v21 - v22;
    v42.bottom = *(_DWORD *)(v19 + 12) - v22;
    ERECTL::operator*=((int *)v43, &v42.left);
    v20 = v43[0];
  }
  if ( ERECTL::bEmpty((ERECTL *)v43) )
    goto LABEL_20;
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)a1 & 0x200) == 0
      || (v24 = v32[0], *(HSURF *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 344) != v32[0]->hsurf) )
    {
      *(_DWORD *)a1 |= 0x80u;
LABEL_20:
      SPRITERANGELOCK::vUnlock(v10);
      return v30;
    }
  }
  else
  {
    v24 = v32[0];
  }
  v42 = *(struct _RECTL *)v43;
  v37 = 0LL;
  x = v31->x;
  v42.right = v31->x + LODWORD(v43[1]);
  v38 = 0;
  v39 = 0;
  v42.left = x + v20;
  y = v31->y;
  v42.top = y + HIDWORD(v43[0]);
  v42.bottom = y + HIDWORD(v43[1]);
  MULTISURF::vInit((MULTISURF *)v36, v24, &v42);
  v35[0] = 0LL;
  v32[0] = 0LL;
  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x400) == 0 )
  {
    hdev = v24->hdev;
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x400) == 0 )
    {
      v29 = EngCopyBits;
LABEL_44:
      if ( SURFREFVIEW::bMap((SURFREFVIEW *)v35, v40) && SURFREFVIEW::bMap((SURFREFVIEW *)v32, v15) )
      {
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v42, v15);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v31, v40);
        OffCopyBits((int)v29, (_DWORD)a1 + 136, (int)v15, (int)&gptlZero, (__int64)v40, 0LL, v34, (__int64)v43, v41);
        if ( (*(_DWORD *)a1 & 0x200) != 0
          && *((struct _SURFOBJ **)a1 + 16) == v15
          && *(HSURF *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 344) == v24->hsurf )
        {
          *(_DWORD *)a1 |= 0x80u;
        }
        if ( v31 )
          GreUnlockDisplayDevice(*(_QWORD *)&v31[6]);
        if ( *(_QWORD *)&v42.left )
          GreUnlockDisplayDevice(*(_QWORD *)(*(_QWORD *)&v42.left + 48LL));
      }
      else
      {
        v30 = 0;
      }
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
      MULTISURF::~MULTISURF((MULTISURF *)v36);
      goto LABEL_20;
    }
LABEL_41:
    v29 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 355);
    goto LABEL_44;
  }
  hdev = v15->hdev;
  if ( (unsigned int)MULTISURF::bLoadSource((MULTISURF *)v36, hdev) )
    goto LABEL_41;
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockExclusive(v10);
  vSpDeleteSurface(*((SURFOBJ **)a1 + 16));
  *((_QWORD *)a1 + 16) = 0LL;
  SPRITERANGELOCK::vUnlock(v10);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
  MULTISURF::~MULTISURF((MULTISURF *)v36);
  return 0LL;
}
