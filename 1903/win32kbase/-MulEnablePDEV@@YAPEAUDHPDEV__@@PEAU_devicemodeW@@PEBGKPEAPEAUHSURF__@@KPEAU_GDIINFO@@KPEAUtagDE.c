/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0127D50
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0015480 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0041F80 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0058824 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EngAllocMem @ 0x1C0059980 (EngAllocMem.c)
 *     EngFreeMem @ 0x1C0078B80 (EngFreeMem.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C007AE90 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0128658 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     bIntersect @ 0x1C0128700 (bIntersect.c)
 */

struct DHPDEV__ *__fastcall MulEnablePDEV(
        struct _devicemodeW *a1,
        const unsigned __int16 *a2,
        __int64 a3,
        HSURF *a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        struct OBJECT *a9)
{
  struct OBJECT *v9; // rdi
  unsigned int v10; // esi
  int v11; // ebx
  struct _GDIINFO *v12; // r15
  char *v14; // r14
  char *v15; // r12
  unsigned int v16; // r9d
  _QWORD *v17; // rdx
  int v18; // edi
  __int64 v19; // r8
  __int64 v20; // rbx
  _OWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  struct _GDIINFO *v24; // rax
  __int128 v25; // xmm1
  __int64 v26; // rdx
  __int128 v27; // xmm1
  struct tagDEVINFO *v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  int v31; // eax
  __int128 v32; // xmm0
  __int64 v33; // rax
  char *v34; // r15
  __int64 v35; // rax
  _QWORD *v36; // rbx
  int v37; // eax
  int v38; // ecx
  int v39; // r9d
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  struct _GDIINFO *v43; // rcx
  unsigned int v44; // ebx
  struct tagDEVINFO *v45; // rdx
  int v46; // eax
  struct OBJECT *v47; // r12
  __int64 v48; // rbx
  bool v49; // zf
  signed __int32 v50; // ett
  __int64 v51; // rax
  signed __int32 v52; // ett
  int v53; // ecx
  struct OBJECT *v54; // rbx
  struct OBJECT *v55; // rcx
  int v56; // r8d
  int v57; // edx
  _DWORD *v58; // rdx
  _DWORD *v59; // r8
  int v60; // eax
  signed __int32 v61; // ett
  __int64 v62; // rdx
  unsigned int v63; // ebx
  _QWORD *v64; // r12
  unsigned int v65; // r15d
  void *v66; // r14
  __int64 v67; // rdx
  signed __int32 v68; // ett
  __int64 v69; // r9
  int v70; // eax
  signed __int32 v71; // ett
  signed __int32 v72; // ett
  __int64 v73; // rcx
  __int64 v74; // r9
  signed __int32 v75; // ett
  int v76; // eax
  signed __int32 v77; // ett
  int v79; // edx
  signed __int32 v80; // ett
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // [rsp+28h] [rbp-A9h] BYREF
  int v84; // [rsp+30h] [rbp-A1h]
  int v85; // [rsp+34h] [rbp-9Dh]
  struct OBJECT *v86; // [rsp+38h] [rbp-99h] BYREF
  struct tagDEVINFO *v87; // [rsp+40h] [rbp-91h]
  PVOID pv; // [rsp+48h] [rbp-89h]
  struct OBJECT *v89; // [rsp+50h] [rbp-81h] BYREF
  char *v90; // [rsp+58h] [rbp-79h]
  struct _GDIINFO *v91; // [rsp+60h] [rbp-71h]
  char *v92; // [rsp+68h] [rbp-69h]
  _QWORD v93[10]; // [rsp+78h] [rbp-59h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = -1;
  v12 = a6;
  v89 = a9;
  v87 = a8;
  v91 = a6;
  v85 = -1;
  v86 = 0LL;
  LODWORD(v83) = 0;
  if ( !a9 )
    return 0LL;
  v90 = (char *)v93;
  v92 = (char *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v14 = v92;
  if ( !v92 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_87:
    EngFreeMem(v14);
    return 0LL;
  }
  v15 = v92 + 112;
  *((_DWORD *)v92 + 4) = *(_DWORD *)&a1->dmDeviceName[10];
  v16 = 0;
  *((_QWORD *)v14 + 4) = a9;
  *((_DWORD *)v14 + 18) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 20) = 0x80000000;
  *((_DWORD *)v14 + 21) = 0x80000000;
  v84 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v17 = v93;
    v18 = -1;
    while ( 1 )
    {
      v19 = 28LL * v16;
      v20 = *(_QWORD *)&a1->dmDeviceName[v19 + 20];
      if ( (*(_DWORD *)(*(_QWORD *)(v20 + 2576) + 160LL) & 4) != 0 )
      {
        v21 = (_OWORD *)(v20 + 2136);
        v22 = *(_DWORD *)(v20 + 2172) & 0x100;
        v86 = *(struct OBJECT **)&a1->dmDeviceName[v19 + 20];
        LODWORD(v83) = v22;
        v23 = 2LL;
        v24 = v12;
        do
        {
          *(_OWORD *)&v24->ulVersion = *v21;
          *(_OWORD *)&v24->ulHorzRes = v21[1];
          *(_OWORD *)&v24->ulNumColors = v21[2];
          *(_OWORD *)&v24->flTextCaps = v21[3];
          *(_OWORD *)&v24->ulAspectX = v21[4];
          *(_OWORD *)&v24->yStyleStep = v21[5];
          *(_OWORD *)&v24->szlPhysSize.cx = v21[6];
          v24 = (struct _GDIINFO *)((char *)v24 + 128);
          v25 = v21[7];
          v21 += 8;
          *(_OWORD *)&v24[-1].flShadeBlend = v25;
          --v23;
        }
        while ( v23 );
        v26 = 2LL;
        *(_OWORD *)&v24->ulVersion = *v21;
        *(_OWORD *)&v24->ulHorzRes = v21[1];
        *(_OWORD *)&v24->ulNumColors = v21[2];
        v27 = v21[3];
        v28 = v87;
        *(_OWORD *)&v24->flTextCaps = v27;
        v29 = (_OWORD *)(v20 + 1824);
        do
        {
          *(_OWORD *)v28 = *v29;
          *((_OWORD *)v28 + 1) = v29[1];
          *((_OWORD *)v28 + 2) = v29[2];
          *((_OWORD *)v28 + 3) = v29[3];
          *((_OWORD *)v28 + 4) = v29[4];
          *((_OWORD *)v28 + 5) = v29[5];
          *((_OWORD *)v28 + 6) = v29[6];
          v28 = (struct tagDEVINFO *)((char *)v28 + 128);
          v30 = v29[7];
          v29 += 8;
          *((_OWORD *)v28 - 1) = v30;
          --v26;
        }
        while ( v26 );
        v17 = v90;
        *(_OWORD *)v28 = *v29;
        *((_OWORD *)v28 + 1) = v29[1];
        *((_OWORD *)v28 + 2) = v29[2];
        *((_QWORD *)v28 + 6) = *((_QWORD *)v29 + 6);
      }
      v18 &= *(_DWORD *)(v20 + 1824);
      v31 = *(_DWORD *)(v20 + 2128) & v85;
      *v17 = v15;
      v17[1] = v15;
      *((_DWORD *)v15 + 4) = v16;
      v32 = *(_OWORD *)&a1->dmDeviceName[v19 + 28];
      v85 = v31;
      *(_OWORD *)(v15 + 28) = v32;
      v33 = *(_QWORD *)&a1->dmDeviceName[v19 + 20];
      *((_QWORD *)v15 + 6) = v33;
      *((_QWORD *)v15 + 7) = v33;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v15 + 56), (__int64)v17, v19 * 2);
      v34 = (char *)v93[0];
      *((_DWORD *)v15 + 18) = -*(_DWORD *)(v20 + 2584);
      *((_DWORD *)v15 + 19) = -*(_DWORD *)(v20 + 2588);
      v35 = *(_QWORD *)(v20 + 2552);
      v36 = v34;
      *((_DWORD *)v15 + 5) = 1;
      *((_QWORD *)v15 + 8) = (v35 + 24) & -(__int64)(v35 != 0);
      if ( v34 != v15 )
      {
        do
        {
          if ( (unsigned int)bIntersect((char *)v36 + 28, v15 + 28) )
          {
            *(_DWORD *)(*((_QWORD *)v15 + 7) + 1824LL) |= 0x8000000u;
            *((_DWORD *)v15 + 5) = 0;
          }
          v36 = (_QWORD *)*v36;
        }
        while ( v36 != (_QWORD *)v15 );
        v14 = v92;
      }
      v37 = *((_DWORD *)v15 + 7);
      v17 = v15;
      v38 = *((_DWORD *)v14 + 18);
      v39 = v84;
      v90 = v15;
      if ( v38 >= v37 )
        v38 = v37;
      *((_DWORD *)v14 + 18) = v38;
      v40 = *((_DWORD *)v14 + 19);
      if ( v40 >= *((_DWORD *)v15 + 8) )
        v40 = *((_DWORD *)v15 + 8);
      *((_DWORD *)v14 + 19) = v40;
      v41 = *((_DWORD *)v14 + 20);
      if ( v41 <= *((_DWORD *)v15 + 9) )
        v41 = *((_DWORD *)v15 + 9);
      *((_DWORD *)v14 + 20) = v41;
      v42 = *((_DWORD *)v14 + 21);
      if ( v42 <= *((_DWORD *)v15 + 10) )
        v42 = *((_DWORD *)v15 + 10);
      v16 = v39 + 1;
      v15 += 80;
      *((_DWORD *)v14 + 21) = v42;
      v84 = v16;
      if ( v16 >= *(_DWORD *)&a1->dmDeviceName[10] )
        break;
      v12 = v91;
    }
    v84 = v18;
    v11 = v18;
    v9 = v89;
  }
  else
  {
    v34 = (char *)v93[0];
  }
  v43 = v91;
  v44 = v11 & 0xFFFEE7FF;
  v45 = v87;
  v91->ulHorzSize = -v91->ulHorzSize;
  v43->ulVertSize = -v43->ulVertSize;
  v46 = v44 | 0x80020;
  if ( !(_DWORD)v83 )
    v46 = v44;
  *(_DWORD *)v45 = v46;
  v47 = v86;
  *((_DWORD *)v45 + 76) = v85;
  *((_DWORD *)v14 + 16) = *((_DWORD *)v45 + 71);
  *(_QWORD *)v14 = v34;
  *((_QWORD *)v14 + 1) = v34;
  *((_QWORD *)v14 + 5) = v47;
  while ( v34 )
  {
    v48 = *((_QWORD *)v34 + 6);
    v49 = v34 == *(char **)v14;
    _m_prefetchw((const void *)(v48 + 40));
    if ( v49 )
    {
      do
        v50 = *(_DWORD *)(v48 + 40);
      while ( v50 != _InterlockedCompareExchange((volatile signed __int32 *)(v48 + 40), v50 | 0x10000000, v50) );
      v51 = 0LL;
    }
    else
    {
      do
        v52 = *(_DWORD *)(v48 + 40);
      while ( v52 != _InterlockedCompareExchange((volatile signed __int32 *)(v48 + 40), v52 & 0xEFFFFFFF, v52) );
      v51 = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
    }
    *(_QWORD *)(v48 + 32) = v51;
    if ( (struct OBJECT *)v48 == v47 )
    {
      *((_DWORD *)v34 + 6) = 0;
    }
    else
    {
      v53 = *(_DWORD *)(v48 + 2108) - *((_DWORD *)v14 + 16);
      *((_DWORD *)v34 + 6) = v53;
      if ( !v53 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v89, *((HPALETTE *)v45 + 37));
        EPALOBJ::EPALOBJ((EPALOBJ *)&v86, *(HPALETTE *)(v48 + 2120));
        v54 = v89;
        v55 = v86;
        if ( !v89 )
        {
          if ( v86 )
          {
            HmgDecrementShareReferenceCountEx(v86, 0LL);
LABEL_84:
            if ( v54 )
              HmgDecrementShareReferenceCountEx(v54, 0LL);
          }
          EngFreeMem(pv);
          goto LABEL_87;
        }
        if ( !v86 )
          goto LABEL_84;
        v56 = *((_DWORD *)v86 + 6) & 0x1F;
        v57 = *((_DWORD *)v89 + 6) & 0x1F;
        *((_DWORD *)v34 + 6) = v57 != v56;
        if ( v57 == v56 && (*((_DWORD *)v54 + 6) & 0x1F) == 2 )
        {
          v58 = (_DWORD *)*((_QWORD *)v55 + 14);
          v59 = (_DWORD *)*((_QWORD *)v54 + 14);
          if ( *v59 != *v58 || v59[1] != v58[1] || (v60 = 0, v59[2] != v58[2]) )
            v60 = 1;
          *((_DWORD *)v34 + 6) = v60;
        }
        HmgDecrementShareReferenceCountEx(v55, 0LL);
        HmgDecrementShareReferenceCountEx(v54, 0LL);
        v53 = *((_DWORD *)v34 + 6);
        v45 = v87;
      }
      if ( v53 )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        gbMultiMonMismatchColor = 1;
      }
    }
    v34 = *(char **)v34;
  }
  *((_DWORD *)v9 + 646) = *((_DWORD *)v14 + 18);
  *((_DWORD *)v9 + 647) = *((_DWORD *)v14 + 19);
  *((_DWORD *)v9 + 430) = *((_DWORD *)v14 + 20) - *((_DWORD *)v14 + 18);
  *((_DWORD *)v9 + 431) = *((_DWORD *)v14 + 21) - *((_DWORD *)v14 + 19);
  _m_prefetchw((char *)v9 + 40);
  do
    v61 = *((_DWORD *)v9 + 10);
  while ( v61 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v61 | 0x20000, v61) );
  v62 = *(unsigned int *)&a1->dmDeviceName[10];
  v63 = 0;
  v64 = pv;
  v65 = 0;
  if ( (_DWORD)v62 )
  {
    v66 = 0LL;
    do
    {
      v67 = 28LL * v65;
      v83 = *(_QWORD *)&a1->dmDeviceName[v67 + 20];
      if ( (*(_DWORD *)(v83 + 1824) & 0x8000000) != 0 )
      {
        _m_prefetchw((char *)v9 + 40);
        do
          v68 = *((_DWORD *)v9 + 10);
        while ( v68 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v68 | 0x1000000, v68) );
        v69 = v83;
        v70 = *(_DWORD *)(v83 + 2128);
        if ( (v70 & 0x1000) != 0 )
        {
          _m_prefetchw((char *)v9 + 40);
          do
            v71 = *((_DWORD *)v9 + 10);
          while ( v71 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v71 | 0x2000000, v71) );
          *((_DWORD *)v9 + 532) |= 0x1000u;
          v70 = *(_DWORD *)(v69 + 2128);
        }
        if ( (v70 & 0x8000) != 0 )
        {
          _m_prefetchw((char *)v9 + 40);
          do
            v72 = *((_DWORD *)v9 + 10);
          while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v72 | 0x20000000, v72) );
        }
        v73 = v63++;
        v64[v73] = *(_QWORD *)&a1->dmDeviceName[v67 + 20];
      }
      if ( !(unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v83) && *(_DWORD *)(v74 + 2612) != 5 )
      {
        _m_prefetchw((char *)v9 + 40);
        do
          v75 = *((_DWORD *)v9 + 10);
        while ( v75 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v75 | 0x8000000, v75) );
        v74 = v83;
      }
      v76 = *((_DWORD *)v9 + 10);
      if ( (v76 & 0x4000000) == 0 && ((*(_DWORD *)(v74 + 2128) & 0x8000) == 0 || !*(_QWORD *)(v74 + 2768)) )
      {
        if ( !v66 || PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v83) == v66 )
        {
          v66 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v83);
          v76 = v79;
        }
        else
        {
          _m_prefetchw((char *)v9 + 40);
          do
            v77 = *((_DWORD *)v9 + 10);
          while ( v77 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v77 | 0x4000000, v77) );
          v76 = *((_DWORD *)v9 + 10);
        }
      }
      if ( (v76 & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v83) )
      {
        _m_prefetchw((char *)v9 + 40);
        do
          v80 = *((_DWORD *)v9 + 10);
        while ( v80 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v80 | 0x40000000, v80) );
      }
      v62 = *(unsigned int *)&a1->dmDeviceName[10];
      ++v65;
    }
    while ( v65 < (unsigned int)v62 );
    v14 = v92;
    if ( (_DWORD)v62 )
    {
      do
      {
        v81 = *(_QWORD *)&a1->dmDeviceName[28 * v10 + 20];
        if ( (*(_DWORD *)(v81 + 1824) & 0x8000000) == 0 )
        {
          v82 = v63++;
          v64[v82] = v81;
        }
        v62 = *(unsigned int *)&a1->dmDeviceName[10];
        ++v10;
      }
      while ( v10 < (unsigned int)v62 );
    }
  }
  vSpEnableMultiMon(v9, v62, v64);
  return (struct DHPDEV__ *)v14;
}
