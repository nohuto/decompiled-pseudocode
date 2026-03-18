/*
 * XREFs of NtGdiEngGradientFill @ 0x1C0296A50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C008F3E8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C008F414 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C008F4AC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngGradientFill @ 0x1C00909F0 (EngGradientFill.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C015EC68 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0161FF4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C016214C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02958D4 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        __int64 a3,
        __int64 a4,
        ULONG nVertex,
        void *a6,
        ULONG a7,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  unsigned int v11; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  unsigned int v14; // edi
  int v16; // ebx
  ULONG nMesh; // r15d
  __int64 v18; // rbx
  struct _TRIVERTEX *v19; // r13
  void *v20; // rax
  void *pMesh; // r12
  const void *v22; // r10
  ULONG64 v23; // rcx
  void *v24; // rdx
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v26; // rbx
  XLATEOBJ *v27; // rax
  SURFOBJ *psoDest; // [rsp+58h] [rbp-1D0h]
  unsigned int Size; // [rsp+60h] [rbp-1C8h]
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-1C0h] BYREF
  RECTL *prclExtents; // [rsp+70h] [rbp-1B8h] BYREF
  void *Src; // [rsp+78h] [rbp-1B0h]
  struct _CLIPOBJ *v33; // [rsp+80h] [rbp-1A8h]
  __int64 v34; // [rsp+88h] [rbp-1A0h]
  __int64 v35; // [rsp+90h] [rbp-198h]
  struct _TRIVERTEX *v36; // [rsp+98h] [rbp-190h]
  void *v37; // [rsp+A0h] [rbp-188h]
  struct UMPDOBJ *v38; // [rsp+A8h] [rbp-180h]
  struct _CLIPOBJ *v39; // [rsp+B0h] [rbp-178h]
  __int64 v40; // [rsp+B8h] [rbp-170h]
  struct _POINTL v41; // [rsp+C0h] [rbp-168h] BYREF
  _QWORD v42[8]; // [rsp+D0h] [rbp-158h] BYREF
  struct _RECTL v43; // [rsp+110h] [rbp-118h] BYREF
  _BYTE v44[168]; // [rsp+120h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1C8h] [rbp-60h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v39 = a2;
  v40 = a3;
  Src = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v11 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v38 = ThreadCurrentObj;
  v14 = 0;
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 0LL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v42, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  psoDest = (SURFOBJ *)v42[0];
  if ( ulMode <= 1 )
  {
    v16 = 8;
    nMesh = a7;
    if ( a7 <= 0x4E2000 )
      goto LABEL_14;
LABEL_13:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v42);
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0LL;
  }
  if ( ulMode != 2 )
    goto LABEL_13;
  v16 = 12;
  nMesh = a7;
  if ( a7 > 0x341555 )
    goto LABEL_43;
LABEL_14:
  if ( !nMesh || !nVertex )
  {
    v14 = 1;
    goto LABEL_43;
  }
  v18 = nMesh * v16;
  if ( nVertex > 0x271000 )
  {
LABEL_43:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v42);
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return v14;
  }
  Size = 16 * nVertex;
  v19 = (struct _TRIVERTEX *)PALLOCMEM2(16 * nVertex, 1886221639LL, 0);
  v36 = v19;
  v20 = PALLOCMEM2((unsigned int)v18, 1886221639LL, 0);
  pMesh = v20;
  v37 = v20;
  if ( !psoDest || !v35 || !Src || !v19 || !v20 || !prclExtents || !pptlDitherOrg )
    goto LABEL_36;
  CaptureRECTL(&prclExtents, &v43);
  CapturePOINTL(&pptlDitherOrg, &v41);
  v23 = (ULONG64)v22 + Size;
  if ( v23 < (unsigned __int64)v22 || v23 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v19, v22, Size);
  v24 = Src;
  if ( (char *)Src + v18 < Src || (unsigned __int64)Src + v18 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(pMesh, v24, (unsigned int)v18);
  if ( (unsigned int)bValidVertexMeshData(v19, (char *)pMesh, nVertex, nMesh, ulMode) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v33, &psoDest->sizlBitmap);
    ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v44, psoDest, DDIOBJ, 0LL);
    if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v44)
      || (v26 = pco,
          v27 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v34),
          !EngGradientFill(psoDest, v26, v27, v19, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode)) )
    {
      v11 = 0;
    }
    ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v44);
  }
  else
  {
LABEL_36:
    v11 = 0;
  }
  if ( v19 )
    Win32FreePool(v19);
  if ( pMesh )
    Win32FreePool(pMesh);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v42);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v11;
}
