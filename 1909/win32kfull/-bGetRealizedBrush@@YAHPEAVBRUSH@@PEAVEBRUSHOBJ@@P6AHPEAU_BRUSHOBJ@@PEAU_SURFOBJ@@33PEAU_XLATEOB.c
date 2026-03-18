/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00D51B4
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00D477C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C026A5F0 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C026A850 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00962AC (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0096300 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00C144C (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00C1510 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00C62BC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00CD28C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     HT_CreateHalftoneBrush @ 0x1C025D340 (HT_CreateHalftoneBrush.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ @ 0x1C026A720 (-bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ.c)
 *     EngDitherColor @ 0x1C0284EF0 (EngDitherColor.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B7B6C (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02B7E8C (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C02B7F20 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C02B7FB8 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *a1, struct _SURFOBJ *a2, struct _SURFOBJ *a3, struct _SURFOBJ *a4, struct _XLATEOBJ *a5, unsigned int a6))
{
  int v3; // r13d
  __int64 (__fastcall *v4)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // r12
  __int64 v7; // rax
  int v8; // r15d
  __int64 v9; // rbx
  unsigned int v10; // edi
  int v11; // edx
  void *v12; // rdx
  unsigned int v13; // eax
  int v14; // eax
  HBITMAP v15; // rbx
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r10
  struct PALETTE *v19; // r9
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rdx
  int inited; // eax
  XLATEOBJ *v24; // r14
  struct _SURFOBJ *v25; // r8
  __int64 v27; // rax
  __int64 v28; // r15
  FLONG NearestIndexFromColorref; // r13d
  FLONG v30; // r12d
  FLONG v31; // eax
  HDEV v32; // rax
  __int64 v33; // rcx
  unsigned __int16 v34; // cx
  HDEV v35; // rcx
  __int64 v36; // rdx
  ULONG v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  ULONG v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  HPALETTE *v43; // r14
  int v44; // edx
  HDEV v45; // rax
  int v46; // ecx
  char v47; // cl
  int v48; // edx
  int v49; // edx
  int v50; // edx
  int v51; // edx
  int v52; // edx
  char v53; // cl
  __int128 *v54; // rax
  __int64 v55; // xmm1_8
  __int64 v56; // rdi
  int v57; // eax
  HBITMAP IcmDIB; // rax
  int v59; // edx
  __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  HDEV hdev; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+70h] [rbp-90h] BYREF
  struct XLATE *Xlate; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  char v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h]
  __int64 (__fastcall *v67)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // [rsp+90h] [rbp-70h] BYREF
  char v68[8]; // [rsp+98h] [rbp-68h] BYREF
  int v69; // [rsp+A0h] [rbp-60h] BYREF
  int v70; // [rsp+A4h] [rbp-5Ch]
  __int128 v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  struct _SURFOBJ *v73; // [rsp+C0h] [rbp-40h]
  _DWORD v74[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall **v76)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // [rsp+D8h] [rbp-28h]
  char v77[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v78; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-8h]

  v3 = *((_DWORD *)a1 + 20);
  v4 = a3;
  v67 = a3;
  v62 = v3;
  if ( v3 == 12 )
    return 0LL;
  v7 = *((_QWORD *)a2 + 10);
  v8 = 0;
  v64 = 0LL;
  v9 = 0LL;
  v65 = 0;
  v66 = 0;
  v10 = 1;
  hdev = *(HDEV *)(v7 + 48);
  v73 = 0LL;
  Xlate = 0LL;
  if ( ((_DWORD)hdev[10] & 1) == 0 || (v11 = 1, a3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v68, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v77, (struct PDEVOBJ *)&hdev);
  v13 = *((_DWORD *)a1 + 20);
  if ( v13 < 6 )
  {
    LOBYTE(v12) = 5;
    v27 = HmgShareLock(*((_QWORD *)hdev + *((unsigned int *)a1 + 20) + 182), v12);
    v9 = v27;
    if ( v27 )
    {
      v73 = (struct _SURFOBJ *)(v27 + 24);
      Xlate = pCreateXlate(2u);
      v28 = (__int64)Xlate;
      if ( Xlate )
      {
        NearestIndexFromColorref = *((_DWORD *)a2 + 13);
        if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        {
          v30 = *((_DWORD *)a2 + 6);
          *(_DWORD *)(v28 + 84) = NearestIndexFromColorref;
          *(_DWORD *)(v28 + 88) = v30;
          XLATE::vCheckForICM((XLATE *)v28, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
          v24 = (XLATEOBJ *)v28;
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                       *((_QWORD *)a2 + 11),
                                       *((_QWORD *)a2 + 12),
                                       NearestIndexFromColorref,
                                       1LL);
          v31 = ulGetNearestIndexFromColorref(
                  *((_QWORD *)a2 + 11),
                  *((_QWORD *)a2 + 12),
                  *((unsigned int *)a2 + 6),
                  1LL);
          v30 = v31;
          if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
            && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
            && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
            && NearestIndexFromColorref == v31 )
          {
            v30 = 1 - NearestIndexFromColorref;
          }
          *(_DWORD *)(v28 + 84) = NearestIndexFromColorref;
          *(_DWORD *)(v28 + 88) = v30;
          v24 = (XLATEOBJ *)v28;
          XLATE::vCheckForICM((XLATE *)v28, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
          XLATE::vCheckForTrivial((XLATE *)v28);
        }
        *(_QWORD *)(v28 + 40) = ppalMono;
        *(_QWORD *)(v28 + 48) = *((_QWORD *)a2 + 11);
        *(_QWORD *)(v28 + 56) = *((_QWORD *)a2 + 12);
        v24[3].flXlate |= 0x100u;
        v24[1].flXlate = NearestIndexFromColorref;
        v3 = v62;
        *(_DWORD *)&v24[1].iSrcType = v30;
        v4 = v67;
        goto LABEL_23;
      }
    }
    goto LABEL_29;
  }
  if ( v13 < 0xC )
  {
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
      goto LABEL_29;
    if ( (*((_DWORD *)a2 + 6) & 0x1000000) != 0 )
      *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12));
    v32 = hdev;
    if ( ((_DWORD)hdev[456] & 0x200000) != 0 && v4 != EngRealizeBrush )
    {
      if ( (unsigned int)v4(
                           (struct _BRUSHOBJ *)a2,
                           (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                           0LL,
                           0LL,
                           0LL,
                           *((_DWORD *)a2 + 6) | 0x80000000) )
        goto LABEL_25;
      v32 = hdev;
    }
    v33 = *((_QWORD *)a2 + 10);
    v71 = 0LL;
    v72 = 0LL;
    v69 = *(_DWORD *)(v33 + 96) == 1 ? 1 : *((_DWORD *)v32 + 527);
    v34 = *((_WORD *)v32 + 1056);
    if ( !v34 )
      goto LABEL_29;
    if ( !*((_WORD *)v32 + 1057) )
      goto LABEL_29;
    v70 = v34;
    LODWORD(v71) = *((unsigned __int16 *)v32 + 1057);
    *((_QWORD *)&v71 + 1) = 0LL;
    LODWORD(v72) = 1;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)&v69, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_29;
    v35 = hdev;
    v36 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
    if ( *((_QWORD *)hdev + 349) )
    {
      if ( ((_DWORD)hdev[10] & 0x8000) == 0 )
        v35 = (HDEV)*((_QWORD *)hdev + 225);
      v37 = (*((__int64 (__fastcall **)(HDEV, __int64, _QWORD, _QWORD))hdev + 349))(
              v35,
              v36,
              *((unsigned int *)a2 + 6),
              *(_QWORD *)(v64 + 72));
    }
    else
    {
      v37 = EngDitherColor(hdev, v36, *((_DWORD *)a2 + 6), *(ULONG **)(v64 + 72));
    }
    v40 = v37 - 1;
    if ( !v40 )
    {
      v24 = xloIdent;
      goto LABEL_98;
    }
    if ( v40 != 1 )
      goto LABEL_29;
    if ( v4 == EngRealizeBrush )
    {
      v62 = 1;
      GreAcquireSemaphore(ghsemHT);
    }
    else
    {
      v62 = 0;
    }
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev, v38, v39)
      || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    {
      v43 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev, v41, v42);
      v44 = *((_DWORD *)a2 + 18);
      LODWORD(v67) = *((_DWORD *)a2 + 6);
      v76 = &v67;
      v45 = hdev;
      LODWORD(v60) = 0;
      v75 = 1LL;
      v74[0] = 262400;
      v46 = *((_DWORD *)hdev + 595) >> 7;
      v74[1] = 255;
      v47 = ~(_BYTE)v46 & 2;
      LOBYTE(v60) = v47;
      if ( (v44 & 4) != 0 || (v44 & 0x20) == 0 && (v44 & 3) != 0 )
        LOBYTE(v60) = v47 | 0x10;
      if ( *((unsigned __int16 *)v43 + 4) != v70 || *((unsigned __int16 *)v43 + 5) != (_DWORD)v71 )
      {
        SURFACE::bDeleteSurface(v64, 0LL, 0LL);
        v70 = *((unsigned __int16 *)v43 + 4);
        LODWORD(v71) = *((unsigned __int16 *)v43 + 5);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)&v69, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_93;
        v45 = hdev;
      }
      v48 = *((_DWORD *)v45 + 594);
      if ( v48 )
      {
        v49 = v48 - 2;
        if ( v49 )
        {
          v50 = v49 - 1;
          if ( v50 )
          {
            v51 = v50 - 1;
            if ( v51 )
            {
              v52 = v51 - 1;
              if ( v52 )
              {
                if ( v52 != 2 )
                  goto LABEL_93;
                BYTE1(v60) = 6;
              }
              else
              {
                BYTE1(v60) = -3;
              }
            }
            else
            {
              BYTE1(v60) = -2;
            }
          }
          else
          {
            BYTE1(v60) = -1;
          }
        }
        else
        {
          BYTE1(v60) = 2;
        }
      }
      else
      {
        BYTE1(v60) = 1;
      }
      v53 = *((_BYTE *)v45 + 2368);
      v54 = (__int128 *)*((_QWORD *)a2 + 7);
      BYTE3(v60) = v53;
      BYTE2(v60) = 4;
      v55 = *((_QWORD *)v54 + 2);
      v78 = *v54;
      WORD5(v78) = 10000;
      v79 = v55;
      *(_DWORD *)((char *)&v78 + 6) = 655370000;
      if ( (int)HT_CreateHalftoneBrush((_DWORD)v43, (unsigned int)&v78, (unsigned int)v74, v60, *(_QWORD *)(v64 + 72)) > 0 )
      {
        if ( ((_DWORD)hdev[10] & 0x200) != 0 )
        {
          v24 = xloIdent;
LABEL_96:
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v62);
LABEL_98:
          if ( v64 )
          {
            v25 = (struct _SURFOBJ *)(v64 + 24);
            goto LABEL_24;
          }
          if ( v4 != EngRealizeBrush )
          {
            v25 = 0LL;
            goto LABEL_24;
          }
          goto LABEL_29;
        }
        EPALOBJ::EPALOBJ((EPALOBJ *)&v60, *v43);
        v56 = v60;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&Xlate,
                             *((_QWORD *)a2 + 8),
                             *((_DWORD *)a2 + 18),
                             v60,
                             *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                             *((_QWORD *)a2 + 12),
                             *((_QWORD *)a2 + 12),
                             *((_DWORD *)a2 + 12),
                             *((_DWORD *)a2 + 13),
                             0xFFFFFF,
                             0) )
        {
          v24 = (XLATEOBJ *)Xlate;
          if ( v56 )
            DEC_SHARE_REF_CNT(v56);
          goto LABEL_96;
        }
        if ( v56 )
          DEC_SHARE_REF_CNT(v56);
      }
    }
LABEL_93:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v62);
    goto LABEL_29;
  }
  v14 = *((_DWORD *)a2 + 18);
  v15 = (HBITMAP)*((_QWORD *)a1 + 3);
  if ( (v14 & 1) == 0 )
  {
    if ( (v14 & 4) == 0 )
    {
      v16 = (v14 & 2) == 0;
      goto LABEL_9;
    }
LABEL_109:
    v8 = 1;
    goto LABEL_10;
  }
  v12 = (void *)*((_QWORD *)a2 + 8);
  if ( !v12 )
  {
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
      goto LABEL_10;
    goto LABEL_109;
  }
  v57 = *((_DWORD *)a1 + 10);
  if ( (v57 & 0x80u) == 0 )
  {
    v16 = (v57 & 0x20000) == 0;
LABEL_9:
    if ( v16 )
      goto LABEL_10;
    goto LABEL_109;
  }
  if ( !*((_DWORD *)a1 + 21) )
  {
    IcmDIB = BRUSH::hFindIcmDIB(a1, v12);
    if ( IcmDIB )
    {
      v15 = IcmDIB;
      goto LABEL_109;
    }
  }
LABEL_10:
  LOBYTE(v12) = 5;
  v17 = HmgShareLock(v15, v12);
  v9 = v17;
  if ( !v17 )
    goto LABEL_29;
  v18 = *((_QWORD *)a2 + 10);
  v19 = *(struct PALETTE **)(v17 + 128);
  v20 = *((_DWORD *)a1 + 10);
  if ( (v20 & 0x1000) != 0 )
  {
    inited = EXLATEOBJ::bMakeXlate(
               &Xlate,
               *((_QWORD *)v19 + 14),
               *((_QWORD *)a2 + 12),
               *((_QWORD *)a2 + 10),
               *((_DWORD *)v19 + 15),
               *((_DWORD *)v19 + 7));
    goto LABEL_21;
  }
  if ( (v20 & 0x2000) != 0 )
  {
    if ( *(_DWORD *)(v9 + 96) == *(_DWORD *)(v18 + 96) )
    {
      v24 = xloIdent;
      goto LABEL_23;
    }
LABEL_29:
    v10 = 0;
    goto LABEL_25;
  }
  if ( (*(_WORD *)(v9 + 100) || *(_QWORD *)(v9 + 24)) && *(HDEV *)(v9 + 48) != hdev )
    goto LABEL_29;
  if ( v19 )
    goto LABEL_16;
  v59 = *(_DWORD *)(v9 + 96);
  if ( v59 != *((_DWORD *)hdev + 527) )
  {
    if ( v59 == *((_DWORD *)a2 + 19) )
    {
      v19 = (struct PALETTE *)*((_QWORD *)a2 + 13);
      goto LABEL_16;
    }
    if ( v59 == 3 )
    {
      if ( ((_DWORD)hdev[543] & 0x100) == 0 )
      {
        v19 = ppalDefaultSurface8bpp;
        goto LABEL_16;
      }
    }
    else if ( ((_DWORD)hdev[10] & 0x20000) == 0 )
    {
      goto LABEL_29;
    }
LABEL_124:
    v19 = 0LL;
    goto LABEL_16;
  }
  if ( ((_DWORD)hdev[543] & 0x100) != 0 )
    goto LABEL_124;
  v19 = (struct PALETTE *)*((_QWORD *)hdev + 226);
LABEL_16:
  if ( v8 )
    v21 = *((_DWORD *)a2 + 18);
  else
    v21 = 0;
  if ( v8 )
    v22 = *((_QWORD *)a2 + 8);
  else
    v22 = 0LL;
  inited = EXLATEOBJ::bInitXlateObj(
             (__int64 *)&Xlate,
             v22,
             v21,
             (__int64)v19,
             *(_QWORD *)(v18 + 128),
             *((_QWORD *)a2 + 12),
             *((_QWORD *)a2 + 12),
             *((_DWORD *)a2 + 12),
             *((_DWORD *)a2 + 13),
             0xFFFFFF,
             0);
LABEL_21:
  if ( !inited )
    goto LABEL_29;
  v24 = (XLATEOBJ *)Xlate;
LABEL_23:
  v25 = (struct _SURFOBJ *)(v9 + 24);
LABEL_24:
  v10 = v4(
          (struct _BRUSHOBJ *)a2,
          (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
          v25,
          v73,
          v24,
          v3);
LABEL_25:
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v77);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v68);
  SURFMEM::~SURFMEM((SURFMEM *)&v64);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&Xlate);
  if ( v9 )
    DEC_SHARE_REF_CNT(v9);
  return v10;
}
