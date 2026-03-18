/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0134AC0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C4BD0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkLock @ 0x1C00E0EA0 (DxgkLock.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C01345D0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C0134740 (DxgkUnlock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027DE5C (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02954B8 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02978FC (-ProcessActiveInstances@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BFCC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CCF4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0015280 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C022805C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C024F3D4 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, char a3)
{
  char v3; // r9
  const struct _D3DKMT_UNLOCK *v4; // r8
  __int64 NumAllocations; // rcx
  __int64 v7; // rax
  __int64 v9; // rax
  D3DKMT_HANDLE hDevice; // eax
  __int64 v11; // rbx
  struct DXGPROCESS *Current; // rax
  int v13; // r15d
  D3DKMT_HANDLE i; // r13d
  unsigned int *v15; // rdx
  unsigned int v16; // ebx
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGALLOCATION *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  unsigned int v26; // esi
  unsigned int v27; // esi
  __int64 v28; // r15
  struct DXGALLOCATION *DisplayedPrimary; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  struct DXGALLOCATION *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v40; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v46; // rax
  struct _KTHREAD *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // ebx
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rbx
  _QWORD *v55; // rax
  struct DXGALLOCATION *v57; // [rsp+38h] [rbp-B0h] BYREF
  int v58; // [rsp+40h] [rbp-A8h]
  struct _D3DKMT_UNLOCK2 v59; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v60; // [rsp+50h] [rbp-98h]
  DXGDEVICE *v61; // [rsp+58h] [rbp-90h]
  const struct _D3DKMT_UNLOCK *v62; // [rsp+60h] [rbp-88h]
  const struct _D3DKMT_UNLOCK *v63; // [rsp+68h] [rbp-80h]
  _BYTE v64[64]; // [rsp+70h] [rbp-78h] BYREF

  v3 = a3;
  v4 = a2;
  v63 = a2;
  v61 = this;
  v62 = a2;
  NumAllocations = a2->NumAllocations;
  if ( (_DWORD)NumAllocations && (a2 = (const struct _D3DKMT_UNLOCK *)a2->phAllocations) != 0LL )
  {
    if ( (*((_BYTE *)this + 1749) & 1) != 0 )
    {
      if ( (_DWORD)NumAllocations == 1 )
      {
        v59 = 0LL;
        if ( v3 )
        {
          NumAllocations = MmUserProbeAddress;
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (const struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
          hDevice = a2->hDevice;
        }
        else
        {
          hDevice = a2->hDevice;
        }
        v59.hAllocation = hDevice;
        v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        Current = DXGPROCESS::GetCurrent(NumAllocations, (__int64)a2);
        return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(v11 + 4144),
                 Current,
                 this,
                 &v59,
                 1u);
      }
      else
      {
        v9 = WdLogNewEntry5_WdError(NumAllocations, a2, v4);
        *(_QWORD *)(v9 + 24) = this;
        *(_QWORD *)(v9 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v9);
        return 3221225485LL;
      }
    }
    else
    {
      v13 = 0;
      v58 = 0;
      for ( i = 0; ; ++i )
      {
        v59.hDevice = i;
        if ( i >= v4->NumAllocations )
          break;
        if ( v3 )
        {
          v15 = (unsigned int *)&v4->phAllocations[i];
          if ( (unsigned __int64)v15 >= MmUserProbeAddress )
            v15 = (unsigned int *)MmUserProbeAddress;
          v16 = *v15;
          v60 = *v15;
        }
        else
        {
          v16 = v4->phAllocations[i];
          v60 = v16;
        }
        v17 = v16 & 0x3F;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v57, v16);
        v21 = v57;
        if ( v57 )
        {
          if ( *((_QWORD *)v57 + 3) )
          {
            if ( !*((_DWORD *)this + 82) )
            {
              v19 = *((_QWORD *)v57 + 6);
              v26 = *(_DWORD *)(v19 + 4);
              if ( (v26 & 4) != 0 )
              {
                if ( a3 )
                {
                  v27 = (v26 >> 6) & 0xF;
                  v28 = *((_QWORD *)this + 216);
                  if ( v28 )
                  {
                    COREACCESS::COREACCESS((COREACCESS *)v64, *((struct DXGADAPTER *const *)this + 216));
                    COREACCESS::AcquireShared((__int64)v64, 0xFFFFFFFF, 0LL);
                    if ( *((_DWORD *)this + 116) == 1
                      && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v28 + 2552), this, v27) )
                    {
                      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v27);
                      if ( DisplayedPrimary == v57 )
                        DXGDEVICE::UpdateDodFrontBuffer(this, v57);
                    }
                    COREACCESS::~COREACCESS((COREACCESS *)v64);
                    v16 = v60;
                    v21 = v57;
                  }
                  v13 = v58;
                }
              }
            }
            if ( *((DXGDEVICE **)v21 + 1) != this )
            {
              v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
              v30[3] = v57;
              v30[4] = this;
              v30[5] = *((_QWORD *)v57 + 1);
              v30[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v30);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v57, v31);
              return 3221225485LL;
            }
            v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                                                + 8LL)
                                                                                    + 264LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                    *((_QWORD *)v21 + 3),
                    v17,
                    0LL,
                    0LL);
            v24 = v32;
            if ( v32 < 0 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v23, v34);
              v35[3] = this;
              v35[4] = v16;
              v35[5] = v57;
              v35[6] = v24;
              WdLogEvent5_WdWarning(v35);
            }
          }
          else
          {
            v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
            v25[3] = this;
            v25[4] = v16;
            v25[5] = v57;
            v25[6] = -1073741811LL;
            WdLogEvent5_WdWarning(v25);
            LODWORD(v24) = -1073741811;
          }
        }
        else
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
          v22[3] = this;
          v22[4] = v16;
          v22[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v22);
          LODWORD(v24) = -1073741811;
        }
        if ( v13 < 0 )
          LODWORD(v24) = v13;
        v13 = v24;
        v58 = v24;
        v36 = v57;
        if ( v57 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v57 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v36, v23) + 247) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v40 = WdLogNewEntry5_WdAssertion(v38, v37);
            *(_QWORD *)(v40 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v40);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v38, v37);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v42 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v42 = *ThreadWin32Thread;
            }
            if ( v42 )
              v46 = *(_QWORD *)(v42 + 80);
            else
              v46 = 0LL;
            if ( v46 )
            {
              v47 = KeGetCurrentThread();
              if ( !v47 )
              {
                v48 = WdLogNewEntry5_WdAssertion(v44, v43);
                *(_QWORD *)(v48 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v48);
              }
              v51 = PsGetCurrentProcessSessionId(v44, v43);
              if ( !v51 || (unsigned int)PsGetThreadSessionId(v47) != v51 )
                goto LABEL_63;
              v52 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v53 = (__int64 *)PsGetThreadWin32Thread(v47);
                if ( v53 )
                  v52 = *v53;
              }
              if ( v52 )
                v54 = *(_QWORD *)(v52 + 80);
              else
LABEL_63:
                v54 = 0LL;
              if ( *(_DWORD *)(v54 + 136) )
              {
                v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v49);
                v55[3] = 275LL;
                v55[4] = 38LL;
                v55[5] = *(int *)(v54 + 136);
                v55[6] = 0LL;
                v55[7] = 0LL;
                WdLogEvent5_WdCriticalError(v55);
              }
            }
          }
        }
        v4 = v63;
        v3 = a3;
      }
      return (unsigned int)v13;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(NumAllocations, a2, v4);
    *(_QWORD *)(v7 + 24) = this;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
}
