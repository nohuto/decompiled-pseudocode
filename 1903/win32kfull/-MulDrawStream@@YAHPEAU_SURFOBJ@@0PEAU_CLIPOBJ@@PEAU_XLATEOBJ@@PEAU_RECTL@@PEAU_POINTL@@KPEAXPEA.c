/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C029BED0
 * Callers:
 *     <none>
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngDrawStream @ 0x1C00FE450 (EngDrawStream.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0270FBC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027B110 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029A064 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029A210 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C029F924 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029FC2C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C029FD74 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffDrawStream @ 0x1C02C13C4 (OffDrawStream.c)
 */

__int64 __fastcall MulDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // r12d
  __int64 v16; // rax
  int v17; // r13d
  int v18; // ebx
  int Surface; // r14d
  BOOL v20; // edi
  __int64 v21; // r13
  __int64 v22; // rdx
  struct _DISPSURF *v23; // rax
  struct _XLATEOBJ *v24; // r14
  ULONG *pulXlate; // r14
  struct PALETTE *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r9d
  ULONG iUniq; // edi
  int v31; // r11d
  FLONG flXlate; // r10d
  ULONG v33; // r8d
  ULONG *v34; // rdx
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // r8d
  int v39; // edx
  int v40; // ecx
  struct _SURFOBJ *v41; // r9
  ULONG v42; // r8d
  int v43; // edx
  FLONG v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned int v47; // eax
  int NearestIndexFromColorref; // eax
  __int64 v49; // rax
  __int64 (__fastcall *v50)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, _QWORD *); // r10
  int v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  struct _XLATEOBJ *v60; // [rsp+A8h] [rbp-58h] BYREF
  struct _SURFOBJ *v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  _BYTE v67[56]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DISPSURF *v68; // [rsp+118h] [rbp+18h]
  int v69[2]; // [rsp+120h] [rbp+20h]
  struct _CLIPOBJ *v70; // [rsp+128h] [rbp+28h]
  int v71[4]; // [rsp+130h] [rbp+30h]
  _BYTE v72[88]; // [rsp+140h] [rbp+40h] BYREF
  int v73[2]; // [rsp+198h] [rbp+98h]
  _BYTE v74[88]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v75; // [rsp+208h] [rbp+108h]

  v63 = (__int64)a6;
  v62 = (__int64)a8;
  v65 = *((_QWORD *)a9 + 5);
  v64 = *((_QWORD *)a9 + 6);
  v66 = *((_QWORD *)a9 + 4);
  v13 = *((_DWORD *)a9 + 1);
  v61 = a1;
  v55 = v13;
  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  v15 = 1;
  if ( a2->iType != 1 || (v16 = *(_QWORD *)(v14 + 48)) == 0 || (*(_DWORD *)(v16 + 40) & 0x20000) == 0 )
  {
    v52 = 1;
    v17 = 1;
    v18 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v67, a1, a3, a5);
    MULTISURF::MULTISURF((MULTISURF *)v72, a2);
    if ( v18 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v74, v61);
      v52 = EngDrawStream(v75, *(__int64 *)v73, (__int64)a3, (__int64)a4, (int)a5, (int *)v63, a7, (_DWORD *)v62, a9);
      v17 = v52;
      MULTISURF::~MULTISURF((MULTISURF *)v74);
    }
    if ( !Surface )
    {
LABEL_87:
      v15 = v17;
      MULTISURF::~MULTISURF((MULTISURF *)v72);
      return v15;
    }
    while ( 1 )
    {
      v60 = 0LL;
      v59 = 0LL;
      v58 = 0LL;
      v57 = 0LL;
      v20 = MULTISURF::bLoadSource((MULTISURF *)v72, v68) == 0;
      v54 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v69);
      v21 = v54;
      if ( v20 )
        goto LABEL_85;
      v22 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v73);
      v53 = v22;
      v23 = v68;
      v24 = a4;
      if ( !*((_DWORD *)v68 + 6) )
        goto LABEL_77;
      pulXlate = *(ULONG **)(v22 + 128);
      v26 = ppalDefault;
      v27 = *((_QWORD *)v68 + 6);
      if ( (*(_DWORD *)(v27 + 2172) & 0x100) != 0 )
        v26 = DrvRealizeHalftonePalette((_QWORD *)v27, 0);
      if ( pulXlate )
        goto LABEL_24;
      if ( a4 && a4[1].pulXlate )
      {
        pulXlate = a4[1].pulXlate;
      }
      else
      {
        v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v61);
        if ( !a4 || (a4->flXlate & 1) != 0 )
        {
          if ( *(struct _SURFOBJ **)v73 == a2 )
            pulXlate = *(ULONG **)(v28 + 128);
LABEL_24:
          if ( v20 )
            goto LABEL_85;
          goto LABEL_25;
        }
        if ( !*(_QWORD *)&a4[2].iSrcType )
        {
          v20 = 1;
          goto LABEL_24;
        }
        v26 = *(struct PALETTE **)&a4[2].iSrcType;
        if ( *(_DWORD *)(v53 + 96) == *(_DWORD *)(v28 + 96) )
          pulXlate = *(ULONG **)(v28 + 128);
      }
LABEL_25:
      v29 = 0;
      if ( pulXlate )
      {
        if ( (pulXlate[6] & 0x800) != 0 )
        {
          v29 = 0x4000;
          if ( v26 == ppalDefault )
            v29 = 0x2000;
        }
      }
      if ( a4 )
        iUniq = a4[1].iUniq;
      else
        iUniq = 0;
      if ( a4 )
        v31 = *(_DWORD *)&a4[1].iSrcType;
      else
        v31 = 0;
      if ( a4 )
        flXlate = a4[1].flXlate;
      else
        flXlate = 0;
      if ( a4 )
        v33 = a4[3].iUniq;
      else
        v33 = 0;
      if ( a4 )
        v34 = a4[2].pulXlate;
      else
        v34 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v60,
                           (__int64)v34,
                           v33,
                           (__int64)pulXlate,
                           *(_QWORD *)(v54 + 128),
                           (__int64)ppalDefault,
                           (__int64)v26,
                           flXlate,
                           v31,
                           iUniq,
                           v29) )
      {
        v24 = v60;
        v35 = a4 ? a4[1].iUniq : 0;
        v36 = a4 ? *(_DWORD *)&a4[1].iSrcType : 0;
        v37 = a4 ? a4[1].flXlate : 0;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v59,
                             0LL,
                             0,
                             *(_QWORD *)(v54 + 128),
                             (__int64)gppalRGB,
                             (__int64)v26,
                             (__int64)v26,
                             v37,
                             v36,
                             v35,
                             0) )
        {
          *((_QWORD *)a9 + 5) = v59;
          v38 = a4 ? a4[1].iUniq : 0;
          v39 = a4 ? *(_DWORD *)&a4[1].iSrcType : 0;
          v40 = a4 ? a4[1].flXlate : 0;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v58,
                               0LL,
                               0,
                               (__int64)gppalRGB,
                               *(_QWORD *)(v54 + 128),
                               (__int64)v26,
                               (__int64)v26,
                               v40,
                               v39,
                               v38,
                               0) )
          {
            v41 = *(struct _SURFOBJ **)v73;
            *((_QWORD *)a9 + 6) = v58;
            if ( v41 == a2 )
            {
              v23 = v68;
              v22 = v53;
              v21 = v54;
              goto LABEL_78;
            }
            if ( a4 )
              v42 = a4[1].iUniq;
            else
              v42 = 0;
            if ( a4 )
              v43 = *(_DWORD *)&a4[1].iSrcType;
            else
              v43 = 0;
            if ( a4 )
              v44 = a4[1].flXlate;
            else
              v44 = 0;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v57,
                                 0LL,
                                 0,
                                 *(_QWORD *)(v53 + 128),
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)v26,
                                 v44,
                                 v43,
                                 v42,
                                 0) )
            {
              *((_QWORD *)a9 + 4) = v57;
              v45 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
              v46 = *(_QWORD *)(v53 + 128);
              v47 = ulIndexToRGB(*(_QWORD *)(v45 + 128), ppalDefault, *((unsigned int *)a9 + 1));
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v46, ppalDefault, v47, 1LL);
              v22 = v53;
              v21 = v54;
              *((_DWORD *)a9 + 1) = NearestIndexFromColorref;
              v23 = v68;
LABEL_77:
              v41 = *(struct _SURFOBJ **)v73;
LABEL_78:
              v49 = *((_QWORD *)v23 + 7);
              v50 = EngDrawStream;
              if ( *(_QWORD *)(v49 + 3408) )
                v50 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, _QWORD *))(v49 + 3408);
              if ( v41->iType == 1 && *(_QWORD *)(v22 + 48) != *(_QWORD *)(v21 + 48) )
                v50 = EngDrawStream;
              v17 = OffDrawStream(
                      (int)v50,
                      v71[0],
                      v69[0],
                      (int)v41,
                      v70,
                      (__int64)v24,
                      (__int64)a5,
                      v63,
                      a7,
                      v62,
                      (__int64)a9) & v52;
              goto LABEL_86;
            }
          }
        }
      }
LABEL_85:
      v17 = 0;
LABEL_86:
      *((_QWORD *)a9 + 6) = v64;
      *((_QWORD *)a9 + 5) = v65;
      *((_QWORD *)a9 + 4) = v66;
      *((_DWORD *)a9 + 1) = v55;
      v52 = v17;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v58);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v67) )
        goto LABEL_87;
    }
  }
  DbgPrint("MulDrawStream: this should never happen\n");
  return v15;
}
