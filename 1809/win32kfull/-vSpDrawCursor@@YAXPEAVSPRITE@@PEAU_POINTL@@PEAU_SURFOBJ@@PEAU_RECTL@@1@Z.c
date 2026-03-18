/*
 * XREFs of ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C02672E8
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159BC0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     OffBitBlt @ 0x1C00F4008 (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  BOOL (__stdcall *v10)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r15
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  struct _POINTL *v21; // rbx
  __int64 v22; // r13
  POINTL *v23; // r12
  struct _SURFOBJ *v24; // r14
  int y; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // [rsp+78h] [rbp-1h] BYREF
  __int64 v36; // [rsp+80h] [rbp+7h] BYREF
  __int64 v37; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD v38[7]; // [rsp+90h] [rbp+17h] BYREF
  LONG x; // [rsp+D8h] [rbp+5Fh] BYREF
  int v40; // [rsp+DCh] [rbp+63h]
  int *v41; // [rsp+E0h] [rbp+67h]
  __int64 v42; // [rsp+F0h] [rbp+77h]

  v42 = (__int64)a4;
  v41 = (int *)a2;
  if ( *((_QWORD *)a1 + 15) )
  {
    v8 = *((_QWORD *)a1 + 2);
    v35 = 0LL;
    v9 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v8 + 32));
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v35,
                          0LL,
                          0,
                          (__int64)ppalMono,
                          *(_QWORD *)(v9 + 128),
                          (__int64)ppalDefault,
                          (__int64)ppalDefault,
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_45:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v35);
      return;
    }
    NEEDDDILOCK::vLock((NEEDDDILOCK *)v38, a3);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v36, *((struct _SURFOBJ **)a1 + 15));
    v10 = EngBitBlt;
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14) + 280) + 20LL) & 1) != 0 )
      {
        v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15) + 280) + 72LL);
        goto LABEL_20;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 108)) )
      {
        goto LABEL_19;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) == 0 )
LABEL_19:
      v16 = EngBitBlt;
    else
      v16 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
LABEL_20:
    v21 = a5;
    v22 = v35;
    v23 = &gptlZero;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v16,
      v41,
      (__int64)a3,
      &gptlZero,
      *((_QWORD *)a1 + 15),
      0LL,
      0LL,
      v35,
      a4,
      a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v36 )
      GreUnlockDisplayDevice(*(_QWORD *)(v36 + 48));
    v24 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
    x = v21->x;
    if ( v24 )
    {
      y = v21->y;
      v23 = (POINTL *)((char *)a1 + 136);
      v22 = 0LL;
    }
    else
    {
      v24 = (struct _SURFOBJ *)*((_QWORD *)a1 + 15);
      y = v21->y + (v24->sizlBitmap.cy >> 1);
    }
    v40 = y;
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v37, v24);
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 280) + 20LL) & 1) != 0 )
      {
        v10 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 280) + 72LL);
LABEL_41:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v10,
          v41,
          (__int64)a3,
          v23,
          (__int64)v24,
          0LL,
          0LL,
          v22,
          (_DWORD *)v42,
          &x,
          0LL,
          0LL,
          0LL,
          26214);
        if ( v37 )
          GreUnlockDisplayDevice(*(_QWORD *)(v37 + 48));
        if ( v38[0] )
          GreUnlockDisplayDevice(*(_QWORD *)(v38[0] + 48LL));
        goto LABEL_45;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34) + 108)) )
      {
        goto LABEL_41;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) != 0 )
      v10 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
    goto LABEL_41;
  }
}
