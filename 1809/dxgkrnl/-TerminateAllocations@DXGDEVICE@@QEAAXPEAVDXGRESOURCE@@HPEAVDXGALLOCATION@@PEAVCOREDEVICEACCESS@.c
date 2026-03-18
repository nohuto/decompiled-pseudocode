/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0101F10
 * Callers:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00138D8 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA824 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F9860 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00F9B30 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00FA690 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00FE630 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C012C894 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013FA44 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGALLOCATION **a2,
        unsigned int a3,
        struct DXGALLOCATION *a4,
        struct _KTHREAD ***a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v7; // r12
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F v8; // r13d
  struct DXGALLOCATION *v9; // rbx
  __int64 v10; // r9
  BOOL v12; // r14d
  BOOL v13; // r15d
  struct DXGALLOCATION *v14; // rsi
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r12
  struct DXGPROCESS *Current; // rbx
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v24; // r12d
  struct DXGALLOCATION **v25; // rsi
  __int64 v26; // rbx
  PSLIST_ENTRY v27; // rsi
  char v28; // r12
  unsigned __int64 v29; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rcx
  struct _SLIST_ENTRY *v35; // rcx
  ADAPTER_RENDER *v36; // rcx
  struct DXGALLOCATION *v37; // r9
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned int v40; // edx
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // rcx
  const GUID *v46; // r8
  char v47; // r15
  struct _KTHREAD **v48; // rcx
  __int64 v49; // rcx
  struct _KTHREAD **v50; // rcx
  struct _KTHREAD **v51; // rcx
  __int64 v52; // rcx
  const GUID *v53; // r8
  __int64 v54; // r12
  __int64 v55; // rcx
  const GUID *v56; // r8
  __int64 v57; // rax
  unsigned int v58; // r15d
  struct DXGPROCESS *v59; // rbx
  __int64 v60; // rcx
  const GUID *v61; // r8
  int v62; // r9d
  int v63; // r9d
  int v64; // r9d
  __int64 v65; // rdx
  __int64 (__fastcall *v66)(__int64, __int64, __int64); // rax
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v70; // r9d
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 *ThreadProperty; // rax
  __int64 v74; // rax
  __int64 *v75; // rax
  __int64 *v76; // r15
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // [rsp+30h] [rbp-58h]
  __int64 v81; // [rsp+38h] [rbp-50h]
  __int64 v82; // [rsp+38h] [rbp-50h]
  __int64 *v83; // [rsp+38h] [rbp-50h]
  __int64 v84; // [rsp+90h] [rbp+8h]
  __int64 v85; // [rsp+90h] [rbp+8h]
  char v88; // [rsp+A0h] [rbp+18h]
  __int64 v90; // [rsp+A8h] [rbp+20h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v91; // [rsp+B8h] [rbp+30h]

  v7 = 0LL;
  v8 = 0;
  v84 = 0LL;
  v91.0 = 0;
  v9 = a4;
  v10 = a3;
  v12 = (*(_BYTE *)&a6.0 & 2) == 0;
  v13 = *((_DWORD *)this + 82) == 2;
  if ( !*((_DWORD *)this + 18) )
  {
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
    v10 = a3;
  }
  v14 = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(*((_QWORD *)v14 + 6) + 4LL);
      if ( (v15 & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v14 + 18) & 0x800) != 0 )
        break;
      if ( (v15 & 0x800) != 0 )
        break;
      v16 = *((_QWORD *)this + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v16 + 16) + 185LL) )
        break;
      v17 = *((_QWORD *)v14 + 3);
      if ( !v17 )
        break;
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v16 + 544) + 8LL)
                                                                        + 624LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL) + 552LL),
              v17,
              0LL,
              v10);
      if ( !v19 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v71 + 24) = 955LL;
        WdLogEvent5_WdAssertion(v71);
      }
      v84 = v19 + v7;
      v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL) + 552LL);
      v80 = *(_QWORD *)(*((_QWORD *)this + 2) + 544LL);
      v81 = *((_QWORD *)v14 + 3);
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 144, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v62 = *((_DWORD *)Current + 40);
              if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v22, &EventBlockThread, v23, v62);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
          }
          *((_QWORD *)Current + 19) = KeGetCurrentThread();
        }
        v8 = v91.0;
      }
      v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v80 + 8) + 640LL))(v20, v81);
      if ( Current )
      {
        *((_QWORD *)Current + 19) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_DWORD *)&v8 += v24;
      v91.0 = v8;
      if ( v13
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                         + 8LL)
                                                             + 600LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
             *((_QWORD *)v14 + 3)) )
      {
        v13 = 0;
      }
      v14 = (struct DXGALLOCATION *)*((_QWORD *)v14 + 8);
      v7 = v84;
      if ( !v14 )
        goto LABEL_20;
    }
    v12 = 0;
LABEL_20:
    LODWORD(v10) = a3;
    v9 = a4;
  }
  v25 = a2;
  if ( (_DWORD)v10 )
  {
    DXGDEVICE::RemoveResourceFromDeviceList(this, (struct DXGRESOURCE *)a2);
    LODWORD(v10) = a3;
  }
  if ( !v12 || v13 || (!(_DWORD)v10 || !a2[3]) && a2 )
    goto LABEL_85;
  v26 = *((_QWORD *)this + 2);
  ++*(_DWORD *)(v26 + 1236);
  v27 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v26 + 1216));
  if ( !v27 )
  {
    v65 = *(unsigned int *)(v26 + 1260);
    v66 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v26 + 1264);
    v67 = *(unsigned int *)(v26 + 1256);
    v68 = *(unsigned int *)(v26 + 1252);
    ++*(_DWORD *)(v26 + 1240);
    v27 = (PSLIST_ENTRY)v66(v68, v65, v67);
    if ( !v27 )
    {
      v72 = WdLogNewEntry5_WdLowResource(v69);
      *(_QWORD *)(v72 + 24) = 4647LL;
      WdLogEvent5_WdLowResource(v72);
LABEL_112:
      v9 = a4;
      LODWORD(v10) = a3;
      v25 = a2;
LABEL_85:
      if ( (_DWORD)v10 )
        DXGDEVICE::DestroyResource(this, v25, (struct COREDEVICEACCESS *)a5, a6);
      else
        DXGDEVICE::DestroyAllocations(this, (unsigned __int64)v25, 0LL, v9, (struct COREDEVICEACCESS *)a5, a6);
      return;
    }
  }
  v28 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v26 + 1096, 0LL);
  *(_QWORD *)(v26 + 1104) = KeGetCurrentThread();
  v29 = *(_QWORD *)(v26 + 1080) + v84;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v33 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v83 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v33 = *v83;
      }
    }
  }
  if ( (*(_BYTE *)(v33 + 322) || v29 <= *((_QWORD *)DXGGLOBAL::GetGlobal(v32) + 67)) && v29 >= *(_QWORD *)(v26 + 1080) )
  {
    v28 = 1;
    *(_QWORD *)(v26 + 1080) = v29;
  }
  *(_QWORD *)(v26 + 1104) = 0LL;
  ExReleasePushLockExclusiveEx(v26 + 1096, 0LL);
  KeLeaveCriticalRegion();
  if ( !v28 )
  {
    v74 = WdLogNewEntry5_WdLowResource(v34);
    *(_QWORD *)(v74 + 24) = 4638LL;
    WdLogEvent5_WdLowResource(v74);
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v26, v27);
    goto LABEL_112;
  }
  *((_QWORD *)&v27->Next + 1) = a4;
  v27->Next = (struct _SLIST_ENTRY *)a2;
  v35 = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 5) + 56LL);
  *((_QWORD *)&v27[2].Next + 1) = v84;
  LODWORD(v27[2].Next) = v91;
  v27[1].Next = v35;
  *((_QWORD *)&v27[1].Next + 1) = this;
  LODWORD(v27[3].Next) = a6;
  ObfReferenceObject(v35);
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v88 = 0;
  if ( v27->Next )
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
      v36,
      (struct DXGRESOURCE *)v27->Next,
      (struct COREDEVICEACCESS *)a5);
  v38 = *((_QWORD *)&v27->Next + 1);
  if ( v38 )
  {
    do
    {
      v39 = *(_QWORD *)(v38 + 48);
      v40 = *(_DWORD *)(v39 + 4);
      if ( (v40 & 0x2000) != 0 && *(_QWORD *)(v38 + 24) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v40 >> 6) & 0xF, (struct DXGALLOCATION *)v38);
        v39 = *(_QWORD *)(v38 + 48);
      }
      v41 = *(_DWORD *)(v39 + 4);
      if ( (v41 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)this,
          (v41 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v38,
          v37);
      v42 = PsGetCurrentProcess();
      v43 = PsGetProcessDxgProcess(v42);
      v44 = v43;
      if ( v43 )
      {
        if ( (*(_BYTE *)(v43 + 323) & 4) != 0 )
        {
          v75 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v76 = v75;
          if ( v75 )
          {
            ObfDereferenceObject(v75);
            v44 = *v76;
          }
        }
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v44 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v70 = *(_DWORD *)(v44 + 224);
          if ( v70 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v45, &EventBlockThread, v46, v70);
        }
        ExAcquirePushLockExclusiveEx(v44 + 208, 0LL);
      }
      *(_QWORD *)(v44 + 216) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v44 + 232), *(_DWORD *)(v38 + 16));
      DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v38);
      *(_QWORD *)(v44 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v44 + 208, 0LL);
      KeLeaveCriticalRegion();
      v47 = 0;
      if ( a5 )
      {
        v48 = a5[3];
        if ( KeGetCurrentThread() != v48[20] && !ExIsResourceAcquiredExclusiveLite((PERESOURCE)v48[18]) )
        {
          v47 = 1;
          if ( *((_BYTE *)a5 + 80) )
            COREACCESS::Release(a5 + 5);
          if ( !*((_BYTE *)a5 + 32) )
          {
            v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49);
            v77[3] = 275LL;
            v77[4] = 4LL;
            v77[5] = a5 + 1;
            v77[6] = 0LL;
            v77[7] = 0LL;
            WdLogEvent5_WdCriticalError(v77);
          }
          v50 = a5[3];
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v50[20] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v50);
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v38 + 88));
      if ( v47 )
      {
        if ( *((_BYTE *)a5 + 32) )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51);
          v78[3] = 275LL;
          v78[4] = 4LL;
          v78[5] = a5 + 1;
          v78[6] = 0LL;
          v78[7] = 0LL;
          WdLogEvent5_WdCriticalError(v78);
        }
        v51 = a5[3];
        if ( KeGetCurrentThread() != v51[20] )
        {
          if ( !KeReadStateEvent((PRKEVENT)v51 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v52, &EventBlockThread, v53, 72);
            KeWaitForSingleObject(a5[3] + 6, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a5[3]);
        }
        *((_BYTE *)a5 + 32) = 1;
        if ( *((_BYTE *)a5 + 80) )
          COREACCESS::AcquireShared((DXGADAPTER **)a5 + 5);
      }
      v54 = *(_QWORD *)(v38 + 64);
      if ( *(_QWORD *)(v38 + 24) )
      {
        if ( !v88 )
        {
          v88 = 1;
          if ( this != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)this + 18) == KeGetCurrentThread() )
          {
            v79 = WdLogNewEntry5_WdAssertion(v51);
            *(_QWORD *)(v79 + 24) = 1309LL;
            WdLogEvent5_WdAssertion(v79);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 136, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v64 = *((_DWORD *)this + 38);
              if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v55, &EventBlockThread, v56, v64);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
          }
          *((_QWORD *)this + 18) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 438) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 220));
          *((_QWORD *)this + 18) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
          KeLeaveCriticalRegion();
        }
        v57 = *((_QWORD *)this + 2);
        v90 = *(_QWORD *)(v57 + 544);
        v82 = *(_QWORD *)(v57 + 552);
        v58 = (*(_DWORD *)(*(_QWORD *)(v38 + 48) + 4LL) >> 6) & 0xF;
        v85 = *(_QWORD *)(v38 + 24);
        v59 = DXGPROCESS::GetCurrent();
        if ( v59 )
        {
          if ( *((struct _KTHREAD **)v59 + 19) == KeGetCurrentThread() )
          {
            v59 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v59 + 144, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v63 = *((_DWORD *)v59 + 40);
                if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v60, &EventBlockThread, v61, v63);
              }
              ExAcquirePushLockExclusiveEx((char *)v59 + 144, 0LL);
            }
            *((_QWORD *)v59 + 19) = KeGetCurrentThread();
          }
        }
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, PSLIST_ENTRY))(*(_QWORD *)(v90 + 8) + 144LL))(
          v82,
          v85,
          v58,
          a6.Value,
          v27);
        if ( v59 )
        {
          *((_QWORD *)v59 + 19) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v59 + 144, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v38 = v54;
    }
    while ( v54 );
  }
}
