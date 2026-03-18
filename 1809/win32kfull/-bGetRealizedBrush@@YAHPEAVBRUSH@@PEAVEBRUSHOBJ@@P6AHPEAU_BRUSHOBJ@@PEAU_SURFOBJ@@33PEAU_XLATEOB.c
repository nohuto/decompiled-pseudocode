/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C011440C
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C01143A0 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C02513F4 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C02516C0 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00127A8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00133E4 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0055198 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0086E20 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0112F44 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     HT_CreateHalftoneBrush @ 0x1C0244BD0 (HT_CreateHalftoneBrush.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0251328 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C025133C (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ @ 0x1C0251510 (-bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ.c)
 *     ?vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C0251558 (-vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C0251588 (-vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     EngDitherColor @ 0x1C026C890 (EngDitherColor.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02A13BC (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02A16DC (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C02A1770 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C02A1810 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C02A2BE4 (--1HTSEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *a1, struct _SURFOBJ *a2, struct _SURFOBJ *a3, struct _SURFOBJ *a4, struct _XLATEOBJ *a5, unsigned int a6))
{
  unsigned int v3; // r12d
  struct _SURFOBJ *v8; // rdi
  struct _SURFOBJ *v9; // r15
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rbx
  FLONG NearestIndexFromColorref; // r12d
  FLONG v15; // r15d
  XLATEOBJ *v16; // r14
  FLONG v17; // eax
  __int64 v18; // r8
  HDEV v19; // rbx
  unsigned __int16 v20; // ax
  HDEV v21; // rcx
  __int64 v22; // rdx
  ULONG v23; // eax
  ULONG v24; // eax
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  int v26; // edx
  HPALETTE *v27; // r14
  HDEV v28; // rcx
  int v29; // eax
  int v30; // edx
  char v31; // dl
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  __int128 *v37; // rax
  __int64 v38; // xmm1_8
  size_t HalftoneBrush; // rcx
  __int64 v40; // rax
  void *v41; // rbx
  __int64 v42; // rbx
  int v43; // eax
  int v44; // r8d
  HSURF v45; // r15
  int v46; // r14d
  void *v47; // rdx
  int v48; // eax
  HBITMAP IcmDIB; // rax
  bool v50; // zf
  __int64 v51; // rdx
  __int64 v52; // r10
  int v53; // eax
  struct PALETTE *v54; // r9
  int inited; // eax
  int v56; // r8d
  unsigned int v57; // r8d
  __int64 v58; // rdx
  __int64 v59; // [rsp+60h] [rbp-A0h] BYREF
  HDEV hdev; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v61; // [rsp+70h] [rbp-90h] BYREF
  struct XLATE *Xlate; // [rsp+78h] [rbp-88h] BYREF
  BOOL v63; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v64; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  char v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+9Ch] [rbp-64h]
  char v68[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v69[4]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v70[4]; // [rsp+C8h] [rbp-38h] BYREF
  struct _SURFOBJ **v71; // [rsp+D8h] [rbp-28h]
  _BYTE v72[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v73; // [rsp+100h] [rbp+0h]
  char v74[8]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v75; // [rsp+110h] [rbp+10h] BYREF
  __int64 v76; // [rsp+120h] [rbp+20h]

  v3 = *((_DWORD *)a1 + 20);
  v61 = v3;
  if ( v3 == 12 )
    return 0LL;
  v8 = 0LL;
  v9 = 0LL;
  SURFREF::SURFREF((SURFREF *)v72);
  v10 = *((_QWORD *)a2 + 10);
  v65 = 0LL;
  v66 = 0;
  v67 = 0;
  hdev = *(HDEV *)(v10 + 48);
  Xlate = 0LL;
  if ( ((_DWORD)hdev[10] & 1) == 0 || (v11 = 1, a3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v68, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v74, (struct PDEVOBJ *)&hdev);
  v12 = *((unsigned int *)a1 + 20);
  if ( (unsigned int)v12 < 6 )
  {
    SURFREF::vAltCheckLock((SURFREF *)v72, *((HSURF *)hdev + v12 + 182));
    if ( !v73 )
      goto LABEL_131;
    v64 = (struct _SURFOBJ *)(v73 + 24);
    Xlate = pCreateXlate(2u);
    v13 = (__int64)Xlate;
    if ( !Xlate )
      goto LABEL_131;
    NearestIndexFromColorref = *((_DWORD *)a2 + 13);
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    {
      v15 = *((_DWORD *)a2 + 6);
      *(_DWORD *)(v13 + 84) = NearestIndexFromColorref;
      *(_DWORD *)(v13 + 88) = v15;
      XLATE::vCheckForICM((XLATE *)v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      v16 = (XLATEOBJ *)v13;
    }
    else
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                   *((_QWORD *)a2 + 11),
                                   *((_QWORD *)a2 + 12),
                                   NearestIndexFromColorref,
                                   1LL);
      v17 = ulGetNearestIndexFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), *((unsigned int *)a2 + 6), 1LL);
      v15 = v17;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
        && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
        && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
        && NearestIndexFromColorref == v17 )
      {
        v15 = 1 - NearestIndexFromColorref;
      }
      *(_DWORD *)(v13 + 84) = NearestIndexFromColorref;
      *(_DWORD *)(v13 + 88) = v15;
      v16 = (XLATEOBJ *)v13;
      XLATE::vCheckForICM((XLATE *)v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      XLATE::vCheckForTrivial((XLATE *)v13);
    }
    *(_QWORD *)(v13 + 40) = ppalMono;
    *(_QWORD *)(v13 + 48) = *((_QWORD *)a2 + 11);
    *(_QWORD *)(v13 + 56) = *((_QWORD *)a2 + 12);
    v16[3].flXlate |= 0x100u;
    v16[1].flXlate = NearestIndexFromColorref;
    v3 = v61;
    *(_DWORD *)&v16[1].iSrcType = v15;
    v9 = v64;
    goto LABEL_124;
  }
  if ( (unsigned int)v12 >= 0xC )
  {
    v43 = *((_DWORD *)a2 + 18);
    v44 = 1;
    v45 = (HSURF)*((_QWORD *)a1 + 3);
    v46 = 0;
    if ( (v43 & 1) != 0 )
    {
      v47 = (void *)*((_QWORD *)a2 + 8);
      if ( v47 )
      {
        v48 = *((_DWORD *)a1 + 10);
        if ( (v48 & 0x80u) != 0 )
        {
          if ( !*((_DWORD *)a1 + 21) )
          {
            IcmDIB = BRUSH::hFindIcmDIB(a1, v47);
            if ( IcmDIB )
            {
              v45 = (HSURF)IcmDIB;
              v46 = 1;
            }
          }
LABEL_95:
          SURFREF::vAltLock((SURFREF *)v72, v45);
          v51 = v73;
          if ( !v73 )
            goto LABEL_131;
          v52 = *((_QWORD *)a2 + 10);
          v53 = *((_DWORD *)a1 + 10);
          v54 = *(struct PALETTE **)(v73 + 128);
          if ( (v53 & 0x1000) != 0 )
          {
            inited = EXLATEOBJ::bMakeXlate(
                       &Xlate,
                       *((_QWORD *)v54 + 14),
                       *((_QWORD *)a2 + 12),
                       *((_QWORD *)a2 + 10),
                       *((_DWORD *)v54 + 15),
                       *((_DWORD *)v54 + 7));
LABEL_122:
            if ( !inited )
              goto LABEL_131;
            v16 = (XLATEOBJ *)Xlate;
            v9 = 0LL;
            goto LABEL_124;
          }
          if ( (v53 & 0x2000) != 0 )
          {
            if ( *(_DWORD *)(v73 + 96) != *(_DWORD *)(v52 + 96) )
              goto LABEL_131;
            v16 = xloIdent;
            v9 = 0LL;
            goto LABEL_125;
          }
          if ( (*(_WORD *)(v73 + 100) || *(_QWORD *)(v73 + 24)) && *(HDEV *)(v73 + 48) != hdev )
            goto LABEL_131;
          if ( !v54 )
          {
            v56 = *(_DWORD *)(v73 + 96);
            if ( v56 == *((_DWORD *)hdev + 527) )
            {
              if ( ((_DWORD)hdev[543] & 0x100) == 0 )
              {
                v54 = (struct PALETTE *)*((_QWORD *)hdev + 226);
                goto LABEL_115;
              }
            }
            else
            {
              if ( v56 == *((_DWORD *)a2 + 19) )
              {
                v54 = (struct PALETTE *)*((_QWORD *)a2 + 13);
                goto LABEL_115;
              }
              if ( v56 == 3 )
              {
                if ( ((_DWORD)hdev[543] & 0x100) == 0 )
                {
                  v54 = ppalDefaultSurface8bpp;
                  goto LABEL_115;
                }
              }
              else if ( ((_DWORD)hdev[10] & 0x20000) == 0 )
              {
                goto LABEL_131;
              }
            }
            v54 = 0LL;
          }
LABEL_115:
          if ( v46 )
            v57 = *((_DWORD *)a2 + 18);
          else
            v57 = 0;
          if ( v46 )
            v58 = *((_QWORD *)a2 + 8);
          else
            v58 = 0LL;
          inited = EXLATEOBJ::bInitXlateObj(
                     (__int64 *)&Xlate,
                     v58,
                     v57,
                     (__int64)v54,
                     *(_QWORD *)(v52 + 128),
                     *((_QWORD *)a2 + 12),
                     *((_QWORD *)a2 + 12),
                     *((_DWORD *)a2 + 12),
                     *((_DWORD *)a2 + 13),
                     0xFFFFFF,
                     0);
          goto LABEL_122;
        }
        v50 = (v48 & 0x20000) == 0;
        goto LABEL_93;
      }
      if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        goto LABEL_95;
    }
    else if ( (v43 & 4) == 0 )
    {
      v50 = (v43 & 2) == 0;
LABEL_93:
      if ( v50 )
        goto LABEL_95;
    }
    v46 = v44;
    goto LABEL_95;
  }
  if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    goto LABEL_131;
  v18 = *((unsigned int *)a2 + 6);
  if ( (v18 & 0x1000000) != 0 )
    *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), v18);
  v19 = hdev;
  if ( ((_DWORD)hdev[456] & 0x200000) != 0 && a3 != EngRealizeBrush )
  {
    if ( (unsigned int)a3(
                         (struct _BRUSHOBJ *)a2,
                         (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                         0LL,
                         0LL,
                         0LL,
                         *((_DWORD *)a2 + 6) | 0x80000000) )
    {
      LODWORD(v8) = 1;
      goto LABEL_131;
    }
    v19 = hdev;
  }
  memset(v69, 0, sizeof(v69));
  if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1 )
    LODWORD(v69[0]) = 1;
  else
    LODWORD(v69[0]) = v19[527];
  v20 = *((_WORD *)v19 + 1056);
  if ( !v20 )
    goto LABEL_131;
  if ( !*((_WORD *)v19 + 1057) )
    goto LABEL_131;
  HIDWORD(v69[0]) = v20;
  LODWORD(v69[1]) = *((unsigned __int16 *)v19 + 1057);
  v69[2] = 0LL;
  LODWORD(v69[3]) = 1;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)v69, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    goto LABEL_131;
  v21 = hdev;
  v22 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
  if ( *((_QWORD *)hdev + 349) )
  {
    if ( ((_DWORD)hdev[10] & 0x8000) == 0 )
      v21 = (HDEV)*((_QWORD *)hdev + 225);
    v23 = (*((__int64 (__fastcall **)(HDEV, __int64, _QWORD, _QWORD))hdev + 349))(
            v21,
            v22,
            *((unsigned int *)a2 + 6),
            *(_QWORD *)(v65 + 72));
  }
  else
  {
    v23 = EngDitherColor(hdev, v22, *((_DWORD *)a2 + 6), *(ULONG **)(v65 + 72));
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    v16 = xloIdent;
    goto LABEL_124;
  }
  if ( v24 != 1 )
    goto LABEL_131;
  if ( a3 != EngRealizeBrush
    || (IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange),
        v26 = 1,
        IsSemaphoreOwnedOrSharedByCurrentThread) )
  {
    v26 = 0;
  }
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v61, v26);
  v63 = a3 == EngRealizeBrush;
  if ( a3 == EngRealizeBrush )
    GreAcquireSemaphore(ghsemHT);
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    goto LABEL_70;
  v27 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
  LODWORD(v64) = *((_DWORD *)a2 + 6);
  v28 = hdev;
  v71 = &v64;
  v29 = *((_DWORD *)a2 + 18);
  v70[0] = 262400;
  v30 = *((_DWORD *)hdev + 595) >> 7;
  v70[1] = 255;
  v31 = ~(_BYTE)v30 & 2;
  v70[2] = 1;
  LOBYTE(v59) = v31;
  if ( (v29 & 4) != 0 || (v29 & 0x20) == 0 && (v29 & 3) != 0 )
    LOBYTE(v59) = v31 | 0x10;
  if ( __PAIR64__(*((unsigned __int16 *)v27 + 5), *((unsigned __int16 *)v27 + 4)) != *(_QWORD *)((char *)v69 + 4) )
  {
    SURFACE::bDeleteSurface(v65, 0LL, 0LL);
    HIDWORD(v69[0]) = *((unsigned __int16 *)v27 + 4);
    LODWORD(v69[1]) = *((unsigned __int16 *)v27 + 5);
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)v69, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_70;
    v28 = hdev;
  }
  v32 = *((_DWORD *)v28 + 594);
  if ( v32 )
  {
    v33 = v32 - 2;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            if ( v36 != 2 )
              goto LABEL_70;
            BYTE1(v59) = 6;
          }
          else
          {
            BYTE1(v59) = -3;
          }
        }
        else
        {
          BYTE1(v59) = -2;
        }
      }
      else
      {
        BYTE1(v59) = -1;
      }
    }
    else
    {
      BYTE1(v59) = 2;
    }
  }
  else
  {
    BYTE1(v59) = 1;
  }
  BYTE3(v59) = *((_BYTE *)v28 + 2368);
  v37 = (__int128 *)*((_QWORD *)a2 + 7);
  BYTE2(v59) = 4;
  v38 = *((_QWORD *)v37 + 2);
  v75 = *v37;
  *(_DWORD *)((char *)&v75 + 6) = 655370000;
  WORD5(v75) = 10000;
  v76 = v38;
  HalftoneBrush = (unsigned int)HT_CreateHalftoneBrush((_DWORD)v27, (unsigned int)&v75, (unsigned int)v70, v59, 0LL);
  v40 = v65;
  if ( (int)HalftoneBrush > *(_DWORD *)(v65 + 64) )
  {
    v41 = PALLOCMEM2(HalftoneBrush, 1835167815LL, 1);
    if ( v41 )
    {
      SURFACE::bDeleteSurface(v65, 0LL, 0LL);
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)v69, v41, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        Win32FreePool(v41);
        goto LABEL_70;
      }
      *(_BYTE *)(v65 + 688) = 1;
      v40 = v65;
      goto LABEL_72;
    }
LABEL_70:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v63);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v61);
    goto LABEL_131;
  }
LABEL_72:
  if ( (int)HT_CreateHalftoneBrush((_DWORD)v27, (unsigned int)&v75, (unsigned int)v70, v59, *(_QWORD *)(v40 + 72)) <= 0 )
    goto LABEL_70;
  if ( ((_DWORD)hdev[10] & 0x200) != 0 )
  {
    v16 = xloIdent;
  }
  else
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v59, *v27);
    v42 = v59;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&Xlate,
                          *((_QWORD *)a2 + 8),
                          *((_DWORD *)a2 + 18),
                          v59,
                          *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                          *((_QWORD *)a2 + 12),
                          *((_QWORD *)a2 + 12),
                          *((_DWORD *)a2 + 12),
                          *((_DWORD *)a2 + 13),
                          0xFFFFFF,
                          0) )
    {
      if ( v42 )
        DEC_SHARE_REF_CNT(v42);
      goto LABEL_70;
    }
    v16 = (XLATEOBJ *)Xlate;
    if ( v42 )
      DEC_SHARE_REF_CNT(v42);
  }
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v63);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v61);
LABEL_124:
  v51 = v73;
LABEL_125:
  if ( v51 )
  {
    v8 = (struct _SURFOBJ *)(v51 + 24);
LABEL_130:
    LODWORD(v8) = a3(
                    (struct _BRUSHOBJ *)a2,
                    (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                    v8,
                    v9,
                    v16,
                    v3);
    goto LABEL_131;
  }
  if ( v65 )
  {
    v8 = (struct _SURFOBJ *)(v65 + 24);
    goto LABEL_130;
  }
  if ( a3 != EngRealizeBrush )
    goto LABEL_130;
LABEL_131:
  NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v74);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v68);
  SURFMEM::~SURFMEM((SURFMEM *)&v65);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&Xlate);
  SURFREF::~SURFREF((SURFREF *)v72);
  return (unsigned int)v8;
}
