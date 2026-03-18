/*
 * XREFs of MagSetLensContextInformation @ 0x1C01BCC24
 * Callers:
 *     MagSlicerControl @ 0x1C01BD9C0 (MagSlicerControl.c)
 *     NtUserMagSetContextInformation @ 0x1C0219CA0 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C001D364 (MagpFindThreadContext.c)
 *     MagpRevokeInputTransfrom @ 0x1C00C97E0 (MagpRevokeInputTransfrom.c)
 *     memcmp @ 0x1C015AFC0 (memcmp.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ChangeComposableCursor @ 0x1C01B871C (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01BC124 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01BC168 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C0258184 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C0258258 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0258314 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1C0258404 (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C02584C4 (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x1C0258594 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C025879C (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C025889C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C02589AC (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, double *Buf1)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v10; // edi
  _QWORD *ThreadContext; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 *v17; // rax
  __int64 *v18; // r15
  double v19; // xmm0_8
  __int64 v20; // rbx
  bool v21; // zf
  __int64 v22; // rdx
  __int64 *v23; // rax
  _QWORD *v24; // rax
  int v25; // ebx
  void *v26; // rax
  _QWORD *v27; // rax
  int v28; // ebx
  void *v29; // rax
  _QWORD *v30; // rax
  int v31; // ebx
  void *v32; // rax
  double v33; // xmm1_8
  __int64 v34; // rax
  double v35; // xmm2_8
  unsigned __int16 v36; // cx
  __int128 v37; // xmm1
  __int64 *v38; // rax
  __int64 *v39; // rbx
  unsigned __int16 v40; // dx
  INT v41; // ecx
  int *v42; // rdi
  INT v43; // eax
  _DWORD *v44; // rcx
  int v45; // edx
  __int128 v46; // xmm0
  __int64 *v47; // rax
  __int64 v48; // rdx
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
  void *v62; // rax
  int v63; // eax
  unsigned int *v64; // rbx
  int v65; // ecx
  unsigned int v66; // eax
  __int64 v67; // r13
  __int64 *v68; // rax
  __int64 *v69; // rax
  __int64 v70; // rdx
  __int64 *v71; // rsi
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 *v74; // rax
  void *v75; // rax
  int v76; // eax
  void *v77; // rax
  void *v78; // rax
  unsigned int v79; // eax
  void *v80; // rax
  __int64 *v81; // rax
  __int64 v82; // rdx
  __int64 *v83; // rsi
  _QWORD *v84; // rcx
  void *v85; // rax
  unsigned int v86; // eax
  void *v87; // rax
  int v88; // ebx
  __int64 *v89; // rax
  __int64 *v90; // rsi
  int v91; // ebx
  __int64 *v92; // rsi
  __int64 v93; // r11
  __int64 v94; // rdx
  int v95; // ecx
  __int64 v96; // rcx
  void *v97; // rax
  __int64 v98; // rcx
  int v99; // eax
  unsigned int v100; // eax
  unsigned int v101; // ebx
  char *v102; // rdx
  __int64 *LensContext; // rsi
  __int64 v104; // rdi
  __int64 v105; // r12
  _QWORD *v106; // rcx
  void *v107; // rax
  __int64 v108; // rcx
  int v109; // eax
  unsigned int v110; // eax
  __int64 v112; // [rsp+30h] [rbp-30h]
  __int128 v113; // [rsp+40h] [rbp-20h] BYREF
  __int64 v114; // [rsp+50h] [rbp-10h]

  v6 = 0LL;
  *(_QWORD *)&v113 = 0LL;
  v7 = 0LL;
  v112 = 0LL;
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
        v101 = *(_DWORD *)Buf1 + *((_DWORD *)Buf1 + 1);
        if ( v101 > 0x19 )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        LensContext = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !LensContext )
          return v10;
        v104 = v101;
        if ( v101 )
        {
          v105 = Win32AllocPool(8LL * v101, 1735226197LL);
          if ( !v105 )
            return (unsigned int)-1073741801;
        }
        else
        {
          v105 = v113;
        }
        *(double *)&v113 = *Buf1;
        *((_QWORD *)&v113 + 1) = v105;
        if ( v101 )
        {
          v106 = (_QWORD *)v105;
          v102 = (char *)Buf1 - v105;
          do
          {
            *v106 = *(_QWORD *)((char *)v106 + (_QWORD)v102 + 8);
            ++v106;
            --v104;
          }
          while ( v104 );
        }
        if ( (LensContext[2] & 0x20) == 0 )
        {
          v107 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 8LL), v102);
          v10 = DwmAsyncMagnSetWindowFilterList(v107);
          if ( (v10 & 0x80000000) != 0 )
          {
LABEL_166:
            if ( !v105 )
              return v10;
            Win32FreePool(v105);
            goto LABEL_168;
          }
        }
        v108 = LensContext[29];
        if ( v108 )
        {
          Win32FreePool(v108);
          LensContext[29] = 0LL;
        }
        *((_DWORD *)LensContext + 56) = *(_DWORD *)Buf1;
        *((_DWORD *)LensContext + 57) = *((_DWORD *)Buf1 + 1);
        v109 = *((_DWORD *)LensContext + 4);
        LensContext[29] = v105;
        if ( v101 )
          v110 = v109 | 8;
        else
          v110 = v109 & 0xFFFFFFF7;
        *((_DWORD *)LensContext + 4) = v110;
        v10 = 0;
        break;
      case 7:
        if ( *(_DWORD *)Buf1 > 6u )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v92 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !v92 )
          return v10;
        if ( (_DWORD)v93 )
        {
          v112 = Win32AllocPool(24 * v93, 1735226197LL);
          v7 = v112;
          if ( !v112 )
            return (unsigned int)-1073741801;
        }
        v94 = 0LL;
        v95 = *(_DWORD *)Buf1;
        *(double *)((char *)&v113 + 4) = *(double *)((char *)Buf1 + 4);
        HIDWORD(v113) = *((_DWORD *)Buf1 + 3);
        LODWORD(v113) = v95;
        v114 = v7;
        if ( v95 )
        {
          do
          {
            v96 = 3 * v94;
            v94 = (unsigned int)(v94 + 1);
            *(_OWORD *)(v7 + 8 * v96) = *(_OWORD *)&Buf1[v96 + 2];
            *(double *)(v7 + 8 * v96 + 16) = Buf1[v96 + 4];
          }
          while ( (unsigned int)v94 < *(_DWORD *)Buf1 );
        }
        if ( (v92[2] & 0x20) != 0 )
        {
LABEL_140:
          v98 = v92[32];
          if ( v98 )
          {
            Win32FreePool(v98);
            v92[32] = 0LL;
          }
          *((_DWORD *)v92 + 60) = *(_DWORD *)Buf1;
          *((_DWORD *)v92 + 61) = *((_DWORD *)Buf1 + 1);
          *((_DWORD *)v92 + 62) = *((_DWORD *)Buf1 + 2);
          *((_DWORD *)v92 + 63) = *((_DWORD *)Buf1 + 3);
          v99 = *((_DWORD *)v92 + 4);
          v92[32] = v7;
          if ( *(_DWORD *)Buf1 )
            v100 = v99 | 0x10;
          else
            v100 = v99 & 0xFFFFFFEF;
          *((_DWORD *)v92 + 4) = v100;
          return 0;
        }
        v97 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 8LL), v94);
        v10 = DwmAsyncMagnSetWindowSharedTextures(v97);
        if ( (v10 & 0x80000000) == 0 )
        {
          v7 = v112;
          goto LABEL_140;
        }
        break;
      case 9:
        v88 = *(_DWORD *)Buf1;
        if ( (*(_DWORD *)Buf1 & 0xFFFFFFFE) != 0 )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v89 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v90 = v89;
        if ( !v89 )
          return v10;
        v91 = v88 & 1;
        if ( ((*((_DWORD *)v89 + 4) >> 6) & 1) != v91 )
        {
          ChangeComposableCursor(v91);
          *((_DWORD *)v90 + 4) = v90[2] & 0xFFFFFFBF | (v91 << 6);
        }
        return 0;
      case 10:
        if ( !a3 )
          return v10;
        v81 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v83 = v81;
        if ( !v81 )
          return v10;
        if ( a3 == -1 )
        {
          v84 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 8LL);
          v85 = (void *)ReferenceDwmApiPort(v84, *v84);
          v86 = DwmAsyncMagnSetDesktopSamplingMode(v85);
        }
        else
        {
          if ( (v81[2] & 0x20) != 0 )
          {
            v10 = 0;
            goto LABEL_123;
          }
          v87 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 8LL), v82);
          v86 = DwmAsyncMagnSetSamplingMode(v87);
        }
        v10 = v86;
LABEL_123:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *((_DWORD *)v83 + 66) = *(_DWORD *)Buf1;
        return 0;
      default:
        return v10;
    }
    if ( !v112 )
      return v10;
    Win32FreePool(v112);
    v105 = 0LL;
    goto LABEL_166;
  }
  if ( a5 == 5 )
  {
    if ( !a3 )
      return v10;
    v69 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v71 = v69;
    if ( !v69 )
      return v10;
    if ( a3 == -1 )
    {
      v72 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL);
      v21 = memcmp(Buf1, &gMagEffectIdentity, 0x64uLL) == 0;
      v74 = *(__int64 **)(v72 + 232);
      if ( v21 )
      {
        if ( v74 )
        {
          if ( v74 != v71 )
            return v10;
          v75 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v72 + 8), v73);
          v10 = DwmAsyncMagnSetDesktopColorTransform(v75);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 232LL) = 0LL;
          goto LABEL_101;
        }
        goto LABEL_100;
      }
      if ( !v74 )
      {
        v77 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v72 + 8), v73);
        v10 = DwmAsyncMagnSetDesktopColorTransform(v77);
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 232LL) = v71;
        goto LABEL_101;
      }
      if ( v74 != v71 )
        return v10;
      v78 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v72 + 8), v73);
      v79 = DwmAsyncMagnSetDesktopColorTransform(v78);
    }
    else
    {
      if ( (v69[2] & 0x20) != 0 )
      {
LABEL_100:
        v10 = 0;
LABEL_101:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_OWORD *)(v71 + 15) = *(_OWORD *)Buf1;
        *(_OWORD *)(v71 + 17) = *((_OWORD *)Buf1 + 1);
        *(_OWORD *)(v71 + 19) = *((_OWORD *)Buf1 + 2);
        *(_OWORD *)(v71 + 21) = *((_OWORD *)Buf1 + 3);
        *(_OWORD *)(v71 + 23) = *((_OWORD *)Buf1 + 4);
        *(_OWORD *)(v71 + 25) = *((_OWORD *)Buf1 + 5);
        v76 = *((_DWORD *)Buf1 + 24);
        *((_DWORD *)v71 + 4) |= 4u;
        *((_DWORD *)v71 + 54) = v76;
        return 0;
      }
      v80 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 8LL), v70);
      v79 = DwmAsyncMagnSetWindowColorTransform(v80);
    }
    v10 = v79;
    goto LABEL_101;
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
        v62 = (void *)ReferenceDwmApiPort(*(unsigned int *)(*(_QWORD *)(a3 + 40) + 288LL), v61);
        v63 = DwmAsyncMagnCreate(v62);
        v10 = v63;
        if ( v63 == -1073741823 )
        {
          *(_DWORD *)(v6 + 16) |= 0x20u;
        }
        else if ( v63 < 0 )
        {
          goto LABEL_168;
        }
        v8 = a4;
      }
      v64 = (unsigned int *)(v6 + 16);
      memset((void *)(v6 + 16), 0, 0x100uLL);
      *(double *)(v6 + 40) = gOneDouble;
      *(double *)(v6 + 48) = gOneDouble;
      if ( a3 == -1 )
      {
        *(_QWORD *)(v6 + 24) = -1LL;
      }
      else
      {
        *(_QWORD *)&v113 = v6 + 24;
        *((_QWORD *)&v113 + 1) = a3;
        HMAssignmentLock(&v113);
      }
      v65 = 0;
      if ( v8 == 1 )
        v65 = 128;
      v66 = *v64;
      *(_DWORD *)(v6 + 264) = 0;
      v67 = v15 + 40;
      *v64 = v66 & 0xFFFFFF7F | v65;
      v68 = *(__int64 **)(v67 + 8);
      if ( *v68 == v67 )
      {
        *(_QWORD *)v6 = v67;
        *(_QWORD *)(v6 + 8) = v68;
        *v68 = v6;
        *(_QWORD *)(v67 + 8) = v6;
        return 0;
      }
LABEL_89:
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
        v20 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL);
        v21 = memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) == 0;
        v23 = *(__int64 **)(v20 + 224);
        if ( !v21 )
        {
          if ( v23 )
          {
            if ( v18 != v23 )
              return v10;
            v30 = *(_QWORD **)(v20 + 8);
            v31 = (int)Buf1[3];
            v32 = (void *)ReferenceDwmApiPort(*v30, v22);
            v10 = DwmAsyncMagnSetDesktopTransform(v32, v31);
          }
          else
          {
            v27 = *(_QWORD **)(v20 + 8);
            v28 = (int)Buf1[3];
            v29 = (void *)ReferenceDwmApiPort(*v27, v22);
            v10 = DwmAsyncMagnSetDesktopTransform(v29, v28);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 224LL) = v18;
          }
          goto LABEL_33;
        }
        if ( v23 )
        {
          if ( v18 != v23 )
            return v10;
          v24 = *(_QWORD **)(v20 + 8);
          v25 = (int)Buf1[3];
          v26 = (void *)ReferenceDwmApiPort(*v24, v22);
          v10 = DwmAsyncMagnSetDesktopTransform(v26, v25);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 224LL) = 0LL;
          goto LABEL_33;
        }
      }
      else
      {
        *((double *)v17 + 5) = v19;
        v17[6] = *((_QWORD *)Buf1 + 1);
        v33 = Buf1[2];
        v34 = v17[3];
        *((double *)v18 + 7) = v33;
        v35 = Buf1[3];
        *((double *)v18 + 8) = v35;
        if ( (*(_DWORD *)(*(_QWORD *)(v34 + 40) + 288LL) & 0xF) == 0 )
        {
          v36 = *(_WORD *)(gpsi + 6998LL);
          if ( v36 > 0x60u )
          {
            *((double *)v18 + 7) = (double)v36 * v33 / 96.0;
            *((double *)v18 + 8) = (double)*(unsigned __int16 *)(gpsi + 6998LL) * v35 / 96.0;
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
      v37 = *((_OWORD *)Buf1 + 1);
      *((_DWORD *)v18 + 4) |= 2u;
      *(_OWORD *)(v18 + 13) = v37;
      return 0;
    }
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v10;
    v38 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v39 = v38;
    if ( !v38 )
      return v10;
    if ( (*(_DWORD *)(*(_QWORD *)(v38[3] + 40) + 288LL) & 0xF) != 0 || (v40 = *(_WORD *)(gpsi + 6998LL), v40 <= 0x60u) )
    {
      v45 = *(_DWORD *)Buf1;
      v42 = (int *)(v38 + 2);
      v44 = v38 + 2;
      if ( (v38[2] & 2) != 0 )
      {
        *((_DWORD *)v38 + 8) = -(int)((double)v45 * *((double *)v38 + 11));
        v43 = (int)((double)*((int *)Buf1 + 1) * *((double *)v38 + 12));
      }
      else
      {
        *((_DWORD *)v38 + 8) = -v45;
        v43 = *((_DWORD *)Buf1 + 1);
      }
    }
    else
    {
      v41 = *(_DWORD *)Buf1;
      v42 = (int *)(v38 + 2);
      if ( (v38[2] & 2) != 0 )
      {
        *((_DWORD *)v38 + 8) = -(int)((double)v41 * *((double *)v38 + 11));
        v43 = (int)((double)*((int *)Buf1 + 1) * *((double *)v38 + 12));
      }
      else
      {
        *((_DWORD *)v38 + 8) = -EngMulDiv(v41, v40, 96);
        v43 = EngMulDiv(*((_DWORD *)Buf1 + 1), *(unsigned __int16 *)(gpsi + 6998LL), 96);
      }
      v44 = v39 + 2;
    }
    *((_DWORD *)v39 + 9) = -v43;
    v46 = *(_OWORD *)Buf1;
    *v42 = *v44 | 1;
    *(_OWORD *)(v39 + 9) = v46;
    return 0;
  }
  MagpRevokeInputTransfrom();
  if ( !a3 )
    return v10;
  v47 = MagpFindLensContext(v15, a3, v8);
  v6 = (__int64)v47;
  if ( !v47 )
    return v10;
  v49 = *v47;
  v50 = (__int64 *)v47[1];
  if ( *(_QWORD *)(v49 + 8) != v6 || *v50 != v6 )
    goto LABEL_89;
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
      v52 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 8LL), v48);
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
      goto LABEL_168;
    goto LABEL_72;
  }
  v55 = *(_QWORD *)(v15 + 16);
  v56 = *(_QWORD *)(v55 + 456);
  if ( *(_QWORD *)(v56 + 232) == v6 )
  {
    v57 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v56 + 8), v48);
    v10 = DwmAsyncMagnSetDesktopColorTransform(v57);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 232LL) = 0LL;
    v55 = *(_QWORD *)(v15 + 16);
  }
  else
  {
    v10 = 0;
  }
  v58 = *(_QWORD *)(v55 + 456);
  if ( *(_QWORD *)(v58 + 224) == v6 )
  {
    v59 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v58 + 8), v48);
    v60 = DwmAsyncMagnSetDesktopTransform(v59, 0);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 456LL) + 224LL) = 0LL;
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
      goto LABEL_168;
    }
    v10 = v60;
  }
LABEL_168:
  if ( v6 )
    Win32FreePool(v6);
  return v10;
}
