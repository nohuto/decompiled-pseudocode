/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C00FF3F0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0020824 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0020880 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00AC038 (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00E0080 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00EA9C0 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00FE630 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct DXGRESOURCE *a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
        struct DXGRESOURCE **a7)
{
  __int64 v8; // r14
  __int64 v11; // rcx
  int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // r9d
  unsigned int v18; // esi
  struct _KTHREAD *v19; // r9
  int v20; // edx
  __int64 v21; // rax
  struct DXGRESOURCE *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // r8
  struct _KTHREAD *v29; // rax
  _QWORD *v30; // rax
  struct DXGALLOCATION **v31; // r15
  struct DXGRESOURCE *v32; // rbx
  _QWORD *v33; // rax
  struct _KTHREAD *v34; // r8
  int v35; // edx
  struct _EX_RUNDOWN_REF *v36; // rbx
  ULONG_PTR i; // r8
  unsigned int v38; // edx
  __int64 v39; // rax
  struct _KTHREAD *v40; // r10
  int v41; // r9d
  unsigned int v42; // ebx
  struct DXGDEVICE *v43; // r14
  struct DXGRESOURCE *v44; // rax
  __int64 v45; // rsi
  unsigned int v46; // ebx
  struct _KTHREAD *v47; // r9
  int v48; // edx
  __int64 v49; // rax
  struct DXGALLOCATION *v50; // rdx
  __int64 v51; // rdx
  struct _KTHREAD *v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  unsigned int v55; // r9d
  unsigned int *v56; // rcx
  struct _KTHREAD *v57; // r9
  int v58; // r8d
  struct DXGRESOURCE *v59; // rbx
  __int64 v60; // rsi
  struct DXGALLOCATION *v61; // rdx
  struct _EX_RUNDOWN_REF *v62; // rdi
  _QWORD *v64; // rax
  struct DXGRESOURCE *v65; // rbx
  __int64 v66; // r14
  unsigned int v67; // r8d
  struct DXGALLOCATION *v68; // rsi
  __int64 v69; // rax
  struct _KTHREAD *v70; // rdx
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // [rsp+20h] [rbp-61h] BYREF
  struct DXGRESOURCE *v74; // [rsp+28h] [rbp-59h] BYREF
  struct DXGRESOURCE *v75; // [rsp+30h] [rbp-51h] BYREF
  struct DXGRESOURCE *v76; // [rsp+38h] [rbp-49h] BYREF
  struct DXGRESOURCE *v77; // [rsp+40h] [rbp-41h] BYREF
  struct DXGRESOURCE *v78; // [rsp+48h] [rbp-39h] BYREF
  struct DXGALLOCATION *v79; // [rsp+50h] [rbp-31h] BYREF
  struct DXGALLOCATION *v80; // [rsp+58h] [rbp-29h] BYREF
  struct DXGALLOCATION *v81; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v82[2]; // [rsp+68h] [rbp-19h] BYREF
  int v83; // [rsp+78h] [rbp-9h]
  struct DXGALLOCATION *v84; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v85; // [rsp+D8h] [rbp+57h]
  char v86; // [rsp+E0h] [rbp+5Fh]
  struct DXGRESOURCE *v87; // [rsp+E8h] [rbp+67h]

  v87 = a4;
  v85 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v74, 0LL);
  v12 = 0;
  v82[1] = (DXGPUSHLOCK *)(a1 + 26);
  v13 = 0;
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v14 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v14);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 26, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)a1 + 56);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockExclusiveEx(a1 + 26, 0LL);
  }
  a1[27] = KeGetCurrentThread();
  v83 = 2;
  if ( (_DWORD)v8 )
  {
    v18 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( v18 < *((_DWORD *)a1 + 62) )
    {
      v19 = a1[29];
      v20 = *((_DWORD *)v19 + 4 * v18 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v19 + 16 * v18 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        if ( (v20 & 0x1F) == 4 )
        {
          v22 = (struct DXGRESOURCE *)*((_QWORD *)v19 + 2 * v18);
          goto LABEL_18;
        }
        v21 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60);
        *(_QWORD *)(v21 + 24) = 316LL;
        WdLogEvent5_WdError(v21);
      }
    }
    v22 = 0LL;
LABEL_18:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v78, v22);
    DXGRESOURCEREFERENCE::MoveAssign(&v74, &v78);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v78);
    if ( !v74 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v27 = -1073741811;
      v26[3] = a2;
      v26[4] = v8;
      v26[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_70;
    }
    v28 = *((unsigned int *)a1 + 62);
    if ( v18 < (unsigned int)v28 )
    {
      v29 = a1[29];
      v24 = 2LL * v18;
      v23 = *((_DWORD *)v29 + 4 * v18 + 2) >> 14;
      LOBYTE(v23) = (*((_DWORD *)v29 + 4 * v18 + 2) & 0x4000) != 0;
      if ( (*((_DWORD *)v29 + 4 * v18 + 2) & 0x4000) != 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v28);
        v30[3] = a2;
        v30[4] = v8;
        v30[5] = -1073741267LL;
        WdLogEvent5_WdWarning(v30);
        v31 = a6;
        goto LABEL_80;
      }
    }
    v32 = v74;
    if ( *((struct DXGDEVICE **)v74 + 1) != a2 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v28);
      v33[3] = a2;
      v33[4] = v32;
      v33[5] = *((_QWORD *)v32 + 1);
      v33[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v33);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v75, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v74, &v75);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v75);
      v31 = a6;
      goto LABEL_80;
    }
    if ( v18 < (unsigned int)v28 )
    {
      v34 = a1[29];
      v35 = *((_DWORD *)v34 + 4 * v18 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v34 + 16 * v18 + 8) & 0x60)
        && (v35 & 0x2000) == 0
        && (v35 & 0x1F) != 0 )
      {
        *((_DWORD *)v34 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
    }
    v36 = (struct _EX_RUNDOWN_REF *)v74;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v82);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v74, &v76);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76);
    DxgkUnreferenceDxgResource(v36);
    ExWaitForRundownProtectionRelease(v36 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v36[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(v82);
    for ( i = v36[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v38 = *(_DWORD *)(i + 16);
      if ( v38 )
      {
        v39 = (v38 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v39 < *((_DWORD *)a1 + 62) )
        {
          v40 = a1[29];
          v41 = *((_DWORD *)v40 + 4 * v39 + 2);
          if ( ((v38 >> 25) & 0x60) == (*((_BYTE *)v40 + 16 * v39 + 8) & 0x60)
            && (v41 & 0x2000) == 0
            && (v41 & 0x1F) != 0 )
          {
            *((_DWORD *)v40 + 4 * ((v38 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v36 + 9);
    DxgkTryReferenceDxgResource(v36);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v77, (struct DXGRESOURCE *)v36);
    DXGRESOURCEREFERENCE::MoveAssign(&v74, &v77);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v77);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v82);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v36[10]);
    *a7 = v74;
LABEL_69:
    v27 = v12;
    goto LABEL_70;
  }
  v42 = a5;
  v31 = a6;
  v86 = 0;
  v77 = 0LL;
  if ( !a5 )
  {
LABEL_66:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v82);
    if ( v42 )
    {
      v60 = v42;
      do
      {
        v61 = *v31;
        v84 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79, v61);
        DXGALLOCATIONREFERENCE::MoveAssign(&v84, &v79);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79);
        v62 = (struct _EX_RUNDOWN_REF *)v84;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v80, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign(&v84, &v80);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v80);
        DxgkUnreferenceDxgAllocation(v62);
        ExWaitForRundownProtectionRelease(v62 + 11);
        ExInitializeRundownProtection(v62 + 11);
        DxgkReferenceDxgAllocation(v62);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81, (struct DXGALLOCATION *)v62);
        DXGALLOCATIONREFERENCE::MoveAssign(&v84, &v81);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
        ++v31;
        --v60;
      }
      while ( v60 );
    }
    goto LABEL_69;
  }
  v43 = v85;
  v44 = a4;
  v76 = a4;
  v75 = (struct DXGRESOURCE *)a6;
  while ( 1 )
  {
    v45 = *(unsigned int *)v44;
    v46 = (*(_DWORD *)v44 >> 6) & 0xFFFFFF;
    if ( v46 >= *((_DWORD *)a1 + 62) )
      goto LABEL_48;
    v47 = a1[29];
    v48 = *((_DWORD *)v47 + 4 * v46 + 2);
    if ( (((unsigned int)v45 >> 25) & 0x60) != (*((_BYTE *)v47 + 16 * v46 + 8) & 0x60)
      || (v48 & 0x2000) != 0
      || (v48 & 0x1F) == 0 )
    {
      goto LABEL_48;
    }
    if ( (v48 & 0x1F) != 5 )
    {
      v49 = WdLogNewEntry5_WdError(((unsigned int)v45 >> 25) & 0x60);
      *(_QWORD *)(v49 + 24) = 316LL;
      WdLogEvent5_WdError(v49);
LABEL_48:
      v50 = 0LL;
      goto LABEL_49;
    }
    v50 = (struct DXGALLOCATION *)*((_QWORD *)v47 + 2 * v46);
LABEL_49:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73, v50);
    v54 = v73;
    if ( !v73 )
      break;
    v55 = *((_DWORD *)a1 + 62);
    if ( v46 < v55 )
    {
      v52 = a1[29];
      v51 = 2LL * v46;
      v53 = *((_DWORD *)v52 + 4 * v46 + 2) >> 14;
      LOBYTE(v53) = (*((_DWORD *)v52 + 4 * v46 + 2) & 0x4000) != 0;
      if ( (*((_DWORD *)v52 + 4 * v46 + 2) & 0x4000) != 0 )
      {
        v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53);
        v64[5] = -1073741267LL;
        goto LABEL_77;
      }
    }
    if ( *(struct DXGDEVICE **)(v73 + 8) != v43 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53);
      v64[3] = v43;
      v64[4] = v73;
      v64[5] = *(_QWORD *)(v73 + 8);
      v64[6] = -1073741811LL;
      goto LABEL_78;
    }
    if ( !v86 )
    {
      v77 = *(struct DXGRESOURCE **)(v73 + 40);
      v86 = 1;
    }
    v56 = *(unsigned int **)(v73 + 40);
    if ( v56 != (unsigned int *)v77 )
    {
LABEL_73:
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v51, v53);
      v64[3] = v43;
      v64[4] = -1073741811LL;
      goto LABEL_78;
    }
    if ( v56 )
    {
      v51 = v56[1];
      if ( (v51 & 1) != 0 )
        goto LABEL_73;
      if ( !DxgkTryReferenceDxgResource((struct _EX_RUNDOWN_REF *)v56) )
      {
        LOBYTE(v12) = 1;
        goto LABEL_79;
      }
      *(_DWORD *)(v73 + 72) |= 0x100000u;
      v55 = *((_DWORD *)a1 + 62);
      v54 = v73;
    }
    if ( v46 < v55 )
    {
      v57 = a1[29];
      v58 = *((_DWORD *)v57 + 4 * v46 + 2);
      if ( (((unsigned int)v45 >> 25) & 0x60) == (*((_BYTE *)v57 + 16 * v46 + 8) & 0x60)
        && (v58 & 0x2000) == 0
        && (v58 & 0x1F) != 0 )
      {
        *((_DWORD *)v57 + 4 * (((unsigned int)v45 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        v54 = v73;
      }
    }
    v59 = v75;
    *(_QWORD *)v75 = v54;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73);
    v44 = (struct DXGRESOURCE *)((char *)v76 + 4);
    v75 = (struct DXGRESOURCE *)((char *)v59 + 8);
    v42 = a5;
    ++v13;
    v76 = (struct DXGRESOURCE *)((char *)v76 + 4);
    if ( v13 >= a5 )
      goto LABEL_66;
  }
  v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53);
  v64[5] = -1073741811LL;
LABEL_77:
  v64[3] = v43;
  v64[4] = v45;
LABEL_78:
  WdLogEvent5_WdWarning(v64);
LABEL_79:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73);
LABEL_80:
  if ( !v74 )
  {
    if ( v13 )
    {
      v65 = v87;
      v66 = v13;
      do
      {
        v67 = *(_DWORD *)v65;
        v68 = *v31;
        v69 = (*(_DWORD *)v65 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v69 < *((_DWORD *)a1 + 62) )
        {
          v70 = a1[29];
          if ( ((v67 >> 25) & 0x60) == (*((_BYTE *)v70 + 16 * v69 + 8) & 0x60)
            && (*((_DWORD *)v70 + 4 * v69 + 2) & 0x1F) != 0 )
          {
            v71 = 2LL * ((v67 >> 6) & 0xFFFFFF);
            if ( (*((_DWORD *)v70 + 4 * ((v67 >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
            {
              v72 = WdLogNewEntry5_WdAssertion((v67 >> 25) & 0x60);
              *(_QWORD *)(v72 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v72);
              v70 = a1[29];
            }
            *((_DWORD *)v70 + 2 * v71 + 2) &= ~0x2000u;
            v65 = v87;
          }
        }
        if ( (*((_DWORD *)v68 + 18) & 0x100000) != 0 )
        {
          DxgkUnreferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v68 + 5));
          *((_DWORD *)v68 + 18) &= ~0x100000u;
        }
        v65 = (struct DXGRESOURCE *)((char *)v65 + 4);
        ++v31;
        v87 = v65;
        --v66;
      }
      while ( v66 );
    }
    if ( (_BYTE)v12 )
    {
      v12 = 255;
      goto LABEL_69;
    }
  }
  v27 = -1073741811;
LABEL_70:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v74);
  return v27;
}
