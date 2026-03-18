/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C01594CC
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C015A1E4 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0265148 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0265308 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C000B37C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001D634 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C0095200 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0261A64 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C028990C (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C028A028 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffCopyBits @ 0x1C02AA74C (OffCopyBits.c)
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
  __int64 v12; // rcx
  signed int v13; // esi
  signed int v14; // r12d
  SURFOBJ *Surface; // rcx
  struct _SURFOBJ *v16; // rsi
  LONG left; // r8d
  int v18; // eax
  int v19; // edx
  __int64 v20; // rdx
  LONG v21; // ebx
  int v22; // eax
  int v23; // ecx
  struct _SURFOBJ *v25; // r15
  __int64 v26; // rax
  LONG x; // ecx
  LONG y; // eax
  HDEV hdev; // rbx
  BOOL (__stdcall *v30)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  unsigned int v31; // [rsp+50h] [rbp-B0h]
  struct _POINTL *v32; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v33[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  _QWORD v36[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v37[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-48h]
  char v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C4h] [rbp-3Ch]
  struct _SURFOBJ *v41; // [rsp+E8h] [rbp-18h]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  struct _RECTL v43; // [rsp+100h] [rbp+0h] BYREF
  __int64 v44[2]; // [rsp+110h] [rbp+10h] BYREF

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 120LL);
  v11 = a7;
  v12 = *(_QWORD *)v10;
  v35 = (__int64)a4;
  v33[0] = a3;
  v32 = a2;
  *(_QWORD *)&v43.left = a9;
  v31 = 0;
  GreAcquireSemaphore(v12);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)v10, 8LL);
  v34 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v34);
  *((_QWORD *)a1 + 18) = a6;
  v13 = a5->right - a5->left;
  v14 = a5->bottom - a5->top;
  if ( !a7 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 72LL);
  Surface = (SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !Surface
    || (Surface->iType || (Surface->fjBitmap & 0x20) != 0) && a8
    || Surface->iBitmapFormat != v11
    || Surface->sizlBitmap.cx < v13
    || Surface->sizlBitmap.cy < v14 )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( Surface->iBitmapFormat != v11 )
      {
        EngUnlockSurface(Surface);
        v26 = *((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 16) = 0LL;
        *(_DWORD *)a1 &= ~0x40u;
        Surface = 0LL;
        *((_QWORD *)a1 + 30) = 0LL;
        if ( v26 )
          *(_DWORD *)(v26 + 16) &= ~0x40u;
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
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v13, v14);
    goto LABEL_35;
  }
LABEL_11:
  EtwTraceGreLockReleaseSemaphore(L"hsem", *(_QWORD *)v10);
  GreReleaseSemaphoreInternal(*(_QWORD *)v10);
  GreAcquireSemaphoreSharedInternal(*(_QWORD *)v10);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)v10);
  v16 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !v16 )
    goto LABEL_20;
  left = a5->left;
  v31 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v18 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  *((_DWORD *)a1 + 35) = v18;
  if ( a6 )
    v19 = **((_DWORD **)a6 + 14) | *(_DWORD *)(*((_QWORD *)a6 + 14) + 8LL);
  else
    v19 = 0;
  *((_DWORD *)a1 + 39) = v19;
  v20 = *(_QWORD *)&v43.left;
  v21 = a5->left;
  HIDWORD(v44[0]) = a5->top;
  v44[1] = *(_QWORD *)&a5->right;
  LODWORD(v44[0]) = v21;
  if ( *(_QWORD *)&v43.left )
  {
    v22 = *(_DWORD *)(*(_QWORD *)&v43.left + 4LL);
    v43.left = left + **(_DWORD **)&v43.left;
    v43.right = left + *(_DWORD *)(v20 + 8);
    v23 = *((_DWORD *)a1 + 35);
    v43.top = v22 - v23;
    v43.bottom = *(_DWORD *)(v20 + 12) - v23;
    ERECTL::operator*=((int *)v44, &v43.left);
    v21 = v44[0];
  }
  if ( ERECTL::bEmpty((ERECTL *)v44) )
    goto LABEL_20;
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)a1 & 0x200) == 0
      || (v25 = v33[0], *(HSURF *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 344) != v33[0]->hsurf) )
    {
      *(_DWORD *)a1 |= 0x80u;
LABEL_20:
      EtwTraceGreLockReleaseSemaphore(L"hsem", *(_QWORD *)v10);
      GreReleaseSemaphoreInternal(*(_QWORD *)v10);
      return v31;
    }
  }
  else
  {
    v25 = v33[0];
  }
  v43 = *(struct _RECTL *)v44;
  v38 = 0LL;
  x = v32->x;
  v43.right = v32->x + LODWORD(v44[1]);
  v39 = 0;
  v40 = 0;
  v43.left = x + v21;
  y = v32->y;
  v43.top = y + HIDWORD(v44[0]);
  v43.bottom = y + HIDWORD(v44[1]);
  MULTISURF::vInit((MULTISURF *)v37, v25, &v43);
  v36[0] = 0LL;
  v33[0] = 0LL;
  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x400) == 0 )
  {
    hdev = v25->hdev;
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x400) == 0 )
    {
      v30 = EngCopyBits;
LABEL_44:
      if ( SURFREFVIEW::bMap((SURFREFVIEW *)v36, v41) && SURFREFVIEW::bMap((SURFREFVIEW *)v33, v16) )
      {
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v43, v16);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v32, v41);
        OffCopyBits((int)v30, (_DWORD)a1 + 136, (int)v16, (int)&gptlZero, (__int64)v41, 0LL, v35, (__int64)v44, v42);
        if ( (*(_DWORD *)a1 & 0x200) != 0
          && *((struct _SURFOBJ **)a1 + 16) == v16
          && *(HSURF *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 344) == v25->hsurf )
        {
          *(_DWORD *)a1 |= 0x80u;
        }
        if ( v32 )
          GreUnlockDisplayDevice(*(_QWORD *)&v32[6]);
        if ( *(_QWORD *)&v43.left )
          GreUnlockDisplayDevice(*(_QWORD *)(*(_QWORD *)&v43.left + 48LL));
      }
      else
      {
        v31 = 0;
      }
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v33);
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
      MULTISURF::~MULTISURF((MULTISURF *)v37);
      goto LABEL_20;
    }
LABEL_41:
    v30 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 355);
    goto LABEL_44;
  }
  hdev = v16->hdev;
  if ( (unsigned int)MULTISURF::bLoadSource((MULTISURF *)v37, hdev) )
    goto LABEL_41;
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockExclusive(v10);
  vSpDeleteSurface(*((SURFOBJ **)a1 + 16));
  *((_QWORD *)a1 + 16) = 0LL;
  SPRITERANGELOCK::vUnlock(v10);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v33);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
  MULTISURF::~MULTISURF((MULTISURF *)v37);
  return 0LL;
}
