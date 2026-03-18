/*
 * XREFs of GreCombineRgn @ 0x1C0023180
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C00317C0 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C0033A78 (GetMonitorDC.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74 (-UpdateUserScreen@@YAJXZ.c)
 *     UserValidateCopyRgn @ 0x1C0064270 (UserValidateCopyRgn.c)
 *     NtGdiCombineRgn @ 0x1C0069B40 (NtGdiCombineRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A8988 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     EngCombineRgn @ 0x1C00D91E0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00D9280 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C00D9570 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C00D9770 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00D9810 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00D98B0 (EngXorRgn.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0020A48 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0020A90 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0020FD0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0021B60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0021C40 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00220E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0023E80 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0023EB0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0023F60 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0024040 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C00242E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     HmgReplaceObject @ 0x1C00247E0 (HmgReplaceObject.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C0035990 (Win32AllocateFromPagedLookasideList.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PushThreadGuardedObject @ 0x1C0044C70 (PushThreadGuardedObject.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v4; // rsi
  int v8; // r15d
  unsigned int v9; // edi
  int v10; // r13d
  __int64 v11; // rbx
  struct REGION *v12; // rbx
  _QWORD *v13; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct OBJECT *v17; // rdi
  unsigned int v18; // r8d
  struct RGNOBJ *v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // edi
  unsigned int v23; // r14d
  unsigned int v24; // r13d
  __int64 v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  char *v30; // rdi
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // r14
  __int64 v34; // rax
  char **v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  char **v43; // rax
  __int64 v44; // rax
  char **v45; // rcx
  __int64 v46; // rdi
  struct OBJECT *v47; // rbx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  char *v51; // r14
  int v52; // ecx
  BOOL v53; // r12d
  char *v54; // rsi
  __int64 v55; // rax
  char **v56; // rcx
  __int64 v57; // rax
  char **v58; // rcx
  struct OBJECT *v59; // rsi
  __int64 v60; // rax
  _QWORD *v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  char *v65; // rdi
  __int64 v66; // rax
  char **v67; // rcx
  __int64 v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rdi
  int v72; // eax
  struct OBJECT **v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned __int64 v76; // r9
  unsigned __int64 v77; // xmm1_8
  unsigned __int64 v78; // rax
  LONG v79; // r8d
  unsigned __int64 v80; // xmm2_8
  LONG v81; // edx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // r9
  unsigned __int64 v84; // r10
  unsigned int v85; // eax
  __int64 v86; // r8
  char *v87; // rdx
  char *v88; // rcx
  struct OBJECT *v89; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v90; // [rsp+30h] [rbp-D8h]
  struct OBJECT *v91; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v92; // [rsp+48h] [rbp-C0h]
  void *Src; // [rsp+50h] [rbp-B8h]
  __int64 v94; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v95; // [rsp+68h] [rbp-A0h]
  __int64 v96; // [rsp+70h] [rbp-98h] BYREF
  int v97; // [rsp+80h] [rbp-88h]
  struct _RECTL v98; // [rsp+88h] [rbp-80h] BYREF
  __int64 v99; // [rsp+98h] [rbp-70h]
  __int64 v100; // [rsp+A0h] [rbp-68h] BYREF
  int v101; // [rsp+A8h] [rbp-60h]
  _QWORD v102[2]; // [rsp+B0h] [rbp-58h] BYREF
  int v103; // [rsp+C0h] [rbp-48h]
  _QWORD v104[3]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v105[3]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v106[3]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v107[2]; // [rsp+110h] [rbp+8h] BYREF
  int v109; // [rsp+180h] [rbp+78h]
  BOOL v110; // [rsp+180h] [rbp+78h]

  v4 = a4;
  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 != 5 )
    {
      if ( a1 != a2 && a1 != a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v106, a2, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v105, a3, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v104, a1, 0);
        v74 = v106[0];
        if ( !v106[0] )
          goto LABEL_197;
        v75 = v105[0];
        if ( v105[0] && v104[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v104, (struct RGNOBJ *)v106, (struct RGNOBJ *)v105, v4) )
          {
            v24 = RGNOBJ::iComplexity((RGNOBJ *)v104);
LABEL_167:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v104);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v105);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v106);
            return v24;
          }
          v74 = v106[0];
          v75 = v105[0];
        }
        if ( !v74 || !v75 || !v104[0] )
LABEL_197:
          EngSetLastError(6u);
        v24 = 0;
        goto LABEL_167;
      }
      if ( a2 == a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v107, a1, 0);
        v86 = v107[0];
        if ( v107[0] )
        {
          if ( (unsigned int)(v4 - 3) <= 1 )
          {
            *(_DWORD *)(v107[0] + 80LL) = 120;
            *(_QWORD *)(v86 + 84) = 1LL;
            *(_QWORD *)(v86 + 92) = 0LL;
            *(_DWORD *)(v86 + 100) = 0;
            *(_DWORD *)(v86 + 104) = 0;
            *(_DWORD *)(v86 + 108) = 0x80000000;
            *(_QWORD *)(v86 + 112) = 0x7FFFFFFFLL;
            *(_QWORD *)(v86 + 40) = v86 + 120;
          }
          v24 = RGNOBJ::iComplexity((RGNOBJ *)v107);
        }
        else
        {
          EngSetLastError(6u);
          v24 = 0;
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v107);
        return v24;
      }
      v8 = 0;
      v9 = 216;
      LODWORD(v90) = 0;
      if ( gulGdiHmgrTraceObjectType == 4 )
      {
        v9 = 376;
        v10 = 1;
      }
      else
      {
        v10 = 0;
      }
      if ( dword_1C01A2650 >= v9
        && (v11 = qword_1C01A26E0, (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0)
        && (v12 = (struct REGION *)Win32AllocateFromPagedLookasideListImpl(v11)) != 0LL )
      {
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        *((_QWORD *)v12 + 2) = 0LL;
        if ( v10 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v12 + v9 - 160), 0LL);
        *((_WORD *)v12 + 7) = 0x8000;
      }
      else
      {
        v12 = (struct REGION *)PALLOCMEM2(v9, 0x34306847u, 0);
        if ( !v12 )
        {
          EngSetLastError(8u);
          v12 = 0LL;
          v89 = 0LL;
LABEL_14:
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          {
            if ( v12 )
            {
              v13 = (_QWORD *)((char *)v12 + 48);
              if ( v12 != (struct REGION *)-48LL )
              {
                KeEnterCriticalRegion();
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *((_QWORD *)v12 + 8) = v12;
                *((_QWORD *)v12 + 9) = CleanUpRegion;
                if ( ThreadWin32Thread )
                {
                  v15 = *(_QWORD *)(ThreadWin32Thread + 88);
                  v16 = (_QWORD *)(ThreadWin32Thread + 88);
                  if ( *(_QWORD **)(v15 + 8) != v16 )
                    __fastfail(3u);
                  *v13 = v15;
                  *((_QWORD *)v12 + 7) = v16;
                  *(_QWORD *)(v15 + 8) = v13;
                  *v16 = v13;
                }
                else
                {
                  *((_QWORD *)v12 + 7) = (char *)v12 + 48;
                  *v13 = v13;
                }
                KeLeaveCriticalRegion();
              }
            }
          }
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v91, a2, 0);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v94, a3, 0);
          v17 = v91;
          if ( !v12 )
            goto LABEL_241;
          if ( !v91 )
          {
            v47 = v89;
LABEL_244:
            EngSetLastError(6u);
            goto LABEL_245;
          }
          if ( !v94 )
          {
LABEL_241:
            v47 = v89;
            goto LABEL_242;
          }
          if ( v12 == prgnDefault )
            goto LABEL_159;
          if ( (unsigned int)(v4 - 1) > 1 )
            goto LABEL_171;
          if ( *((_DWORD *)v91 + 20) == 160
            && *((_DWORD *)v91 + 22) <= *(_DWORD *)(v94 + 88)
            && *((_DWORD *)v91 + 24) >= *(_DWORD *)(v94 + 96)
            && *((_DWORD *)v91 + 23) <= *(_DWORD *)(v94 + 92)
            && *((_DWORD *)v91 + 25) >= *(_DWORD *)(v94 + 100) )
          {
            v18 = *((_DWORD *)v12 + 6);
            v19 = (struct RGNOBJ *)&v91;
            if ( (_DWORD)v4 == 1 )
              v19 = (struct RGNOBJ *)&v94;
            v20 = *(_QWORD *)v19;
            v99 = v20;
            Src = (void *)(v20 + 80);
            v21 = *(_DWORD *)(v20 + 80);
            if ( (v18 >= v21 || *(_DWORD *)(v20 + 24) <= 0xD8u) && (v18 <= 0xD8 || *(_DWORD *)(v20 + 24) > 0xD8u) )
            {
              RGNOBJ::vCopy((RGNOBJ *)&v89, v19);
              v24 = 1;
              goto LABEL_85;
            }
            v22 = 216;
            v101 = 0;
            if ( v21 > 0xD8 )
              v22 = v21;
            v23 = v22;
            v24 = 1;
            if ( gulGdiHmgrTraceObjectType == 4 )
            {
              v109 = 1;
              v23 = v22 + 160;
            }
            else
            {
              v109 = 0;
            }
            if ( dword_1C01A2650 >= v23 && (v25 = Win32AllocateFromPagedLookasideList(qword_1C01A26E0)) != 0 )
            {
              *(_QWORD *)v25 = 0LL;
              *(_QWORD *)(v25 + 8) = 0LL;
              *(_QWORD *)(v25 + 16) = 0LL;
              if ( v109 )
                RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v23 + v25 - 160), 0LL);
              *(_WORD *)(v25 + 14) = 0x8000;
            }
            else
            {
              v25 = 0LL;
              if ( v23 && (int)IsWin32AllocPoolImplSupported() >= 0 )
                v25 = Win32AllocPoolImpl(33LL, v23, 875587655LL);
              if ( !v25 )
              {
                EngSetLastError(8u);
                v25 = 0LL;
                v100 = 0LL;
LABEL_47:
                if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
                {
                  if ( !v25 )
                  {
LABEL_222:
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v100);
                    v47 = v89;
                    v17 = v91;
                    v87 = (char *)v89 + 104;
                    v88 = (char *)v89 + 120;
                    *((_DWORD *)v89 + 20) = 120;
                    *(_QWORD *)((char *)v47 + 84) = 1LL;
                    *(_QWORD *)((char *)v47 + 92) = 0LL;
                    *((_DWORD *)v47 + 25) = 0;
                    *(_DWORD *)v87 = 0;
                    *((_DWORD *)v87 + 1) = 0x80000000;
                    *((_QWORD *)v87 + 1) = 0x7FFFFFFFLL;
                    *((_QWORD *)v47 + 5) = v88;
LABEL_242:
                    if ( v17 && v94 )
                      goto LABEL_245;
                    goto LABEL_244;
                  }
                  v26 = (_QWORD *)(v25 + 48);
                  if ( v25 != -48 )
                  {
                    KeEnterCriticalRegion();
                    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                    *(_QWORD *)(v25 + 64) = v25;
                    *(_QWORD *)(v25 + 72) = CleanUpRegion;
                    if ( v27 )
                    {
                      v28 = *(_QWORD *)(v27 + 88);
                      v29 = (_QWORD *)(v27 + 88);
                      if ( *(_QWORD **)(v28 + 8) != v29 )
                        __fastfail(3u);
                      *v26 = v28;
                      *(_QWORD *)(v25 + 56) = v29;
                      *(_QWORD *)(v28 + 8) = v26;
                      *v29 = v26;
                    }
                    else
                    {
                      *(_QWORD *)(v25 + 56) = v25 + 48;
                      *v26 = v26;
                    }
                    KeLeaveCriticalRegion();
                  }
                }
                if ( v25 )
                {
                  memmove((void *)(v25 + 80), Src, *(unsigned int *)Src - 80LL);
                  v30 = (char *)v12 + 48;
                  *(_QWORD *)(v25 + 40) = v25 + *(_DWORD *)(v99 + 40) - (int)v99 - 104 + 104LL;
                  v31 = *((_DWORD *)v12 + 8);
                  *((_DWORD *)v12 + 8) = *(_DWORD *)(v25 + 32);
                  *(_DWORD *)(v25 + 32) = v31;
                  v32 = *((_DWORD *)v12 + 9);
                  *((_DWORD *)v12 + 9) = *(_DWORD *)(v25 + 36);
                  *(_DWORD *)(v25 + 36) = v32;
                  v110 = *(_QWORD *)v30 == (_QWORD)v30;
                  v33 = v25 + 48;
                  LODWORD(Src) = *(_QWORD *)v33 == v33;
                  if ( v12 != (struct REGION *)-48LL )
                  {
                    KeEnterCriticalRegion();
                    v34 = *(_QWORD *)v30;
                    if ( *(char **)(*(_QWORD *)v30 + 8LL) != v30 || (v35 = (char **)*((_QWORD *)v12 + 7), *v35 != v30) )
                      __fastfail(3u);
                    *v35 = (char *)v34;
                    *(_QWORD *)(v34 + 8) = v35;
                    *((_QWORD *)v12 + 7) = (char *)v12 + 48;
                    *(_QWORD *)v30 = v30;
                    KeLeaveCriticalRegion();
                  }
                  if ( v25 != -48 )
                  {
                    KeEnterCriticalRegion();
                    v36 = *(_QWORD *)v33;
                    if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 || (v37 = *(_QWORD **)(v25 + 56), *v37 != v33) )
                      __fastfail(3u);
                    *v37 = v36;
                    *(_QWORD *)(v36 + 8) = v37;
                    *(_QWORD *)(v25 + 56) = v25 + 48;
                    *(_QWORD *)v33 = v33;
                    KeLeaveCriticalRegion();
                  }
                  v89 = (struct OBJECT *)v25;
                  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
                  {
                    if ( !v110 && v25 != -48 )
                    {
                      KeEnterCriticalRegion();
                      v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                      *(_QWORD *)(v25 + 64) = v25;
                      *(_QWORD *)(v25 + 72) = CleanUpRegion;
                      if ( v38 )
                      {
                        v39 = *(_QWORD *)(v38 + 88);
                        v40 = (__int64 *)(v38 + 88);
                        if ( *(__int64 **)(v39 + 8) != v40 )
                          __fastfail(3u);
                        *(_QWORD *)v33 = v39;
                        *(_QWORD *)(v25 + 56) = v40;
                        *(_QWORD *)(v39 + 8) = v33;
                        *v40 = v33;
                      }
                      else
                      {
                        *(_QWORD *)(v25 + 56) = v25 + 48;
                        *(_QWORD *)v33 = v33;
                      }
                      KeLeaveCriticalRegion();
                    }
                    if ( !(_DWORD)Src )
                    {
                      if ( v12 == (struct REGION *)-48LL )
                      {
LABEL_80:
                        if ( v12 == prgnDefault )
                        {
LABEL_84:
                          v17 = v91;
                          goto LABEL_85;
                        }
                        if ( *((__int16 *)v12 + 7) < 0 )
                        {
                          v46 = qword_1C01A26E0;
                          if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
                            Win32FreeToPagedLookasideListImpl(v46, v12);
                          goto LABEL_84;
                        }
                        Win32FreePool((__int64)v12);
                        v17 = v91;
LABEL_85:
                        v47 = v89;
                        if ( *((_DWORD *)v89 + 21) == 1 )
                        {
                          v48 = 1;
                        }
                        else if ( *((_DWORD *)v89 + 20) <= 0xA0u )
                        {
                          v48 = 2;
                        }
                        else
                        {
                          v48 = 3;
                        }
LABEL_94:
                        if ( v48 )
                          goto LABEL_95;
                        goto LABEL_242;
                      }
                      KeEnterCriticalRegion();
                      v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                      *((_QWORD *)v12 + 8) = v12;
                      *((_QWORD *)v12 + 9) = CleanUpRegion;
                      if ( v41 )
                      {
                        v42 = *(_QWORD *)(v41 + 88);
                        v43 = (char **)(v41 + 88);
                        if ( *(char ***)(v42 + 8) != v43 )
                          __fastfail(3u);
                        *(_QWORD *)v30 = v42;
                        *((_QWORD *)v12 + 7) = v43;
                        *(_QWORD *)(v42 + 8) = v30;
                        *v43 = v30;
                      }
                      else
                      {
                        *((_QWORD *)v12 + 7) = (char *)v12 + 48;
                        *(_QWORD *)v30 = v30;
                      }
                      KeLeaveCriticalRegion();
                    }
                  }
                  if ( v12 != (struct REGION *)-48LL )
                  {
                    KeEnterCriticalRegion();
                    v44 = *(_QWORD *)v30;
                    if ( *(char **)(*(_QWORD *)v30 + 8LL) != v30 || (v45 = (char **)*((_QWORD *)v12 + 7), *v45 != v30) )
                      __fastfail(3u);
                    *v45 = (char *)v44;
                    *(_QWORD *)(v44 + 8) = v45;
                    *((_QWORD *)v12 + 7) = (char *)v12 + 48;
                    *(_QWORD *)v30 = v30;
                    KeLeaveCriticalRegion();
                  }
                  goto LABEL_80;
                }
                goto LABEL_222;
              }
              *(_QWORD *)v25 = 0LL;
              *(_QWORD *)(v25 + 8) = 0LL;
              *(_QWORD *)(v25 + 16) = 0LL;
              if ( v109 )
                RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v25 + v23 - 160LL), 0LL);
            }
            *(_DWORD *)(v25 + 80) = 120;
            *(_QWORD *)(v25 + 84) = 1LL;
            *(_QWORD *)(v25 + 92) = 0LL;
            *(_DWORD *)(v25 + 100) = 0;
            *(_DWORD *)(v25 + 104) = 0;
            *(_DWORD *)(v25 + 108) = 0x80000000;
            *(_QWORD *)(v25 + 112) = 0x7FFFFFFFLL;
            *(_QWORD *)(v25 + 40) = v25 + 120;
            *(_DWORD *)(v25 + 24) = v22;
            *(_QWORD *)(v25 + 28) = 0LL;
            *(_DWORD *)(v25 + 36) = 0;
            *(_QWORD *)(v25 + 56) = v25 + 48;
            *(_QWORD *)(v25 + 48) = v25 + 48;
            v100 = v25;
            goto LABEL_47;
          }
          if ( *(_DWORD *)(v94 + 80) == 160 && RGNOBJ::bContain((RGNOBJ *)&v94, (struct RGNOBJ *)&v91) )
          {
            v73 = (struct OBJECT **)&v94;
            if ( (_DWORD)v4 == 1 )
              v73 = &v91;
            if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v89, (struct RGNOBJ *)v73) )
            {
LABEL_159:
              v48 = RGNOBJ::iComplexity((RGNOBJ *)&v89);
              v47 = v89;
              goto LABEL_93;
            }
            v47 = v89;
          }
          else
          {
LABEL_171:
            if ( (_DWORD)v4 == 1 && *((_DWORD *)v17 + 20) == 160 && *(_DWORD *)(v94 + 80) == 160 )
            {
              v76 = *(_QWORD *)(v94 + 88);
              v77 = _mm_srli_si128(*(__m128i *)(v94 + 88), 8).m128i_u64[0];
              v78 = *((_QWORD *)v17 + 11);
              v79 = v76;
              v80 = _mm_srli_si128(*(__m128i *)((char *)v17 + 88), 8).m128i_u64[0];
              if ( (int)v78 > (int)v76 )
                v79 = *((_QWORD *)v17 + 11);
              v81 = v77;
              v98.left = v79;
              if ( (int)v80 < (int)v77 )
                v81 = v80;
              v82 = HIDWORD(v78);
              v83 = HIDWORD(v76);
              v98.right = v81;
              if ( (int)v82 > (int)v83 )
                LODWORD(v83) = v82;
              v84 = HIDWORD(v77);
              v98.top = v83;
              if ( SHIDWORD(v80) < SHIDWORD(v77) )
                LODWORD(v84) = HIDWORD(v80);
              v98.bottom = v84;
              if ( (int)v83 >= (int)v84 || v79 >= v81 )
              {
                *((_DWORD *)v12 + 20) = 120;
                *(_QWORD *)((char *)v12 + 92) = 0LL;
                *((_DWORD *)v12 + 25) = 0;
                v24 = 1;
                *(_QWORD *)((char *)v12 + 84) = 1LL;
                *((_DWORD *)v12 + 26) = 0;
                *((_DWORD *)v12 + 27) = 0x80000000;
                *((_QWORD *)v12 + 14) = 0x7FFFFFFFLL;
                *((_QWORD *)v12 + 5) = (char *)v12 + 120;
                v47 = v89;
              }
              else
              {
                RGNOBJ::vSet((RGNOBJ *)&v89, &v98);
                v47 = v89;
                v24 = 1;
              }
LABEL_95:
              if ( a1 == a2 )
              {
                if ( (unsigned int)HmgReplaceObject(v17, v47) )
                {
                  v50 = *((_DWORD *)v17 + 8);
                  v51 = (char *)v17 + 48;
                  *((_DWORD *)v17 + 8) = *((_DWORD *)v47 + 8);
                  *((_DWORD *)v47 + 8) = v50;
                  v52 = *((_DWORD *)v17 + 9);
                  *((_DWORD *)v17 + 9) = *((_DWORD *)v47 + 9);
                  *((_DWORD *)v47 + 9) = v52;
                  v53 = *(_QWORD *)v51 == (_QWORD)v51;
                  v54 = (char *)v47 + 48;
                  if ( *(char **)v54 == v54 )
                    v8 = 1;
                  if ( v17 != (struct OBJECT *)-48LL )
                  {
                    KeEnterCriticalRegion();
                    v55 = *(_QWORD *)v51;
                    if ( *(char **)(*(_QWORD *)v51 + 8LL) != v51 || (v56 = (char **)*((_QWORD *)v17 + 7), *v56 != v51) )
                      __fastfail(3u);
                    *v56 = (char *)v55;
                    *(_QWORD *)(v55 + 8) = v56;
                    *((_QWORD *)v17 + 7) = (char *)v17 + 48;
                    *(_QWORD *)v51 = v51;
                    KeLeaveCriticalRegion();
                  }
                  if ( v47 != (struct OBJECT *)-48LL )
                  {
                    KeEnterCriticalRegion();
                    v57 = *(_QWORD *)v54;
                    if ( *(char **)(*(_QWORD *)v54 + 8LL) != v54 || (v58 = (char **)*((_QWORD *)v47 + 7), *v58 != v54) )
                      __fastfail(3u);
                    *v58 = (char *)v57;
                    *(_QWORD *)(v57 + 8) = v58;
                    *((_QWORD *)v47 + 7) = (char *)v47 + 48;
                    *(_QWORD *)v54 = v54;
                    KeLeaveCriticalRegion();
                  }
                  v59 = v17;
                  v91 = v47;
                  v89 = v17;
                  v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v17 = v91;
                  if ( v60 )
                  {
                    if ( !v53 )
                      PushThreadGuardedObject((char *)v47 + 48, v91, CleanUpRegion);
                    if ( !v8 )
                    {
                      v61 = (_QWORD *)((char *)v59 + 48);
                      if ( v59 != (struct OBJECT *)-48LL )
                      {
                        KeEnterCriticalRegion();
                        v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                        *((_QWORD *)v59 + 8) = v59;
                        *((_QWORD *)v59 + 9) = CleanUpRegion;
                        if ( v62 )
                        {
                          v63 = *(_QWORD *)(v62 + 88);
                          v64 = (_QWORD *)(v62 + 88);
                          if ( *(_QWORD **)(v63 + 8) != v64 )
                            __fastfail(3u);
                          *v61 = v63;
                          *((_QWORD *)v59 + 7) = v64;
                          *(_QWORD *)(v63 + 8) = v61;
                          *v64 = v61;
                        }
                        else
                        {
                          *((_QWORD *)v59 + 7) = (char *)v59 + 48;
                          *v61 = v61;
                        }
                        KeLeaveCriticalRegion();
                        v17 = v91;
                      }
                    }
                  }
                  v47 = v89;
                  if ( *((_DWORD *)v17 + 21) != 1 )
                  {
                    if ( *((_DWORD *)v17 + 20) <= 0xA0u )
                      v24 = 2;
                    else
                      v24 = 3;
                  }
                  goto LABEL_119;
                }
              }
              else
              {
                if ( (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)&v94, (struct RGNOBJ *)&v89) )
                {
                  v85 = RGNOBJ::iComplexity((RGNOBJ *)&v94);
                  v47 = v89;
                  v24 = v85;
LABEL_119:
                  if ( !(_DWORD)v95 )
                    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v94);
                  if ( v94 )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)(v94 + 12));
                    v47 = v89;
                    v17 = v91;
                  }
                  if ( !(_DWORD)v92 )
                    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v91);
                  if ( v17 )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
                    v47 = v89;
                  }
                  if ( v47 )
                  {
                    v65 = (char *)v47 + 48;
                    if ( v47 != (struct OBJECT *)-48LL )
                    {
                      KeEnterCriticalRegion();
                      v66 = *(_QWORD *)v65;
                      if ( *(char **)(*(_QWORD *)v65 + 8LL) != v65 || (v67 = (char **)*((_QWORD *)v47 + 7), *v67 != v65) )
                        __fastfail(3u);
                      *v67 = (char *)v66;
                      *(_QWORD *)(v66 + 8) = v67;
                      *((_QWORD *)v47 + 7) = (char *)v47 + 48;
                      *(_QWORD *)v65 = v65;
                      KeLeaveCriticalRegion();
                    }
                    if ( v47 != prgnDefault )
                    {
                      if ( *((__int16 *)v47 + 7) < 0 )
                      {
                        v69 = qword_1C01A26E0;
                        if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
                          Win32FreeToPagedLookasideListImpl(v69, v47);
                      }
                      else if ( (int)IsWin32FreePoolImplSupported() >= 0 )
                      {
                        Win32FreePoolImpl(v47);
                      }
                    }
                  }
                  if ( (_DWORD)v90 == 1 )
                    REGION::vDeleteREGION(0LL);
                  return v24;
                }
                v47 = v89;
              }
LABEL_245:
              v24 = 0;
              goto LABEL_119;
            }
            v49 = RGNOBJ::bMerge(
                    (RGNOBJ *)&v89,
                    (struct RGNOBJ *)&v91,
                    (struct RGNOBJ *)&v94,
                    *((_BYTE *)&gafjRgnOp + v4));
            v47 = v89;
            if ( v49 )
            {
              if ( *((_DWORD *)v89 + 21) == 1 )
              {
                v24 = 1;
                v48 = 1;
                goto LABEL_94;
              }
              if ( *((_DWORD *)v89 + 20) <= 0xA0u )
                v48 = 2;
              else
                v48 = 3;
LABEL_93:
              v24 = 1;
              goto LABEL_94;
            }
          }
          *((_DWORD *)v47 + 20) = 120;
          *(_QWORD *)((char *)v47 + 84) = 1LL;
          *(_QWORD *)((char *)v47 + 92) = 0LL;
          *((_DWORD *)v47 + 25) = 0;
          *((_DWORD *)v47 + 26) = 0;
          *((_DWORD *)v47 + 27) = 0x80000000;
          *((_QWORD *)v47 + 14) = 0x7FFFFFFFLL;
          *((_QWORD *)v47 + 5) = (char *)v47 + 120;
          goto LABEL_242;
        }
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        *((_QWORD *)v12 + 2) = 0LL;
        if ( v10 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v12 + v9 - 160), 0LL);
      }
      *((_QWORD *)v12 + 3) = 216LL;
      *((_DWORD *)v12 + 20) = 0;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_QWORD *)v12 + 7) = (char *)v12 + 48;
      *((_QWORD *)v12 + 6) = (char *)v12 + 48;
      v89 = v12;
      goto LABEL_14;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v96, a1, 0);
    v24 = 1;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v102, a2, 1);
    v70 = v96;
    v71 = v102[0];
    if ( v96 )
    {
      if ( !v102[0] )
      {
LABEL_191:
        EngSetLastError(6u);
LABEL_192:
        v24 = 0;
LABEL_146:
        if ( !v103 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v102);
        if ( v71 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v71 + 12));
          v70 = v96;
        }
        if ( !v97 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)&v96);
        if ( v70 )
          _InterlockedDecrement((volatile signed __int32 *)(v70 + 12));
        return v24;
      }
      v72 = RGNOBJAPI::bCopy((RGNOBJAPI *)&v96, (struct RGNOBJ *)v102);
      v70 = v96;
      if ( v72 )
      {
        if ( *(_DWORD *)(v96 + 84) != 1 )
          v24 = (*(_DWORD *)(v96 + 80) > 0xA0u) + 2;
        goto LABEL_146;
      }
    }
    if ( v71 && v70 )
      goto LABEL_192;
    goto LABEL_191;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
