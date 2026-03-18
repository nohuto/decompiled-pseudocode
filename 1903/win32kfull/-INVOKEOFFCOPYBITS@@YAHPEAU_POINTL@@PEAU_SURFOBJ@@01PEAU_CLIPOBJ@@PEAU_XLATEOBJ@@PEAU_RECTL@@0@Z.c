/*
 * XREFs of ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003E76C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0040050 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00416F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161660 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161A18 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D590 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C027F86C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0280164 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0280DB4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C02810D0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0281458 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02816F4 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0282158 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0041650 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall INVOKEOFFCOPYBITS(
        struct _POINTL *a1,
        struct _SURFOBJ *a2,
        struct _POINTL *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8)
{
  HDEV hdev; // rax
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  LONG x; // r15d
  LONG y; // r13d
  LONG v16; // edi
  LONG v17; // esi
  int v18; // r8d
  unsigned int v19; // r15d
  _DWORD v21[2]; // [rsp+40h] [rbp-88h] BYREF
  struct _RECTL *v22; // [rsp+48h] [rbp-80h]
  struct _POINTL *v23; // [rsp+50h] [rbp-78h]
  struct _XLATEOBJ *v24; // [rsp+58h] [rbp-70h]
  _DWORD v25[4]; // [rsp+60h] [rbp-68h] BYREF

  v24 = a6;
  v22 = a7;
  v23 = a8;
  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) != 0 || !a4->hdev )
  {
    if ( a2->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a2)
        && W32GetThreadWin32Thread(KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_22;
      }
      if ( a2->iType == 1
        && (unsigned int)bAllowShareAccess(a2)
        && W32GetThreadWin32Thread(KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_16;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) == 0 )
    {
LABEL_16:
      v13 = EngCopyBits;
      goto LABEL_6;
    }
    hdev = a2->hdev;
LABEL_5:
    v13 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 165);
    goto LABEL_6;
  }
  if ( a4->iType != 1 )
  {
LABEL_15:
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a4) + 112) & 0x400) == 0 )
      goto LABEL_16;
    hdev = a4->hdev;
    goto LABEL_5;
  }
  if ( !(unsigned int)bAllowShareAccess(a4)
    || !W32GetThreadWin32Thread(KeGetCurrentThread())
    || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)
    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
  {
    if ( a4->iType == 1
      && (unsigned int)bAllowShareAccess(a4)
      && W32GetThreadWin32Thread(KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
    {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
LABEL_22:
  v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
                                                                                             + 80LL);
LABEL_6:
  x = a3->x;
  y = a3->y;
  v16 = a1->x;
  v17 = a1->y;
  if ( a5 )
    CLIPOBJ_vOffset(a5, v16, v17);
  v25[0] = v16 + v22->left;
  v25[2] = v16 + v22->right;
  v25[1] = v17 + v22->top;
  v25[3] = v17 + v22->bottom;
  v18 = y + v23->y;
  v21[0] = x + v23->x;
  v19 = 0;
  v21[1] = v18;
  if ( v13 )
    v19 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))v13)(
            a2,
            a4,
            a5,
            v24,
            v25,
            v21);
  if ( a5 )
    CLIPOBJ_vOffset(a5, -v16, -v17);
  return v19;
}
