/*
 * XREFs of ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C
 * Callers:
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C009EBF0 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00E11F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C024D080 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251858 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251B08 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0253134 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0254F44 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02552B0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0255D2C (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0255E1C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C009F688 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
  struct _CLIPOBJ *v51; // r10
  LONG x; // r15d
  LONG v53; // edi
  LONG y; // r12d
  LONG v55; // esi
  int v56; // r8d
  unsigned int v57; // r15d
  _DWORD v59[2]; // [rsp+48h] [rbp-49h] BYREF
  HDEV v60; // [rsp+50h] [rbp-41h] BYREF
  struct _RECTL *v61; // [rsp+58h] [rbp-39h]
  struct _POINTL *v62; // [rsp+60h] [rbp-31h]
  struct _XLATEOBJ *v63; // [rsp+68h] [rbp-29h]
  _DWORD v64[4]; // [rsp+70h] [rbp-21h] BYREF

  v63 = a6;
  v61 = a7;
  v62 = a8;
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
        v17 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 164);
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
  v60 = a2->hdev;
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v60) )
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
  v51 = a5;
  x = a3->x;
  v53 = a1->x;
  y = a3->y;
  v55 = a1->y;
  if ( a5 )
  {
    CLIPOBJ_vOffset(a5, v53, v55);
    v51 = a5;
  }
  v64[0] = v53 + v61->left;
  v64[2] = v53 + v61->right;
  v64[1] = v55 + v61->top;
  v64[3] = v55 + v61->bottom;
  v56 = y + v62->y;
  v59[0] = x + v62->x;
  v57 = 0;
  v59[1] = v56;
  if ( v17 )
    v57 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))v17)(
            a2,
            a4,
            v51,
            v63,
            v64,
            v59);
  if ( a5 )
    CLIPOBJ_vOffset(a5, -v53, -v55);
  return v57;
}
