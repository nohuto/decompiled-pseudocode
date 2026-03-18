/*
 * XREFs of MagSetLensContextInformation @ 0x1C019BB40
 * Callers:
 *     MagSlicerControl @ 0x1C019C834 (MagSlicerControl.c)
 *     NtUserMagSetContextInformation @ 0x1C01F26A0 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1C0009DE0 (MagpRevokeInputTransfrom.c)
 *     MagpFindThreadContext @ 0x1C0035C5C (MagpFindThreadContext.c)
 *     memcmp @ 0x1C01396C0 (memcmp.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ChangeComposableCursor @ 0x1C01976E4 (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C019B0B4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C019B0F8 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C02408AC (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C0240970 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0240A1C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1C0240AF8 (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C0240BA8 (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x1C0240C68 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0240E50 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0240F3C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0241038 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, double *Buf1)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v10; // edi
  _QWORD *ThreadContext; // rax
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 *v15; // rax
  __int64 *v16; // r15
  double v17; // xmm0_8
  __int64 v18; // rbx
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 *v22; // rax
  _QWORD *v23; // rax
  int v24; // ebx
  void *v25; // rax
  _QWORD *v26; // rax
  int v27; // ebx
  void *v28; // rax
  _QWORD *v29; // rax
  int v30; // ebx
  void *v31; // rax
  double v32; // xmm1_8
  __int64 v33; // rax
  double v34; // xmm2_8
  unsigned __int16 v35; // cx
  __int128 v36; // xmm1
  __int64 *v37; // rax
  __int64 *v38; // rbx
  unsigned __int16 v39; // dx
  INT v40; // ecx
  int *v41; // rdi
  INT v42; // eax
  _DWORD *v43; // rcx
  int v44; // edx
  __int128 v45; // xmm0
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 *v50; // rax
  int v51; // eax
  void *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rax
  void *v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  void *v63; // rax
  int v64; // eax
  unsigned int *v65; // rbx
  int v66; // ecx
  unsigned int v67; // eax
  __int64 v68; // r13
  __int64 *v69; // rax
  __int64 *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 *v73; // rsi
  __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 *v77; // rax
  void *v78; // rax
  int v79; // eax
  void *v80; // rax
  void *v81; // rax
  unsigned int v82; // eax
  void *v83; // rax
  __int64 *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 *v87; // rsi
  _QWORD *v88; // rcx
  void *v89; // rax
  unsigned int v90; // eax
  void *v91; // rax
  int v92; // ebx
  __int64 *v93; // rax
  __int64 *v94; // rsi
  int v95; // ebx
  __int64 *v96; // rsi
  __int64 v97; // r8
  __int64 v98; // r11
  __int64 v99; // rdx
  int v100; // ecx
  __int64 v101; // rcx
  void *v102; // rax
  __int64 v103; // rcx
  int v104; // eax
  unsigned int v105; // eax
  unsigned int v106; // ebx
  char *v107; // rdx
  __int64 *LensContext; // rsi
  __int64 v109; // r8
  __int64 v110; // rdi
  __int64 v111; // r12
  _QWORD *v112; // rcx
  void *v113; // rax
  __int64 v114; // rcx
  int v115; // eax
  unsigned int v116; // eax
  __int64 v118; // [rsp+30h] [rbp-30h]
  __int128 v119; // [rsp+40h] [rbp-20h] BYREF
  __int64 v120; // [rsp+50h] [rbp-10h]

  v6 = 0LL;
  *(_QWORD *)&v119 = 0LL;
  v7 = 0LL;
  v118 = 0LL;
  v8 = a4;
  v10 = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v13 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return (unsigned int)-1073741661;
  if ( a5 > 5 )
  {
    switch ( a5 )
    {
      case 6:
        v106 = *((_DWORD *)Buf1 + 1) + *(_DWORD *)Buf1;
        if ( v106 > 0x19 )
          return v10;
        if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        LensContext = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !LensContext )
          return v10;
        v110 = v106;
        if ( v106 )
        {
          v111 = Win32AllocPool(8LL * v106, 1735226197LL);
          if ( !v111 )
            return (unsigned int)-1073741801;
        }
        else
        {
          v111 = v119;
        }
        *(double *)&v119 = *Buf1;
        *((_QWORD *)&v119 + 1) = v111;
        if ( v106 )
        {
          v112 = (_QWORD *)v111;
          v107 = (char *)Buf1 - v111;
          do
          {
            *v112 = *(_QWORD *)((char *)v112 + (_QWORD)v107 + 8);
            ++v112;
            --v110;
          }
          while ( v110 );
        }
        if ( (LensContext[2] & 0x20) == 0 )
        {
          v113 = (void *)ReferenceDwmApiPort(
                           **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL),
                           v107,
                           v109);
          v10 = DwmAsyncMagnSetWindowFilterList(v113);
          if ( (v10 & 0x80000000) != 0 )
          {
LABEL_167:
            if ( !v111 )
              return v10;
            Win32FreePool(v111);
            goto LABEL_169;
          }
        }
        v114 = LensContext[29];
        if ( v114 )
        {
          Win32FreePool(v114);
          LensContext[29] = 0LL;
        }
        *((_DWORD *)LensContext + 56) = *(_DWORD *)Buf1;
        *((_DWORD *)LensContext + 57) = *((_DWORD *)Buf1 + 1);
        v115 = *((_DWORD *)LensContext + 4);
        LensContext[29] = v111;
        if ( v106 )
          v116 = v115 | 8;
        else
          v116 = v115 & 0xFFFFFFF7;
        *((_DWORD *)LensContext + 4) = v116;
        v10 = 0;
        break;
      case 7:
        if ( *(_DWORD *)Buf1 > 6u )
          return v10;
        if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v96 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !v96 )
          return v10;
        if ( (_DWORD)v98 )
        {
          v118 = Win32AllocPool(24 * v98, 1735226197LL);
          v7 = v118;
          if ( !v118 )
            return (unsigned int)-1073741801;
        }
        v99 = 0LL;
        v100 = *(_DWORD *)Buf1;
        *(double *)((char *)&v119 + 4) = *(double *)((char *)Buf1 + 4);
        HIDWORD(v119) = *((_DWORD *)Buf1 + 3);
        LODWORD(v119) = v100;
        v120 = v7;
        if ( v100 )
        {
          do
          {
            v101 = 3 * v99;
            v99 = (unsigned int)(v99 + 1);
            *(_OWORD *)(v7 + 8 * v101) = *(_OWORD *)&Buf1[v101 + 2];
            *(double *)(v7 + 8 * v101 + 16) = Buf1[v101 + 4];
          }
          while ( (unsigned int)v99 < *(_DWORD *)Buf1 );
        }
        if ( (v96[2] & 0x20) != 0 )
        {
LABEL_141:
          v103 = v96[32];
          if ( v103 )
          {
            Win32FreePool(v103);
            v96[32] = 0LL;
          }
          *((_DWORD *)v96 + 60) = *(_DWORD *)Buf1;
          *((_DWORD *)v96 + 61) = *((_DWORD *)Buf1 + 1);
          *((_DWORD *)v96 + 62) = *((_DWORD *)Buf1 + 2);
          *((_DWORD *)v96 + 63) = *((_DWORD *)Buf1 + 3);
          v104 = *((_DWORD *)v96 + 4);
          v96[32] = v7;
          if ( *(_DWORD *)Buf1 )
            v105 = v104 | 0x10;
          else
            v105 = v104 & 0xFFFFFFEF;
          *((_DWORD *)v96 + 4) = v105;
          return 0;
        }
        v102 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL), v99, v97);
        v10 = DwmAsyncMagnSetWindowSharedTextures(v102);
        if ( (v10 & 0x80000000) == 0 )
        {
          v7 = v118;
          goto LABEL_141;
        }
        break;
      case 9:
        v92 = *(_DWORD *)Buf1;
        if ( (*(_DWORD *)Buf1 & 0xFFFFFFFE) != 0 )
          return v10;
        if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v93 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v94 = v93;
        if ( !v93 )
          return v10;
        v95 = v92 & 1;
        if ( ((*((_DWORD *)v93 + 4) >> 6) & 1) != v95 )
        {
          ChangeComposableCursor(v95);
          *((_DWORD *)v94 + 4) = v94[2] & 0xFFFFFFBF | (v95 << 6);
        }
        return 0;
      case 10:
        if ( !a3 )
          return v10;
        v84 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v87 = v84;
        if ( !v84 )
          return v10;
        if ( a3 == -1 )
        {
          v88 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL);
          v89 = (void *)ReferenceDwmApiPort(v88, *v88, v86);
          v90 = DwmAsyncMagnSetDesktopSamplingMode(v89);
        }
        else
        {
          if ( (v84[2] & 0x20) != 0 )
          {
            v10 = 0;
            goto LABEL_124;
          }
          v91 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL), v85, v86);
          v90 = DwmAsyncMagnSetSamplingMode(v91);
        }
        v10 = v90;
LABEL_124:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *((_DWORD *)v87 + 66) = *(_DWORD *)Buf1;
        return 0;
      default:
        return v10;
    }
    if ( !v118 )
      return v10;
    Win32FreePool(v118);
    v111 = 0LL;
    goto LABEL_167;
  }
  if ( a5 == 5 )
  {
    if ( !a3 )
      return v10;
    v70 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v73 = v70;
    if ( !v70 )
      return v10;
    if ( a3 == -1 )
    {
      v74 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL);
      v19 = memcmp(Buf1, &gMagEffectIdentity, 0x64uLL) == 0;
      v77 = *(__int64 **)(v74 + 232);
      if ( v19 )
      {
        if ( v77 )
        {
          if ( v77 != v73 )
            return v10;
          v78 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v74 + 8), v75, v76);
          v10 = DwmAsyncMagnSetDesktopColorTransform(v78);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 232LL) = 0LL;
          goto LABEL_102;
        }
        goto LABEL_101;
      }
      if ( !v77 )
      {
        v80 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v74 + 8), v75, v76);
        v10 = DwmAsyncMagnSetDesktopColorTransform(v80);
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 232LL) = v73;
        goto LABEL_102;
      }
      if ( v77 != v73 )
        return v10;
      v81 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v74 + 8), v75, v76);
      v82 = DwmAsyncMagnSetDesktopColorTransform(v81);
    }
    else
    {
      if ( (v70[2] & 0x20) != 0 )
      {
LABEL_101:
        v10 = 0;
LABEL_102:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_OWORD *)(v73 + 15) = *(_OWORD *)Buf1;
        *(_OWORD *)(v73 + 17) = *((_OWORD *)Buf1 + 1);
        *(_OWORD *)(v73 + 19) = *((_OWORD *)Buf1 + 2);
        *(_OWORD *)(v73 + 21) = *((_OWORD *)Buf1 + 3);
        *(_OWORD *)(v73 + 23) = *((_OWORD *)Buf1 + 4);
        *(_OWORD *)(v73 + 25) = *((_OWORD *)Buf1 + 5);
        v79 = *((_DWORD *)Buf1 + 24);
        *((_DWORD *)v73 + 4) |= 4u;
        *((_DWORD *)v73 + 54) = v79;
        return 0;
      }
      v83 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL), v71, v72);
      v82 = DwmAsyncMagnSetWindowColorTransform(v83);
    }
    v10 = v82;
    goto LABEL_102;
  }
  if ( !a5 )
  {
    if ( !a3 || MagpFindLensContext((__int64)ThreadContext, a3, 2) )
      return v10;
    v6 = Win32AllocPool(272LL, 1735226197LL);
    if ( v6 )
    {
      if ( a3 != -1 )
      {
        v63 = (void *)ReferenceDwmApiPort(*(unsigned int *)(*(_QWORD *)(a3 + 40) + 288LL), v61, v62);
        v64 = DwmAsyncMagnCreate(v63);
        v10 = v64;
        if ( v64 == -1073741823 )
        {
          *(_DWORD *)(v6 + 16) |= 0x20u;
        }
        else if ( v64 < 0 )
        {
          goto LABEL_169;
        }
        v8 = a4;
      }
      v65 = (unsigned int *)(v6 + 16);
      memset((void *)(v6 + 16), 0, 0x100uLL);
      *(double *)(v6 + 40) = gOneDouble;
      *(double *)(v6 + 48) = gOneDouble;
      if ( a3 == -1 )
      {
        *(_QWORD *)(v6 + 24) = -1LL;
      }
      else
      {
        *(_QWORD *)&v119 = v6 + 24;
        *((_QWORD *)&v119 + 1) = a3;
        HMAssignmentLock(&v119);
      }
      v66 = 0;
      if ( v8 == 1 )
        v66 = 128;
      v67 = *v65;
      *(_DWORD *)(v6 + 264) = 0;
      v68 = v13 + 40;
      *v65 = v67 & 0xFFFFFF7F | v66;
      v69 = *(__int64 **)(v68 + 8);
      if ( *v69 != v68 )
        __fastfail(3u);
      *(_QWORD *)v6 = v68;
      *(_QWORD *)(v6 + 8) = v69;
      *v69 = v6;
      *(_QWORD *)(v68 + 8) = v6;
      return 0;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 != 1 )
  {
    if ( a5 != 2 )
    {
      if ( a5 != 3 )
      {
        if ( a5 == 4 )
        {
          if ( *((_DWORD *)Buf1 + 8) == 3 )
            return (unsigned int)MagpRevokeInputTransfrom();
          else
            return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1);
        }
        return v10;
      }
      if ( !a3 )
        return v10;
      v15 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      v16 = v15;
      if ( !v15 )
        return v10;
      v17 = *Buf1;
      if ( a3 == -1 )
      {
        if ( v17 != Buf1[1] )
          return v10;
        v18 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL);
        v19 = memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) == 0;
        v22 = *(__int64 **)(v18 + 224);
        if ( !v19 )
        {
          if ( v22 )
          {
            if ( v16 != v22 )
              return v10;
            v29 = *(_QWORD **)(v18 + 8);
            v30 = (int)Buf1[3];
            v31 = (void *)ReferenceDwmApiPort(*v29, v20, v21);
            v10 = DwmAsyncMagnSetDesktopTransform(v31, v30);
          }
          else
          {
            v26 = *(_QWORD **)(v18 + 8);
            v27 = (int)Buf1[3];
            v28 = (void *)ReferenceDwmApiPort(*v26, v20, v21);
            v10 = DwmAsyncMagnSetDesktopTransform(v28, v27);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 224LL) = v16;
          }
          goto LABEL_33;
        }
        if ( v22 )
        {
          if ( v16 != v22 )
            return v10;
          v23 = *(_QWORD **)(v18 + 8);
          v24 = (int)Buf1[3];
          v25 = (void *)ReferenceDwmApiPort(*v23, v20, v21);
          v10 = DwmAsyncMagnSetDesktopTransform(v25, v24);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 224LL) = 0LL;
          goto LABEL_33;
        }
      }
      else
      {
        *((double *)v15 + 5) = v17;
        v15[6] = *((_QWORD *)Buf1 + 1);
        v32 = Buf1[2];
        v33 = v15[3];
        *((double *)v16 + 7) = v32;
        v34 = Buf1[3];
        *((double *)v16 + 8) = v34;
        if ( (*(_DWORD *)(*(_QWORD *)(v33 + 40) + 288LL) & 0xF) == 0 )
        {
          v35 = *(_WORD *)(gpsi + 6998LL);
          if ( v35 > 0x60u )
          {
            *((double *)v16 + 7) = (double)v35 * v32 / 96.0;
            *((double *)v16 + 8) = (double)*(unsigned __int16 *)(gpsi + 6998LL) * v34 / 96.0;
            *((double *)v16 + 5) = *Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
            *((double *)v16 + 6) = Buf1[1] * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
          }
        }
      }
      v10 = 0;
LABEL_33:
      if ( (v10 & 0x80000000) != 0 )
        return v10;
      *(_OWORD *)(v16 + 11) = *(_OWORD *)Buf1;
      v36 = *((_OWORD *)Buf1 + 1);
      *((_DWORD *)v16 + 4) |= 2u;
      *(_OWORD *)(v16 + 13) = v36;
      return 0;
    }
    if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v10;
    v37 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v38 = v37;
    if ( !v37 )
      return v10;
    if ( (*(_DWORD *)(*(_QWORD *)(v37[3] + 40) + 288LL) & 0xF) != 0 || (v39 = *(_WORD *)(gpsi + 6998LL), v39 <= 0x60u) )
    {
      v44 = *(_DWORD *)Buf1;
      v41 = (int *)(v37 + 2);
      v43 = v37 + 2;
      if ( (v37[2] & 2) != 0 )
      {
        *((_DWORD *)v37 + 8) = -(int)((double)v44 * *((double *)v37 + 11));
        v42 = (int)((double)*((int *)Buf1 + 1) * *((double *)v37 + 12));
      }
      else
      {
        *((_DWORD *)v37 + 8) = -v44;
        v42 = *((_DWORD *)Buf1 + 1);
      }
    }
    else
    {
      v40 = *(_DWORD *)Buf1;
      v41 = (int *)(v37 + 2);
      if ( (v37[2] & 2) != 0 )
      {
        *((_DWORD *)v37 + 8) = -(int)((double)v40 * *((double *)v37 + 11));
        v42 = (int)((double)*((int *)Buf1 + 1) * *((double *)v37 + 12));
      }
      else
      {
        *((_DWORD *)v37 + 8) = -EngMulDiv(v40, v39, 96);
        v42 = EngMulDiv(*((_DWORD *)Buf1 + 1), *(unsigned __int16 *)(gpsi + 6998LL), 96);
      }
      v43 = v38 + 2;
    }
    *((_DWORD *)v38 + 9) = -v42;
    v45 = *(_OWORD *)Buf1;
    *v41 = *v43 | 1;
    *(_OWORD *)(v38 + 9) = v45;
    return 0;
  }
  MagpRevokeInputTransfrom();
  if ( !a3 )
    return v10;
  v46 = MagpFindLensContext(v13, a3, v8);
  v6 = (__int64)v46;
  if ( !v46 )
    return v10;
  v49 = *v46;
  v50 = (__int64 *)v46[1];
  if ( *(_QWORD *)(v49 + 8) != v6 || *v50 != v6 )
    __fastfail(3u);
  *v50 = v49;
  *(_QWORD *)(v49 + 8) = v50;
  if ( a3 != -1 )
  {
    v51 = *(_DWORD *)(v6 + 16);
    if ( (v51 & 0x40) != 0 )
    {
      ChangeComposableCursor(0);
      *(_DWORD *)(v6 + 16) &= ~0x40u;
      v51 = *(_DWORD *)(v6 + 16);
    }
    if ( (v51 & 0x20) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v52 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL), v47, v48);
      v10 = DwmAsyncMagnDestroy(v52);
    }
    HMAssignmentUnlock(v6 + 24);
    v53 = *(_QWORD *)(v6 + 232);
    if ( v53 )
      Win32FreePool(v53);
    v54 = *(_QWORD *)(v6 + 256);
    if ( v54 )
      Win32FreePool(v54);
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_169;
    goto LABEL_72;
  }
  v55 = *(_QWORD *)(v13 + 16);
  v56 = *(_QWORD *)(v55 + 448);
  if ( *(_QWORD *)(v56 + 232) == v6 )
  {
    v57 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v56 + 8), v47, v48);
    v10 = DwmAsyncMagnSetDesktopColorTransform(v57);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 232LL) = 0LL;
    v55 = *(_QWORD *)(v13 + 16);
  }
  else
  {
    v10 = 0;
  }
  v58 = *(_QWORD *)(v55 + 448);
  if ( *(_QWORD *)(v58 + 224) == v6 )
  {
    v59 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v58 + 8), v47, v48);
    v60 = DwmAsyncMagnSetDesktopTransform(v59, 0);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 224LL) = 0LL;
  }
  else
  {
    v60 = 0;
  }
  if ( (v10 & 0x80000000) == 0 )
  {
    if ( v60 >= 0 )
    {
LABEL_72:
      v10 = 0;
      goto LABEL_169;
    }
    v10 = v60;
  }
LABEL_169:
  if ( v6 )
    Win32FreePool(v6);
  return v10;
}
