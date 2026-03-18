/*
 * XREFs of RenderNineGrid @ 0x1C00E0E0C
 * Callers:
 *     xxEngNineGrid @ 0x1C00E08E0 (xxEngNineGrid.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     RenderNineGridInternal @ 0x1C00E1130 (RenderNineGridInternal.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RenderNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10,
        int a11)
{
  BOOL v13; // edx
  int v14; // r9d
  int v15; // r10d
  USHORT iType; // ax
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL); // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD); // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *); // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  BOOL v50; // [rsp+38h] [rbp-100h]
  int v53; // [rsp+78h] [rbp-C0h]
  int v54; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-78h]
  __int64 v56; // [rsp+C8h] [rbp-70h]
  __int64 v57; // [rsp+D0h] [rbp-68h]
  _DWORD v58[2]; // [rsp+D8h] [rbp-60h] BYREF
  int v59; // [rsp+E0h] [rbp-58h]
  int v60; // [rsp+E4h] [rbp-54h]
  __int64 v61; // [rsp+E8h] [rbp-50h] BYREF
  int v62; // [rsp+F0h] [rbp-48h]
  int v63; // [rsp+F4h] [rbp-44h]

  v53 = a2;
  SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v13 = a11 && (*a9 & 0x10) != 0;
  v14 = *a5;
  v58[0] = *a5;
  v58[1] = a5[1];
  v15 = a5[2];
  v59 = v15;
  v60 = a5[3];
  if ( v13 )
  {
    v18 = a7[2];
    v19 = *a7;
    v59 = v18 + *a7 - v14;
    v58[0] = v18 + v19 - v15;
  }
  v50 = v13;
  RenderNineGridInternal(a3, v53, (unsigned int)v58, (_DWORD)a7, a8, (__int64)a9);
  v61 = 0LL;
  v62 = a5[2] - *a5;
  v63 = a5[3] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v54 = 33488896;
    v57 = a10[6];
    v56 = a10[5];
    v55 = a10[4];
    if ( a1->iType == 1
      && (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 280) + 20LL) & 0x10000) != 0 )
    {
      v25 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 280) + 120LL);
      return v25(a1, a3, a4, a6, a5, &v61, &v54, v50);
    }
    else if ( a1->iType == 1
           && (unsigned int)bAllowShareAccess(a1)
           && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26)
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27) + 280)
           && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28) + 104)
            || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 108))
           || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x10000) == 0 )
    {
      return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL))EngAlphaBlend)(
               a1,
               a3,
               a4,
               a6,
               a5,
               &v61,
               &v54,
               v50);
    }
    else
    {
      return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL))a1->hdev
              + 170))(
               a1,
               a3,
               a4,
               a6,
               a5,
               &v61,
               &v54,
               v50);
    }
  }
  else
  {
    iType = a1->iType;
    if ( (*a9 & 8) != 0 )
    {
      if ( iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 280) + 20LL) & 0x8000) != 0 )
      {
        v35 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34) + 280) + 112LL);
        return v35(a1, a3, a4, a6, a5, &v61, a9[5], 0);
      }
      else if ( a1->iType == 1
             && (unsigned int)bAllowShareAccess(a1)
             && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36)
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37) + 280)
             && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38) + 104)
              || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39) + 108))
             || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x8000) == 0 )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))EngTransparentBlt)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v61,
                 a9[5],
                 0);
      }
      else
      {
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))a1->hdev
                + 169))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v61,
                 a9[5],
                 0);
      }
    }
    else if ( iType == 1
           && (unsigned int)bAllowShareAccess(a1)
           && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40)
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 280)
           && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42) + 104)
            || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43) + 108))
           && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43) + 280) + 20LL) & 0x400) != 0 )
    {
      v45 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44) + 280) + 80LL);
      return v45(a1, a3, a4, a6, a5, &gptlZero);
    }
    else if ( a1->iType == 1
           && (unsigned int)bAllowShareAccess(a1)
           && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46)
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47) + 280)
           && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48) + 104)
            || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49) + 108))
           || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) == 0 )
    {
      return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))EngCopyBits)(
               a1,
               a3,
               a4,
               a6,
               a5,
               &gptlZero);
    }
    else
    {
      return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))a1->hdev + 165))(
               a1,
               a3,
               a4,
               a6,
               a5,
               &gptlZero);
    }
  }
}
