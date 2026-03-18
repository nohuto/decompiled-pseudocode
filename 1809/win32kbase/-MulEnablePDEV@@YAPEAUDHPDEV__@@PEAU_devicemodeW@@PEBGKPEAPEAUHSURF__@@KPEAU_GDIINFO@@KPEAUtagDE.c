/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00FB910
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E580 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C002A340 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003F3D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003F494 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     EngAllocMem @ 0x1C005F5F0 (EngAllocMem.c)
 *     EngFreeMem @ 0x1C0060D80 (EngFreeMem.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00FC218 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     bIntersect @ 0x1C00FC2C0 (bIntersect.c)
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
  __int64 v19; // rbx
  _OWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  struct _GDIINFO *v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rdx
  __int128 v26; // xmm1
  struct tagDEVINFO *v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  int v30; // eax
  __int128 v31; // xmm0
  __int64 v32; // rax
  char *v33; // r15
  __int64 v34; // rax
  _QWORD *v35; // rbx
  int v36; // eax
  int v37; // ecx
  int v38; // r9d
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  struct _GDIINFO *v42; // rcx
  unsigned int v43; // ebx
  struct tagDEVINFO *v44; // rdx
  int v45; // eax
  struct OBJECT *v46; // r12
  __int64 v47; // rbx
  bool v48; // zf
  signed __int32 v49; // ett
  __int64 v50; // rax
  signed __int32 v51; // ett
  int v52; // ecx
  struct OBJECT *v53; // rbx
  struct OBJECT *v54; // rcx
  int v55; // r8d
  int v56; // edx
  _DWORD *v57; // rdx
  _DWORD *v58; // r8
  int v59; // eax
  signed __int32 v60; // ett
  __int64 v61; // rdx
  unsigned int v62; // ebx
  _QWORD *v63; // r12
  unsigned int v64; // r15d
  void *v65; // r14
  signed __int32 v66; // ett
  __int64 v67; // r8
  int v68; // eax
  signed __int32 v69; // ett
  signed __int32 v70; // ett
  __int64 v71; // rcx
  __int64 v72; // r8
  signed __int32 v73; // ett
  int v74; // eax
  signed __int32 v75; // ett
  int v77; // edx
  signed __int32 v78; // ett
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // [rsp+28h] [rbp-A9h] BYREF
  int v82; // [rsp+30h] [rbp-A1h]
  int v83; // [rsp+34h] [rbp-9Dh]
  struct OBJECT *v84; // [rsp+38h] [rbp-99h] BYREF
  struct tagDEVINFO *v85; // [rsp+40h] [rbp-91h]
  PVOID pv; // [rsp+48h] [rbp-89h]
  struct OBJECT *v87; // [rsp+50h] [rbp-81h] BYREF
  char *v88; // [rsp+58h] [rbp-79h]
  struct _GDIINFO *v89; // [rsp+60h] [rbp-71h]
  char *v90; // [rsp+68h] [rbp-69h]
  _QWORD v91[10]; // [rsp+78h] [rbp-59h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = -1;
  v12 = a6;
  v87 = a9;
  v85 = a8;
  v89 = a6;
  v83 = -1;
  v84 = 0LL;
  LODWORD(v81) = 0;
  if ( !a9 )
    return 0LL;
  v88 = (char *)v91;
  v90 = (char *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v14 = v90;
  if ( !v90 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_87:
    EngFreeMem(v14);
    return 0LL;
  }
  v15 = v90 + 112;
  *((_DWORD *)v90 + 4) = *(_DWORD *)&a1->dmDeviceName[10];
  v16 = 0;
  *((_QWORD *)v14 + 4) = a9;
  *((_DWORD *)v14 + 18) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 20) = 0x80000000;
  *((_DWORD *)v14 + 21) = 0x80000000;
  v82 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v17 = v91;
    v18 = -1;
    while ( 1 )
    {
      v19 = *(_QWORD *)&a1->dmDeviceName[20 * v16 + 16];
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 2576) + 160LL) & 4) != 0 )
      {
        v20 = (_OWORD *)(v19 + 2136);
        v21 = *(_DWORD *)(v19 + 2172) & 0x100;
        v84 = *(struct OBJECT **)&a1->dmDeviceName[20 * v16 + 16];
        LODWORD(v81) = v21;
        v22 = 2LL;
        v23 = v12;
        do
        {
          *(_OWORD *)&v23->ulVersion = *v20;
          *(_OWORD *)&v23->ulHorzRes = v20[1];
          *(_OWORD *)&v23->ulNumColors = v20[2];
          *(_OWORD *)&v23->flTextCaps = v20[3];
          *(_OWORD *)&v23->ulAspectX = v20[4];
          *(_OWORD *)&v23->yStyleStep = v20[5];
          *(_OWORD *)&v23->szlPhysSize.cx = v20[6];
          v23 = (struct _GDIINFO *)((char *)v23 + 128);
          v24 = v20[7];
          v20 += 8;
          *(_OWORD *)&v23[-1].flShadeBlend = v24;
          --v22;
        }
        while ( v22 );
        v25 = 2LL;
        *(_OWORD *)&v23->ulVersion = *v20;
        *(_OWORD *)&v23->ulHorzRes = v20[1];
        *(_OWORD *)&v23->ulNumColors = v20[2];
        v26 = v20[3];
        v27 = v85;
        *(_OWORD *)&v23->flTextCaps = v26;
        v28 = (_OWORD *)(v19 + 1824);
        do
        {
          *(_OWORD *)v27 = *v28;
          *((_OWORD *)v27 + 1) = v28[1];
          *((_OWORD *)v27 + 2) = v28[2];
          *((_OWORD *)v27 + 3) = v28[3];
          *((_OWORD *)v27 + 4) = v28[4];
          *((_OWORD *)v27 + 5) = v28[5];
          *((_OWORD *)v27 + 6) = v28[6];
          v27 = (struct tagDEVINFO *)((char *)v27 + 128);
          v29 = v28[7];
          v28 += 8;
          *((_OWORD *)v27 - 1) = v29;
          --v25;
        }
        while ( v25 );
        v17 = v88;
        *(_OWORD *)v27 = *v28;
        *((_OWORD *)v27 + 1) = v28[1];
        *((_OWORD *)v27 + 2) = v28[2];
        *((_QWORD *)v27 + 6) = *((_QWORD *)v28 + 6);
      }
      v18 &= *(_DWORD *)(v19 + 1824);
      v30 = *(_DWORD *)(v19 + 2128) & v83;
      *v17 = v15;
      v17[1] = v15;
      *((_DWORD *)v15 + 4) = v16;
      v31 = *(_OWORD *)&a1->dmDeviceName[20 * v16 + 24];
      v83 = v30;
      *(_OWORD *)(v15 + 28) = v31;
      v32 = *(_QWORD *)&a1->dmDeviceName[20 * v16 + 16];
      *((_QWORD *)v15 + 6) = v32;
      *((_QWORD *)v15 + 7) = v32;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v15 + 56), (__int64)v17, 5LL * v16);
      v33 = (char *)v91[0];
      *((_DWORD *)v15 + 18) = -*(_DWORD *)(v19 + 2584);
      *((_DWORD *)v15 + 19) = -*(_DWORD *)(v19 + 2588);
      v34 = *(_QWORD *)(v19 + 2552);
      v35 = v33;
      *((_DWORD *)v15 + 5) = 1;
      *((_QWORD *)v15 + 8) = (v34 + 24) & -(__int64)(v34 != 0);
      if ( v33 != v15 )
      {
        do
        {
          if ( (unsigned int)bIntersect((char *)v35 + 28, v15 + 28) )
          {
            *(_DWORD *)(*((_QWORD *)v15 + 7) + 1824LL) |= 0x8000000u;
            *((_DWORD *)v15 + 5) = 0;
          }
          v35 = (_QWORD *)*v35;
        }
        while ( v35 != (_QWORD *)v15 );
        v14 = v90;
      }
      v36 = *((_DWORD *)v15 + 7);
      v17 = v15;
      v37 = *((_DWORD *)v14 + 18);
      v38 = v82;
      v88 = v15;
      if ( v37 >= v36 )
        v37 = v36;
      *((_DWORD *)v14 + 18) = v37;
      v39 = *((_DWORD *)v14 + 19);
      if ( v39 >= *((_DWORD *)v15 + 8) )
        v39 = *((_DWORD *)v15 + 8);
      *((_DWORD *)v14 + 19) = v39;
      v40 = *((_DWORD *)v14 + 20);
      if ( v40 <= *((_DWORD *)v15 + 9) )
        v40 = *((_DWORD *)v15 + 9);
      *((_DWORD *)v14 + 20) = v40;
      v41 = *((_DWORD *)v14 + 21);
      if ( v41 <= *((_DWORD *)v15 + 10) )
        v41 = *((_DWORD *)v15 + 10);
      v16 = v38 + 1;
      v15 += 80;
      *((_DWORD *)v14 + 21) = v41;
      v82 = v16;
      if ( v16 >= *(_DWORD *)&a1->dmDeviceName[10] )
        break;
      v12 = v89;
    }
    v82 = v18;
    v11 = v18;
    v9 = v87;
  }
  else
  {
    v33 = (char *)v91[0];
  }
  v42 = v89;
  v43 = v11 & 0xFFFEE7FF;
  v44 = v85;
  v89->ulHorzSize = -v89->ulHorzSize;
  v42->ulVertSize = -v42->ulVertSize;
  v45 = v43 | 0x80020;
  if ( !(_DWORD)v81 )
    v45 = v43;
  *(_DWORD *)v44 = v45;
  v46 = v84;
  *((_DWORD *)v44 + 76) = v83;
  *((_DWORD *)v14 + 16) = *((_DWORD *)v44 + 71);
  *(_QWORD *)v14 = v33;
  *((_QWORD *)v14 + 1) = v33;
  *((_QWORD *)v14 + 5) = v46;
  while ( v33 )
  {
    v47 = *((_QWORD *)v33 + 6);
    v48 = v33 == *(char **)v14;
    _m_prefetchw((const void *)(v47 + 40));
    if ( v48 )
    {
      do
        v49 = *(_DWORD *)(v47 + 40);
      while ( v49 != _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 40), v49 | 0x10000000, v49) );
      v50 = 0LL;
    }
    else
    {
      do
        v51 = *(_DWORD *)(v47 + 40);
      while ( v51 != _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 40), v51 & 0xEFFFFFFF, v51) );
      v50 = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
    }
    *(_QWORD *)(v47 + 32) = v50;
    if ( (struct OBJECT *)v47 == v46 )
    {
      *((_DWORD *)v33 + 6) = 0;
    }
    else
    {
      v52 = *(_DWORD *)(v47 + 2108) - *((_DWORD *)v14 + 16);
      *((_DWORD *)v33 + 6) = v52;
      if ( !v52 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v87, *((HPALETTE *)v44 + 37));
        EPALOBJ::EPALOBJ((EPALOBJ *)&v84, *(HPALETTE *)(v47 + 2120));
        v53 = v87;
        v54 = v84;
        if ( !v87 )
        {
          if ( v84 )
          {
            HmgDecrementShareReferenceCountEx(v84, 0LL);
LABEL_84:
            if ( v53 )
              HmgDecrementShareReferenceCountEx(v53, 0LL);
          }
          EngFreeMem(pv);
          goto LABEL_87;
        }
        if ( !v84 )
          goto LABEL_84;
        v55 = *((_DWORD *)v84 + 6) & 0x1F;
        v56 = *((_DWORD *)v87 + 6) & 0x1F;
        *((_DWORD *)v33 + 6) = v56 != v55;
        if ( v56 == v55 && (*((_DWORD *)v53 + 6) & 0x1F) == 2 )
        {
          v57 = (_DWORD *)*((_QWORD *)v54 + 14);
          v58 = (_DWORD *)*((_QWORD *)v53 + 14);
          if ( *v58 != *v57 || v58[1] != v57[1] || (v59 = 0, v58[2] != v57[2]) )
            v59 = 1;
          *((_DWORD *)v33 + 6) = v59;
        }
        HmgDecrementShareReferenceCountEx(v54, 0LL);
        HmgDecrementShareReferenceCountEx(v53, 0LL);
        v52 = *((_DWORD *)v33 + 6);
        v44 = v85;
      }
      if ( v52 )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        gbMultiMonMismatchColor = 1;
      }
    }
    v33 = *(char **)v33;
  }
  *((_DWORD *)v9 + 646) = *((_DWORD *)v14 + 18);
  *((_DWORD *)v9 + 647) = *((_DWORD *)v14 + 19);
  *((_DWORD *)v9 + 430) = *((_DWORD *)v14 + 20) - *((_DWORD *)v14 + 18);
  *((_DWORD *)v9 + 431) = *((_DWORD *)v14 + 21) - *((_DWORD *)v14 + 19);
  _m_prefetchw((char *)v9 + 40);
  do
    v60 = *((_DWORD *)v9 + 10);
  while ( v60 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v60 | 0x20000, v60) );
  v61 = *(unsigned int *)&a1->dmDeviceName[10];
  v62 = 0;
  v63 = pv;
  v64 = 0;
  if ( (_DWORD)v61 )
  {
    v65 = 0LL;
    do
    {
      v81 = *(_QWORD *)&a1->dmDeviceName[20 * v64 + 16];
      if ( (*(_DWORD *)(v81 + 1824) & 0x8000000) != 0 )
      {
        _m_prefetchw((char *)v9 + 40);
        do
          v66 = *((_DWORD *)v9 + 10);
        while ( v66 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v66 | 0x1000000, v66) );
        v67 = v81;
        v68 = *(_DWORD *)(v81 + 2128);
        if ( (v68 & 0x1000) != 0 )
        {
          _m_prefetchw((char *)v9 + 40);
          do
            v69 = *((_DWORD *)v9 + 10);
          while ( v69 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v69 | 0x2000000, v69) );
          *((_DWORD *)v9 + 532) |= 0x1000u;
          v68 = *(_DWORD *)(v67 + 2128);
        }
        if ( (v68 & 0x8000) != 0 )
        {
          _m_prefetchw((char *)v9 + 40);
          do
            v70 = *((_DWORD *)v9 + 10);
          while ( v70 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v70 | 0x20000000, v70) );
        }
        v71 = v62++;
        v63[v71] = *(_QWORD *)&a1->dmDeviceName[20 * v64 + 16];
      }
      if ( !(unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v81) && *(_DWORD *)(v72 + 2612) != 5 )
      {
        _m_prefetchw((char *)v9 + 40);
        do
          v73 = *((_DWORD *)v9 + 10);
        while ( v73 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v73 | 0x8000000, v73) );
        v72 = v81;
      }
      v74 = *((_DWORD *)v9 + 10);
      if ( (v74 & 0x4000000) == 0 && ((*(_DWORD *)(v72 + 2128) & 0x8000) == 0 || !*(_QWORD *)(v72 + 2768)) )
      {
        if ( !v65 || PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v81) == v65 )
        {
          v65 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v81);
          v74 = v77;
        }
        else
        {
          _m_prefetchw((char *)v9 + 40);
          do
            v75 = *((_DWORD *)v9 + 10);
          while ( v75 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v75 | 0x4000000, v75) );
          v74 = *((_DWORD *)v9 + 10);
        }
      }
      if ( (v74 & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v81) )
      {
        _m_prefetchw((char *)v9 + 40);
        do
          v78 = *((_DWORD *)v9 + 10);
        while ( v78 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v78 | 0x40000000, v78) );
      }
      v61 = *(unsigned int *)&a1->dmDeviceName[10];
      ++v64;
    }
    while ( v64 < (unsigned int)v61 );
    v14 = v90;
    if ( (_DWORD)v61 )
    {
      do
      {
        v79 = *(_QWORD *)&a1->dmDeviceName[20 * v10 + 16];
        if ( (*(_DWORD *)(v79 + 1824) & 0x8000000) == 0 )
        {
          v80 = v62++;
          v63[v80] = v79;
        }
        v61 = *(unsigned int *)&a1->dmDeviceName[10];
        ++v10;
      }
      while ( v10 < (unsigned int)v61 );
    }
  }
  vSpEnableMultiMon(v9, v61, v63);
  return (struct DHPDEV__ *)v14;
}
