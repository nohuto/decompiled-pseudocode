/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100E00
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkLock @ 0x1C00FE020 (DxgkLock.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0136230 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247D24 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C025EFE0 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@IEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_K@Z @ 0x1C0260664 (-ProcessActiveInstances@DXGTRACKEDWORKLOAD@@IEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_K@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C01F4B14 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

__int64 __fastcall DXGDEVICE::Lock(PERESOURCE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3)
{
  POWNER_ENTRY OwnerTable; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 result; // rax
  __int64 Value; // r8
  int v9; // r13d
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
  int v20; // r12d
  __int64 v21; // rcx
  const GUID *v22; // r8
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct DXGALLOCATION *v29; // rdx
  __int64 v30; // rdx
  POWNER_ENTRY v31; // rcx
  __int64 v32; // r8
  ULONG_PTR Count; // r14
  ULONG_PTR v34; // rcx
  int v35; // eax
  int OwnerThread_high; // eax
  PERESOURCE v37; // rax
  unsigned int v38; // edi
  D3DKMT_HANDLE v39; // ebp
  bool v40; // zf
  __int64 v41; // r13
  PVOID SharedWaiters; // r12
  struct DXGPROCESS *v43; // rax
  char *v44; // rbx
  __int64 v45; // rcx
  const GUID *v46; // r8
  int v47; // r9d
  __int64 v48; // rdi
  char *v49; // rcx
  PERESOURCE v50; // rax
  PVOID v51; // r14
  __int64 v52; // r13
  ULONG_PTR v53; // r12
  struct DXGPROCESS *v54; // rbx
  __int64 v55; // rcx
  const GUID *v56; // r8
  int v57; // r9d
  __int16 v58; // r14
  PERESOURCE v59; // r13
  D3DKMT_HANDLE v60; // r12d
  __int64 v61; // rcx
  const GUID *v62; // r8
  int v63; // r9d
  D3DKMT_HANDLE v64; // ebx
  unsigned int v65; // ecx
  __int64 v66; // r9
  int v67; // edx
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 NumPages; // rcx
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v78; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  struct _KTHREAD *v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rcx
  int v86; // esi
  __int64 v87; // rax
  __int64 v88; // rbx
  _QWORD *v89; // rax
  unsigned int v90; // [rsp+28h] [rbp-90h]
  unsigned int v91; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v92; // [rsp+50h] [rbp-68h] BYREF
  struct DXGPROCESS *v93; // [rsp+58h] [rbp-60h] BYREF
  _D3DKMT_LOCK2 v94; // [rsp+60h] [rbp-58h] BYREF
  int v95; // [rsp+C0h] [rbp+8h]
  UINT PrivateDriverData; // [rsp+D8h] [rbp+20h]

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  if ( (*((_BYTE *)this + 1749) & 1) != 0 )
  {
    memset(&v94, 0, sizeof(v94));
    v94.hAllocation = a2->hAllocation;
    OwnerTable = this[2]->OwnerTable;
    Current = DXGPROCESS::GetCurrent();
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)&OwnerTable[259].0,
               Current,
               (struct DXGDEVICE *)this,
               &v94,
               1u,
               v90,
               v91);
    if ( (int)result >= 0 )
      a2->pData = v94.pData;
    return result;
  }
  Value = a2->Flags.Value;
  v9 = 1;
  v95 = 1;
  if ( (unsigned int)Value >= 0x800 )
  {
LABEL_89:
    v71 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, Value);
    v71[3] = this;
    NumPages = a2->Flags.Value;
LABEL_90:
    v71[4] = NumPages;
    LODWORD(v48) = -1073741811;
    v71[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v71);
    return (unsigned int)v48;
  }
  while ( 1 )
  {
    v10 = a2->NumPages == 0;
    if ( v10 != (a2->pPages == 0LL) )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, Value);
      v71[3] = this;
      NumPages = a2->NumPages;
      goto LABEL_90;
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
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&v11[2], 0LL) )
    {
      if ( bTracingEnabled )
      {
        v23 = (int)v11[2].OwnerTable;
        if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v21, &EventBlockThread, v22, v23);
      }
      ExAcquirePushLockSharedEx(&v11[2], 0LL);
    }
    v24 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < LODWORD(v11[2].ExclusiveWaiters) )
    {
      v25 = *(_QWORD *)&v11[2].ActiveCount;
      v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60)
        && (v26 & 0x2000) == 0
        && (v26 & 0x1F) != 0 )
      {
        v27 = v26 & 0x1F;
        if ( (_BYTE)v27 == 5 )
        {
          v29 = *(struct DXGALLOCATION **)(v25 + 16LL * (unsigned int)v24);
          goto LABEL_37;
        }
        v28 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v28 + 24) = 316LL;
        WdLogEvent5_WdError(v28);
      }
    }
    v29 = 0LL;
LABEL_37:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v92, v29);
    ExReleasePushLockSharedEx(&v11[2], 0LL);
    KeLeaveCriticalRegion();
    if ( !v92 )
      break;
    Count = v92[3].Count;
    if ( !Count )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      LODWORD(v48) = -1073741811;
      v74[3] = this;
      v74[4] = a2->hAllocation;
      v74[5] = v92;
      v74[6] = -1073741811LL;
      goto LABEL_97;
    }
    if ( (PERESOURCE *)v92[1].Count != this )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      LODWORD(v48) = -1073741811;
      v74[3] = v92;
      v74[4] = this;
      v74[5] = v92[1].Count;
      v74[6] = -1073741811LL;
      goto LABEL_97;
    }
    v30 = *(unsigned int *)(v92[6].Count + 4);
    if ( (v30 & 2) == 0 )
    {
      v34 = v92[5].Count;
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
    v37 = this[2];
    v38 = v20 | 0x100;
    v39 = a2->hAllocation & 0x3F;
    v40 = v9 == 1;
    v41 = *(_QWORD *)&v37[5].ActiveCount;
    if ( !v40 )
      v38 = v20;
    SharedWaiters = v37[5].SharedWaiters;
    PrivateDriverData = a2->PrivateDriverData;
    v43 = DXGPROCESS::GetCurrent();
    v93 = v43;
    if ( v43 )
    {
      v44 = (char *)v43 + 144;
      if ( *((struct _KTHREAD **)v43 + 19) == KeGetCurrentThread() )
      {
        v93 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v44, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v47 = *((_DWORD *)v44 + 4);
            if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v45, &EventBlockThread, v46, v47);
          }
          ExAcquirePushLockExclusiveEx(v44, 0LL);
        }
        *((_QWORD *)v44 + 1) = KeGetCurrentThread();
      }
    }
    LODWORD(v48) = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR, _QWORD, _QWORD, UINT, _QWORD, struct DXGPROCESS **, void **))(*(_QWORD *)(v41 + 8) + 256LL))(
                     SharedWaiters,
                     Count,
                     v39,
                     v38,
                     PrivateDriverData,
                     0LL,
                     &v93,
                     &a2->pData);
    if ( v93 )
    {
      v49 = (char *)v93 + 144;
      *((_QWORD *)v93 + 19) = 0LL;
      ExReleasePushLockExclusiveEx(v49, 0LL);
      KeLeaveCriticalRegion();
    }
    v50 = this[2];
    v51 = v50[5].SharedWaiters;
    v52 = *(_QWORD *)&v50[5].ActiveCount;
    v53 = v92[3].Count;
    v54 = DXGPROCESS::GetCurrent();
    if ( v54 )
    {
      if ( *((struct _KTHREAD **)v54 + 19) == KeGetCurrentThread() )
      {
        v54 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v54 + 144, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v57 = *((_DWORD *)v54 + 40);
            if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v55, &EventBlockThread, v56, v57);
          }
          ExAcquirePushLockExclusiveEx((char *)v54 + 144, 0LL);
        }
        *((_QWORD *)v54 + 19) = KeGetCurrentThread();
      }
    }
    v58 = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR))(*(_QWORD *)(v52 + 8) + 272LL))(v51, v53);
    if ( v54 )
    {
      *((_QWORD *)v54 + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v54 + 144, 0LL);
      KeLeaveCriticalRegion();
    }
    v59 = this[5];
    v60 = a2->hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(&v59[2], 0LL) )
    {
      if ( bTracingEnabled )
      {
        v63 = (int)v59[2].OwnerTable;
        if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v61, &EventBlockThread, v62, v63);
      }
      ExAcquirePushLockExclusiveEx(&v59[2], 0LL);
    }
    v64 = 0;
    v65 = (v60 >> 6) & 0xFFFFFF;
    v59[2].SystemResourcesList.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    if ( v65 < LODWORD(v59[2].ExclusiveWaiters) )
    {
      v66 = *(_QWORD *)&v59[2].ActiveCount;
      v67 = *(_DWORD *)(v66 + 16LL * v65 + 8);
      if ( ((v60 >> 25) & 0x60) == (*(_BYTE *)(v66 + 16LL * v65 + 8) & 0x60) && (v67 & 0x2000) == 0 && (v67 & 0x1F) != 0 )
      {
        *(_DWORD *)(v66 + 16LL * v65 + 8) = v67 ^ ((unsigned __int16)v67 ^ (unsigned __int16)(v58 << 7)) & 0x1F80;
        v64 = (*(_DWORD *)(*(_QWORD *)&v59[2].ActiveCount + 16LL * v65 + 8) >> 7) & 0x3F | ((v65 | ((*(_DWORD *)(*(_QWORD *)&v59[2].ActiveCount + 16LL * v65 + 8) & 0xFFFFFFE0) << 19)) << 6);
      }
    }
    v59[2].SystemResourcesList.Blink = 0LL;
    ExReleasePushLockExclusiveEx(&v59[2], 0LL);
    KeLeaveCriticalRegion();
    a2->hAllocation = v64;
    if ( (_DWORD)v48 != -1071775484 )
      goto LABEL_98;
    COREDEVICEACCESS::Release(a3);
    LODWORD(v48) = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)&this[2][5].ActiveCount
                                                                                            + 8LL)
                                                                                + 608LL))(
                     this[2][5].SharedWaiters,
                     v92[3].Count,
                     a2->hAllocation & 0x3F,
                     2LL);
    if ( (int)v48 < 0 )
      goto LABEL_98;
    v68 = COREDEVICEACCESS::AcquireShared(a3);
    v48 = v68;
    if ( v68 < 0 )
    {
      v73 = WdLogNewEntry5_WdEvent(v70, v69);
      *(_QWORD *)(v73 + 24) = v48;
      WdLogEvent5_WdEvent(v73);
      COREDEVICEACCESS::AcquireSharedUncheck(a3);
      goto LABEL_98;
    }
    a2->Flags.Value &= ~0x80u;
    if ( v95 != 1 )
      goto LABEL_98;
    v9 = 2;
    v95 = 2;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v92);
    Value = a2->Flags.Value;
    if ( (unsigned int)Value >= 0x800 )
      goto LABEL_89;
  }
  v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
  LODWORD(v48) = -1073741811;
  v74[3] = this;
  v74[4] = a2->hAllocation;
  v74[5] = -1073741811LL;
LABEL_97:
  WdLogEvent5_WdWarning(v74);
LABEL_98:
  v75 = (__int64)v92;
  if ( v92 )
    ExReleaseRundownProtection(v92 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v75) + 255) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v78 = WdLogNewEntry5_WdAssertion(v76);
      *(_QWORD *)(v78 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v78);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v76);
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v82 = *ThreadWin32Thread;
          if ( v82 )
          {
            if ( *(_QWORD *)(v82 + 80) )
            {
              v83 = KeGetCurrentThread();
              if ( !v83 )
              {
                v84 = WdLogNewEntry5_WdAssertion(v81);
                *(_QWORD *)(v84 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v84);
              }
              v86 = PsGetCurrentProcessSessionId(v81);
              if ( v86
                && (unsigned int)PsGetThreadSessionId(v83) == v86
                && !IsThreadCrossSessionAttached()
                && (v87 = PsGetThreadWin32Thread(v83)) != 0
                && *(_QWORD *)v87 )
              {
                v88 = *(_QWORD *)(*(_QWORD *)v87 + 80LL);
              }
              else
              {
                v88 = 0LL;
              }
              if ( *(_DWORD *)(v88 + 136) )
              {
                v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v85);
                v89[3] = 275LL;
                v89[4] = 38LL;
                v89[5] = *(int *)(v88 + 136);
                v89[6] = 0LL;
                v89[7] = 0LL;
                WdLogEvent5_WdCriticalError(v89);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v48;
}
