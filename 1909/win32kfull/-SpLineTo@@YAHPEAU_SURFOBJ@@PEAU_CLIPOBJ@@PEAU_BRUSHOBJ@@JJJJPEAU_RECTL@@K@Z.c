/*
 * XREFs of ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0083D90
 * Callers:
 *     <none>
 * Callees:
 *     OffLineTo @ 0x1C0083F48 (OffLineTo.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0084B2C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C008574C (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  struct _POINTL v19; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v20; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v21; // [rsp+90h] [rbp-70h]
  _BYTE v22[912]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = 1;
  v19 = 0LL;
  v21 = a3;
  v17 = a2;
  v18 = a4;
  v15 = a1;
  v20 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v22, a1, a2, a8);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v22, &v15, &v19, &v17) )
  {
    while ( 1 )
    {
      v10 = v15;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v16, v15);
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v16, &v17) )
        break;
LABEL_7:
      if ( v16 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
        v16 = 0LL;
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v22, &v15, &v19, &v17) )
        return v9;
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x100) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v10 = v15;
          v12 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 104LL);
          goto LABEL_6;
        }
        v10 = v15;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          v10 = v15;
          goto LABEL_26;
        }
        v10 = v15;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x100) != 0 )
    {
      v12 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))*((_QWORD *)v10->hdev + 168);
LABEL_6:
      v9 &= OffLineTo(v12, &v19, v10, v17, v21, v18, a5, a6, a7, v20, a9);
      goto LABEL_7;
    }
LABEL_26:
    v12 = EngLineTo;
    goto LABEL_6;
  }
  return v9;
}
