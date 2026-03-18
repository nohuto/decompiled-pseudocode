/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C00F9388
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00F9350 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01C7638 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001179C (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0011834 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00F9544 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  void **v3; // rdi
  __int64 v5; // rcx
  UINT v6; // r15d
  _QWORD *v7; // rsi
  unsigned int v8; // r14d
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v9; // r9
  bool v10; // zf
  const HANDLE *pAllocationList; // rax
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // rcx
  struct _KTHREAD **Global; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _DXGKARG_DESTROYALLOCATION v19; // [rsp+20h] [rbp-20h] BYREF

  v3 = (void **)*((_QWORD *)this + 20);
  if ( a2 && a3 >= *((_DWORD *)this + 31) )
    v3 = a2;
  if ( v3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGSHAREDRESOURCE *)((char *)this + 32));
    if ( *((_DWORD *)this + 6) )
    {
      if ( (*((_DWORD *)this + 3) & 8) != 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v16 + 24) = 12054LL;
        WdLogEvent5_WdAssertion(v16);
      }
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v19);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v19);
      Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v13);
      DXGGLOBAL::FreeHandle(Global, *((_DWORD *)this + 6));
      *((_DWORD *)this + 6) = 0;
      if ( LOBYTE(v19.pAllocationList) )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v19);
    }
    if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 7) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v17 + 24) = 12064LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v6 = 0;
    v7 = (_QWORD *)*((_QWORD *)this + 16);
    v8 = 0;
    if ( *((_DWORD *)this + 31) )
    {
      do
      {
        v9 = (struct _VIDMM_MULTI_GLOBAL_ALLOC *)*(v7 - 5);
        if ( v9 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 9) + 544LL),
            0LL,
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 9) + 552LL),
            v9);
          *(v7 - 5) = 0LL;
        }
        v3[v8] = (void *)*(v7 - 4);
        if ( *(v7 - 4) )
        {
          if ( v6 != v8 )
          {
            v18 = WdLogNewEntry5_WdAssertion(v8);
            *(_QWORD *)(v18 + 24) = 12093LL;
            WdLogEvent5_WdAssertion(v18);
          }
          ++v6;
        }
        *(v7 - 4) = 0LL;
        ++v8;
        v7 = (_QWORD *)*v7;
      }
      while ( v8 < *((_DWORD *)this + 31) );
      if ( v6 )
        goto LABEL_18;
    }
    if ( *((_QWORD *)this + 2) )
    {
LABEL_18:
      memset(&v19, 0, sizeof(v19));
      v10 = *((_QWORD *)this + 2) == 0LL;
      v19.hResource = (HANDLE)*((_QWORD *)this + 2);
      v19.NumAllocations = v6;
      pAllocationList = v19.pAllocationList;
      v19.Flags.Value = v19.Flags.Value & 0xFFFFFFFE | !v10;
      v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 9);
      if ( v6 )
        pAllocationList = v3;
      v19.pAllocationList = pAllocationList;
      ADAPTER_RENDER::DdiDestroyAllocation(v12, &v19);
      *((_QWORD *)this + 2) = 0LL;
    }
    *((_DWORD *)this + 31) = 0;
    *((_QWORD *)this + 5) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v15 + 24) = 12046LL;
    WdLogEvent5_WdAssertion(v15);
  }
}
