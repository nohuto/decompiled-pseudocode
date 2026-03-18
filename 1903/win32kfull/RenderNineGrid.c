/*
 * XREFs of RenderNineGrid @ 0x1C00EA4FC
 * Callers:
 *     xxEngNineGrid @ 0x1C00E9FEC (xxEngNineGrid.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     RenderNineGridInternal @ 0x1C00EA7E0 (RenderNineGridInternal.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
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
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 (__fastcall *v33)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL); // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 (__fastcall *v61)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD); // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 (__fastcall *v89)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *); // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  BOOL v102; // [rsp+38h] [rbp-F0h]
  int v104; // [rsp+68h] [rbp-C0h]
  int v106; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-78h]
  __int64 v108; // [rsp+B8h] [rbp-70h]
  __int64 v109; // [rsp+C0h] [rbp-68h]
  _DWORD v110[2]; // [rsp+C8h] [rbp-60h] BYREF
  int v111; // [rsp+D0h] [rbp-58h]
  int v112; // [rsp+D4h] [rbp-54h]
  __int64 v113; // [rsp+D8h] [rbp-50h] BYREF
  int v114; // [rsp+E0h] [rbp-48h]
  int v115; // [rsp+E4h] [rbp-44h]

  v104 = a2;
  SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v12 = a11 && (*a9 & 0x10) != 0;
  v13 = *a5;
  v110[0] = *a5;
  v110[1] = a5[1];
  v14 = a5[2];
  v111 = v14;
  v112 = a5[3];
  if ( v12 )
  {
    v16 = a7[2];
    v17 = *a7;
    v111 = v16 + *a7 - v13;
    v110[0] = v16 + v17 - v14;
  }
  v102 = v12;
  RenderNineGridInternal(a3, v104, (unsigned int)v110, (_DWORD)a7, a8, (__int64)a9);
  v113 = 0LL;
  v114 = a5[2] - *a5;
  v115 = a5[3] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v106 = 33488896;
    v109 = a10[6];
    v108 = a10[5];
    v107 = a10[4];
    if ( a1->iType != 1 )
      goto LABEL_12;
    if ( bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 280) + 20LL) & 0x10000) != 0 )
    {
      v33 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 280) + 120LL);
      return v33(a1, a3, a4, a6, a5, &v113, &v106, v102);
    }
    if ( a1->iType != 1
      || !bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36)
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 108) )
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
                 &v113,
                 &v106,
                 v102);
    }
    return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *, BOOL))EngAlphaBlend)(
             a1,
             a3,
             a4,
             a6,
             a5,
             &v113,
             &v106,
             v102);
  }
  else if ( (*a9 & 8) != 0 )
  {
    if ( a1->iType == 1 )
    {
      if ( bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 280) + 20LL) & 0x8000) != 0 )
      {
        v61 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60) + 280) + 112LL);
        return v61(a1, a3, a4, a6, a5, &v113, a9[5], 0);
      }
      if ( a1->iType == 1
        && bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72, v73) + 108)) )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))EngTransparentBlt)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v113,
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
               &v113,
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
               &v113,
               a9[5],
               0);
  }
  else
  {
    if ( a1->iType != 1 )
      goto LABEL_8;
    if ( bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v74, v75, v76)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v78, v79) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v80, v81, v82) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84, v85) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84, v85) + 280) + 20LL) & 0x400) != 0 )
    {
      v89 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88) + 280) + 80LL);
      return v89(a1, a3, a4, a6, a5, &gptlZero);
    }
    if ( a1->iType != 1
      || !bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v90, v91, v92)
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v96, v97, v98) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v99, v100, v101) + 108) )
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
