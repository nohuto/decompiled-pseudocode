/*
 * XREFs of ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00
 * Callers:
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0061E30 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0096B08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F4190 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159A60 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159BC0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02643D0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0266720 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C026700C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0267C50 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0267F5C (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C02682D0 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0268558 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0268FA0 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00F507C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  BOOL (__stdcall *v17)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  HDEV hdev; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // rax
  struct _KTHREAD *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rax
  struct _KTHREAD *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 *v43; // rax
  struct _KTHREAD *v44; // rdi
  __int64 v45; // rbx
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  LONG x; // r14d
  LONG v52; // edi
  LONG y; // r12d
  LONG v54; // esi
  int v55; // r8d
  unsigned int v56; // r14d
  _DWORD v58[2]; // [rsp+40h] [rbp-88h] BYREF
  struct _RECTL *v59; // [rsp+48h] [rbp-80h]
  struct _POINTL *v60; // [rsp+50h] [rbp-78h]
  struct _XLATEOBJ *v61; // [rsp+58h] [rbp-70h]
  _DWORD v62[4]; // [rsp+60h] [rbp-68h] BYREF

  v61 = a6;
  v59 = a7;
  v60 = a8;
  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) == 0 && a4->hdev )
  {
    if ( a4->iType != 1 )
      goto LABEL_17;
    if ( (unsigned int)bAllowShareAccess(a4)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15) + 280) + 20LL) & 0x400) != 0 )
    {
      v17 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16) + 280)
                                                                                                 + 80LL);
      goto LABEL_51;
    }
    if ( a4->iType != 1
      || !(unsigned int)bAllowShareAccess(a4)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18)
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 108) )
    {
LABEL_17:
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a4) + 112) & 0x400) != 0 )
      {
        hdev = a4->hdev;
LABEL_49:
        v17 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 165);
        goto LABEL_51;
      }
    }
    goto LABEL_50;
  }
  if ( a2->iType != 1 )
  {
LABEL_47:
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) != 0 )
    {
      hdev = a2->hdev;
      goto LABEL_49;
    }
    goto LABEL_50;
  }
  if ( !(unsigned int)bAllowShareAccess(a2) )
    goto LABEL_60;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)IsThreadCrossSessionAttached(v24, v23) )
    goto LABEL_60;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread || !*ThreadWin32Thread )
    goto LABEL_60;
  v29 = KeGetCurrentThread();
  v30 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v28, v27) )
  {
    v33 = (__int64 *)PsGetThreadWin32Thread(v29);
    if ( v33 )
      v30 = *v33;
  }
  if ( !*(_QWORD *)(v30 + 280) )
    goto LABEL_60;
  v34 = KeGetCurrentThread();
  v35 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v31) )
  {
    v38 = (__int64 *)PsGetThreadWin32Thread(v34);
    if ( v38 )
      v35 = *v38;
  }
  if ( !*(_DWORD *)(v35 + 104) && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36) + 108) )
    goto LABEL_60;
  v39 = KeGetCurrentThread();
  v40 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v37, v36) )
  {
    v43 = (__int64 *)PsGetThreadWin32Thread(v39);
    if ( v43 )
      v40 = *v43;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v40 + 280) + 20LL) & 0x400) == 0 )
  {
LABEL_60:
    if ( a2->iType == 1
      && (unsigned int)bAllowShareAccess(a2)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50) + 108)) )
    {
LABEL_50:
      v17 = EngCopyBits;
      goto LABEL_51;
    }
    goto LABEL_47;
  }
  v44 = KeGetCurrentThread();
  v45 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v42, v41) )
  {
    v46 = (__int64 *)PsGetThreadWin32Thread(v44);
    if ( v46 )
      v45 = *v46;
  }
  v17 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v45 + 280)
                                                                                             + 80LL);
LABEL_51:
  x = a3->x;
  v52 = a1->x;
  y = a3->y;
  v54 = a1->y;
  if ( a5 )
    CLIPOBJ_vOffset(a5, v52, v54);
  v62[0] = v52 + v59->left;
  v62[2] = v52 + v59->right;
  v62[1] = v54 + v59->top;
  v62[3] = v54 + v59->bottom;
  v55 = y + v60->y;
  v58[0] = x + v60->x;
  v56 = 0;
  v58[1] = v55;
  if ( v17 )
    v56 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))v17)(
            a2,
            a4,
            a5,
            v61,
            v62,
            v58);
  if ( a5 )
    CLIPOBJ_vOffset(a5, -v52, -v54);
  return v56;
}
