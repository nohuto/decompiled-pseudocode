/*
 * XREFs of RenderNineGrid @ 0x1C00A8D24
 * Callers:
 *     xxEngNineGrid @ 0x1C00A8890 (xxEngNineGrid.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     RenderNineGridInternal @ 0x1C00A9030 (RenderNineGridInternal.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RenderNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _DWORD *a9,
        __int64 a10,
        int a11)
{
  BOOL v13; // edx
  int v14; // r9d
  int v15; // r10d
  USHORT iType; // ax
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  int v46; // [rsp+78h] [rbp-C0h]
  _DWORD v47[2]; // [rsp+D8h] [rbp-60h] BYREF
  int v48; // [rsp+E0h] [rbp-58h]
  int v49; // [rsp+E4h] [rbp-54h]
  __int64 v50; // [rsp+E8h] [rbp-50h]
  int v51; // [rsp+F0h] [rbp-48h]
  int v52; // [rsp+F4h] [rbp-44h]

  v46 = a2;
  SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v13 = a11 && (*a9 & 0x10) != 0;
  v14 = *a5;
  v47[0] = *a5;
  v47[1] = a5[1];
  v15 = a5[2];
  v48 = v15;
  v49 = a5[3];
  if ( v13 )
  {
    v17 = a7[2];
    v18 = *a7;
    v48 = v17 + *a7 - v14;
    v47[0] = v17 + v18 - v15;
  }
  RenderNineGridInternal(a3, v46, (unsigned int)v47, (_DWORD)a7, a8, (__int64)a9);
  v50 = 0LL;
  v51 = a5[2] - *a5;
  v52 = a5[3] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    if ( a1->iType == 1
      && (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 280) + 20LL) & 0x10000) != 0 )
    {
      goto LABEL_37;
    }
    if ( a1->iType != 1
      || !(unsigned int)bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24)
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27) + 108) )
    {
      SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    }
  }
  else
  {
    iType = a1->iType;
    if ( (*a9 & 8) != 0 )
    {
      if ( iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 280) + 20LL) & 0x8000) != 0 )
      {
        goto LABEL_37;
      }
      if ( a1->iType != 1
        || !(unsigned int)bAllowShareAccess(a1)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35) + 108) )
      {
        SURFOBJ_TO_SURFACE_NOT_NULL(a1);
      }
    }
    else
    {
      if ( iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 280) + 20LL) & 0x400) != 0 )
      {
LABEL_37:
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23);
        return _guard_dispatch_icall_fptr();
      }
      if ( a1->iType != 1
        || !(unsigned int)bAllowShareAccess(a1)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44) + 108) )
      {
        SURFOBJ_TO_SURFACE_NOT_NULL(a1);
      }
    }
  }
  return _guard_dispatch_icall_fptr();
}
