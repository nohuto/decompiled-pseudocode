/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0272B90
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngDrawStream @ 0x1C00A8590 (EngDrawStream.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C023FF9C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02498F8 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0270E50 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0270FDC (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0276318 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02765FC (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C027673C (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffDrawStream @ 0x1C0296B9C (OffDrawStream.c)
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
  unsigned int v14; // r12d
  __int64 v15; // rcx
  int v16; // r13d
  int v17; // ebx
  int Surface; // r14d
  BOOL v19; // edi
  __int64 v20; // r13
  __int64 v21; // rdx
  struct _DISPSURF *v22; // rax
  struct _XLATEOBJ *v23; // r14
  ULONG *pulXlate; // r14
  struct PALETTE *v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r9d
  ULONG iUniq; // edi
  int v30; // r11d
  FLONG flXlate; // r10d
  ULONG v32; // r8d
  ULONG *v33; // rdx
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  struct _SURFOBJ *v40; // r9
  ULONG v41; // r8d
  int v42; // edx
  FLONG v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned int v46; // eax
  int NearestIndexFromColorref; // eax
  __int64 v48; // rax
  __int64 (__fastcall *v49)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, _QWORD *); // r10
  int v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h] BYREF
  struct _XLATEOBJ *v59; // [rsp+A8h] [rbp-58h] BYREF
  struct _SURFOBJ *v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  __int64 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  _BYTE v66[56]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DISPSURF *v67; // [rsp+118h] [rbp+18h]
  int v68[2]; // [rsp+120h] [rbp+20h]
  struct _CLIPOBJ *v69; // [rsp+128h] [rbp+28h]
  int v70[4]; // [rsp+130h] [rbp+30h]
  _BYTE v71[88]; // [rsp+140h] [rbp+40h] BYREF
  int v72[2]; // [rsp+198h] [rbp+98h]
  _BYTE v73[88]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v74; // [rsp+208h] [rbp+108h]

  v62 = (__int64)a6;
  v61 = (__int64)a8;
  v64 = *((_QWORD *)a9 + 5);
  v63 = *((_QWORD *)a9 + 6);
  v65 = *((_QWORD *)a9 + 4);
  v13 = *((_DWORD *)a9 + 1);
  v60 = a1;
  v54 = v13;
  v14 = 1;
  v15 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  if ( a2->iType != 1 || !v15 || (*(_DWORD *)(v15 + 40) & 0x20000) == 0 )
  {
    v51 = 1;
    v16 = 1;
    v17 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v66, a1, a3, a5);
    MULTISURF::MULTISURF((MULTISURF *)v71, a2);
    if ( v17 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v73, v60);
      v51 = EngDrawStream(v74, *(__int64 *)v72, (__int64)a3, (__int64)a4, (int)a5, (int *)v62, a7, (_DWORD *)v61, a9);
      v16 = v51;
      MULTISURF::~MULTISURF((MULTISURF *)v73);
    }
    if ( !Surface )
    {
LABEL_87:
      v14 = v16;
      MULTISURF::~MULTISURF((MULTISURF *)v71);
      return v14;
    }
    while ( 1 )
    {
      v59 = 0LL;
      v58 = 0LL;
      v57 = 0LL;
      v56 = 0LL;
      v19 = MULTISURF::bLoadSource((MULTISURF *)v71, v67) == 0;
      v53 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v68);
      v20 = v53;
      if ( v19 )
        goto LABEL_85;
      v21 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v72);
      v52 = v21;
      v22 = v67;
      v23 = a4;
      if ( !*((_DWORD *)v67 + 6) )
        goto LABEL_77;
      pulXlate = *(ULONG **)(v21 + 128);
      v25 = ppalDefault;
      v26 = *((_QWORD *)v67 + 6);
      if ( (*(_DWORD *)(v26 + 2164) & 0x100) != 0 )
        v25 = DrvRealizeHalftonePalette((_QWORD *)v26, 0);
      if ( pulXlate )
        goto LABEL_24;
      if ( a4 && a4[1].pulXlate )
      {
        pulXlate = a4[1].pulXlate;
      }
      else
      {
        v27 = SURFOBJ_TO_SURFACE_NOT_NULL(v60);
        if ( !a4 || (a4->flXlate & 1) != 0 )
        {
          if ( *(struct _SURFOBJ **)v72 == a2 )
            pulXlate = *(ULONG **)(v27 + 128);
LABEL_24:
          if ( v19 )
            goto LABEL_85;
          goto LABEL_25;
        }
        if ( !*(_QWORD *)&a4[2].iSrcType )
        {
          v19 = 1;
          goto LABEL_24;
        }
        v25 = *(struct PALETTE **)&a4[2].iSrcType;
        if ( *(_DWORD *)(v52 + 96) == *(_DWORD *)(v27 + 96) )
          pulXlate = *(ULONG **)(v27 + 128);
      }
LABEL_25:
      v28 = 0;
      if ( pulXlate )
      {
        if ( (pulXlate[6] & 0x800) != 0 )
        {
          v28 = 0x4000;
          if ( v25 == ppalDefault )
            v28 = 0x2000;
        }
      }
      if ( a4 )
        iUniq = a4[1].iUniq;
      else
        iUniq = 0;
      if ( a4 )
        v30 = *(_DWORD *)&a4[1].iSrcType;
      else
        v30 = 0;
      if ( a4 )
        flXlate = a4[1].flXlate;
      else
        flXlate = 0;
      if ( a4 )
        v32 = a4[3].iUniq;
      else
        v32 = 0;
      if ( a4 )
        v33 = a4[2].pulXlate;
      else
        v33 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v59,
                           (__int64)v33,
                           v32,
                           (__int64)pulXlate,
                           *(_QWORD *)(v53 + 128),
                           (__int64)ppalDefault,
                           (__int64)v25,
                           flXlate,
                           v30,
                           iUniq,
                           v28) )
      {
        v23 = v59;
        v34 = a4 ? a4[1].iUniq : 0;
        v35 = a4 ? *(_DWORD *)&a4[1].iSrcType : 0;
        v36 = a4 ? a4[1].flXlate : 0;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v58,
                             0LL,
                             0,
                             *(_QWORD *)(v53 + 128),
                             (__int64)gppalRGB,
                             (__int64)v25,
                             (__int64)v25,
                             v36,
                             v35,
                             v34,
                             0) )
        {
          *((_QWORD *)a9 + 5) = v58;
          v37 = a4 ? a4[1].iUniq : 0;
          v38 = a4 ? *(_DWORD *)&a4[1].iSrcType : 0;
          v39 = a4 ? a4[1].flXlate : 0;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v57,
                               0LL,
                               0,
                               (__int64)gppalRGB,
                               *(_QWORD *)(v53 + 128),
                               (__int64)v25,
                               (__int64)v25,
                               v39,
                               v38,
                               v37,
                               0) )
          {
            v40 = *(struct _SURFOBJ **)v72;
            *((_QWORD *)a9 + 6) = v57;
            if ( v40 == a2 )
            {
              v22 = v67;
              v21 = v52;
              v20 = v53;
              goto LABEL_78;
            }
            if ( a4 )
              v41 = a4[1].iUniq;
            else
              v41 = 0;
            if ( a4 )
              v42 = *(_DWORD *)&a4[1].iSrcType;
            else
              v42 = 0;
            if ( a4 )
              v43 = a4[1].flXlate;
            else
              v43 = 0;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v56,
                                 0LL,
                                 0,
                                 *(_QWORD *)(v52 + 128),
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)v25,
                                 v43,
                                 v42,
                                 v41,
                                 0) )
            {
              *((_QWORD *)a9 + 4) = v56;
              v44 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
              v45 = *(_QWORD *)(v52 + 128);
              v46 = ulIndexToRGB(*(_QWORD *)(v44 + 128), ppalDefault, *((unsigned int *)a9 + 1));
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v45, ppalDefault, v46, 1LL);
              v21 = v52;
              v20 = v53;
              *((_DWORD *)a9 + 1) = NearestIndexFromColorref;
              v22 = v67;
LABEL_77:
              v40 = *(struct _SURFOBJ **)v72;
LABEL_78:
              v48 = *((_QWORD *)v22 + 7);
              v49 = EngDrawStream;
              if ( *(_QWORD *)(v48 + 3400) )
                v49 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, _QWORD *))(v48 + 3400);
              if ( v40->iType == 1 && *(_QWORD *)(v21 + 48) != *(_QWORD *)(v20 + 48) )
                v49 = EngDrawStream;
              v16 = OffDrawStream(
                      (int)v49,
                      v70[0],
                      v68[0],
                      (int)v40,
                      v69,
                      (__int64)v23,
                      (__int64)a5,
                      v62,
                      a7,
                      v61,
                      (__int64)a9) & v51;
              goto LABEL_86;
            }
          }
        }
      }
LABEL_85:
      v16 = 0;
LABEL_86:
      *((_QWORD *)a9 + 6) = v63;
      *((_QWORD *)a9 + 5) = v64;
      *((_QWORD *)a9 + 4) = v65;
      *((_DWORD *)a9 + 1) = v54;
      v51 = v16;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v56);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v58);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v66) )
        goto LABEL_87;
    }
  }
  DbgPrint("MulDrawStream: this should never happen\n");
  return v14;
}
