/*
 * XREFs of ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00F47E0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     OffLineTo @ 0x1C00F4ACC (OffLineTo.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00F50E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  unsigned int v9; // esi
  struct _SURFOBJ *v10; // rbx
  USHORT *p_iType; // rdi
  BOOL (__stdcall *v12)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  struct _SURFOBJ *v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v26; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+78h] [rbp-88h]
  struct _POINTL v28; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v29; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v30; // [rsp+90h] [rbp-70h]
  __int64 *v31[114]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = 1;
  v30 = a3;
  v26 = a2;
  v27 = a4;
  v24 = a1;
  v29 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v31, a1, a2, a8);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v31, &v24, &v28, &v26) )
  {
    while ( 1 )
    {
      v10 = v24;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v25, v24);
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v25, &v26) )
        break;
LABEL_7:
      if ( v25 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
        v25 = 0LL;
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v31, &v24, &v28, &v26) )
        return v9;
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 280) + 20LL) & 0x100) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
          v10 = v24;
          v12 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 104LL);
          goto LABEL_6;
        }
        v10 = v24;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 108)) )
        {
          v10 = v24;
          goto LABEL_26;
        }
        v10 = v24;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x100) != 0 )
    {
      v12 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))*((_QWORD *)v10->hdev + 168);
LABEL_6:
      v9 &= OffLineTo(v12, &v28, v10, v26, v30, v27, a5, a6, a7, v29, a9);
      goto LABEL_7;
    }
LABEL_26:
    v12 = EngLineTo;
    goto LABEL_6;
  }
  return v9;
}
