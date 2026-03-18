/*
 * XREFs of GreCombineRgn @ 0x1C00247C0
 * Callers:
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C002E29C (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C0049B60 (UserSetDCVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0049F1C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0050C44 (-UpdateUserScreen@@YAJXZ.c)
 *     UserValidateCopyRgn @ 0x1C00872B0 (UserValidateCopyRgn.c)
 *     NtGdiCombineRgn @ 0x1C0092A00 (NtGdiCombineRgn.c)
 *     EngCombineRgn @ 0x1C012EAA0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C012EB40 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C012EE30 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C012F030 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C012F0D0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C012F170 (EngXorRgn.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C000EFB0 (PushThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0015D10 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0016F90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0016FF0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     HmgReplaceObject @ 0x1C0017040 (HmgReplaceObject.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0017350 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00179E0 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0018F40 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C001B860 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0023310 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00255A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0027100 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00272C0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0027430 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C002A944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C002C860 (Win32AllocateFromPagedLookasideList.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v4; // rbx
  HRGN v7; // r14
  int v8; // r15d
  unsigned int v9; // eax
  unsigned int v10; // r13d
  __int64 v11; // rsi
  struct REGION *v12; // rsi
  _QWORD *v13; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct OBJECT *v17; // rdi
  unsigned int v18; // r9d
  struct OBJECT **v19; // rdx
  struct OBJECT *v20; // r8
  unsigned int v21; // ecx
  int v22; // edi
  unsigned int v23; // r14d
  __int64 v24; // rbx
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  char *v29; // rdi
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // r14
  __int64 v33; // rax
  char **v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  char **v42; // rax
  __int64 v43; // rax
  char **v44; // rcx
  __int64 v45; // rbx
  struct OBJECT *v46; // rbx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  char *v50; // r14
  int v51; // ecx
  BOOL v52; // r12d
  char *v53; // rsi
  __int64 v54; // rax
  char **v55; // rcx
  __int64 v56; // rax
  char **v57; // rcx
  struct OBJECT *v58; // rsi
  __int64 v59; // rax
  _QWORD *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  char *v64; // rdi
  __int64 v65; // rax
  char **v66; // rcx
  struct OBJECT *v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // rcx
  unsigned int v71; // eax
  unsigned int v72; // edi
  __int64 v73; // rdi
  struct OBJECT **v74; // rdx
  __m128i v75; // xmm0
  __m128i v76; // xmm1
  unsigned __int64 v77; // r9
  unsigned __int64 v78; // rax
  LONG v79; // r8d
  unsigned __int64 v80; // xmm1_8
  unsigned __int64 v81; // xmm0_8
  LONG v82; // edx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r9
  unsigned __int64 v85; // r10
  int v86; // ebx
  bool v87; // zf
  unsigned int v88; // eax
  __int64 v89; // r8
  char *v90; // rdx
  char *v91; // rcx
  struct OBJECT *v92; // [rsp+20h] [rbp-E0h] BYREF
  int v93; // [rsp+28h] [rbp-D8h]
  void *Src; // [rsp+30h] [rbp-D0h]
  struct OBJECT *v95[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v96; // [rsp+48h] [rbp-B8h]
  struct OBJECT *v97[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v98; // [rsp+60h] [rbp-A0h]
  struct OBJECT *v99; // [rsp+68h] [rbp-98h] BYREF
  int v100; // [rsp+70h] [rbp-90h]
  struct _RECTL v101; // [rsp+78h] [rbp-88h] BYREF
  struct OBJECT *v102[2]; // [rsp+88h] [rbp-78h] BYREF
  int v103; // [rsp+98h] [rbp-68h]
  _QWORD v104[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v105; // [rsp+B0h] [rbp-50h]
  _QWORD v106[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v107; // [rsp+C8h] [rbp-38h]
  _QWORD v108[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v109; // [rsp+E0h] [rbp-20h]
  struct OBJECT *v110; // [rsp+E8h] [rbp-18h]
  __int64 v111; // [rsp+F0h] [rbp-10h] BYREF
  int v112; // [rsp+F8h] [rbp-8h]
  _QWORD v113[2]; // [rsp+100h] [rbp+0h] BYREF
  int v114; // [rsp+110h] [rbp+10h]
  _QWORD v115[3]; // [rsp+118h] [rbp+18h] BYREF
  __m128i v116; // [rsp+130h] [rbp+30h]
  __m128i v117; // [rsp+140h] [rbp+40h]
  int v120; // [rsp+1A8h] [rbp+A8h]
  int v121; // [rsp+1A8h] [rbp+A8h]
  BOOL v122; // [rsp+1A8h] [rbp+A8h]

  v4 = a4;
  v7 = a1;
  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 != 5 )
    {
      if ( a1 != a2 && a1 != a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v108, a2, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v106, a3, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v104, v7, 0);
        if ( !v108[0] )
          goto LABEL_216;
        if ( v106[0]
          && v104[0]
          && (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v104, (struct RGNOBJ *)v108, (struct RGNOBJ *)v106, v4) )
        {
          v10 = RGNOBJ::iComplexity((RGNOBJ *)v104);
LABEL_161:
          if ( !v105 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)v104);
          if ( v104[0] )
            _InterlockedDecrement((volatile signed __int32 *)(v104[0] + 12LL));
          if ( !v107 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)v106);
          if ( v106[0] )
            _InterlockedDecrement((volatile signed __int32 *)(v106[0] + 12LL));
          if ( !v109 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)v108);
          if ( v108[0] )
            _InterlockedDecrement((volatile signed __int32 *)(v108[0] + 12LL));
          return v10;
        }
        if ( !v108[0] || !v106[0] || !v104[0] )
LABEL_216:
          EngSetLastError(6u);
        v10 = 0;
        goto LABEL_161;
      }
      if ( a2 == a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v115, a1, 0);
        v89 = v115[0];
        if ( v115[0] )
        {
          if ( (unsigned int)(v4 - 3) <= 1 )
          {
            *(_DWORD *)(v115[0] + 80LL) = 120;
            *(_QWORD *)(v89 + 84) = 1LL;
            *(_QWORD *)(v89 + 92) = 0LL;
            *(_DWORD *)(v89 + 100) = 0;
            *(_DWORD *)(v89 + 104) = 0;
            *(_DWORD *)(v89 + 108) = 0x80000000;
            *(_QWORD *)(v89 + 112) = 0x7FFFFFFFLL;
            *(_QWORD *)(v89 + 40) = v89 + 120;
          }
          v10 = RGNOBJ::iComplexity((RGNOBJ *)v115);
        }
        else
        {
          EngSetLastError(6u);
          v10 = 0;
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v115);
        return v10;
      }
      v8 = 0;
      v9 = 216;
      v93 = 0;
      LODWORD(Src) = 216;
      v10 = 1;
      if ( gulGdiHmgrTraceObjectType == 4 )
      {
        v9 = 376;
        v120 = 1;
        LODWORD(Src) = 376;
      }
      else
      {
        v120 = 0;
      }
      if ( dword_1C02119A0 < v9 )
      {
        v12 = (struct REGION *)PALLOCMEM2(v9, 0x34306847u, 0);
        if ( v12 )
        {
          *(_QWORD *)v12 = 0LL;
          *((_QWORD *)v12 + 1) = 0LL;
          *((_QWORD *)v12 + 2) = 0LL;
          if ( v120 )
            RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v12 + (unsigned int)Src - 160), 0LL);
          goto LABEL_13;
        }
      }
      else
      {
        v11 = qword_1C02128D0;
        if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0 )
        {
          v12 = (struct REGION *)Win32AllocateFromPagedLookasideListImpl(v11);
          if ( v12 )
          {
            *(_QWORD *)v12 = 0LL;
            *((_QWORD *)v12 + 1) = 0LL;
            *((_QWORD *)v12 + 2) = 0LL;
            if ( v120 )
              RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v12 + (unsigned int)Src - 160), 0LL);
            *((_WORD *)v12 + 7) = 0x8000;
LABEL_13:
            *((_QWORD *)v12 + 3) = 216LL;
            *((_DWORD *)v12 + 20) = 0;
            *((_QWORD *)v12 + 4) = 0LL;
            *((_QWORD *)v12 + 7) = (char *)v12 + 48;
            *((_QWORD *)v12 + 6) = (char *)v12 + 48;
            v92 = v12;
            goto LABEL_14;
          }
        }
      }
      EngSetLastError(8u);
      v12 = 0LL;
      v92 = 0LL;
LABEL_14:
      if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
      {
        if ( v12 )
        {
          v13 = (_QWORD *)((char *)v12 + 48);
          if ( v12 != (struct REGION *)-48LL )
          {
            KeEnterCriticalRegion();
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            *((_QWORD *)v12 + 8) = v12;
            *((_QWORD *)v12 + 9) = CleanUpRegion;
            if ( ThreadWin32Thread )
            {
              v15 = *(_QWORD *)(ThreadWin32Thread + 88);
              v16 = (_QWORD *)(ThreadWin32Thread + 88);
              if ( *(_QWORD **)(v15 + 8) != v16 )
                goto LABEL_254;
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
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v95, a2, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v97, a3, 0);
      v17 = v95[0];
      if ( !v12 )
        goto LABEL_249;
      if ( !v95[0] )
      {
        v46 = v92;
LABEL_252:
        EngSetLastError(6u);
        goto LABEL_253;
      }
      if ( !v97[0] )
      {
LABEL_249:
        v46 = v92;
        goto LABEL_250;
      }
      if ( v12 != prgnDefault )
      {
        if ( (unsigned int)(v4 - 1) > 1 )
          goto LABEL_183;
        if ( *((_DWORD *)v95[0] + 20) == 160
          && *((_DWORD *)v95[0] + 22) <= *((_DWORD *)v97[0] + 22)
          && *((_DWORD *)v95[0] + 24) >= *((_DWORD *)v97[0] + 24)
          && *((_DWORD *)v95[0] + 23) <= *((_DWORD *)v97[0] + 23)
          && *((_DWORD *)v95[0] + 25) >= *((_DWORD *)v97[0] + 25) )
        {
          v18 = *((_DWORD *)v12 + 6);
          v19 = v95;
          if ( (_DWORD)v4 == 1 )
            v19 = v97;
          v20 = *v19;
          v21 = *((_DWORD *)*v19 + 20);
          Src = (char *)*v19 + 80;
          v110 = v20;
          if ( (v18 >= v21 || *((_DWORD *)v20 + 6) <= 0xD8u) && (v18 <= 0xD8 || *((_DWORD *)v20 + 6) > 0xD8u) )
          {
            RGNOBJ::vCopy((RGNOBJ *)&v92, (struct RGNOBJ *)v19);
            goto LABEL_85;
          }
          v112 = 0;
          v22 = 216;
          if ( v21 > 0xD8 )
            v22 = v21;
          v23 = v22;
          if ( gulGdiHmgrTraceObjectType == 4 )
          {
            v121 = 1;
            v23 = v22 + 160;
          }
          else
          {
            v121 = 0;
          }
          if ( dword_1C02119A0 >= v23 )
          {
            v24 = Win32AllocateFromPagedLookasideList(qword_1C02128D0);
            if ( v24 )
            {
              *(_QWORD *)v24 = 0LL;
              *(_QWORD *)(v24 + 8) = 0LL;
              *(_QWORD *)(v24 + 16) = 0LL;
              if ( v121 )
                RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v23 + v24 - 160), 0LL);
              *(_WORD *)(v24 + 14) = 0x8000;
              goto LABEL_46;
            }
          }
          else
          {
            v24 = 0LL;
            if ( v23 && (int)IsWin32AllocPoolImplSupported() >= 0 )
              v24 = Win32AllocPoolImpl(33LL, v23, 875587655LL);
            if ( v24 )
            {
              *(_QWORD *)v24 = 0LL;
              *(_QWORD *)(v24 + 8) = 0LL;
              *(_QWORD *)(v24 + 16) = 0LL;
              if ( v121 )
                RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v24 + v23 - 160LL), 0LL);
LABEL_46:
              *(_DWORD *)(v24 + 80) = 120;
              *(_QWORD *)(v24 + 84) = 1LL;
              *(_QWORD *)(v24 + 92) = 0LL;
              *(_DWORD *)(v24 + 100) = 0;
              *(_DWORD *)(v24 + 104) = 0;
              *(_DWORD *)(v24 + 108) = 0x80000000;
              *(_QWORD *)(v24 + 112) = 0x7FFFFFFFLL;
              *(_QWORD *)(v24 + 40) = v24 + 120;
              *(_DWORD *)(v24 + 24) = v22;
              *(_QWORD *)(v24 + 28) = 0LL;
              *(_DWORD *)(v24 + 36) = 0;
              *(_QWORD *)(v24 + 56) = v24 + 48;
              *(_QWORD *)(v24 + 48) = v24 + 48;
              v111 = v24;
              goto LABEL_47;
            }
          }
          EngSetLastError(8u);
          v24 = 0LL;
          v111 = 0LL;
LABEL_47:
          if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
          {
            if ( !v24 )
            {
LABEL_239:
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v111);
              v46 = v92;
              v17 = v95[0];
              v90 = (char *)v92 + 104;
              v91 = (char *)v92 + 120;
              *((_DWORD *)v92 + 20) = 120;
              *(_QWORD *)((char *)v46 + 84) = 1LL;
              *(_QWORD *)((char *)v46 + 92) = 0LL;
              *((_DWORD *)v46 + 25) = 0;
              *(_DWORD *)v90 = 0;
              *((_DWORD *)v90 + 1) = 0x80000000;
              *((_QWORD *)v90 + 1) = 0x7FFFFFFFLL;
              *((_QWORD *)v46 + 5) = v91;
LABEL_250:
              if ( v17 && v97[0] )
                goto LABEL_253;
              goto LABEL_252;
            }
            v25 = (_QWORD *)(v24 + 48);
            if ( v24 != -48 )
            {
              KeEnterCriticalRegion();
              v26 = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)(v24 + 64) = v24;
              *(_QWORD *)(v24 + 72) = CleanUpRegion;
              if ( v26 )
              {
                v27 = *(_QWORD *)(v26 + 88);
                v28 = (_QWORD *)(v26 + 88);
                if ( *(_QWORD **)(v27 + 8) != v28 )
                  goto LABEL_254;
                *v25 = v27;
                *(_QWORD *)(v24 + 56) = v28;
                *(_QWORD *)(v27 + 8) = v25;
                *v28 = v25;
              }
              else
              {
                *(_QWORD *)(v24 + 56) = v24 + 48;
                *v25 = v25;
              }
              KeLeaveCriticalRegion();
            }
          }
          if ( v24 )
          {
            memmove((void *)(v24 + 80), Src, *(unsigned int *)Src - 80LL);
            v29 = (char *)v12 + 48;
            *(_QWORD *)(v24 + 40) = v24 + *((_DWORD *)v110 + 10) - (int)v110 - 104 + 104LL;
            v30 = *((_DWORD *)v12 + 8);
            *((_DWORD *)v12 + 8) = *(_DWORD *)(v24 + 32);
            *(_DWORD *)(v24 + 32) = v30;
            v31 = *((_DWORD *)v12 + 9);
            *((_DWORD *)v12 + 9) = *(_DWORD *)(v24 + 36);
            *(_DWORD *)(v24 + 36) = v31;
            v122 = *(_QWORD *)v29 == (_QWORD)v29;
            v32 = v24 + 48;
            LODWORD(Src) = *(_QWORD *)v32 == v32;
            if ( v12 != (struct REGION *)-48LL )
            {
              KeEnterCriticalRegion();
              v33 = *(_QWORD *)v29;
              if ( *(char **)(*(_QWORD *)v29 + 8LL) != v29 )
                goto LABEL_254;
              v34 = (char **)*((_QWORD *)v12 + 7);
              if ( *v34 != v29 )
                goto LABEL_254;
              *v34 = (char *)v33;
              *(_QWORD *)(v33 + 8) = v34;
              *((_QWORD *)v12 + 7) = (char *)v12 + 48;
              *(_QWORD *)v29 = v29;
              KeLeaveCriticalRegion();
            }
            if ( v24 != -48 )
            {
              KeEnterCriticalRegion();
              v35 = *(_QWORD *)v32;
              if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 )
                goto LABEL_254;
              v36 = *(_QWORD **)(v24 + 56);
              if ( *v36 != v32 )
                goto LABEL_254;
              *v36 = v35;
              *(_QWORD *)(v35 + 8) = v36;
              *(_QWORD *)(v24 + 56) = v24 + 48;
              *(_QWORD *)v32 = v32;
              KeLeaveCriticalRegion();
            }
            v92 = (struct OBJECT *)v24;
            if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
            {
              if ( !v122 && v24 != -48 )
              {
                KeEnterCriticalRegion();
                v37 = W32GetThreadWin32Thread(KeGetCurrentThread());
                *(_QWORD *)(v24 + 64) = v24;
                *(_QWORD *)(v24 + 72) = CleanUpRegion;
                if ( v37 )
                {
                  v38 = *(_QWORD *)(v37 + 88);
                  v39 = (__int64 *)(v37 + 88);
                  if ( *(__int64 **)(v38 + 8) != v39 )
                    goto LABEL_254;
                  *(_QWORD *)v32 = v38;
                  *(_QWORD *)(v24 + 56) = v39;
                  *(_QWORD *)(v38 + 8) = v32;
                  *v39 = v32;
                }
                else
                {
                  *(_QWORD *)(v24 + 56) = v24 + 48;
                  *(_QWORD *)v32 = v32;
                }
                KeLeaveCriticalRegion();
              }
              if ( !(_DWORD)Src )
              {
                if ( v12 == (struct REGION *)-48LL )
                {
LABEL_80:
                  if ( v12 != prgnDefault )
                  {
                    if ( *((__int16 *)v12 + 7) >= 0 )
                    {
                      Win32FreePool((__int64)v12);
                      v17 = v95[0];
                      v7 = a1;
                      goto LABEL_85;
                    }
                    v45 = qword_1C02128D0;
                    if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
                      Win32FreeToPagedLookasideListImpl(v45, v12);
                  }
                  v17 = v95[0];
                  v7 = a1;
LABEL_85:
                  v46 = v92;
                  if ( *((_DWORD *)v92 + 21) != 1 )
                  {
                    if ( *((_DWORD *)v92 + 20) <= 0xA0u )
                    {
LABEL_87:
                      v47 = 2;
                      goto LABEL_93;
                    }
                    goto LABEL_92;
                  }
                  v47 = 1;
                  goto LABEL_93;
                }
                KeEnterCriticalRegion();
                v40 = W32GetThreadWin32Thread(KeGetCurrentThread());
                *((_QWORD *)v12 + 8) = v12;
                *((_QWORD *)v12 + 9) = CleanUpRegion;
                if ( v40 )
                {
                  v41 = *(_QWORD *)(v40 + 88);
                  v42 = (char **)(v40 + 88);
                  if ( *(char ***)(v41 + 8) != v42 )
                    goto LABEL_254;
                  *(_QWORD *)v29 = v41;
                  *((_QWORD *)v12 + 7) = v42;
                  *(_QWORD *)(v41 + 8) = v29;
                  *v42 = v29;
                }
                else
                {
                  *((_QWORD *)v12 + 7) = (char *)v12 + 48;
                  *(_QWORD *)v29 = v29;
                }
                KeLeaveCriticalRegion();
              }
            }
            if ( v12 != (struct REGION *)-48LL )
            {
              KeEnterCriticalRegion();
              v43 = *(_QWORD *)v29;
              if ( *(char **)(*(_QWORD *)v29 + 8LL) != v29 )
                goto LABEL_254;
              v44 = (char **)*((_QWORD *)v12 + 7);
              if ( *v44 != v29 )
                goto LABEL_254;
              *v44 = (char *)v43;
              *(_QWORD *)(v43 + 8) = v44;
              *((_QWORD *)v12 + 7) = (char *)v12 + 48;
              *(_QWORD *)v29 = v29;
              KeLeaveCriticalRegion();
            }
            goto LABEL_80;
          }
          goto LABEL_239;
        }
        if ( *((_DWORD *)v97[0] + 20) == 160 && RGNOBJ::bContain((RGNOBJ *)v97, (struct RGNOBJ *)v95) )
        {
          v74 = v97;
          if ( (_DWORD)v4 == 1 )
            v74 = v95;
          if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v92, (struct RGNOBJ *)v74) )
            goto LABEL_179;
          v46 = v92;
        }
        else
        {
LABEL_183:
          if ( (_DWORD)v4 == 1 && *((_DWORD *)v17 + 20) == 160 && *((_DWORD *)v97[0] + 20) == 160 )
          {
            v75 = *(__m128i *)((char *)v97[0] + 88);
            v76 = *(__m128i *)((char *)v17 + 88);
            *(_QWORD *)&v101.left = 0LL;
            *(_QWORD *)&v101.right = 0LL;
            v77 = v75.m128i_i64[0];
            v78 = v76.m128i_i64[0];
            v79 = v75.m128i_i32[0];
            v116 = v76;
            if ( v76.m128i_i32[0] > v75.m128i_i32[0] )
              v79 = v76.m128i_i32[0];
            v80 = _mm_srli_si128(v76, 8).m128i_u64[0];
            v101.left = v79;
            v117 = v75;
            v81 = _mm_srli_si128(v75, 8).m128i_u64[0];
            v82 = v81;
            if ( (int)v80 < (int)v81 )
              v82 = v80;
            v83 = HIDWORD(v78);
            v84 = HIDWORD(v77);
            v101.right = v82;
            if ( (int)v83 > (int)v84 )
              LODWORD(v84) = v83;
            v85 = HIDWORD(v81);
            v101.top = v84;
            if ( SHIDWORD(v80) < SHIDWORD(v81) )
              LODWORD(v85) = HIDWORD(v80);
            v101.bottom = v85;
            if ( (int)v84 >= (int)v85 || v79 >= v82 )
            {
              v46 = v92;
              *((_DWORD *)v12 + 20) = 120;
              *(_QWORD *)((char *)v12 + 84) = 1LL;
              *(_QWORD *)((char *)v12 + 92) = 0LL;
              *((_DWORD *)v12 + 25) = 0;
              *((_DWORD *)v12 + 26) = 0;
              *((_DWORD *)v12 + 27) = 0x80000000;
              *((_QWORD *)v12 + 14) = 0x7FFFFFFFLL;
              *((_QWORD *)v12 + 5) = (char *)v12 + 120;
            }
            else
            {
              RGNOBJ::vSet((RGNOBJ *)&v92, &v101);
              v46 = v92;
            }
LABEL_94:
            if ( v7 == a2 )
            {
              if ( (unsigned int)HmgReplaceObject(v17, (__m128i *)v46) )
              {
                v49 = *((_DWORD *)v17 + 8);
                v50 = (char *)v17 + 48;
                *((_DWORD *)v17 + 8) = *((_DWORD *)v46 + 8);
                *((_DWORD *)v46 + 8) = v49;
                v51 = *((_DWORD *)v17 + 9);
                *((_DWORD *)v17 + 9) = *((_DWORD *)v46 + 9);
                *((_DWORD *)v46 + 9) = v51;
                v52 = *(_QWORD *)v50 == (_QWORD)v50;
                v53 = (char *)v46 + 48;
                if ( *(char **)v53 == v53 )
                  v8 = 1;
                if ( v17 != (struct OBJECT *)-48LL )
                {
                  KeEnterCriticalRegion();
                  v54 = *(_QWORD *)v50;
                  if ( *(char **)(*(_QWORD *)v50 + 8LL) != v50 )
                    goto LABEL_254;
                  v55 = (char **)*((_QWORD *)v17 + 7);
                  if ( *v55 != v50 )
                    goto LABEL_254;
                  *v55 = (char *)v54;
                  *(_QWORD *)(v54 + 8) = v55;
                  *((_QWORD *)v17 + 7) = (char *)v17 + 48;
                  *(_QWORD *)v50 = v50;
                  KeLeaveCriticalRegion();
                }
                if ( v46 != (struct OBJECT *)-48LL )
                {
                  KeEnterCriticalRegion();
                  v56 = *(_QWORD *)v53;
                  if ( *(char **)(*(_QWORD *)v53 + 8LL) != v53 )
                    goto LABEL_254;
                  v57 = (char **)*((_QWORD *)v46 + 7);
                  if ( *v57 != v53 )
                    goto LABEL_254;
                  *v57 = (char *)v56;
                  *(_QWORD *)(v56 + 8) = v57;
                  *((_QWORD *)v46 + 7) = (char *)v46 + 48;
                  *(_QWORD *)v53 = v53;
                  KeLeaveCriticalRegion();
                }
                v58 = v17;
                v95[0] = v46;
                v92 = v17;
                v59 = W32GetThreadWin32Thread(KeGetCurrentThread());
                v17 = v95[0];
                if ( v59 )
                {
                  if ( !v52 )
                    PushThreadGuardedObject((_QWORD *)v46 + 6, (__int64)v95[0], (__int64)CleanUpRegion);
                  if ( !v8 )
                  {
                    v60 = (_QWORD *)((char *)v58 + 48);
                    if ( v58 != (struct OBJECT *)-48LL )
                    {
                      KeEnterCriticalRegion();
                      v61 = W32GetThreadWin32Thread(KeGetCurrentThread());
                      *((_QWORD *)v58 + 8) = v58;
                      *((_QWORD *)v58 + 9) = CleanUpRegion;
                      if ( v61 )
                      {
                        v62 = *(_QWORD *)(v61 + 88);
                        v63 = (_QWORD *)(v61 + 88);
                        if ( *(_QWORD **)(v62 + 8) != v63 )
                          goto LABEL_254;
                        *v60 = v62;
                        *((_QWORD *)v58 + 7) = v63;
                        *(_QWORD *)(v62 + 8) = v60;
                        *v63 = v60;
                      }
                      else
                      {
                        *((_QWORD *)v58 + 7) = (char *)v58 + 48;
                        *v60 = v60;
                      }
                      KeLeaveCriticalRegion();
                      v17 = v95[0];
                    }
                  }
                }
                v46 = v92;
                if ( *((_DWORD *)v17 + 21) != 1 )
                {
                  if ( *((_DWORD *)v17 + 20) <= 0xA0u )
                    v10 = 2;
                  else
                    v10 = 3;
                }
                goto LABEL_118;
              }
            }
            else
            {
              if ( (unsigned int)RGNOBJAPI::bSwap(v97, &v92) )
              {
                v88 = RGNOBJ::iComplexity((RGNOBJ *)v97);
                v46 = v92;
                v10 = v88;
LABEL_118:
                if ( !v98 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)v97);
                if ( v97[0] )
                {
                  _InterlockedDecrement((volatile signed __int32 *)v97[0] + 3);
                  v46 = v92;
                  v17 = v95[0];
                }
                if ( !v96 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)v95);
                if ( v17 )
                {
                  _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
                  v46 = v92;
                }
                if ( !v46 )
                  goto LABEL_135;
                v64 = (char *)v46 + 48;
                if ( v46 == (struct OBJECT *)-48LL )
                {
LABEL_131:
                  if ( v46 != prgnDefault )
                  {
                    if ( *((__int16 *)v46 + 7) < 0 )
                    {
                      v73 = qword_1C02128D0;
                      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
                        Win32FreeToPagedLookasideListImpl(v73, v46);
                    }
                    else if ( (int)IsWin32FreePoolImplSupported() >= 0 )
                    {
                      Win32FreePoolImpl(v46);
                    }
                  }
LABEL_135:
                  if ( v93 == 1 )
                    REGION::vDeleteREGION(0LL);
                  return v10;
                }
                KeEnterCriticalRegion();
                v65 = *(_QWORD *)v64;
                if ( *(char **)(*(_QWORD *)v64 + 8LL) == v64 )
                {
                  v66 = (char **)*((_QWORD *)v46 + 7);
                  if ( *v66 == v64 )
                  {
                    *v66 = (char *)v65;
                    *(_QWORD *)(v65 + 8) = v66;
                    *((_QWORD *)v46 + 7) = (char *)v46 + 48;
                    *(_QWORD *)v64 = v64;
                    KeLeaveCriticalRegion();
                    goto LABEL_131;
                  }
                }
LABEL_254:
                __fastfail(3u);
              }
              v46 = v92;
            }
LABEL_253:
            v10 = 0;
            goto LABEL_118;
          }
          v48 = RGNOBJ::bMerge((RGNOBJ *)&v92, (struct RGNOBJ *)v95, (struct RGNOBJ *)v97, *((_BYTE *)&gafjRgnOp + v4));
          v46 = v92;
          if ( v48 )
          {
            if ( *((_DWORD *)v92 + 21) != 1 )
            {
              if ( *((_DWORD *)v92 + 20) <= 0xA0u )
                goto LABEL_87;
LABEL_92:
              v47 = 3;
              goto LABEL_93;
            }
            v47 = 1;
LABEL_93:
            if ( v47 )
              goto LABEL_94;
            goto LABEL_250;
          }
        }
        *((_DWORD *)v46 + 20) = 120;
        *(_QWORD *)((char *)v46 + 84) = 1LL;
        *(_QWORD *)((char *)v46 + 92) = 0LL;
        *((_DWORD *)v46 + 25) = 0;
        *((_DWORD *)v46 + 26) = 0;
        *((_DWORD *)v46 + 27) = 0x80000000;
        *((_QWORD *)v46 + 14) = 0x7FFFFFFFLL;
        *((_QWORD *)v46 + 5) = (char *)v46 + 120;
        goto LABEL_250;
      }
LABEL_179:
      v47 = RGNOBJ::iComplexity((RGNOBJ *)&v92);
      v46 = v92;
      goto LABEL_93;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v102, a1, 0);
    v10 = 1;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v113, a2, 1);
    v68 = v102[0];
    v69 = v113[0];
    if ( v102[0] )
    {
      if ( !v113[0] )
      {
LABEL_211:
        EngSetLastError(6u);
LABEL_212:
        v10 = 0;
LABEL_145:
        if ( !v114 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v113);
        if ( v69 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v69 + 12));
          v68 = v102[0];
        }
        if ( !v103 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v102);
        if ( v68 )
          _InterlockedDecrement((volatile signed __int32 *)v68 + 3);
        return v10;
      }
      v70 = *(unsigned int *)(v113[0] + 80LL);
      v71 = *((_DWORD *)v102[0] + 6);
      v72 = 216;
      if ( (v71 >= (unsigned int)v70 || *(_DWORD *)(v113[0] + 24LL) <= 0xD8u)
        && (v71 <= 0xD8 || *(_DWORD *)(v113[0] + 24LL) > 0xD8u) )
      {
        memmove((char *)v102[0] + 80, (const void *)(v113[0] + 80LL), v70 - 80);
        *((_QWORD *)v68 + 5) = (char *)v68 + *(_DWORD *)(v69 + 40) - (int)v69;
        goto LABEL_143;
      }
      v100 = 0;
      if ( (unsigned int)v70 > 0xD8 )
        v72 = v70;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v99, v72);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v99);
      if ( v99 )
      {
        RGNOBJ::vCopy((RGNOBJ *)&v99, (struct RGNOBJ *)v113);
        v86 = RGNOBJAPI::bSwap(v102, &v99);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v99);
        v87 = v86 == 0;
        v68 = v102[0];
        if ( !v87 )
        {
LABEL_143:
          if ( *((_DWORD *)v68 + 21) != 1 )
            v10 = (*((_DWORD *)v68 + 20) > 0xA0u) + 2;
          goto LABEL_145;
        }
      }
      else
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v99);
      }
    }
    if ( v69 && v68 )
      goto LABEL_212;
    goto LABEL_211;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
