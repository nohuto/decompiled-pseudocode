/*
 * XREFs of NtGdiEngTextOut @ 0x1C00A0BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C009C5BC (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009E21C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C009E3F4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C009E55C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     EngTextOut @ 0x1C009EDE0 (EngTextOut.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00A0FAC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00A17F8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00A19BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C00ED1A0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C00EE73C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C00F7214 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C014B184 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        CLIPOBJ *a4,
        ULONG64 a5,
        ULONG64 a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        ULONG64 a9,
        MIX mix)
{
  struct _KTHREAD *CurrentThread; // r14
  struct _W32THREAD *v12; // rdi
  struct _W32THREAD **ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v15; // rdi
  unsigned __int64 v17; // r14
  BRUSHOBJ *pboFore; // r15
  BRUSHOBJ *pboOpaque; // r13
  SURFOBJ *v20; // rdx
  POINTL *v21; // r8
  RECTL *prclExtra; // rsi
  RECTL *prclOpaque; // r14
  SURFOBJ *v24; // r12
  struct _CLIPOBJ *DDIOBJ; // rax
  unsigned int v26; // r12d
  FONTOBJ *pfoa; // [rsp+50h] [rbp-108h]
  STROBJ *pstroa; // [rsp+58h] [rbp-100h]
  _BYTE v31[8]; // [rsp+78h] [rbp-E0h] BYREF
  CLIPOBJ *pco; // [rsp+80h] [rbp-D8h]
  SURFOBJ *pso; // [rsp+88h] [rbp-D0h] BYREF
  int v34; // [rsp+90h] [rbp-C8h]
  POINTL pptlOrg[3]; // [rsp+98h] [rbp-C0h] BYREF
  struct _CLIPOBJ *v36; // [rsp+B0h] [rbp-A8h]
  struct UMPDOBJ *v37; // [rsp+B8h] [rbp-A0h]
  struct _BRUSHOBJ v38; // [rsp+C0h] [rbp-98h] BYREF
  struct _BRUSHOBJ v39; // [rsp+D8h] [rbp-80h] BYREF
  RECTL v40; // [rsp+F0h] [rbp-68h] BYREF
  RECTL v41; // [rsp+100h] [rbp-58h] BYREF

  v36 = a4;
  pco = a4;
  v40 = (RECTL)0LL;
  v41 = (RECTL)0LL;
  pptlOrg[0] = 0LL;
  memset(&v38, 0, sizeof(v38));
  memset(&v39, 0, sizeof(v39));
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (struct _W32THREAD **)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(v12);
  v15 = ThreadCurrentObj;
  v37 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  pstroa = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(v15, a2);
  v17 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v15, a3);
  pfoa = (FONTOBJ *)v17;
  pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v15, a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(a7, &v38);
  pptlOrg[1] = (POINTL)pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v15, a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(a8, &v39);
  pptlOrg[2] = (POINTL)pboOpaque;
  v20 = pso;
  if ( pso )
  {
    if ( pstroa )
    {
      if ( v17 )
      {
        if ( pboFore )
        {
          v21 = (POINTL *)a9;
          if ( a9 )
          {
            prclExtra = (RECTL *)a5;
            if ( a5 )
            {
              if ( a5 >= MmUserProbeAddress )
                prclExtra = (RECTL *)MmUserProbeAddress;
              v40 = *prclExtra;
              prclExtra = &v40;
            }
            prclOpaque = (RECTL *)a6;
            if ( a6 )
            {
              if ( a6 >= MmUserProbeAddress )
                prclOpaque = (RECTL *)MmUserProbeAddress;
              v41 = *prclOpaque;
              prclOpaque = &v41;
            }
            if ( a9 >= MmUserProbeAddress )
              v21 = (POINTL *)MmUserProbeAddress;
            pptlOrg[0] = *v21;
            if ( (*((_DWORD *)v15 + 103) & 0x100) != 0 )
              prclExtra = 0LL;
            v24 = pso;
            DDIOBJ = UMPDOBJ::GetDDIOBJ(v15, v36, &pso->sizlBitmap);
            pco = DDIOBJ;
            if ( ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pboFore->iSolidColor == -1)
              && (unsigned int)bCheckSurfaceRect(v24, prclOpaque, DDIOBJ) )
            {
              PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v31, (struct PFT *)pfoa);
              UMPDAcquireRFONTSem((struct RFONTOBJ *)v31, v15, 0, 0, 0LL);
              v26 = EngTextOut(v24, pstroa, pfoa, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
              UMPDReleaseRFONTSem((struct RFONTOBJ *)v31, v15, 0LL, 0LL, 0LL);
              RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v31);
              v20 = pso;
              goto LABEL_33;
            }
            v20 = pso;
          }
        }
      }
    }
  }
  v26 = 0;
LABEL_33:
  if ( v34 )
    EngUnlockSurface(v20);
  --*((_DWORD *)v15 + 105);
  return v26;
}
