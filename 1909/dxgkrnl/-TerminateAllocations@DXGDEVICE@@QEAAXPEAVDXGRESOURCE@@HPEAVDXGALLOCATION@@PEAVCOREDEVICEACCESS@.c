/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F83F0
 * Callers:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F1840 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0019FE0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00E3AB4 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00E4D14 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8D70 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00F8E40 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00F8E60 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0102D80 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0154154 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        PERESOURCE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  struct DXGALLOCATION *v7; // r15
  BOOL v8; // ebp
  int v9; // r12d
  struct DXGRESOURCE *v10; // r13
  DXGDEVICE *v11; // rsi
  BOOL v12; // r14d
  struct DXGALLOCATION *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rbp
  PSLIST_ENTRY v19; // r14
  char v20; // r13
  unsigned __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  struct _SLIST_ENTRY *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DXGALLOCATION *v33; // r9
  struct _SLIST_ENTRY *Next; // rdi
  char v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rcx
  const GUID *v44; // r8
  char v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  const GUID *v52; // r8
  __int64 v53; // r15
  __int64 v54; // rcx
  const GUID *v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  const GUID *v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // rcx
  const GUID *v65; // r8
  char v66; // bp
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 (__fastcall *v69)(__int64, __int64, __int64); // rax
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  int v77; // r9d
  int v78; // r9d
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // r9d
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v85; // rax
  __int64 *v86; // r15
  int v87; // r9d
  __int64 *v88; // rax
  __int64 *v89; // r15
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  __int64 *v93; // [rsp+30h] [rbp-58h]
  __int64 v94; // [rsp+90h] [rbp+8h]
  struct DXGRESOURCE *v95; // [rsp+98h] [rbp+10h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v98; // [rsp+B8h] [rbp+30h]

  v95 = a2;
  v7 = a4;
  v94 = 0LL;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v98.0 = 0;
  v9 = a3;
  v10 = a2;
  v11 = (DXGDEVICE *)this;
  v12 = *((_DWORD *)this + 82) == 2;
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  v13 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      this = (PERESOURCE *)*(unsigned int *)(*((_QWORD *)v13 + 6) + 4LL);
      if ( ((unsigned __int8)this & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v13 + 18) & 0x800) != 0 )
        break;
      if ( ((unsigned __int16)this & 0x800) != 0 )
        break;
      v14 = *((_QWORD *)v11 + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 185LL) )
        break;
      a2 = (struct DXGRESOURCE *)*((_QWORD *)v13 + 3);
      if ( !a2 )
        break;
      v17 = (*(__int64 (__fastcall **)(_QWORD, struct DXGRESOURCE *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 544) + 8LL)
                                                                            + 624LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 552LL),
              a2,
              0LL);
      if ( !v17 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v79 + 24) = 956LL;
        WdLogEvent5_WdAssertion(v79);
      }
      v94 += v17;
      *(_DWORD *)&v98.0 += (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 640LL))(
                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 552LL),
                             *((_QWORD *)v13 + 3));
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 544LL)
                                                                         + 8LL)
                                                             + 600LL))(
             *(_QWORD *)(*((_QWORD *)v11 + 2) + 552LL),
             *((_QWORD *)v13 + 3)) )
      {
        v12 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      if ( !v13 )
        goto LABEL_13;
    }
    v8 = 0;
LABEL_13:
    v9 = a3;
  }
  if ( v9 )
  {
    if ( v11 != (DXGDEVICE *)-184LL && *((struct _KTHREAD **)v11 + 24) == KeGetCurrentThread() )
    {
      v80 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v80 + 24) = 1449LL;
      WdLogEvent5_WdAssertion(v80);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v11 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v81 = *((_DWORD *)v11 + 50);
        if ( v81 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v57, &EventBlockThread, v58, v81);
      }
      ExAcquirePushLockExclusiveEx((char *)v11 + 184, 0LL);
    }
    *((_QWORD *)v11 + 24) = KeGetCurrentThread();
    if ( v10 == *((struct DXGRESOURCE **)v11 + 7) || *((_QWORD *)v10 + 4) )
    {
      v59 = *((_QWORD *)v10 + 5);
      if ( v59 )
        *(_QWORD *)(v59 + 32) = *((_QWORD *)v10 + 4);
      v60 = *((_QWORD *)v10 + 4);
      if ( v60 )
      {
        *(_QWORD *)(v60 + 40) = *((_QWORD *)v10 + 5);
      }
      else
      {
        if ( *((struct DXGRESOURCE **)v11 + 7) != v10 )
        {
          v82 = WdLogNewEntry5_WdAssertion(0LL, v56);
          *(_QWORD *)(v82 + 24) = 8495LL;
          WdLogEvent5_WdAssertion(v82);
        }
        *((_QWORD *)v11 + 7) = *((_QWORD *)v10 + 5);
      }
    }
    *((_QWORD *)v11 + 24) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v11 + 184, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v8 || v12 || (!v9 || !*((_QWORD *)v10 + 3)) && v10 )
    goto LABEL_99;
  v18 = *((_QWORD *)v11 + 2);
  ++*(_DWORD *)(v18 + 1236);
  v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v18 + 1216));
  if ( !v19 )
  {
    v68 = *(unsigned int *)(v18 + 1260);
    v69 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v18 + 1264);
    v70 = *(unsigned int *)(v18 + 1256);
    v71 = *(unsigned int *)(v18 + 1252);
    ++*(_DWORD *)(v18 + 1240);
    v19 = (PSLIST_ENTRY)v69(v71, v68, v70);
    if ( !v19 )
    {
      v83 = WdLogNewEntry5_WdLowResource(v73, v72, v74, v75);
      *(_QWORD *)(v83 + 24) = 4673LL;
      WdLogEvent5_WdLowResource(v83);
      goto LABEL_99;
    }
  }
  v20 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v18 + 1096, 0LL);
  *(_QWORD *)(v18 + 1104) = KeGetCurrentThread();
  v21 = *(_QWORD *)(v18 + 1080) + v94;
  CurrentProcess = PsGetCurrentProcess(v23, v22);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v28 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v93 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v28 = *v93;
    }
  }
  if ( (*(_BYTE *)(v28 + 298) || v21 <= *((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 67))
    && v21 >= *(_QWORD *)(v18 + 1080) )
  {
    v20 = 1;
    *(_QWORD *)(v18 + 1080) = v21;
  }
  *(_QWORD *)(v18 + 1104) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 1096, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v76 = WdLogNewEntry5_WdEvent(v29);
    *(_QWORD *)(v76 + 24) = 4664LL;
    WdLogEvent5_WdEvent(v76);
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v18, (struct DXGTERMINATIONTRACKER *)v19);
    v7 = a4;
    v10 = v95;
    v9 = a3;
LABEL_99:
    if ( v9 )
      DXGDEVICE::DestroyResource(v11, (struct DXGALLOCATION **)v10, a5, a6);
    else
      DXGDEVICE::DestroyAllocations(v11, v10, 0, v7, (PERESOURCE **)a5, a6);
    return;
  }
  v19->Next = (struct _SLIST_ENTRY *)v95;
  *((_QWORD *)&v19->Next + 1) = a4;
  v30 = *(struct _SLIST_ENTRY **)(*((_QWORD *)v11 + 5) + 56LL);
  *((_QWORD *)&v19[2].Next + 1) = v94;
  LODWORD(v19[2].Next) = v98;
  v19[1].Next = v30;
  *((_QWORD *)&v19[1].Next + 1) = v11;
  LODWORD(v19[3].Next) = a6;
  ObfReferenceObject(v30);
  if ( !*((_DWORD *)v11 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v11 + 13));
  Next = v19->Next;
  v35 = 0;
  if ( v19->Next )
  {
    v61 = PsGetCurrentProcess(v32, v31);
    v62 = PsGetProcessDxgProcess(v61);
    v63 = v62;
    if ( !v62 || (*(_BYTE *)(v62 + 299) & 4) != 0 )
    {
      v85 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v86 = v85;
      if ( v85 )
      {
        ObfDereferenceObject(v85);
        v63 = *v86;
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v63 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v87 = *(_DWORD *)(v63 + 200);
        if ( v87 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v64, &EventBlockThread, v65, v87);
      }
      ExAcquirePushLockExclusiveEx(v63 + 184, 0LL);
    }
    *(_QWORD *)(v63 + 192) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v63 + 208), (unsigned int)Next[1].Next);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)Next);
    *(_QWORD *)(v63 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v63 + 184, 0LL);
    KeLeaveCriticalRegion();
    v66 = 0;
    if ( a5 )
    {
      v67 = *((_QWORD *)a5 + 3);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v67 + 160)
        && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v67 + 144)) )
      {
        v66 = 1;
        if ( *((_BYTE *)a5 + 144) )
          COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 8));
      }
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Next[4].Next + 1);
    if ( v66 )
    {
      COREACCESS::AcquireShared((__int64)a5 + 8, 0xFFFFFFFF, 0LL);
      if ( *((_BYTE *)a5 + 144) )
        COREACCESS::AcquireShared((__int64)a5 + 72, 0xFFFFFFFF, 0LL);
    }
  }
  v36 = *((_QWORD *)&v19->Next + 1);
  if ( v36 )
  {
    do
    {
      v37 = *(_QWORD *)(v36 + 48);
      v38 = *(_DWORD *)(v37 + 4);
      if ( (v38 & 0x2000) != 0 && *(_QWORD *)(v36 + 24) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(v11, (v38 >> 6) & 0xF, (struct DXGALLOCATION *)v36);
        v37 = *(_QWORD *)(v36 + 48);
      }
      v39 = *(unsigned int *)(v37 + 4);
      if ( (v39 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)v11,
          ((unsigned int)v39 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v36,
          v33);
      v40 = PsGetCurrentProcess(v32, v39);
      v41 = PsGetProcessDxgProcess(v40);
      v42 = v41;
      if ( !v41 || (*(_BYTE *)(v41 + 299) & 4) != 0 )
      {
        v88 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v89 = v88;
        if ( v88 )
        {
          ObfDereferenceObject(v88);
          v42 = *v89;
        }
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v42 + 184, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v78 = *(_DWORD *)(v42 + 200);
          if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v43, &EventBlockThread, v44, v78);
        }
        ExAcquirePushLockExclusiveEx(v42 + 184, 0LL);
      }
      *(_QWORD *)(v42 + 192) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v42 + 208), *(_DWORD *)(v36 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v36);
      *(_QWORD *)(v42 + 192) = 0LL;
      ExReleasePushLockExclusiveEx(v42 + 184, 0LL);
      KeLeaveCriticalRegion();
      v45 = 0;
      if ( a5 )
      {
        v46 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v46 + 160)
          && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v46 + 144)) )
        {
          v45 = 1;
          if ( *((_BYTE *)a5 + 144) )
            COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
          if ( !*((_BYTE *)a5 + 32) )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47);
            v90[3] = 275LL;
            v90[4] = 4LL;
            v90[5] = (char *)a5 + 8;
            v90[6] = 0LL;
            v90[7] = 0LL;
            WdLogEvent5_WdCriticalError(v90);
          }
          v49 = *((_QWORD *)a5 + 3);
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v49 + 160) )
            DXGADAPTER::ReleaseCoreResource(v49, *((unsigned int *)a5 + 9), *((_QWORD *)a5 + 5));
          *((_DWORD *)a5 + 9) = -1;
          *((_QWORD *)a5 + 5) = 0LL;
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v36 + 88));
      if ( v45 )
      {
        if ( *((_BYTE *)a5 + 32) )
        {
          v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v50);
          v91[3] = 275LL;
          v91[4] = 4LL;
          v91[5] = (char *)a5 + 8;
          v91[6] = 0LL;
          v91[7] = 0LL;
          WdLogEvent5_WdCriticalError(v91);
        }
        v32 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v32 + 160) )
        {
          if ( !KeReadStateEvent((PRKEVENT)(v32 + 48)) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v51, &EventBlockThread, v52, 72);
            KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(*((_QWORD *)a5 + 3), 0xFFFFFFFFLL, 0LL);
        }
        *((_DWORD *)a5 + 9) = -1;
        *((_QWORD *)a5 + 5) = 0LL;
        *((_BYTE *)a5 + 32) = 1;
        if ( *((_BYTE *)a5 + 144) )
          COREACCESS::AcquireShared((__int64)a5 + 72, 0xFFFFFFFF, 0LL);
      }
      v53 = *(_QWORD *)(v36 + 64);
      if ( *(_QWORD *)(v36 + 24) )
      {
        if ( !v35 )
        {
          v35 = 1;
          if ( v11 != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)v11 + 18) == KeGetCurrentThread() )
          {
            v92 = WdLogNewEntry5_WdAssertion(v32, v50);
            *(_QWORD *)(v92 + 24) = 1449LL;
            WdLogEvent5_WdAssertion(v92);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v11 + 136, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v77 = *((_DWORD *)v11 + 38);
              if ( v77 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v54, &EventBlockThread, v55, v77);
            }
            ExAcquirePushLockExclusiveEx((char *)v11 + 136, 0LL);
          }
          *((_QWORD *)v11 + 18) = KeGetCurrentThread();
          if ( ++*((_DWORD *)v11 + 438) == 1 )
            KeClearEvent(*((PRKEVENT *)v11 + 220));
          *((_QWORD *)v11 + 18) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v11 + 136, 0LL);
          KeLeaveCriticalRegion();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 544LL)
                                                                                         + 8LL)
                                                                             + 144LL))(
          *(_QWORD *)(*((_QWORD *)v11 + 2) + 552LL),
          *(_QWORD *)(v36 + 24),
          (*(_DWORD *)(*(_QWORD *)(v36 + 48) + 4LL) >> 6) & 0xF,
          a6.Value,
          v19);
      }
      v36 = v53;
    }
    while ( v53 );
  }
}
