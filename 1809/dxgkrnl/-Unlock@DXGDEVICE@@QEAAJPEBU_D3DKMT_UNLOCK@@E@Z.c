/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkLock @ 0x1C00FE020 (DxgkLock.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C0124710 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C0124840 (DxgkUnlock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247D24 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C025EFE0 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@IEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_K@Z @ 0x1C0260664 (-ProcessActiveInstances@DXGTRACKEDWORKLOAD@@IEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_K@Z.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0012380 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0015668 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C0021E04 (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C01F79D8 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C021A774 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, __int64 a3)
{
  const struct _D3DKMT_UNLOCK *v3; // r13
  __int64 NumAllocations; // rcx
  __int64 v6; // rax
  __int64 v8; // rax
  D3DKMT_HANDLE hDevice; // eax
  __int64 v10; // rbx
  struct DXGPROCESS *Current; // rax
  int v12; // r14d
  __int64 v13; // r12
  unsigned int *v14; // rdx
  unsigned int v15; // ebx
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGALLOCATION *v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rax
  unsigned int v23; // esi
  unsigned int v24; // esi
  __int64 v25; // r14
  struct DXGALLOCATION *DisplayedPrimary; // rax
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  struct DXGALLOCATION *v33; // rcx
  __int64 v34; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v36; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v41; // rax
  struct _KTHREAD *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // ebx
  __int64 v46; // rbx
  __int64 *v47; // rax
  __int64 v48; // rbx
  _QWORD *v49; // rax
  unsigned int v50; // [rsp+30h] [rbp-78h]
  struct _D3DKMT_UNLOCK2 v51; // [rsp+38h] [rbp-70h] BYREF
  struct DXGALLOCATION *v52; // [rsp+40h] [rbp-68h] BYREF
  DXGADAPTER *v53[12]; // [rsp+48h] [rbp-60h] BYREF
  char v54; // [rsp+C0h] [rbp+18h]
  int v55; // [rsp+C8h] [rbp+20h]

  v54 = a3;
  v3 = a2;
  NumAllocations = a2->NumAllocations;
  if ( (_DWORD)NumAllocations && (a2 = (const struct _D3DKMT_UNLOCK *)a2->phAllocations) != 0LL )
  {
    if ( (*((_BYTE *)this + 1749) & 1) != 0 )
    {
      if ( (_DWORD)NumAllocations == 1 )
      {
        v51 = 0LL;
        if ( (_BYTE)a3 )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (const struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
          hDevice = a2->hDevice;
        }
        else
        {
          hDevice = a2->hDevice;
        }
        v51.hAllocation = hDevice;
        v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        Current = DXGPROCESS::GetCurrent();
        return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(v10 + 4152),
                 Current,
                 this,
                 &v51,
                 1u);
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(NumAllocations);
        *(_QWORD *)(v8 + 24) = this;
        *(_QWORD *)(v8 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v8);
        return 3221225485LL;
      }
    }
    else
    {
      v12 = 0;
      v55 = 0;
      v13 = 0LL;
      while ( 1 )
      {
        v51.hDevice = v13;
        if ( (unsigned int)v13 >= v3->NumAllocations )
          return (unsigned int)v12;
        if ( (_BYTE)a3 )
        {
          v14 = (unsigned int *)&v3->phAllocations[v13];
          if ( (unsigned __int64)v14 >= MmUserProbeAddress )
            v14 = (unsigned int *)MmUserProbeAddress;
          v15 = *v14;
          v50 = *v14;
        }
        else
        {
          v15 = v3->phAllocations[v13];
          v50 = v15;
        }
        v16 = v15 & 0x3F;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v52, v15);
        v19 = v52;
        if ( v52 )
        {
          if ( *((_QWORD *)v52 + 3) )
          {
            if ( !*((_DWORD *)this + 82) )
            {
              v23 = *(_DWORD *)(*((_QWORD *)v52 + 6) + 4LL);
              if ( (v23 & 4) != 0 )
              {
                if ( v54 )
                {
                  v24 = (v23 >> 6) & 0xF;
                  v25 = *((_QWORD *)this + 216);
                  if ( v25 )
                  {
                    COREACCESS::COREACCESS((COREACCESS *)v53, *((struct DXGADAPTER *const *)this + 216));
                    COREACCESS::AcquireShared(v53);
                    if ( *((_DWORD *)this + 116) == 1
                      && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v25 + 2520), this, v24) )
                    {
                      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v24);
                      if ( DisplayedPrimary == v52 )
                        DXGDEVICE::UpdateDodFrontBuffer(this, v52);
                    }
                    COREACCESS::~COREACCESS((COREACCESS *)v53);
                    v15 = v50;
                    v19 = v52;
                  }
                  v12 = v55;
                }
              }
            }
            if ( *((DXGDEVICE **)v19 + 1) != this )
            {
              v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
              v27[3] = v52;
              v27[4] = this;
              v27[5] = *((_QWORD *)v52 + 1);
              v27[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v27);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v52);
              return 3221225485LL;
            }
            v28 = VIDMM_EXPORT::VidMmEndCPUAccess(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                    *((struct _VIDMM_MULTI_ALLOC **)v19 + 3),
                    v16);
            v21 = v28;
            if ( v28 < 0 )
            {
              v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
              v32[3] = this;
              v32[4] = v15;
              v32[5] = v52;
              v32[6] = v21;
              WdLogEvent5_WdWarning(v32);
            }
          }
          else
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v52);
            v22[3] = this;
            v22[4] = v15;
            v22[5] = v52;
            v22[6] = -1073741811LL;
            WdLogEvent5_WdWarning(v22);
            LODWORD(v21) = -1073741811;
          }
        }
        else
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, 0LL);
          v20[3] = this;
          v20[4] = v15;
          v20[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v20);
          LODWORD(v21) = -1073741811;
        }
        if ( v12 < 0 )
          LODWORD(v21) = v12;
        v12 = v21;
        v55 = v21;
        v33 = v52;
        if ( v52 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v52 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v33) + 255) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v36 = WdLogNewEntry5_WdAssertion(v34);
            *(_QWORD *)(v36 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v36);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v34);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v38 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v38 = *ThreadWin32Thread;
            }
            if ( v38 )
              v41 = *(_QWORD *)(v38 + 80);
            else
              v41 = 0LL;
            if ( v41 )
            {
              v42 = KeGetCurrentThread();
              if ( !v42 )
              {
                v43 = WdLogNewEntry5_WdAssertion(v39);
                *(_QWORD *)(v43 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v43);
              }
              v45 = PsGetCurrentProcessSessionId(v39);
              if ( !v45 || (unsigned int)PsGetThreadSessionId(v42) != v45 )
                goto LABEL_63;
              v46 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v47 = (__int64 *)PsGetThreadWin32Thread(v42);
                if ( v47 )
                  v46 = *v47;
              }
              if ( v46 )
                v48 = *(_QWORD *)(v46 + 80);
              else
LABEL_63:
                v48 = 0LL;
              if ( *(_DWORD *)(v48 + 136) )
              {
                v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44);
                v49[3] = 275LL;
                v49[4] = 38LL;
                v49[5] = *(int *)(v48 + 136);
                v49[6] = 0LL;
                v49[7] = 0LL;
                WdLogEvent5_WdCriticalError(v49);
              }
            }
          }
        }
        v13 = (unsigned int)(v13 + 1);
        LOBYTE(a3) = v54;
      }
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(NumAllocations, a2, a3);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
}
