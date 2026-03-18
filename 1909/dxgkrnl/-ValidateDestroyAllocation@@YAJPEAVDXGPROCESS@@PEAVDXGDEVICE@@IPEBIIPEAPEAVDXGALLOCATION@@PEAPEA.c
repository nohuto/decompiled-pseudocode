/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0116200
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C5E0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0023404 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C002342C (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00C2160 (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00F8E40 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00F8E60 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00FFDA0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01169E4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C013D838 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
        unsigned int a5,
        struct _EX_RUNDOWN_REF **a6,
        struct DXGRESOURCE **a7)
{
  __int64 v8; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r12d
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  int v18; // r9d
  unsigned int v19; // ebx
  struct _KTHREAD *v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  struct DXGRESOURCE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _EX_RUNDOWN_REF *v29; // rdi
  _QWORD *v30; // rax
  unsigned int v31; // ebx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  struct _EX_RUNDOWN_REF **v34; // r15
  struct _KTHREAD *v35; // r8
  int v36; // edx
  __int64 v37; // rdx
  ULONG_PTR i; // r8
  unsigned int v39; // edx
  __int64 v40; // rax
  struct _KTHREAD *v41; // r10
  int v42; // r9d
  __int64 v43; // rdx
  unsigned int v44; // ebx
  struct _EX_RUNDOWN_REF *v45; // rax
  struct DXGALLOCATION **v46; // r14
  ULONG_PTR Count_low; // rdi
  unsigned int v48; // ebx
  struct _KTHREAD *v49; // r9
  int v50; // edx
  __int64 v51; // rdx
  __int64 v52; // rax
  struct _EX_RUNDOWN_REF *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  struct _EX_RUNDOWN_REF *v57; // rax
  ULONG_PTR v58; // rcx
  struct _KTHREAD *v59; // r9
  int v60; // r8d
  __int64 v61; // rsi
  struct _EX_RUNDOWN_REF *v62; // rdx
  __int64 v63; // rdx
  struct _EX_RUNDOWN_REF *v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  struct _EX_RUNDOWN_REF *v70; // rax
  __int64 v71; // rdx
  struct _EX_RUNDOWN_REF *v72; // rbx
  __int64 v73; // r14
  unsigned int v74; // r8d
  struct _EX_RUNDOWN_REF *v75; // rdi
  __int64 v76; // rax
  struct _KTHREAD *v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // rax
  struct DXGRESOURCE *v80; // [rsp+20h] [rbp-61h] BYREF
  struct DXGALLOCATION *v81; // [rsp+28h] [rbp-59h] BYREF
  struct _EX_RUNDOWN_REF *v82; // [rsp+30h] [rbp-51h] BYREF
  struct _EX_RUNDOWN_REF *Count; // [rsp+38h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *v84; // [rsp+40h] [rbp-41h] BYREF
  struct _EX_RUNDOWN_REF *v85; // [rsp+48h] [rbp-39h] BYREF
  struct _EX_RUNDOWN_REF *v86; // [rsp+50h] [rbp-31h] BYREF
  struct _EX_RUNDOWN_REF *v87; // [rsp+58h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v88; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v89[2]; // [rsp+68h] [rbp-19h] BYREF
  int v90; // [rsp+78h] [rbp-9h]
  struct _EX_RUNDOWN_REF *v91; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v92; // [rsp+D8h] [rbp+57h]
  char v93; // [rsp+E0h] [rbp+5Fh]
  struct _EX_RUNDOWN_REF *v94; // [rsp+E8h] [rbp+67h]

  v94 = a4;
  v92 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v80, 0LL);
  v13 = 0;
  v89[1] = (DXGPUSHLOCK *)(a1 + 23);
  v14 = 0;
  if ( a1 != (struct _KTHREAD **)-184LL && a1[24] == KeGetCurrentThread() )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v15 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v15);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 23, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v18 = *((_DWORD *)a1 + 50);
      if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v16, &EventBlockThread, v17, v18);
    }
    ExAcquirePushLockExclusiveEx(a1 + 23, 0LL);
  }
  a1[24] = KeGetCurrentThread();
  v90 = 2;
  if ( (_DWORD)v8 )
  {
    v19 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( v19 < *((_DWORD *)a1 + 56) )
    {
      v20 = a1[26];
      v21 = *((_DWORD *)v20 + 4 * v19 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v20 + 16 * v19 + 8) & 0x60)
        && (v21 & 0x2000) == 0
        && (v21 & 0x1F) != 0 )
      {
        v22 = v21 & 0x1F;
        if ( (_BYTE)v22 == 4 )
        {
          v24 = (struct DXGRESOURCE *)*((_QWORD *)v20 + 2 * v19);
          goto LABEL_18;
        }
        v23 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v22, 2LL * v19);
        *(_QWORD *)(v23 + 24) = 267LL;
        WdLogEvent5_WdError(v23);
      }
    }
    v24 = 0LL;
LABEL_18:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v84, v24);
    DXGRESOURCEREFERENCE::MoveAssign(&v80, &v84);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v84, v25);
    v29 = (struct _EX_RUNDOWN_REF *)v80;
    if ( !v80 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v31 = -1073741811;
      v30[3] = a2;
      v30[4] = v8;
      v30[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_65;
    }
    if ( *((struct DXGDEVICE **)v80 + 1) != a2 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v31 = -1073741811;
      v32[3] = a2;
      v32[4] = v29;
      v32[5] = v29[1].Count;
      v32[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v85, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v80, &v85);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v85, v33);
      v34 = a6;
      goto LABEL_73;
    }
    if ( v19 < *((_DWORD *)a1 + 56) )
    {
      v35 = a1[26];
      v36 = *((_DWORD *)v35 + 4 * v19 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v35 + 16 * v19 + 8) & 0x60)
        && (v36 & 0x2000) == 0
        && (v36 & 0x1F) != 0 )
      {
        *((_DWORD *)v35 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v89);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v82, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v80, &v82);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v82, v37);
    DxgkUnreferenceDxgResource(v29);
    ExWaitForRundownProtectionRelease(v29 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v29[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(v89);
    for ( i = v29[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v39 = *(_DWORD *)(i + 16);
      if ( v39 )
      {
        v40 = (v39 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v40 < *((_DWORD *)a1 + 56) )
        {
          v41 = a1[26];
          v42 = *((_DWORD *)v41 + 4 * v40 + 2);
          if ( ((v39 >> 25) & 0x60) == (*((_BYTE *)v41 + 16 * v40 + 8) & 0x60)
            && (v42 & 0x2000) == 0
            && (v42 & 0x1F) != 0 )
          {
            *((_DWORD *)v41 + 4 * ((v39 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v29 + 9);
    DxgkTryReferenceDxgResource(v29);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Count, (struct DXGRESOURCE *)v29);
    DXGRESOURCEREFERENCE::MoveAssign(&v80, &Count);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&Count, v43);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v89);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v29[10]);
    *a7 = v80;
LABEL_64:
    v31 = v13;
    goto LABEL_65;
  }
  v44 = a5;
  v34 = a6;
  v93 = 0;
  Count = 0LL;
  if ( !a5 )
  {
LABEL_61:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v89);
    if ( v44 )
    {
      v61 = v44;
      do
      {
        v62 = *v34;
        v81 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86, v62);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v81, &v86);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86, v63);
        v64 = (struct _EX_RUNDOWN_REF *)v81;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v87, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v81, &v87);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v87, v65);
        DxgkUnreferenceDxgAllocation(v64);
        ExWaitForRundownProtectionRelease(v64 + 11);
        ExInitializeRundownProtection(v64 + 11);
        DxgkReferenceDxgAllocation(v64);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v88, v64);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v81, &v88);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v88, v66);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v81, v67);
        ++v34;
        --v61;
      }
      while ( v61 );
    }
    goto LABEL_64;
  }
  v45 = a4;
  v46 = (struct DXGALLOCATION **)a6;
  v82 = a4;
  while ( 1 )
  {
    Count_low = LODWORD(v45->Count);
    v48 = (LODWORD(v45->Count) >> 6) & 0xFFFFFF;
    if ( v48 >= *((_DWORD *)a1 + 56) )
      goto LABEL_45;
    v49 = a1[26];
    v50 = *((_DWORD *)v49 + 4 * v48 + 2);
    if ( (((unsigned int)Count_low >> 25) & 0x60) != (*((_BYTE *)v49 + 16 * v48 + 8) & 0x60)
      || (v50 & 0x2000) != 0
      || (v50 & 0x1F) == 0 )
    {
      goto LABEL_45;
    }
    v51 = v50 & 0x1F;
    if ( (_BYTE)v51 != 5 )
    {
      v52 = WdLogNewEntry5_WdError(((unsigned int)Count_low >> 25) & 0x60, v51, 2LL * v48);
      *(_QWORD *)(v52 + 24) = 267LL;
      WdLogEvent5_WdError(v52);
LABEL_45:
      v53 = 0LL;
      goto LABEL_46;
    }
    v53 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v49 + 2 * v48);
LABEL_46:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v91, v53);
    v57 = v91;
    if ( !v91 )
      break;
    if ( (struct DXGDEVICE *)v91[1].Count != v92 )
    {
      v70 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v92, v54, v56);
      v31 = -1073741811;
      v70[3].Count = (ULONG_PTR)v92;
      v70[4].Count = (ULONG_PTR)v91;
      v70[5].Count = v91[1].Count;
      v70[6].Count = -1073741811LL;
      goto LABEL_72;
    }
    if ( !v93 )
    {
      Count = (struct _EX_RUNDOWN_REF *)v91[5].Count;
      v93 = 1;
    }
    v58 = v91[5].Count;
    if ( (struct _EX_RUNDOWN_REF *)v58 != Count )
    {
LABEL_67:
      v70 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v58, v54, v56);
      v31 = -1073741811;
      v70[4].Count = -1073741811LL;
      goto LABEL_71;
    }
    if ( v58 )
    {
      v54 = *(unsigned int *)(v58 + 4);
      if ( (v54 & 1) != 0 )
        goto LABEL_67;
      if ( !DxgkTryReferenceDxgResource((struct _EX_RUNDOWN_REF *)v58) )
      {
        LOBYTE(v13) = 1;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91, v54);
        v31 = -1073741811;
        goto LABEL_73;
      }
      LODWORD(v91[9].Count) |= 0x100000u;
      v57 = v91;
    }
    if ( v48 < *((_DWORD *)a1 + 56) )
    {
      v59 = a1[26];
      v54 = ((unsigned int)Count_low >> 25) & 0x60;
      v60 = *((_DWORD *)v59 + 4 * v48 + 2);
      if ( (((unsigned int)Count_low >> 25) & 0x60) == (*((_BYTE *)v59 + 16 * v48 + 8) & 0x60)
        && (v60 & 0x2000) == 0
        && (v60 & 0x1F) != 0 )
      {
        *((_DWORD *)v59 + 4 * (((unsigned int)Count_low >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        v57 = v91;
      }
    }
    *v46 = (struct DXGALLOCATION *)v57;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91, v54);
    ++v14;
    v44 = a5;
    v45 = (struct _EX_RUNDOWN_REF *)((char *)&v82->Ptr + 4);
    ++v46;
    v82 = (struct _EX_RUNDOWN_REF *)((char *)v82 + 4);
    if ( v14 >= a5 )
      goto LABEL_61;
  }
  v70 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v55, v54, v56);
  v31 = -1073741811;
  v70[4].Count = Count_low;
  v70[5].Count = -1073741811LL;
LABEL_71:
  v70[3].Count = (ULONG_PTR)v92;
LABEL_72:
  WdLogEvent5_WdWarning(v70);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91, v71);
LABEL_73:
  if ( !v80 )
  {
    if ( v14 )
    {
      v72 = v94;
      v73 = v14;
      do
      {
        v74 = v72->Count;
        v75 = *v34;
        v76 = (LODWORD(v72->Count) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v76 < *((_DWORD *)a1 + 56) )
        {
          v77 = a1[26];
          if ( ((v74 >> 25) & 0x60) == (*((_BYTE *)v77 + 16 * v76 + 8) & 0x60)
            && (*((_DWORD *)v77 + 4 * v76 + 2) & 0x1F) != 0 )
          {
            v78 = 2LL * ((v74 >> 6) & 0xFFFFFF);
            if ( (*((_DWORD *)v77 + 4 * ((v74 >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
            {
              v79 = WdLogNewEntry5_WdAssertion((v74 >> 25) & 0x60, v77);
              *(_QWORD *)(v79 + 24) = 217LL;
              WdLogEvent5_WdAssertion(v79);
              v77 = a1[26];
            }
            *((_DWORD *)v77 + 2 * v78 + 2) &= ~0x2000u;
            v72 = v94;
          }
        }
        if ( (v75[9].Count & 0x100000) != 0 )
        {
          DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)v75[5].Count);
          LODWORD(v75[9].Count) &= ~0x100000u;
        }
        v72 = (struct _EX_RUNDOWN_REF *)((char *)v72 + 4);
        ++v34;
        v94 = v72;
        --v73;
      }
      while ( v73 );
    }
    if ( (_BYTE)v13 )
    {
      v13 = 255;
      goto LABEL_64;
    }
    v31 = -1073741811;
  }
LABEL_65:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v80, v68);
  return v31;
}
