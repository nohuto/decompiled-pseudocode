/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E0E20
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C3E20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkLock @ 0x1C00E0860 (DxgkLock.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0146750 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C016EC30 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027D6FC (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02950A8 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02974EC (-ProcessActiveInstances@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0224AD0 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

__int64 __fastcall DXGDEVICE::Lock(PERESOURCE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3)
{
  POWNER_ENTRY OwnerTable; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 result; // rax
  __int64 Value; // r8
  int v9; // r15d
  _BOOL8 v10; // rcx
  PERESOURCE v11; // rbp
  D3DKMT_HANDLE hAllocation; // ebx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // r12d
  __int64 v21; // rcx
  const GUID *v22; // r8
  int SpinLock; // r9d
  __int64 v24; // rax
  struct _LIST_ENTRY *Flink; // r8
  int Blink; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct DXGALLOCATION *v29; // rdx
  __int64 v30; // rdx
  POWNER_ENTRY v31; // rcx
  __int64 v32; // r8
  ULONG_PTR Count; // rsi
  ULONG_PTR v34; // rcx
  int v35; // eax
  int OwnerThread_high; // eax
  __int64 v37; // r9
  __int64 v38; // rbx
  __int16 v39; // ax
  PERESOURCE v40; // r13
  __int16 v41; // bp
  D3DKMT_HANDLE v42; // r12d
  __int64 v43; // rcx
  const GUID *v44; // r8
  int v45; // r9d
  D3DKMT_HANDLE v46; // esi
  unsigned int v47; // ecx
  struct _LIST_ENTRY *v48; // r9
  int v49; // edx
  __int64 v50; // rdx
  int v51; // eax
  _QWORD *v52; // rax
  __int64 NumPages; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v60; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  struct _KTHREAD *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // esi
  __int64 v71; // rax
  __int64 v72; // rdi
  _QWORD *v73; // rax
  unsigned int v74; // [rsp+28h] [rbp-70h]
  unsigned int v75; // [rsp+30h] [rbp-68h]
  _D3DKMT_LOCK2 v76; // [rsp+40h] [rbp-58h] BYREF
  int v77; // [rsp+A0h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v79; // [rsp+B8h] [rbp+20h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  if ( (*((_BYTE *)this + 1749) & 1) != 0 )
  {
    memset(&v76, 0, sizeof(v76));
    v76.hAllocation = a2->hAllocation;
    OwnerTable = this[2]->OwnerTable;
    Current = DXGPROCESS::GetCurrent();
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)&OwnerTable[259],
               Current,
               (struct DXGDEVICE *)this,
               &v76,
               1u,
               v74,
               v75);
    if ( (int)result >= 0 )
      a2->pData = v76.pData;
    return result;
  }
  Value = a2->Flags.Value;
  v9 = 1;
  v77 = 1;
  if ( (unsigned int)Value >= 0x800 )
  {
LABEL_64:
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, Value);
    v52[3] = this;
    NumPages = a2->Flags.Value;
LABEL_65:
    v52[4] = NumPages;
    LODWORD(v38) = -1073741811;
    v52[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v52);
    return (unsigned int)v38;
  }
  while ( 1 )
  {
    v10 = a2->NumPages == 0;
    if ( v10 != (a2->pPages == 0LL) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, Value);
      v52[3] = this;
      NumPages = a2->NumPages;
      goto LABEL_65;
    }
    v11 = this[5];
    hAllocation = a2->hAllocation;
    v13 = ((Value & 4) == 0) | 2;
    if ( (Value & 8) == 0 )
      v13 = (Value & 4) == 0;
    v14 = v13 | 4;
    if ( (Value & 0x20) == 0 )
      v14 = v13;
    v15 = v14 | 8;
    if ( (Value & 0x40) == 0 )
      v15 = v14;
    v16 = v15 | 0x10;
    if ( (Value & 0x80u) == 0LL )
      v16 = v15;
    v17 = v16 | 0x20;
    if ( (Value & 0x100) == 0 )
      v17 = v16;
    v18 = v17 | 0x48;
    if ( (Value & 0x200) == 0 )
      v18 = v17;
    v19 = v18 | 0x80;
    if ( (Value & 0x400) == 0 )
      v19 = v18;
    v20 = v19 | 0x200;
    if ( (Value & 1) == 0 )
      v20 = v19;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&v11[1].Reserved2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        SpinLock = v11[1].SpinLock;
        if ( SpinLock != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v21, &EventBlockThread, v22, SpinLock);
      }
      ExAcquirePushLockSharedEx(&v11[1].Reserved2, 0LL);
    }
    v24 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < LODWORD(v11[2].OwnerTable) )
    {
      Flink = v11[2].SystemResourcesList.Flink;
      Blink = (int)Flink[v24].Blink;
      if ( ((hAllocation >> 25) & 0x60) == ((__int64)Flink[v24].Blink & 0x60)
        && (Blink & 0x2000) == 0
        && (Blink & 0x1F) != 0 )
      {
        v27 = Blink & 0x1F;
        if ( (_BYTE)v27 == 5 )
        {
          v29 = (struct DXGALLOCATION *)Flink[(unsigned int)v24].Flink;
          goto LABEL_37;
        }
        v28 = WdLogNewEntry5_WdError(v27, 2LL * (unsigned int)v24, Flink);
        *(_QWORD *)(v28 + 24) = 267LL;
        WdLogEvent5_WdError(v28);
      }
    }
    v29 = 0LL;
LABEL_37:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79, v29);
    ExReleasePushLockSharedEx(&v11[1].Reserved2, 0LL);
    KeLeaveCriticalRegion();
    if ( !v79 )
      break;
    Count = v79[3].Count;
    if ( !Count )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      LODWORD(v38) = -1073741811;
      v55[3] = this;
      v55[4] = a2->hAllocation;
      v55[5] = v79;
      v55[6] = -1073741811LL;
      goto LABEL_73;
    }
    if ( (PERESOURCE *)v79[1].Count != this )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      LODWORD(v38) = -1073741811;
      v55[3] = v79;
      v55[4] = this;
      v55[5] = v79[1].Count;
      v55[6] = -1073741811LL;
      goto LABEL_73;
    }
    v30 = *(unsigned int *)(v79[6].Count + 4);
    if ( (v30 & 2) == 0 )
    {
      v34 = v79[5].Count;
      if ( v34 )
      {
        v35 = *(_DWORD *)(v34 + 4);
        if ( (v35 & 1) != 0 && (v35 & 2) == 0 )
        {
          v31 = this[2]->OwnerTable;
          OwnerThread_high = HIDWORD(v31[19].OwnerThread);
          if ( (OwnerThread_high & 0x10) == 0 && (OwnerThread_high & 8) == 0 )
            break;
        }
      }
    }
    v37 = v20;
    LODWORD(v37) = v20 | 0x100;
    if ( v9 != 1 )
      v37 = v20;
    LODWORD(v38) = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR, _QWORD, __int64, UINT, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount + 8LL) + 256LL))(
                     this[2][5].SharedWaiters,
                     Count,
                     a2->hAllocation & 0x3F,
                     v37,
                     a2->PrivateDriverData,
                     0LL,
                     &a2->pData);
    v39 = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount + 8LL) + 272LL))(
            this[2][5].SharedWaiters,
            v79[3].Count);
    v40 = this[5];
    v41 = v39;
    v42 = a2->hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(&v40[1].Reserved2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v45 = v40[1].SpinLock;
        if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v43, &EventBlockThread, v44, v45);
      }
      ExAcquirePushLockExclusiveEx(&v40[1].Reserved2, 0LL);
    }
    v46 = 0;
    v47 = (v42 >> 6) & 0xFFFFFF;
    v40[1].CreatorBackTraceIndex = (ULONG_PTR)KeGetCurrentThread();
    if ( v47 < LODWORD(v40[2].OwnerTable) )
    {
      v48 = v40[2].SystemResourcesList.Flink;
      v49 = (int)v48[v47].Blink;
      if ( ((v42 >> 25) & 0x60) == ((__int64)v48[v47].Blink & 0x60) && (v49 & 0x2000) == 0 && (v49 & 0x1F) != 0 )
      {
        LODWORD(v48[v47].Blink) = v49 ^ ((unsigned __int16)v49 ^ (unsigned __int16)(v41 << 7)) & 0x1F80;
        v46 = (LODWORD(v40[2].SystemResourcesList.Flink[v47].Blink) >> 7) & 0x3F | ((v47 | (((__int64)v40[2].SystemResourcesList.Flink[v47].Blink & 0xFFFFFFE0) << 19)) << 6);
      }
    }
    v40[1].CreatorBackTraceIndex = 0LL;
    ExReleasePushLockExclusiveEx(&v40[1].Reserved2, 0LL);
    KeLeaveCriticalRegion();
    a2->hAllocation = v46;
    if ( (_DWORD)v38 != -1071775484 )
      goto LABEL_74;
    COREDEVICEACCESS::Release(a3);
    LODWORD(v38) = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount
                                                                                            + 8LL)
                                                                                + 608LL))(
                     this[2][5].SharedWaiters,
                     v79[3].Count,
                     a2->hAllocation & 0x3F,
                     2LL);
    if ( (int)v38 < 0 )
      goto LABEL_74;
    v51 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
    v38 = v51;
    if ( v51 < 0 )
    {
      v54 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v54 + 24) = v38;
      WdLogEvent5_WdEvent(v54);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)a3);
      goto LABEL_74;
    }
    a2->Flags.Value &= ~0x80u;
    if ( v77 != 1 )
      goto LABEL_74;
    v9 = 2;
    v77 = 2;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79);
    Value = a2->Flags.Value;
    if ( (unsigned int)Value >= 0x800 )
      goto LABEL_64;
  }
  v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
  LODWORD(v38) = -1073741811;
  v55[3] = this;
  v55[4] = a2->hAllocation;
  v55[5] = -1073741811LL;
LABEL_73:
  WdLogEvent5_WdWarning(v55);
LABEL_74:
  v56 = (__int64)v79;
  if ( v79 )
    ExReleaseRundownProtection(v79 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v56, v50) + 247) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v60 = WdLogNewEntry5_WdAssertion(v58, v57);
      *(_QWORD *)(v60 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v60);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v58, v57);
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v65 = *ThreadWin32Thread;
          if ( v65 )
          {
            if ( *(_QWORD *)(v65 + 80) )
            {
              v66 = KeGetCurrentThread();
              if ( !v66 )
              {
                v67 = WdLogNewEntry5_WdAssertion(v64, v63);
                *(_QWORD *)(v67 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v67);
              }
              v70 = PsGetCurrentProcessSessionId(v64, v63);
              if ( v70
                && (unsigned int)PsGetThreadSessionId(v66) == v70
                && !IsThreadCrossSessionAttached()
                && (v71 = PsGetThreadWin32Thread(v66)) != 0
                && *(_QWORD *)v71 )
              {
                v72 = *(_QWORD *)(*(_QWORD *)v71 + 80LL);
              }
              else
              {
                v72 = 0LL;
              }
              if ( *(_DWORD *)(v72 + 136) )
              {
                v73 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69, v68);
                v73[3] = 275LL;
                v73[4] = 38LL;
                v73[5] = *(int *)(v72 + 136);
                v73[6] = 0LL;
                v73[7] = 0LL;
                WdLogEvent5_WdCriticalError(v73);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v38;
}
