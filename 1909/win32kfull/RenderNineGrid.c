/*
 * XREFs of RenderNineGrid @ 0x1C00C8D7C
 * Callers:
 *     xxEngNineGrid @ 0x1C00C886C (xxEngNineGrid.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     RenderNineGridInternal @ 0x1C00C9060 (RenderNineGridInternal.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
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
  BOOL v12; // edx
  int v13; // r9d
  int v14; // r10d
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 (__fastcall *v28)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL); // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 (__fastcall *v47)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD); // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 (__fastcall *v66)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *); // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // r8
  BOOL v75; // [rsp+38h] [rbp-F0h]
  int v77; // [rsp+68h] [rbp-C0h]
  int v79; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-78h]
  __int64 v81; // [rsp+B8h] [rbp-70h]
  __int64 v82; // [rsp+C0h] [rbp-68h]
  _DWORD v83[2]; // [rsp+C8h] [rbp-60h] BYREF
  int v84; // [rsp+D0h] [rbp-58h]
  int v85; // [rsp+D4h] [rbp-54h]
  __int64 v86; // [rsp+D8h] [rbp-50h] BYREF
  int v87; // [rsp+E0h] [rbp-48h]
  int v88; // [rsp+E4h] [rbp-44h]

  v77 = a2;
  SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v12 = a11 && (*a9 & 0x10) != 0;
  v13 = *a5;
  v83[0] = *a5;
  v83[1] = a5[1];
  v14 = a5[2];
  v84 = v14;
  v85 = a5[3];
  if ( v12 )
  {
    v16 = a7[2];
    v17 = *a7;
    v84 = v16 + *a7 - v13;
    v83[0] = v16 + v17 - v14;
  }
  v75 = v12;
  RenderNineGridInternal(a3, v77, (unsigned int)v83, (_DWORD)a7, a8, (__int64)a9);
  v86 = 0LL;
  v87 = a5[2] - *a5;
  v88 = a5[3] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v79 = 33488896;
    v82 = a10[6];
    v81 = a10[5];
    v80 = a10[4];
    if ( a1->iType != 1 )
      goto LABEL_12;
    if ( bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25) + 280) + 20LL) & 0x10000) != 0 )
    {
      v28 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27) + 280) + 120LL);
      return v28(a1, a3, a4, a6, a5, &v86, &v79, v75);
    }
    if ( a1->iType != 1
      || !bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30)
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36) + 108) )
    {
LABEL_12:
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x10000) != 0 )
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL))a1->hdev
                + 170))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v86,
                 &v79,
                 v75);
    }
    return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL))EngAlphaBlend)(
             a1,
             a3,
             a4,
             a6,
             a5,
             &v86,
             &v79,
             v75);
  }
  else if ( (*a9 & 8) != 0 )
  {
    if ( a1->iType == 1 )
    {
      if ( bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44) + 280) + 20LL) & 0x8000) != 0 )
      {
        v47 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46) + 280) + 112LL);
        return v47(a1, a3, a4, a6, a5, &v86, a9[5], 0);
      }
      if ( a1->iType == 1
        && bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55) + 108)) )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))EngTransparentBlt)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v86,
                 a9[5],
                 0);
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x8000) == 0 )
      return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))EngTransparentBlt)(
               a1,
               a3,
               a4,
               a6,
               a5,
               &v86,
               a9[5],
               0);
    else
      return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))a1->hdev
              + 169))(
               a1,
               a3,
               a4,
               a6,
               a5,
               &v86,
               a9[5],
               0);
  }
  else
  {
    if ( a1->iType != 1 )
      goto LABEL_8;
    if ( bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63) + 280) + 20LL) & 0x400) != 0 )
    {
      v66 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65) + 280) + 80LL);
      return v66(a1, a3, a4, a6, a5, &gptlZero);
    }
    if ( a1->iType != 1
      || !bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68)
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74) + 108) )
    {
LABEL_8:
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 )
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))a1->hdev + 165))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &gptlZero);
    }
    return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))EngCopyBits)(
             a1,
             a3,
             a4,
             a6,
             a5,
             &gptlZero);
  }
}
