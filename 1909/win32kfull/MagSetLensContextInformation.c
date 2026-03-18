/*
 * XREFs of MagSetLensContextInformation @ 0x1C01D06EC
 * Callers:
 *     MagSlicerControl @ 0x1C01D1490 (MagSlicerControl.c)
 *     NtUserMagSetContextInformation @ 0x1C0231500 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C003807C (MagpFindThreadContext.c)
 *     MagpRevokeInputTransfrom @ 0x1C015FE20 (MagpRevokeInputTransfrom.c)
 *     memcmp @ 0x1C0163AE0 (memcmp.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ChangeComposableCursor @ 0x1C01CC3EC (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CFBD4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01CFC18 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C0271340 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C0271414 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C02714D0 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1C027167C (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C027173C (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x1C027180C (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0271A14 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0271B14 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0271C24 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, double *Buf1)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v10; // edi
  _QWORD *ThreadContext; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 *v17; // rax
  __int64 *v18; // r12
  double v19; // xmm0_8
  __int64 v20; // rsi
  __int64 *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ebx
  void *v25; // rax
  int v26; // ebx
  void *v27; // rax
  int v28; // ebx
  void *v29; // rax
  double v30; // xmm1_8
  __int64 v31; // rax
  double v32; // xmm2_8
  unsigned __int16 v33; // cx
  __int128 v34; // xmm1
  __int64 *v35; // rax
  __int64 *v36; // rbx
  unsigned __int16 v37; // dx
  INT v38; // ecx
  int *v39; // rdi
  INT v40; // eax
  _DWORD *v41; // rcx
  int v42; // edx
  __int128 v43; // xmm0
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 *v48; // rax
  int v49; // eax
  void *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  void *v55; // rax
  __int64 v56; // rax
  void *v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // r8
  void *v61; // rax
  int v62; // eax
  unsigned int *v63; // rbx
  int v64; // ecx
  unsigned int v65; // eax
  __int64 v66; // r13
  __int64 *v67; // rax
  __int64 *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 *v71; // rsi
  __int64 v72; // r15
  __int64 *v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // r8
  void *v76; // rax
  int v77; // eax
  void *v78; // rax
  void *v79; // rax
  unsigned int v80; // eax
  void *v81; // rax
  __int64 *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 *v85; // rsi
  _QWORD *v86; // rcx
  void *v87; // rax
  unsigned int v88; // eax
  void *v89; // rax
  int v90; // ebx
  __int64 *v91; // rax
  __int64 *v92; // rsi
  unsigned int v93; // ebx
  __int64 *v94; // rsi
  __int64 v95; // r8
  __int64 v96; // r11
  __int64 v97; // rdx
  int v98; // ecx
  __int64 v99; // rcx
  void *v100; // rax
  __int64 v101; // rcx
  int v102; // eax
  unsigned int v103; // eax
  unsigned int v104; // ebx
  char *v105; // rdx
  __int64 *LensContext; // rsi
  __int64 v107; // r8
  __int64 v108; // rdi
  __int64 v109; // r15
  _QWORD *v110; // rcx
  void *v111; // rax
  __int64 v112; // rcx
  int v113; // eax
  unsigned int v114; // eax
  __int64 v116; // [rsp+30h] [rbp-30h]
  __int128 v117; // [rsp+40h] [rbp-20h] BYREF
  __int64 v118; // [rsp+50h] [rbp-10h]

  v6 = 0LL;
  *(_QWORD *)&v117 = 0LL;
  v7 = 0LL;
  v116 = 0LL;
  v8 = a4;
  v10 = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v15 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return (unsigned int)-1073741661;
  if ( a5 > 5 )
  {
    switch ( a5 )
    {
      case 6:
        v104 = *(_DWORD *)Buf1 + *((_DWORD *)Buf1 + 1);
        if ( v104 > 0x19 )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        LensContext = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !LensContext )
          return v10;
        v108 = v104;
        if ( v104 )
        {
          v109 = Win32AllocPool(8LL * v104, 1735226197LL);
          if ( !v109 )
            return (unsigned int)-1073741801;
        }
        else
        {
          v109 = v117;
        }
        *(double *)&v117 = *Buf1;
        *((_QWORD *)&v117 + 1) = v109;
        if ( v104 )
        {
          v110 = (_QWORD *)v109;
          v105 = (char *)Buf1 - v109;
          do
          {
            *v110 = *(_QWORD *)((char *)v110 + (_QWORD)v105 + 8);
            ++v110;
            --v108;
          }
          while ( v108 );
        }
        if ( (LensContext[2] & 0x20) == 0 )
        {
          v111 = (void *)ReferenceDwmApiPort(
                           **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 8LL),
                           v105,
                           v107);
          v10 = DwmAsyncMagnSetWindowFilterList(v111);
          if ( (v10 & 0x80000000) != 0 )
          {
LABEL_165:
            if ( !v109 )
              return v10;
            Win32FreePool(v109);
            goto LABEL_167;
          }
        }
        v112 = LensContext[29];
        if ( v112 )
        {
          Win32FreePool(v112);
          LensContext[29] = 0LL;
        }
        *((_DWORD *)LensContext + 56) = *(_DWORD *)Buf1;
        *((_DWORD *)LensContext + 57) = *((_DWORD *)Buf1 + 1);
        v113 = *((_DWORD *)LensContext + 4);
        LensContext[29] = v109;
        if ( v104 )
          v114 = v113 | 8;
        else
          v114 = v113 & 0xFFFFFFF7;
        *((_DWORD *)LensContext + 4) = v114;
        v10 = 0;
        break;
      case 7:
        if ( *(_DWORD *)Buf1 > 6u )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v94 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !v94 )
          return v10;
        if ( (_DWORD)v96 )
        {
          v116 = Win32AllocPool(24 * v96, 1735226197LL);
          v7 = v116;
          if ( !v116 )
            return (unsigned int)-1073741801;
        }
        v97 = 0LL;
        v98 = *(_DWORD *)Buf1;
        *(double *)((char *)&v117 + 4) = *(double *)((char *)Buf1 + 4);
        HIDWORD(v117) = *((_DWORD *)Buf1 + 3);
        LODWORD(v117) = v98;
        v118 = v7;
        if ( v98 )
        {
          do
          {
            v99 = 3 * v97;
            v97 = (unsigned int)(v97 + 1);
            *(_OWORD *)(v7 + 8 * v99) = *(_OWORD *)&Buf1[v99 + 2];
            *(double *)(v7 + 8 * v99 + 16) = Buf1[v99 + 4];
          }
          while ( (unsigned int)v97 < *(_DWORD *)Buf1 );
        }
        if ( (v94[2] & 0x20) != 0 )
        {
LABEL_139:
          v101 = v94[32];
          if ( v101 )
          {
            Win32FreePool(v101);
            v94[32] = 0LL;
          }
          *((_DWORD *)v94 + 60) = *(_DWORD *)Buf1;
          *((_DWORD *)v94 + 61) = *((_DWORD *)Buf1 + 1);
          *((_DWORD *)v94 + 62) = *((_DWORD *)Buf1 + 2);
          *((_DWORD *)v94 + 63) = *((_DWORD *)Buf1 + 3);
          v102 = *((_DWORD *)v94 + 4);
          v94[32] = v7;
          if ( *(_DWORD *)Buf1 )
            v103 = v102 | 0x10;
          else
            v103 = v102 & 0xFFFFFFEF;
          *((_DWORD *)v94 + 4) = v103;
          return 0;
        }
        v100 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 8LL), v97, v95);
        v10 = DwmAsyncMagnSetWindowSharedTextures(v100);
        if ( (v10 & 0x80000000) == 0 )
        {
          v7 = v116;
          goto LABEL_139;
        }
        break;
      case 9:
        v90 = *(_DWORD *)Buf1;
        if ( (*(_DWORD *)Buf1 & 0xFFFFFFFE) != 0 )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v91 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v92 = v91;
        if ( !v91 )
          return v10;
        v93 = v90 & 1;
        if ( ((*((_DWORD *)v91 + 4) >> 6) & 1) != v93 )
        {
          ChangeComposableCursor(v93);
          *((_DWORD *)v92 + 4) = v92[2] & 0xFFFFFFBF | (v93 << 6);
        }
        return 0;
      case 10:
        if ( !a3 )
          return v10;
        v82 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v85 = v82;
        if ( !v82 )
          return v10;
        if ( a3 == -1 )
        {
          v86 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 8LL);
          v87 = (void *)ReferenceDwmApiPort(v86, *v86, v84);
          v88 = DwmAsyncMagnSetDesktopSamplingMode(v87);
        }
        else
        {
          if ( (v82[2] & 0x20) != 0 )
          {
            v10 = 0;
            goto LABEL_122;
          }
          v89 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 8LL), v83, v84);
          v88 = DwmAsyncMagnSetSamplingMode(v89);
        }
        v10 = v88;
LABEL_122:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *((_DWORD *)v85 + 66) = *(_DWORD *)Buf1;
        return 0;
      default:
        return v10;
    }
    if ( !v116 )
      return v10;
    Win32FreePool(v116);
    v109 = 0LL;
    goto LABEL_165;
  }
  if ( a5 == 5 )
  {
    if ( !a3 )
      return v10;
    v68 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v71 = v68;
    if ( !v68 )
      return v10;
    if ( a3 == -1 )
    {
      v72 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL);
      v73 = *(__int64 **)(v72 + 232);
      if ( !memcmp(Buf1, &gMagEffectIdentity, (unsigned int)(v69 + 101)) )
      {
        if ( v73 )
        {
          if ( v73 != v71 )
            return v10;
          v76 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v72 + 8), v74, v75);
          v10 = DwmAsyncMagnSetDesktopColorTransform(v76);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 232LL) = 0LL;
          goto LABEL_100;
        }
        goto LABEL_99;
      }
      if ( !v73 )
      {
        v78 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v72 + 8), v74, v75);
        v10 = DwmAsyncMagnSetDesktopColorTransform(v78);
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 232LL) = v71;
        goto LABEL_100;
      }
      if ( v73 != v71 )
        return v10;
      v79 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v72 + 8), v74, v75);
      v80 = DwmAsyncMagnSetDesktopColorTransform(v79);
    }
    else
    {
      if ( (v68[2] & 0x20) != 0 )
      {
LABEL_99:
        v10 = 0;
LABEL_100:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_OWORD *)(v71 + 15) = *(_OWORD *)Buf1;
        *(_OWORD *)(v71 + 17) = *((_OWORD *)Buf1 + 1);
        *(_OWORD *)(v71 + 19) = *((_OWORD *)Buf1 + 2);
        *(_OWORD *)(v71 + 21) = *((_OWORD *)Buf1 + 3);
        *(_OWORD *)(v71 + 23) = *((_OWORD *)Buf1 + 4);
        *(_OWORD *)(v71 + 25) = *((_OWORD *)Buf1 + 5);
        v77 = *((_DWORD *)Buf1 + 24);
        *((_DWORD *)v71 + 4) |= 4u;
        *((_DWORD *)v71 + 54) = v77;
        return 0;
      }
      v81 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 8LL), v69, v70);
      v80 = DwmAsyncMagnSetWindowColorTransform(v81);
    }
    v10 = v80;
    goto LABEL_100;
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
        v61 = (void *)ReferenceDwmApiPort(*(unsigned int *)(*(_QWORD *)(a3 + 40) + 288LL), v59, v60);
        v62 = DwmAsyncMagnCreate(v61);
        v10 = v62;
        if ( v62 != -1073741823 && v62 < 0 )
          goto LABEL_167;
        v8 = a4;
      }
      v63 = (unsigned int *)(v6 + 16);
      memset((void *)(v6 + 16), 0, 0x100uLL);
      *(double *)(v6 + 40) = gOneDouble;
      *(double *)(v6 + 48) = gOneDouble;
      if ( a3 == -1 )
      {
        *(_QWORD *)(v6 + 24) = -1LL;
      }
      else
      {
        *(_QWORD *)&v117 = v6 + 24;
        *((_QWORD *)&v117 + 1) = a3;
        HMAssignmentLock(&v117);
      }
      v64 = 0;
      if ( v8 == 1 )
        v64 = 128;
      v65 = *v63;
      *(_DWORD *)(v6 + 264) = 0;
      v66 = v15 + 40;
      *v63 = v65 & 0xFFFFFF7F | v64;
      v67 = *(__int64 **)(v66 + 8);
      if ( *v67 == v66 )
      {
        *(_QWORD *)v6 = v66;
        *(_QWORD *)(v6 + 8) = v67;
        *v67 = v6;
        *(_QWORD *)(v66 + 8) = v6;
        return 0;
      }
LABEL_88:
      __fastfail(3u);
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
            return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1, v12, v13, v14);
        }
        return v10;
      }
      if ( !a3 )
        return v10;
      v17 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      v18 = v17;
      if ( !v17 )
        return v10;
      v19 = *Buf1;
      if ( a3 == -1 )
      {
        if ( v19 != Buf1[1] )
          return v10;
        v20 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL);
        v21 = *(__int64 **)(v20 + 224);
        if ( memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) )
        {
          if ( v21 )
          {
            if ( v18 != v21 )
              return v10;
            v28 = (int)Buf1[3];
            v29 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v20 + 8), v22, v23);
            v10 = DwmAsyncMagnSetDesktopTransform(v29, v28);
          }
          else
          {
            v26 = (int)Buf1[3];
            v27 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v20 + 8), v22, v23);
            v10 = DwmAsyncMagnSetDesktopTransform(v27, v26);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 224LL) = v18;
          }
          goto LABEL_33;
        }
        if ( v21 )
        {
          if ( v18 != v21 )
            return v10;
          v24 = (int)Buf1[3];
          v25 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v20 + 8), v22, v23);
          v10 = DwmAsyncMagnSetDesktopTransform(v25, v24);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 224LL) = 0LL;
          goto LABEL_33;
        }
      }
      else
      {
        *((double *)v17 + 5) = v19;
        v17[6] = *((_QWORD *)Buf1 + 1);
        v30 = Buf1[2];
        v31 = v17[3];
        *((double *)v18 + 7) = v30;
        v32 = Buf1[3];
        *((double *)v18 + 8) = v32;
        if ( (*(_DWORD *)(*(_QWORD *)(v31 + 40) + 288LL) & 0xF) == 0 )
        {
          v33 = *(_WORD *)(gpsi + 6998LL);
          if ( v33 > 0x60u )
          {
            *((double *)v18 + 7) = (double)v33 * v30 / 96.0;
            *((double *)v18 + 8) = (double)*(unsigned __int16 *)(gpsi + 6998LL) * v32 / 96.0;
            *((double *)v18 + 5) = *Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
            *((double *)v18 + 6) = Buf1[1] * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
          }
        }
      }
      v10 = 0;
LABEL_33:
      if ( (v10 & 0x80000000) != 0 )
        return v10;
      *(_OWORD *)(v18 + 11) = *(_OWORD *)Buf1;
      v34 = *((_OWORD *)Buf1 + 1);
      *((_DWORD *)v18 + 4) |= 2u;
      *(_OWORD *)(v18 + 13) = v34;
      return 0;
    }
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v10;
    v35 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v36 = v35;
    if ( !v35 )
      return v10;
    if ( (*(_DWORD *)(*(_QWORD *)(v35[3] + 40) + 288LL) & 0xF) != 0 || (v37 = *(_WORD *)(gpsi + 6998LL), v37 <= 0x60u) )
    {
      v42 = *(_DWORD *)Buf1;
      v39 = (int *)(v35 + 2);
      v41 = v35 + 2;
      if ( (v35[2] & 2) != 0 )
      {
        *((_DWORD *)v35 + 8) = -(int)((double)v42 * *((double *)v35 + 11));
        v40 = (int)((double)*((int *)Buf1 + 1) * *((double *)v35 + 12));
      }
      else
      {
        *((_DWORD *)v35 + 8) = -v42;
        v40 = *((_DWORD *)Buf1 + 1);
      }
    }
    else
    {
      v38 = *(_DWORD *)Buf1;
      v39 = (int *)(v35 + 2);
      if ( (v35[2] & 2) != 0 )
      {
        *((_DWORD *)v35 + 8) = -(int)((double)v38 * *((double *)v35 + 11));
        v40 = (int)((double)*((int *)Buf1 + 1) * *((double *)v35 + 12));
      }
      else
      {
        *((_DWORD *)v35 + 8) = -EngMulDiv(v38, v37, 96);
        v40 = EngMulDiv(*((_DWORD *)Buf1 + 1), *(unsigned __int16 *)(gpsi + 6998LL), 96);
      }
      v41 = v36 + 2;
    }
    *((_DWORD *)v36 + 9) = -v40;
    v43 = *(_OWORD *)Buf1;
    *v39 = *v41 | 1;
    *(_OWORD *)(v36 + 9) = v43;
    return 0;
  }
  MagpRevokeInputTransfrom();
  if ( !a3 )
    return v10;
  v44 = MagpFindLensContext(v15, a3, v8);
  v6 = (__int64)v44;
  if ( !v44 )
    return v10;
  v47 = *v44;
  v48 = (__int64 *)v44[1];
  if ( *(_QWORD *)(v47 + 8) != v6 || *v48 != v6 )
    goto LABEL_88;
  *v48 = v47;
  *(_QWORD *)(v47 + 8) = v48;
  if ( a3 != -1 )
  {
    v49 = *(_DWORD *)(v6 + 16);
    if ( (v49 & 0x40) != 0 )
    {
      ChangeComposableCursor(0LL);
      *(_DWORD *)(v6 + 16) &= ~0x40u;
      v49 = *(_DWORD *)(v6 + 16);
    }
    if ( (v49 & 0x20) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v50 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 8LL), v45, v46);
      v10 = DwmAsyncMagnDestroy(v50);
    }
    HMAssignmentUnlock(v6 + 24);
    v51 = *(_QWORD *)(v6 + 232);
    if ( v51 )
      Win32FreePool(v51);
    v52 = *(_QWORD *)(v6 + 256);
    if ( v52 )
      Win32FreePool(v52);
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_167;
    goto LABEL_72;
  }
  v53 = *(_QWORD *)(v15 + 16);
  v54 = *(_QWORD *)(v53 + 448);
  if ( *(_QWORD *)(v54 + 232) == v6 )
  {
    v55 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v54 + 8), v45, v46);
    v10 = DwmAsyncMagnSetDesktopColorTransform(v55);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 232LL) = 0LL;
    v53 = *(_QWORD *)(v15 + 16);
  }
  else
  {
    v10 = 0;
  }
  v56 = *(_QWORD *)(v53 + 448);
  if ( *(_QWORD *)(v56 + 224) == v6 )
  {
    v57 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v56 + 8), v45, v46);
    v58 = DwmAsyncMagnSetDesktopTransform(v57, 0);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 448LL) + 224LL) = 0LL;
  }
  else
  {
    v58 = 0;
  }
  if ( (v10 & 0x80000000) == 0 )
  {
    if ( v58 >= 0 )
    {
LABEL_72:
      v10 = 0;
      goto LABEL_167;
    }
    v10 = v58;
  }
LABEL_167:
  if ( v6 )
    Win32FreePool(v6);
  return v10;
}
