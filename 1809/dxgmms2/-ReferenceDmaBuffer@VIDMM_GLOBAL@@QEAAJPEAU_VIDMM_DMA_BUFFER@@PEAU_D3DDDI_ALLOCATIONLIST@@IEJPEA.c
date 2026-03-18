/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00644A0
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0001D10 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C00106C8 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0026158 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppqPR2TR2 @ 0x1C00265D4 (McTemplateK0ppqPR2TR2.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C006E674 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006F3A0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C007E954 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C00A6F58 (-AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        union _LARGE_INTEGER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        union _LARGE_INTEGER *a9,
        VIDMM_GLOBAL **a10,
        struct VIDMM_ALLOC **a11,
        struct _VIDMM_PRIMARIES_REFERENCES *a12,
        struct DXGALLOCATION **a13)
{
  unsigned int v13; // r15d
  unsigned __int64 *p_QuadPart; // r13
  __int64 v17; // r8
  unsigned int v18; // eax
  union _LARGE_INTEGER v19; // rax
  struct VIDMM_ALLOC *v20; // rdx
  unsigned int v21; // edi
  int v22; // r10d
  struct _D3DDDI_ALLOCATIONLIST *v23; // rsi
  struct VIDMM_ALLOC **v24; // r12
  VIDMM_SEGMENT *v25; // r9
  struct DXGALLOCATION *v26; // rax
  struct VIDMM_ALLOC *v27; // r13
  __int64 v28; // r15
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // r8d
  _DWORD *v33; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 *v35; // rsi
  unsigned int v36; // r8d
  __int64 v37; // rax
  int v38; // r12d
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdi
  int v46; // eax
  int v47; // eax
  struct VIDMM_ALLOC *v48; // r15
  UINT v49; // edi
  __int64 v50; // rax
  int v51; // r9d
  _QWORD *v52; // rax
  unsigned int v53; // ebx
  unsigned int v54; // r15d
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // eax
  _DWORD *v67; // rdx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  VIDMM_GLOBAL *v72; // rcx
  char *v73; // rcx
  int v74; // edi
  __int64 v75; // rdx
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // eax
  LONGLONG v83; // rdx
  union _LARGE_INTEGER *v84; // rcx
  union _LARGE_INTEGER v85; // rsi
  signed int v86; // r15d
  unsigned int v87; // edi
  __int64 v89; // rdi
  _QWORD *v90; // rax
  __int64 v91; // rax
  union _LARGE_INTEGER v92; // r12
  union _LARGE_INTEGER v93; // r14
  __int64 v94; // r15
  __int64 j; // rsi
  __int64 v96; // rdx
  const GUID *v97; // r8
  int *v98; // r9
  signed __int32 v99[8]; // [rsp+0h] [rbp-388h] BYREF
  __int64 v100; // [rsp+28h] [rbp-360h]
  unsigned int v101; // [rsp+40h] [rbp-348h]
  int v102; // [rsp+44h] [rbp-344h]
  VIDMM_SEGMENT *v103; // [rsp+48h] [rbp-340h]
  unsigned __int64 *v104; // [rsp+50h] [rbp-338h]
  struct VIDMM_ALLOC *v105; // [rsp+58h] [rbp-330h]
  VIDMM_SEGMENT *v106; // [rsp+60h] [rbp-328h]
  struct VIDMM_ALLOC **QuadPart; // [rsp+68h] [rbp-320h]
  int v108; // [rsp+70h] [rbp-318h]
  unsigned int v109; // [rsp+74h] [rbp-314h]
  __int64 v110; // [rsp+78h] [rbp-310h]
  struct VIDMM_ALLOC *v111; // [rsp+80h] [rbp-308h]
  unsigned int *v112; // [rsp+88h] [rbp-300h]
  __int64 v113; // [rsp+90h] [rbp-2F8h]
  struct _VIDMM_PRIMARIES_REFERENCES *v114; // [rsp+98h] [rbp-2F0h]
  VIDMM_GLOBAL **v115; // [rsp+A0h] [rbp-2E8h]
  __int64 v116; // [rsp+A8h] [rbp-2E0h]
  union _LARGE_INTEGER *v117; // [rsp+B0h] [rbp-2D8h]
  unsigned int v118; // [rsp+B8h] [rbp-2D0h]
  struct DXGALLOCATION **v119; // [rsp+C0h] [rbp-2C8h]
  __int64 v120; // [rsp+C8h] [rbp-2C0h]
  struct VIDMM_ALLOC **v121; // [rsp+D0h] [rbp-2B8h]
  unsigned __int64 *v122; // [rsp+D8h] [rbp-2B0h]
  __int64 v123; // [rsp+E0h] [rbp-2A8h]
  unsigned __int64 v124; // [rsp+E8h] [rbp-2A0h]
  unsigned __int64 v125; // [rsp+F0h] [rbp-298h]
  __int64 v126; // [rsp+F8h] [rbp-290h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-288h]
  struct _KTHREAD *v128; // [rsp+108h] [rbp-280h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-278h] BYREF
  _BYTE v130[512]; // [rsp+140h] [rbp-248h] BYREF

  v13 = a4;
  v109 = a4;
  v117 = a8;
  v112 = a7;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v104 = (unsigned __int64 *)&a9->QuadPart;
  v122 = (unsigned __int64 *)&a9->QuadPart;
  v115 = a10;
  v121 = a11;
  v114 = a12;
  v119 = a13;
  v101 = 0;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v106 = (VIDMM_SEGMENT *)a2[14].QuadPart;
  DXGPROCESS::GetCurrent();
  v17 = *(_QWORD *)(a2[17].QuadPart + 16);
  v116 = v17;
  if ( a9 )
    *a9 = a2[12];
  *a11 = 0LL;
  ++*((_DWORD *)this + 1794);
  *((_DWORD *)this + 1795) += v13;
  v18 = *((_DWORD *)this + 1796);
  if ( v13 > v18 )
    v18 = v13;
  *((_DWORD *)this + 1796) = v18;
  a2[3].HighPart |= 4u;
  v19 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[17].QuadPart + 40LL);
  _InterlockedOr(v99, 0);
  a2[19] = v19;
  *(_DWORD *)a12 = 0;
  v113 = 0LL;
  v20 = 0LL;
  v111 = 0LL;
  v21 = 0;
  v101 = 0;
  v22 = a6;
  v23 = a3;
  v24 = QuadPart;
  v25 = v106;
  while ( 1 )
  {
    v103 = v25;
    if ( v21 >= v13 )
      break;
    if ( !v23->hAllocation )
    {
      ++*((_DWORD *)this + 1797);
      *v24 = 0LL;
      *(_QWORD *)v25 = 0LL;
      *((_QWORD *)v25 + 1) = 0LL;
      *((_QWORD *)v25 + 2) = 0LL;
      goto LABEL_61;
    }
    v26 = v119[v21];
    if ( !v26 )
    {
      v81 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v81 + 24) = v23->hAllocation;
      *(_QWORD *)(v81 + 32) = v21;
      WdLogEvent5_WdError(v81);
      v53 = -1071775468;
      v102 = -1071775468;
      v54 = a6;
LABEL_156:
      if ( !p_QuadPart && v21 )
      {
        do
        {
          if ( *--v24 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v24, v54);
          --v21;
        }
        while ( v21 );
      }
      return v53;
    }
    v27 = (struct VIDMM_ALLOC *)*((_QWORD *)v26 + 3);
    v105 = v27;
    v28 = **(_QWORD **)v27;
    v29 = *(_DWORD **)(v28 + 504);
    v30 = *v29 >> 14;
    if ( (*v29 & 0x4000) != 0 )
    {
      if ( v20 || (v23->Value & 1) == 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdAssertion(v30, v20);
        v52[3] = v27;
        v52[4] = v111;
        v52[5] = v23->Value & 1;
        WdLogEvent5_WdAssertion(v52);
        v53 = -1071775482;
        v102 = -1071775482;
        v54 = a6;
        p_QuadPart = v104;
        goto LABEL_156;
      }
      v111 = v27;
    }
    if ( *(_BYTE *)(v28 + 96) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v30);
        v56 = WdLogNewEntry5_WdTrace(v55);
        *(_QWORD *)(v56 + 24) = a2;
        *(_QWORD *)(v56 + 32) = v27;
      }
      v53 = -1071775482;
      v102 = -1071775482;
      v54 = a6;
      p_QuadPart = v104;
      goto LABEL_156;
    }
    if ( *((_QWORD *)v27 + 1) != v17 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError();
      v57[3] = v116;
      v57[4] = v27;
      v57[5] = v21;
      v57[6] = *((_QWORD *)v27 + 1);
      WdLogEvent5_WdError(v57);
      v53 = -1071775467;
      v102 = -1071775467;
      v54 = a6;
      p_QuadPart = v104;
      goto LABEL_156;
    }
    if ( *(_WORD *)(*((_QWORD *)v27 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v60 = WdLogNewEntry5_WdAssertion(v59, v58);
        *(_QWORD *)(v60 + 24) = a2;
        *(_QWORD *)(v60 + 32) = v27;
        WdLogEvent5_WdAssertion(v60);
        v53 = -1071775466;
        v102 = -1071775466;
        v54 = a6;
        p_QuadPart = v104;
        goto LABEL_156;
      }
      v61 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v61 + 24) = a2;
      *(_QWORD *)(v61 + 32) = v27;
      WdLogEvent5_WdError(v61);
      v25 = v103;
      v22 = a6;
    }
    *v24 = v27;
    v31 = *(_QWORD *)(*((_QWORD *)v27 + 2) + 32LL);
    *(_QWORD *)v25 = v31;
    v32 = v23->Value & 1;
    if ( v32 )
    {
      if ( *((_BYTE *)v27 + 24) )
      {
        v123 = *((_QWORD *)this + 3);
        if ( *(int *)(v123 + 2160) >= 4608 )
        {
          v62 = WdLogNewEntry5_WdWarning(v31, v20);
          WdLogEvent5_WdWarning(v62);
          v65 = WdLogNewEntry5_WdWarning(v64, v63);
          *(_QWORD *)(v65 + 24) = a2;
          *(_QWORD *)(v65 + 32) = v27;
          WdLogEvent5_WdWarning(v65);
          v53 = -1073741790;
          v102 = -1073741790;
          v54 = a6;
          p_QuadPart = v104;
          goto LABEL_156;
        }
      }
    }
    v33 = (_DWORD *)((char *)v25 + 8);
    i = v32 | *((_DWORD *)v25 + 2) & 0xFFFFFFFE;
    *((_DWORD *)v25 + 2) = i;
    if ( (v23->Value & 1) != 0 )
    {
      ++*((_DWORD *)this + 1798);
      i = (unsigned int)*v33;
    }
    if ( (i & 1) != 0 )
    {
      if ( (**(_DWORD **)(v28 + 504) & 0x200000) != 0 )
      {
        *((_DWORD *)v114 + 34) |= 1u;
        i = (unsigned int)*v33;
      }
      if ( (i & 1) != 0 )
      {
        i = (**(_DWORD **)(v28 + 504) >> 23) | ((unsigned __int16)**(_DWORD **)(v28 + 504) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v28 + 504) | (**(_DWORD **)(v28 + 504) >> 11)) >> 11)) & 0x100u;
        if ( (unsigned int)i >= 0x100 )
        {
          i = (unsigned __int64)v114;
          if ( *(_DWORD *)v114 >= 0x10u )
          {
            ++*((_DWORD *)this + 1804);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)v27 + 26);
            v27 = v105;
            *(_QWORD *)(i + 8LL * *(unsigned int *)i + 8) = v105;
            v25 = v106;
          }
          ++*(_DWORD *)i;
        }
      }
    }
    v103 = *(VIDMM_SEGMENT **)(v28 + 136);
    v35 = v104;
    if ( v104 )
      goto LABEL_23;
    if ( !v103 || (*((_DWORD *)this + 1760) & 0x40) != 0 )
    {
      v27 = v105;
      v25 = v106;
LABEL_23:
      ++*((_DWORD *)this + 1802);
      *v33 &= 0xFFFFFFC1;
      if ( v35 )
      {
        i = a2[17].QuadPart;
        v124 = i;
        if ( (*(_DWORD *)(i + 32) & 0x20) != 0 )
        {
          v37 = *((_QWORD *)v27 + 18);
        }
        else
        {
          v125 = i;
          v36 = *(_DWORD *)(i + 8);
          v118 = v36;
          v33 = (_DWORD *)((char *)v27 + 128);
          for ( i = *((_QWORD *)v27 + 16); (_DWORD *)i != v33; i = *(_QWORD *)i )
          {
            if ( ((*(_DWORD *)(i + 40) >> 4) & 0x3F) == v36 )
            {
              v37 = *(_QWORD *)(i + 72);
              goto LABEL_29;
            }
          }
          v37 = 0LL;
LABEL_29:
          v120 = v37;
        }
        *((_QWORD *)v25 + 2) = v37;
      }
      else
      {
        *((_QWORD *)v25 + 2) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
        goto LABEL_55;
      v126 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v126 + 308) & 4) != 0 || !*(_BYTE *)(v28 + 97) && (*(_DWORD *)(v28 + 76) & 0x400) == 0 )
        goto LABEL_55;
      v38 = 0;
      v108 = 0;
      v39 = *(_QWORD *)(v28 + 320);
      KeEnterCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v39 + 8) == CurrentThread )
      {
        v68 = *(_DWORD *)(v39 + 24);
        if ( v68 <= 0 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v41, v40);
          *(_QWORD *)(v69 + 24) = 409LL;
          WdLogEvent5_WdAssertion(v69);
          v68 = *(_DWORD *)(v39 + 24);
        }
        *(_DWORD *)(v39 + 24) = v68 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v39 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v51 = *(_DWORD *)(v39 + 28);
            if ( v51 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v41, &EventBlockThread, v42, v51);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v39);
          ExAcquirePushLockExclusiveEx(v39 + 16, 0LL);
        }
        if ( *(_QWORD *)(v39 + 8) )
        {
          v70 = WdLogNewEntry5_WdAssertion(v41, v40);
          *(_QWORD *)(v70 + 24) = 433LL;
          WdLogEvent5_WdAssertion(v70);
        }
        if ( *(_DWORD *)(v39 + 24) )
        {
          v71 = WdLogNewEntry5_WdAssertion(v41, v40);
          *(_QWORD *)(v71 + 24) = 434LL;
          WdLogEvent5_WdAssertion(v71);
        }
        *(_QWORD *)(v39 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v39 + 24) = 1;
      }
      v113 = v28;
      v43 = *(_QWORD *)(v28 + 112);
      if ( v43 )
      {
        v50 = *(_QWORD *)(v43 + 8);
      }
      else if ( (*(_DWORD *)(v28 + 80) & 0x5000) != 0 )
      {
        v50 = *(_QWORD *)(v28 + 512);
      }
      else
      {
        v44 = *(_QWORD **)(v28 + 104);
        v40 = v44[3];
        if ( v40 )
        {
          v50 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v44[1] + 24LL) + 88LL))(*(_QWORD *)(v44[1] + 24LL));
        }
        else
        {
          v41 = v44[10];
          if ( !v41 )
            goto LABEL_45;
          v50 = *(_QWORD *)(v41 + 8);
        }
      }
      v110 = v50;
      if ( !v50 )
      {
LABEL_45:
        if ( !*(_QWORD *)(v28 + 136)
          && (**(_DWORD **)(v28 + 504) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v28 + 8)) >= 0 )
        {
          v72 = *v115;
          if ( *v115 )
          {
            v73 = (char *)v72 + 144;
            *((_QWORD *)v73 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v73, 0LL);
            KeLeaveCriticalRegion();
          }
          v38 = 1;
          v108 = 1;
          v74 = 0;
          v75 = *(_QWORD *)(v28 + 104);
          if ( v75 )
          {
            KeStackAttachProcess(**(PRKPROCESS **)(v75 + 8), &ApcState);
            v74 = 1;
            v75 = *(_QWORD *)(v28 + 104);
          }
          if ( VIDMM_GLOBAL::ProbeAndLockAllocation(
                 v72,
                 (struct _VIDMM_LOCAL_ALLOC *)v75,
                 (struct _VIDMM_GLOBAL_ALLOC *)v28,
                 0LL,
                 *(_QWORD *)(v28 + 8),
                 (enum _LOCK_OPERATION)v100,
                 0LL,
                 0) < 0 )
          {
            v76 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v76 + 24) = v28;
            WdLogEvent5_WdError(v76);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v28 + 8));
          }
          else
          {
            ++*(_DWORD *)(v28 + 348);
            *(_DWORD *)(v28 + 84) |= 2u;
          }
          if ( v74 )
            KeUnstackDetachProcess(&ApcState);
        }
      }
      v113 = 0LL;
      v45 = *(_QWORD *)(v28 + 320);
      v128 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v45 + 8) != v128 )
      {
        v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40);
        v77[3] = 275LL;
        v77[4] = 4LL;
        v77[5] = v45;
        v77[6] = 0LL;
        v77[7] = 0LL;
        WdLogEvent5_WdCriticalError(v77);
      }
      v46 = *(_DWORD *)(v45 + 24);
      if ( v46 <= 0 )
      {
        v78 = WdLogNewEntry5_WdAssertion(v41, v40);
        *(_QWORD *)(v78 + 24) = 453LL;
        WdLogEvent5_WdAssertion(v78);
        v46 = *(_DWORD *)(v45 + 24);
      }
      v47 = v46 - 1;
      *(_DWORD *)(v45 + 24) = v47;
      if ( !v47 )
      {
        *(_QWORD *)(v45 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v45 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v38 )
      {
        i = (unsigned __int64)*v115;
        if ( *v115 )
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(i + 144));
      }
      v22 = a6;
      goto LABEL_54;
    }
    ++*((_DWORD *)this + 1801);
    v66 = VIDMM_SEGMENT::DriverId(v103);
    *v67 ^= (*v67 ^ (2 * v66)) & 0x3E;
    v33 = (_DWORD *)(*(_QWORD *)(v28 + 144) + *((_QWORD *)v103 + 3));
    *((_QWORD *)v106 + 2) = v33;
LABEL_54:
    v27 = v105;
LABEL_55:
    if ( !v35 )
    {
      VIDMM_GLOBAL::AddDMAReferences(v27, v22);
      v22 = a6;
    }
    v48 = v105;
    if ( !*((_DWORD *)v27 + 38) && (*((_BYTE *)v105 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)this + 40872) & 4) == 0
        || (i = *(unsigned int *)(*((_QWORD *)this + 3) + 308LL), (i & 0x10) == 0) )
      {
        v79 = WdLogNewEntry5_WdAssertion(i, v33);
        *(_QWORD *)(v79 + 24) = v48;
        WdLogEvent5_WdAssertion(v79);
        v53 = -1073741823;
        v102 = -1073741823;
        VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v48 + 1) + 32LL), 16LL, 0);
        p_QuadPart = v104;
        if ( !v104 )
          VIDMM_GLOBAL::RemoveDMAReferences(v48, a6);
        v21 = v101;
        v24 = QuadPart;
        v54 = a6;
        goto LABEL_156;
      }
    }
    v23 = a3;
    v49 = (a3->Value >> 2) & 7;
    if ( v49 )
    {
      v80 = WdLogNewEntry5_WdAssertion(i, v33);
      *(_QWORD *)(v80 + 24) = v48;
      *(_QWORD *)(v80 + 32) = v49;
      WdLogEvent5_WdAssertion(v80);
      v22 = a6;
    }
    v21 = v101;
    v24 = QuadPart;
    v25 = v106;
    p_QuadPart = v104;
    v13 = v109;
    v20 = v111;
    v17 = v116;
LABEL_61:
    QuadPart = ++v24;
    a3 = ++v23;
    v25 = (VIDMM_SEGMENT *)((char *)v25 + 24);
    v106 = v25;
    v101 = ++v21;
  }
  *v121 = v20;
  if ( a2[8].QuadPart )
  {
    v103 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 136);
    if ( !v103 || (*((_DWORD *)this + 1760) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1802);
      a2[3].HighPart &= ~4u;
      *v112 = 0;
      v83 = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1801);
      if ( (*((_DWORD *)v103 + 20) & 0x1000) != 0 )
        v82 = 0;
      else
        v82 = *((_DWORD *)v103 + 4) + 1;
      *v112 = v82;
      v83 = *((_QWORD *)v103 + 3) + *(_QWORD *)(a2[7].QuadPart + 144);
    }
    v84 = v117;
    v117->QuadPart = v83;
    v85 = a2[8];
    v86 = a6;
    if ( a6 + *(_DWORD *)(v85.QuadPart + 156) == 0x7FFFFFFF )
    {
      v89 = *(int *)(v85.QuadPart + 156);
      v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v84, v83);
      v90[3] = 270LL;
      v90[4] = 41LL;
      v90[5] = v85.QuadPart;
      v90[6] = v89;
      v90[7] = 0LL;
      WdLogEvent5_WdCriticalError(v90);
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v85.QuadPart + 156), a6);
  }
  else
  {
    *v112 = 0;
    *v117 = a2[11];
    v86 = a6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&a2[4], v86);
  if ( v86 > 1 )
    a2[3].HighPart |= 2u;
  v87 = v101;
  if ( !p_QuadPart )
    a2[18].LowPart = v101;
  a2[2].LowPart = v86;
  if ( (a2[3].HighPart & 4) != 0 )
  {
    v91 = *(_QWORD *)(*(_QWORD *)a2[17].QuadPart + 40LL);
    _InterlockedOr(v99, 0);
    v87 = v101;
    if ( a2[19].QuadPart == v91 )
      ++*((_DWORD *)this + 1803);
  }
  if ( (qword_1C004D010 & 4) != 0 )
  {
    v92 = a2[14];
    v93 = a2[13];
    v94 = *(_QWORD *)(a2[17].QuadPart + 24);
    for ( j = 0LL; (unsigned int)j < v87; j = (unsigned int)(j + 128) )
    {
      v96 = 128LL;
      if ( v87 - (unsigned int)j < 0x80 )
        v96 = v87 - (unsigned int)j;
      v97 = 0LL;
      if ( (_DWORD)v96 )
      {
        v98 = (int *)v130;
        do
        {
          *v98 = *(_DWORD *)(v92.QuadPart + 24LL * (unsigned int)((_DWORD)v97 + j) + 8) & 1;
          v97 = (const GUID *)(unsigned int)((_DWORD)v97 + 1);
          ++v98;
        }
        while ( (unsigned int)v97 < (unsigned int)v96 );
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v100) = v96;
        McTemplateK0ppqPR2TR2(v93.QuadPart + 8 * j, v96, v97, v94, a2, v100, v93.QuadPart + 8 * j, v130);
      }
    }
  }
  return 0LL;
}
