/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0039270
 * Callers:
 *     NtUserGetTitleBarInfo @ 0x1C0038FC0 (NtUserGetTitleBarInfo.c)
 *     xxxGetTitleBarInfoEx @ 0x1C0056FA4 (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0026380 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 *     xxxGetSysMenuPtr @ 0x1C0039F88 (xxxGetSysMenuPtr.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C0197CD0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // r12
  int v13; // r15d
  __int64 v14; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // r8
  int v19; // eax
  int v20; // r15d
  int v21; // r12d
  int DpiDependentMetric; // eax
  int v23; // r15d
  int v24; // eax
  int v25; // esi
  int v26; // eax
  __int64 v27; // rsi
  int v28; // ecx
  __int64 v29; // rdx
  char v30; // al
  char v31; // cl
  char v32; // bl
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // r8d
  int v40; // ecx
  __int64 v41; // rcx
  struct _KTHREAD *v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 *v45; // rax
  __int64 v46; // rax
  __int64 SysMenuPtr; // rax
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rsi
  struct _KTHREAD *v51; // r15
  char v52; // r12
  __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rbx
  char v56; // si
  struct _KTHREAD *v57; // r15
  __int64 v58; // rbx
  __int64 *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // r15
  struct _KTHREAD *v62; // r12
  __int64 *v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 *v66; // rax
  int v67; // ecx
  __int64 *v68; // rbx
  int v69; // r12d
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  struct _KTHREAD *v74; // rsi
  __int64 v75; // rbx
  __int64 *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rax
  int v82; // esi
  struct _KTHREAD *v83; // rbx
  __int64 *v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  char v87; // cl
  int v88; // eax
  int v89; // eax
  __int64 v90; // rax
  char v91; // cl
  int v92; // eax
  int v93; // eax
  char *v94; // rcx
  _QWORD v95[2]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v96[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v97; // [rsp+40h] [rbp-39h] BYREF
  __int64 v98; // [rsp+48h] [rbp-31h] BYREF
  __int64 v99; // [rsp+50h] [rbp-29h]
  __int64 v100; // [rsp+58h] [rbp-21h] BYREF
  __int64 v101; // [rsp+60h] [rbp-19h] BYREF
  __int64 v102; // [rsp+68h] [rbp-11h]
  __int64 *v103; // [rsp+70h] [rbp-9h]
  _QWORD v104[4]; // [rsp+78h] [rbp-1h] BYREF
  char v105; // [rsp+E0h] [rbp+67h]
  __int64 *v106; // [rsp+E0h] [rbp+67h]
  unsigned int v107; // [rsp+E8h] [rbp+6Fh]
  unsigned int v108; // [rsp+F0h] [rbp+77h]

  v3 = 0LL;
  v4 = *((unsigned int *)a2 + 5);
  LODWORD(v4) = v4 | 0x100000;
  v105 = 0;
  *((_DWORD *)a2 + 5) = v4;
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 30) & 0xC0) != 0xC0 )
  {
    *((_DWORD *)a2 + 5) = v4 | 0x8000;
    return;
  }
  if ( (*(_BYTE *)(v6 + 31) & 0x20) == 0 && (*(_BYTE *)(v6 + 16) & 8) == 0 )
  {
    *((_DWORD *)a2 + 5) = v4 | 0x10000;
    *(_QWORD *)((char *)a2 + 4) = 0LL;
    *(_QWORD *)((char *)a2 + 12) = 0LL;
    return;
  }
  if ( (*(_DWORD *)(v6 + 232) & 0x8000000) != 0 )
  {
    v7 = *(_WORD *)(v6 + 286);
    if ( !v7 )
      v7 = *(_WORD *)(v6 + 284);
    v8 = v7;
  }
  else if ( (*(_DWORD *)(v6 + 288) & 0xF) == 0
         && (v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
  {
    v8 = 96;
  }
  else
  {
    v8 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
  }
  v10 = 0LL;
  *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v6 + 88);
  v11 = *((_QWORD *)a1 + 5);
  CurrentThread = KeGetCurrentThread();
  v13 = *(_DWORD *)(v11 + 24);
  v108 = *(_DWORD *)(v11 + 28);
  if ( !(unsigned int)IsThreadCrossSessionAttached(v108, v4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  v16 = 0LL;
  if ( *(_DWORD *)(v10 + 624) <= 0x9900u )
    v16 = *(unsigned int *)(v10 + 640);
  v107 = v16;
  if ( (v13 & 0x100) != 0 )
    v17 = 2;
  else
    v17 = (v13 & 0x20000) != 0;
  v18 = v108;
  v19 = v108 & 0xC00000;
  if ( (v108 & 0xC00000) != 0 || (v13 & 1) != 0 )
    ++v17;
  v20 = v16 & 0x10000000;
  if ( (v16 & 0x10000000) != 0 )
  {
    v21 = 0;
  }
  else if ( (v16 & 0x20000000) != 0 )
  {
    v21 = 0;
  }
  else
  {
    v14 = gpsi;
    if ( v8 == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v21 = *(_DWORD *)(gpsi + 2400LL);
    }
    else if ( v8 == 96 )
    {
      v21 = *(_DWORD *)(gpsi + 2520LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheSlot(v8) == -1 )
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, v8);
      else
        DpiDependentMetric = GetDpiDependentMetric(29LL, v8);
      v18 = v108;
      v16 = v107;
      v21 = DpiDependentMetric;
    }
    v19 = v108 & 0xC00000;
  }
  if ( (v18 & 0x40000) != 0
    || v21 > 0 && (LOBYTE(v14) = v19 != 12582912, v19 == 12582912 || (v18 & 0x40000) != 0) && (v16 & 0x30000000) == 0 )
  {
    if ( v20 )
    {
      v23 = 1;
    }
    else
    {
      v23 = (int)(v8 * *(_DWORD *)(Get96DpiServerInfo(v14, v16, v18, 1LL) + 4) + 48) / 96;
      if ( (v107 & 0x20000000) != 0 )
      {
        if ( v8 == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v24 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( v8 == 96 )
        {
          v24 = *(_DWORD *)(gpsi + 2520LL);
        }
        else if ( (unsigned int)GetDpiCacheSlot(v8) == -1 )
        {
          v24 = ScaleSystemMetricForDPIWithoutCache(29LL, v8);
        }
        else
        {
          v24 = GetDpiDependentMetric(29LL, v8);
        }
        v23 += v24;
      }
    }
    v17 += v21 + v23;
  }
  v25 = -v17;
  *((_DWORD *)a2 + 1) -= v25;
  *((_DWORD *)a2 + 3) += v25;
  *((_DWORD *)a2 + 2) -= v25;
  *((_DWORD *)a2 + 4) += v25;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v27 = 120LL * (int)GetDpiCacheSlot(v8);
    v28 = *(_DWORD *)(v27 + gpsi + 2292);
    if ( v28 == -1 )
    {
      EnsureDpiDepSysMetCacheForPlateau(v8);
      v28 = *(_DWORD *)(v27 + gpsi + 2292);
      if ( v28 == -1 )
        v28 = 0;
    }
    v26 = v28 + *((_DWORD *)a2 + 2);
  }
  else
  {
    v26 = *((_DWORD *)a2 + 2) + GetDpiDependentMetric(22LL, v8);
  }
  *((_DWORD *)a2 + 4) = v26;
  v29 = *((_QWORD *)a1 + 5);
  v30 = *(_BYTE *)(v29 + 30);
  if ( (v30 & 8) == 0 )
    goto LABEL_84;
  v31 = *(_BYTE *)(v29 + 24);
  if ( v31 < 0 )
    goto LABEL_84;
  if ( (v30 & 0xC0) != 0x40 && (v31 & 1) == 0 )
    goto LABEL_81;
  if ( (*(_BYTE *)(v29 + 21) & 2) != 0 )
  {
    v29 = 0LL;
  }
  else
  {
    SmartObjStackRefBase<tagCLS>::Init(v95, *((_QWORD *)a1 + 14));
    v29 = 1LL;
    v105 = 1;
    if ( **(_WORD **)(*(_QWORD *)v95[0] + 8LL) == 0x8002 )
    {
      v32 = 1;
      v105 = 1;
      goto LABEL_70;
    }
  }
  v32 = 0;
LABEL_70:
  if ( (v29 & 1) != 0 )
  {
    v33 = (unsigned int)v29 & 0xFFFFFFFE;
    v105 = v33;
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v95, v33);
  }
  if ( !v32 )
  {
    v29 = *((_QWORD *)a1 + 5);
    v34 = *(_QWORD *)(v29 + 264);
    if ( v34 )
    {
      if ( v34 == *(_QWORD *)(gpsi + 6968LL) )
        goto LABEL_84;
      goto LABEL_81;
    }
    v35 = *(_QWORD *)(v29 + 272);
    if ( v35 && v35 != *(_QWORD *)(gpsi + 6976LL) )
    {
LABEL_81:
      v39 = *((_DWORD *)a2 + 4);
      v40 = *((_DWORD *)a2 + 2);
      if ( (*(_BYTE *)(v29 + 26) & 0x40) != 0 )
        *((_DWORD *)a2 + 3) += v40 - v39 + 1;
      else
        *((_DWORD *)a2 + 1) += v39 - v40 - 1;
      goto LABEL_84;
    }
    SmartObjStackRefBase<tagCLS>::Init(v96, *((_QWORD *)a1 + 14));
    v36 = *(_QWORD *)v96[0];
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v96, v37);
    v38 = *(_QWORD *)(v36 + 112);
    if ( v38 )
    {
      v29 = 3LL * (unsigned __int16)*(_DWORD *)(gpsi + 6968LL);
      if ( v38 != *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(gpsi + 6968LL)) )
      {
        v29 = *((_QWORD *)a1 + 5);
        goto LABEL_81;
      }
    }
  }
LABEL_84:
  v41 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v41 + 30) & 8) != 0 || (*(_BYTE *)(v41 + 21) & 2) == 0 )
  {
    v42 = KeGetCurrentThread();
    v43 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v29) )
    {
      v45 = (__int64 *)PsGetThreadWin32Thread(v42);
      if ( v45 )
        v43 = *v45;
    }
    v98 = 0LL;
    v97 = (__int64 *)gSmartObjNullRef;
    v98 = *(_QWORD *)(v43 + 1456);
    *(_QWORD *)(v43 + 1456) = &v98;
    v46 = *((_QWORD *)a1 + 14);
    v99 = 0LL;
    if ( (*(_BYTE *)(*(_QWORD *)(v46 + 8) + 9LL) & 2) != 0 )
      goto LABEL_91;
    SysMenuPtr = xxxGetSysMenuPtr(a1);
    v48 = (__int64)v97;
    v49 = SysMenuPtr;
    v99 = 0LL;
    if ( SysMenuPtr != *v97 )
    {
      v48 = (__int64)v97;
      if ( v97 != (__int64 *)gSmartObjNullRef )
      {
        --*((_DWORD *)v97 + 2);
        v48 = (__int64)v97;
        if ( !*((_DWORD *)v97 + 2) )
        {
          if ( *((_BYTE *)v97 + 12) )
            Win32FreeToPagedLookasideList(gpStackRefLookAside, v97);
        }
      }
      if ( v49 )
      {
        v97 = *(__int64 **)(v49 + 152);
        ++*((_DWORD *)v97 + 2);
      }
      else
      {
        v97 = (__int64 *)gSmartObjNullRef;
      }
      if ( v99 )
        goto LABEL_102;
    }
    if ( *v97 )
    {
LABEL_102:
      v50 = 0LL;
      v51 = KeGetCurrentThread();
      v52 = v105 | 2;
      v53 = *v97;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v48, v44) )
      {
        v54 = (__int64 *)PsGetThreadWin32Thread(v51);
        if ( v54 )
          v50 = *v54;
      }
      v104[0] = 0LL;
      v103 = (__int64 *)gSmartObjNullRef;
      if ( v53 )
      {
        v103 = *(__int64 **)(v53 + 152);
        ++*(_DWORD *)(*(_QWORD *)(v53 + 152) + 8LL);
      }
      v104[0] = *(_QWORD *)(v50 + 1456);
      *(_QWORD *)(v50 + 1456) = v104;
      v104[1] = v99;
      v55 = *v103;
      if ( *v103 != *v97 )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v97);
        if ( v55 )
        {
          v97 = *(__int64 **)(v55 + 152);
          ++*((_DWORD *)v97 + 2);
        }
        else
        {
          v97 = (__int64 *)gSmartObjNullRef;
        }
      }
      if ( v99 || *v97 )
      {
        v56 = 0;
        goto LABEL_116;
      }
    }
    else
    {
      v52 = v105;
    }
    v56 = 1;
LABEL_116:
    if ( (v52 & 2) != 0 )
    {
      v57 = KeGetCurrentThread();
      v58 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v48, v44) )
      {
        v59 = (__int64 *)PsGetThreadWin32Thread(v57);
        if ( v59 )
          v58 = *v59;
      }
      if ( v103 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v103 + 2) )
      {
        if ( *((_BYTE *)v103 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v103);
      }
      v60 = *(_QWORD **)(v58 + 1456);
      if ( v60 )
        *(_QWORD *)(v58 + 1456) = *v60;
    }
    if ( v56 )
    {
LABEL_91:
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v97, v44);
LABEL_175:
      *((_DWORD *)a2 + 10) |= 1u;
LABEL_176:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x10) != 0 )
        *((_DWORD *)a2 + 10) |= 8u;
      goto LABEL_178;
    }
    v61 = v99;
    if ( !v99 )
      v61 = *v97;
    v62 = KeGetCurrentThread();
    v63 = 0LL;
    v106 = 0LL;
    v64 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v48, v44) )
    {
      v66 = (__int64 *)PsGetThreadWin32Thread(v62);
      if ( v66 )
        v64 = *v66;
    }
    v101 = 0LL;
    v100 = gSmartObjNullRef;
    v101 = *(_QWORD *)(v64 + 1456);
    *(_QWORD *)(v64 + 1456) = &v101;
    v102 = 0LL;
    if ( !v61 || (v67 = *(_DWORD *)(*(_QWORD *)(v61 + 40) + 44LL)) == 0 )
    {
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v100, v65);
      goto LABEL_157;
    }
    v68 = *(__int64 **)(v61 + 88);
    v69 = 0;
    if ( v67 > 0 )
    {
      while ( 1 )
      {
        v70 = v68[2];
        v71 = *(unsigned int *)(*v68 + 8);
        if ( v70 )
        {
          if ( (_DWORD)v71 == 61536 )
          {
            v102 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(&v100, v61);
            v70 = v68[2];
            v106 = v68;
          }
          v63 = (__int64 *)MNLookUpItem(v70, 61536LL, 0LL, 0LL);
          if ( v63 )
            goto LABEL_144;
        }
        else if ( (_DWORD)v71 == 61536 )
        {
          v63 = v68;
LABEL_144:
          SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v100, v71);
          if ( !v63 )
            goto LABEL_157;
          goto LABEL_163;
        }
        ++v69;
        v68 += 12;
        if ( v69 >= *(_DWORD *)(*(_QWORD *)(v61 + 40) + 44LL) )
        {
          v63 = v106;
          break;
        }
      }
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)&v100) )
      goto LABEL_144;
    v74 = KeGetCurrentThread();
    v75 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v72, v71) )
    {
      v76 = (__int64 *)PsGetThreadWin32Thread(v74);
      if ( v76 )
        v75 = *v76;
    }
    if ( v100 != gSmartObjNullRef && !--*(_DWORD *)(v100 + 8) )
    {
      if ( *(_BYTE *)(v100 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v100);
    }
    v77 = *(_QWORD **)(v75 + 1456);
    if ( v77 )
      *(_QWORD *)(v75 + 1456) = *v77;
LABEL_157:
    v78 = v99;
    if ( !v99 )
      v78 = *v97;
    v63 = (__int64 *)MNLookUpItem(v78, 32864LL, 0LL, 0LL);
    if ( v63 )
      goto LABEL_163;
    v79 = v99;
    if ( !v99 )
      v79 = *v97;
    v63 = (__int64 *)MNLookUpItem(v79, 49264LL, 0LL, 0LL);
    if ( v63 )
    {
LABEL_163:
      v81 = *v63;
      v82 = 1;
      v80 = *(unsigned int *)(v81 + 4);
      if ( (v80 & 3) == 0 )
      {
LABEL_165:
        v83 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v80, v73) )
        {
          v84 = (__int64 *)PsGetThreadWin32Thread(v83);
          if ( v84 )
            v3 = *v84;
        }
        if ( v97 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v97 + 2) )
        {
          if ( *((_BYTE *)v97 + 12) )
            Win32FreeToPagedLookasideList(gpStackRefLookAside, v97);
        }
        v85 = *(_QWORD **)(v3 + 1456);
        if ( v85 )
          *(_QWORD *)(v3 + 1456) = *v85;
        if ( v82 )
          goto LABEL_176;
        goto LABEL_175;
      }
    }
    v82 = 0;
    goto LABEL_165;
  }
  *((_DWORD *)a2 + 10) |= 0x8000u;
LABEL_178:
  v86 = *((_QWORD *)a1 + 5);
  v87 = *(_BYTE *)(v86 + 30);
  if ( (v87 & 8) != 0 || (*(_BYTE *)(v86 + 21) & 2) == 0 )
  {
    if ( (v87 & 1) == 0 )
    {
      v88 = *((_DWORD *)a2 + 8);
      if ( (v87 & 2) != 0 )
        v89 = v88 | 1;
      else
        v89 = v88 | 0x8000;
      *((_DWORD *)a2 + 8) = v89;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x20) != 0 )
      *((_DWORD *)a2 + 8) |= 8u;
  }
  else
  {
    *((_DWORD *)a2 + 8) |= 0x8000u;
  }
  v90 = *((_QWORD *)a1 + 5);
  v91 = *(_BYTE *)(v90 + 30);
  if ( (v91 & 8) != 0 || (*(_BYTE *)(v90 + 21) & 2) == 0 )
  {
    if ( (v91 & 2) == 0 )
    {
      v92 = *((_DWORD *)a2 + 7);
      if ( (v91 & 1) != 0 )
        v93 = v92 | 1;
      else
        v93 = v92 | 0x8000;
      *((_DWORD *)a2 + 7) = v93;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x40) != 0 )
      *((_DWORD *)a2 + 7) |= 8u;
  }
  else
  {
    *((_DWORD *)a2 + 7) |= 0x8000u;
  }
  v94 = (char *)*((_QWORD *)a1 + 5);
  if ( (v94[25] & 4) == 0 || (v94[30] & 3) != 0 )
  {
    *((_DWORD *)a2 + 9) |= 0x8000u;
  }
  else if ( v94[21] < 0 )
  {
    *((_DWORD *)a2 + 9) |= 8u;
  }
  *((_DWORD *)a2 + 6) = 0x8000;
}
