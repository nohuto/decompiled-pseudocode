/*
 * XREFs of ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C011C320
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00B2888 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffLineTo @ 0x1C011C520 (OffLineTo.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall SpLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  unsigned int v9; // r14d
  struct _SURFOBJ *v10; // rdi
  __int64 v11; // rbx
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v13)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  struct _SURFOBJ *v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v27; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+78h] [rbp-88h]
  struct _POINTL v29; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v30; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v31; // [rsp+90h] [rbp-70h]
  __int64 *v32[114]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = 1;
  v31 = a3;
  v27 = a2;
  v28 = a4;
  v25 = a1;
  v30 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v32, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v32, &v25, &v29, &v27) )
  {
    v10 = v25;
    v11 = 0LL;
    v26 = 0LL;
    if ( v25
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x200) == 0 )
    {
      v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
      v26 = v11;
      GreLockDisplayDevice(*(_QWORD *)(v11 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v26, &v27) )
      goto LABEL_10;
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 280) + 20LL) & 0x100) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
          v11 = v26;
          v10 = v25;
          v13 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 104LL);
          goto LABEL_9;
        }
        v11 = v26;
        v10 = v25;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 108)) )
        {
          v11 = v26;
          v10 = v25;
LABEL_31:
          v13 = EngLineTo;
          goto LABEL_9;
        }
        v11 = v26;
        v10 = v25;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x100) == 0 )
      goto LABEL_31;
    v13 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))*((_QWORD *)v10->hdev + 167);
LABEL_9:
    v9 &= OffLineTo(v13, &v29, v10, v27, v31, v28, a5, a6, a7, v30, a9);
LABEL_10:
    if ( v11 )
      GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
  }
  return v9;
}
