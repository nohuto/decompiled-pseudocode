/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0072E40
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0002A00 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002524 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C00258F4 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppqPR2TR2 @ 0x1C0025D70 (McTemplateK0ppqPR2TR2.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006A9E4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0081994 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0081BA0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C00AA358 (-AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
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
        struct VIDMM_ALLOC **a10,
        struct _VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  unsigned int v12; // r15d
  unsigned __int64 *p_QuadPart; // r13
  struct DXGPROCESS *Current; // r10
  __int64 v17; // r8
  unsigned int v18; // eax
  union _LARGE_INTEGER v19; // rax
  struct VIDMM_ALLOC *v20; // rdx
  unsigned int v21; // edi
  struct _D3DDDI_ALLOCATIONLIST *v22; // rsi
  struct VIDMM_ALLOC **v23; // r12
  VIDMM_SEGMENT *v24; // r9
  struct DXGALLOCATION *v25; // rax
  struct VIDMM_ALLOC *v26; // r13
  __int64 v27; // r15
  _DWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // r8d
  _DWORD *v32; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 *v34; // rsi
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdi
  int v44; // eax
  int v45; // eax
  struct VIDMM_ALLOC *v46; // r15
  UINT v47; // edi
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned int v50; // ebx
  unsigned int v51; // esi
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // eax
  _DWORD *v66; // rdx
  int v67; // eax
  __int64 v68; // rax
  int v69; // r9d
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // edi
  VIDMM_GLOBAL *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // eax
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
  struct DXGPROCESS *v108; // [rsp+70h] [rbp-318h]
  unsigned int v109; // [rsp+78h] [rbp-310h]
  __int64 v110; // [rsp+80h] [rbp-308h]
  struct VIDMM_ALLOC *v111; // [rsp+88h] [rbp-300h]
  unsigned int *v112; // [rsp+90h] [rbp-2F8h]
  union _LARGE_INTEGER *v113; // [rsp+98h] [rbp-2F0h]
  __int64 v114; // [rsp+A0h] [rbp-2E8h]
  struct _VIDMM_PRIMARIES_REFERENCES *v115; // [rsp+A8h] [rbp-2E0h]
  __int64 v116; // [rsp+B0h] [rbp-2D8h]
  unsigned int v117; // [rsp+B8h] [rbp-2D0h]
  struct DXGALLOCATION **v118; // [rsp+C0h] [rbp-2C8h]
  __int64 v119; // [rsp+C8h] [rbp-2C0h]
  struct VIDMM_ALLOC **v120; // [rsp+D0h] [rbp-2B8h]
  unsigned __int64 *v121; // [rsp+D8h] [rbp-2B0h]
  __int64 v122; // [rsp+E0h] [rbp-2A8h]
  unsigned __int64 v123; // [rsp+E8h] [rbp-2A0h]
  unsigned __int64 v124; // [rsp+F0h] [rbp-298h]
  __int64 v125; // [rsp+F8h] [rbp-290h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-288h]
  struct _KTHREAD *v127; // [rsp+108h] [rbp-280h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-278h] BYREF
  _BYTE v129[512]; // [rsp+140h] [rbp-248h] BYREF

  v12 = a4;
  v109 = a4;
  v112 = a7;
  v113 = a8;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v104 = (unsigned __int64 *)&a9->QuadPart;
  v121 = (unsigned __int64 *)&a9->QuadPart;
  v120 = a10;
  v115 = a11;
  v118 = a12;
  v101 = 0;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v106 = (VIDMM_SEGMENT *)a2[14].QuadPart;
  Current = DXGPROCESS::GetCurrent();
  v108 = Current;
  v17 = *(_QWORD *)(a2[17].QuadPart + 16);
  v116 = v17;
  if ( a9 )
    *a9 = a2[12];
  *a10 = 0LL;
  ++*((_DWORD *)this + 1794);
  *((_DWORD *)this + 1795) += v12;
  v18 = *((_DWORD *)this + 1796);
  if ( v12 > v18 )
    v18 = v12;
  *((_DWORD *)this + 1796) = v18;
  a2[3].HighPart |= 4u;
  v19 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[17].QuadPart + 40LL);
  _InterlockedOr(v99, 0);
  a2[19] = v19;
  *(_DWORD *)a11 = 0;
  v114 = 0LL;
  v20 = 0LL;
  v111 = 0LL;
  v21 = 0;
  v101 = 0;
  v22 = a3;
  v23 = QuadPart;
  v24 = v106;
  while ( 1 )
  {
    v103 = v24;
    if ( v21 >= v12 )
      break;
    if ( !v22->hAllocation )
    {
      ++*((_DWORD *)this + 1797);
      *v23 = 0LL;
      *(_QWORD *)v24 = 0LL;
      *((_QWORD *)v24 + 1) = 0LL;
      *((_QWORD *)v24 + 2) = 0LL;
      goto LABEL_60;
    }
    v25 = v118[v21];
    if ( !v25 )
    {
      v82 = WdLogNewEntry5_WdError(v118, v20, v17, v24);
      *(_QWORD *)(v82 + 24) = v22->hAllocation;
      *(_QWORD *)(v82 + 32) = v21;
      WdLogEvent5_WdError(v82);
      v50 = -1071775468;
      v102 = -1071775468;
      v51 = a6;
LABEL_151:
      if ( !p_QuadPart && v21 )
      {
        do
        {
          if ( *--v23 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v23, v51);
          --v21;
        }
        while ( v21 );
      }
      return v50;
    }
    v26 = (struct VIDMM_ALLOC *)*((_QWORD *)v25 + 3);
    v105 = v26;
    v27 = **(_QWORD **)v26;
    v28 = *(_DWORD **)(v27 + 504);
    v29 = *v28 >> 14;
    if ( (*v28 & 0x4000) != 0 )
    {
      if ( v20 || (v22->Value & 1) == 0 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29, v20);
        v49[3] = v26;
        v49[4] = v111;
        v49[5] = v22->Value & 1;
        WdLogEvent5_WdAssertion(v49);
        v50 = -1071775482;
        v102 = -1071775482;
        v51 = a6;
        p_QuadPart = v104;
        goto LABEL_151;
      }
      v111 = v26;
    }
    if ( *(_BYTE *)(v27 + 96) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v29);
        v53 = WdLogNewEntry5_WdTrace(v52);
        *(_QWORD *)(v53 + 24) = a2;
        *(_QWORD *)(v53 + 32) = v26;
      }
      v50 = -1071775482;
      v102 = -1071775482;
      v51 = a6;
      p_QuadPart = v104;
      goto LABEL_151;
    }
    if ( *((_QWORD *)v26 + 1) != v17 && (*((_BYTE *)Current + 299) & 8) == 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v29, v20, v17, v24);
      v54[3] = v116;
      v54[4] = v26;
      v54[5] = v21;
      v54[6] = *((_QWORD *)v26 + 1);
      WdLogEvent5_WdError(v54);
      v50 = -1071775467;
      v102 = -1071775467;
      v51 = a6;
      p_QuadPart = v104;
      goto LABEL_151;
    }
    if ( *(_WORD *)(*((_QWORD *)v26 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v59 = WdLogNewEntry5_WdAssertion(v56, v55);
        *(_QWORD *)(v59 + 24) = a2;
        *(_QWORD *)(v59 + 32) = v26;
        WdLogEvent5_WdAssertion(v59);
        v50 = -1071775466;
        v102 = -1071775466;
        v51 = a6;
        p_QuadPart = v104;
        goto LABEL_151;
      }
      v60 = WdLogNewEntry5_WdError(v56, v55, v57, v58);
      *(_QWORD *)(v60 + 24) = a2;
      *(_QWORD *)(v60 + 32) = v26;
      WdLogEvent5_WdError(v60);
      v24 = v103;
      Current = v108;
    }
    *v23 = v26;
    v30 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 32LL);
    *(_QWORD *)v24 = v30;
    v31 = v22->Value & 1;
    if ( v31 )
    {
      if ( *((_BYTE *)v26 + 24) )
      {
        v122 = *((_QWORD *)this + 3);
        if ( *(int *)(v122 + 2184) >= 4608 )
        {
          v61 = WdLogNewEntry5_WdWarning(v30, v20);
          WdLogEvent5_WdWarning(v61);
          v64 = WdLogNewEntry5_WdWarning(v63, v62);
          *(_QWORD *)(v64 + 24) = a2;
          *(_QWORD *)(v64 + 32) = v26;
          WdLogEvent5_WdWarning(v64);
          v50 = -1073741790;
          v102 = -1073741790;
          v51 = a6;
          p_QuadPart = v104;
          goto LABEL_151;
        }
      }
    }
    v32 = (_DWORD *)((char *)v24 + 8);
    i = v31 | *((_DWORD *)v24 + 2) & 0xFFFFFFFE;
    *((_DWORD *)v24 + 2) = i;
    if ( (v22->Value & 1) != 0 )
    {
      ++*((_DWORD *)this + 1798);
      i = (unsigned int)*v32;
    }
    if ( (i & 1) != 0 )
    {
      if ( (**(_DWORD **)(v27 + 504) & 0x200000) != 0 )
      {
        *((_DWORD *)v115 + 34) |= 1u;
        i = (unsigned int)*v32;
      }
      if ( (i & 1) != 0 )
      {
        i = (**(_DWORD **)(v27 + 504) >> 23) | ((unsigned __int16)**(_DWORD **)(v27 + 504) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v27 + 504) | (**(_DWORD **)(v27 + 504) >> 11)) >> 11)) & 0x100u;
        if ( (unsigned int)i >= 0x100 )
        {
          i = (unsigned __int64)v115;
          if ( *(_DWORD *)v115 >= 0x10u )
          {
            ++*((_DWORD *)this + 1804);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)v26 + 26);
            v26 = v105;
            *(_QWORD *)(i + 8LL * *(unsigned int *)i + 8) = v105;
            v24 = v106;
          }
          ++*(_DWORD *)i;
        }
      }
    }
    v103 = *(VIDMM_SEGMENT **)(v27 + 136);
    v34 = v104;
    if ( v104 )
      goto LABEL_23;
    if ( !v103 || (*((_DWORD *)this + 1760) & 0x40) != 0 )
    {
      v26 = v105;
      v24 = v106;
LABEL_23:
      ++*((_DWORD *)this + 1802);
      *v32 &= 0xFFFFFFC1;
      if ( v34 )
      {
        i = a2[17].QuadPart;
        v123 = i;
        if ( (*(_DWORD *)(i + 32) & 0x20) != 0 )
        {
          v36 = *((_QWORD *)v26 + 18);
        }
        else
        {
          v124 = i;
          v35 = *(_DWORD *)(i + 8);
          v117 = v35;
          v32 = (_DWORD *)((char *)v26 + 128);
          for ( i = *((_QWORD *)v26 + 16); (_DWORD *)i != v32; i = *(_QWORD *)i )
          {
            if ( ((*(_DWORD *)(i + 40) >> 4) & 0x3F) == v35 )
            {
              v36 = *(_QWORD *)(i + 72);
              goto LABEL_29;
            }
          }
          v36 = 0LL;
LABEL_29:
          v119 = v36;
        }
        *((_QWORD *)v24 + 2) = v36;
      }
      else
      {
        *((_QWORD *)v24 + 2) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
        goto LABEL_54;
      v125 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v125 + 308) & 4) != 0 || !*(_BYTE *)(v27 + 97) && (*(_DWORD *)(v27 + 76) & 0x400) == 0 )
        goto LABEL_54;
      v37 = *(_QWORD *)(v27 + 320);
      KeEnterCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v37 + 16) == CurrentThread )
      {
        v67 = *(_DWORD *)(v37 + 24);
        if ( v67 <= 0 )
        {
          v68 = WdLogNewEntry5_WdAssertion(v39, v38);
          *(_QWORD *)(v68 + 24) = 559LL;
          WdLogEvent5_WdAssertion(v68);
          v67 = *(_DWORD *)(v37 + 24);
        }
        *(_DWORD *)(v37 + 24) = v67 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v69 = *(_DWORD *)(v37 + 28);
            if ( v69 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v39, (const EVENT_DESCRIPTOR *)"g", v40, v69);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v37 + 8));
          ExAcquirePushLockExclusiveEx(v37, 0LL);
        }
        if ( *(_QWORD *)(v37 + 16) )
        {
          v70 = WdLogNewEntry5_WdAssertion(v39, v38);
          *(_QWORD *)(v70 + 24) = 583LL;
          WdLogEvent5_WdAssertion(v70);
        }
        if ( *(_DWORD *)(v37 + 24) )
        {
          v71 = WdLogNewEntry5_WdAssertion(v39, v38);
          *(_QWORD *)(v71 + 24) = 584LL;
          WdLogEvent5_WdAssertion(v71);
        }
        *(_QWORD *)(v37 + 16) = KeGetCurrentThread();
        *(_DWORD *)(v37 + 24) = 1;
      }
      v114 = v27;
      v41 = *(_QWORD *)(v27 + 112);
      if ( v41 )
        goto LABEL_65;
      if ( (*(_DWORD *)(v27 + 80) & 0xA000) != 0 )
      {
        v48 = *(_QWORD *)(v27 + 520);
      }
      else
      {
        v42 = *(_QWORD **)(v27 + 104);
        v38 = v42[3];
        if ( v38 )
        {
          v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v42[1] + 24LL) + 88LL))(*(_QWORD *)(v42[1] + 24LL));
        }
        else
        {
          v41 = v42[10];
          if ( !v41 )
            goto LABEL_45;
LABEL_65:
          v48 = *(_QWORD *)(v41 + 8);
        }
      }
      v110 = v48;
      if ( !v48 )
      {
LABEL_45:
        if ( !*(_QWORD *)(v27 + 136)
          && (**(_DWORD **)(v27 + 504) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v27 + 8)) >= 0 )
        {
          v72 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v74 = *(_QWORD *)(v27 + 104);
          if ( v74 )
          {
            KeStackAttachProcess(**(PRKPROCESS **)(v74 + 8), &ApcState);
            v72 = 1;
            v74 = *(_QWORD *)(v27 + 104);
          }
          if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                      v73,
                      (struct _VIDMM_LOCAL_ALLOC *)v74,
                      (struct _VIDMM_GLOBAL_ALLOC *)v27,
                      0LL,
                      *(_QWORD *)(v27 + 8),
                      (enum _LOCK_OPERATION)v100,
                      0LL,
                      0) < 0 )
          {
            v77 = WdLogNewEntry5_WdError(v39, v38, v75, v76);
            *(_QWORD *)(v77 + 24) = v27;
            WdLogEvent5_WdError(v77);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v27 + 8));
          }
          else
          {
            ++*(_DWORD *)(v27 + 348);
            *(_DWORD *)(v27 + 84) |= 2u;
          }
          if ( v72 )
            KeUnstackDetachProcess(&ApcState);
        }
      }
      v114 = 0LL;
      v43 = *(_QWORD *)(v27 + 320);
      v127 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v43 + 16) != v127 )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38);
        v78[3] = 275LL;
        v78[4] = 4LL;
        v78[5] = v43;
        v78[6] = 0LL;
        v78[7] = 0LL;
        WdLogEvent5_WdCriticalError(v78);
      }
      v44 = *(_DWORD *)(v43 + 24);
      if ( v44 <= 0 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v39, v38);
        *(_QWORD *)(v79 + 24) = 603LL;
        WdLogEvent5_WdAssertion(v79);
        v44 = *(_DWORD *)(v43 + 24);
      }
      v45 = v44 - 1;
      *(_DWORD *)(v43 + 24) = v45;
      if ( !v45 )
      {
        *(_QWORD *)(v43 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v43, 0LL);
      }
      KeLeaveCriticalRegion();
      Current = v108;
      goto LABEL_53;
    }
    ++*((_DWORD *)this + 1801);
    v65 = VIDMM_SEGMENT::DriverId(v103);
    *v66 ^= (*v66 ^ (2 * v65)) & 0x3E;
    v32 = (_DWORD *)(*(_QWORD *)(v27 + 144) + *((_QWORD *)v103 + 3));
    *((_QWORD *)v106 + 2) = v32;
LABEL_53:
    v26 = v105;
LABEL_54:
    if ( !v34 )
    {
      VIDMM_GLOBAL::AddDMAReferences(v26, a6);
      Current = v108;
    }
    v46 = v105;
    if ( !*((_DWORD *)v26 + 38) && (*((_BYTE *)v105 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)this + 40872) & 4) == 0
        || (i = *(unsigned int *)(*((_QWORD *)this + 3) + 308LL), (i & 0x10) == 0) )
      {
        v80 = WdLogNewEntry5_WdAssertion(i, v32);
        *(_QWORD *)(v80 + 24) = v46;
        WdLogEvent5_WdAssertion(v80);
        v50 = -1073741823;
        v102 = -1073741823;
        VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v46 + 1) + 32LL));
        p_QuadPart = v34;
        v51 = a6;
        if ( !p_QuadPart )
          VIDMM_GLOBAL::RemoveDMAReferences(v46, a6);
        v21 = v101;
        v23 = QuadPart;
        goto LABEL_151;
      }
    }
    v22 = a3;
    v47 = (a3->Value >> 2) & 7;
    if ( v47 )
    {
      v81 = WdLogNewEntry5_WdAssertion(i, v32);
      *(_QWORD *)(v81 + 24) = v46;
      *(_QWORD *)(v81 + 32) = v47;
      WdLogEvent5_WdAssertion(v81);
      Current = v108;
    }
    v21 = v101;
    v23 = QuadPart;
    v24 = v106;
    p_QuadPart = v104;
    v12 = v109;
    v20 = v111;
    v17 = v116;
LABEL_60:
    QuadPart = ++v23;
    a3 = ++v22;
    v24 = (VIDMM_SEGMENT *)((char *)v24 + 24);
    v106 = v24;
    v101 = ++v21;
  }
  *v120 = v20;
  if ( a2[8].QuadPart )
  {
    v103 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 136);
    if ( !v103 || (*((_DWORD *)this + 1760) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1802);
      a2[3].HighPart &= ~4u;
      *v112 = 0;
      v84 = v113;
      v113->QuadPart = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1801);
      if ( (*((_DWORD *)v103 + 20) & 0x1000) != 0 )
        v83 = 0;
      else
        v83 = *((_DWORD *)v103 + 4) + 1;
      *v112 = v83;
      v20 = (struct VIDMM_ALLOC *)(*((_QWORD *)v103 + 3) + *(_QWORD *)(a2[7].QuadPart + 144));
      v84 = v113;
      v113->QuadPart = (LONGLONG)v20;
    }
    v85 = a2[8];
    v86 = a6;
    if ( a6 + *(_DWORD *)(v85.QuadPart + 156) == 0x7FFFFFFF )
    {
      v89 = *(int *)(v85.QuadPart + 156);
      v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v84, v20);
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
    *v113 = a2[11];
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
  if ( (qword_1C004E010 & 4) != 0 )
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
        v98 = (int *)v129;
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
        McTemplateK0ppqPR2TR2(v93.QuadPart + 8 * j, v96, v97, v94, a2, v100, v93.QuadPart + 8 * j, v129);
      }
    }
  }
  return 0LL;
}
