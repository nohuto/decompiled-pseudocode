/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C00F1254
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00F121C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6870 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00F1470 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8D70 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  void **v3; // rsi
  char *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  struct DXGGLOBAL *Global; // rax
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *v13; // rax
  __int64 v14; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGGLOBAL *v16; // rdi
  UINT v17; // r15d
  _QWORD *v18; // rdi
  unsigned int v19; // r12d
  void *v20; // rdx
  const HANDLE *v21; // rax
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[16]; // [rsp+20h] [rbp-30h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v30; // [rsp+30h] [rbp-20h] BYREF

  v3 = (void **)*((_QWORD *)this + 20);
  if ( a2 && a3 >= *((_DWORD *)this + 31) )
    v3 = a2;
  if ( v3 )
  {
    v5 = (char *)this + 32;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v24 = *((_DWORD *)v5 + 4);
        if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v7, &EventBlockThread, v8, v24);
      }
      ExAcquirePushLockExclusiveEx(v5, 0LL);
    }
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    if ( *((_DWORD *)this + 6) )
    {
      if ( (*((_DWORD *)this + 3) & 8) != 0 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v25 + 24) = 12043LL;
        WdLogEvent5_WdAssertion(v25);
      }
      Global = DXGGLOBAL::GetGlobal(v7, v6);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGGLOBAL *)((char *)Global + 136), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
      v10 = *((_DWORD *)this + 6);
      v13 = DXGGLOBAL::GetGlobal(v12, v11);
      CurrentThread = KeGetCurrentThread();
      v16 = v13;
      if ( *((struct _KTHREAD **)v13 + 19) != CurrentThread )
      {
        v26 = WdLogNewEntry5_WdAssertion(CurrentThread, v14);
        *(_QWORD *)(v26 + 24) = 1022LL;
        WdLogEvent5_WdAssertion(v26);
      }
      HMGRTABLE::FreeHandle((struct DXGGLOBAL *)((char *)v16 + 176), v10);
      *((_DWORD *)this + 6) = 0;
      if ( v29[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    }
    if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 7) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v27 + 24) = 12053LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v17 = 0;
    v18 = (_QWORD *)*((_QWORD *)this + 16);
    v19 = 0;
    if ( *((_DWORD *)this + 31) )
    {
      do
      {
        if ( *(v18 - 5) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 544LL) + 8LL) + 128LL))(
            0LL,
            *(_QWORD *)(*((_QWORD *)this + 9) + 552LL));
          *(v18 - 5) = 0LL;
        }
        v3[v19] = (void *)*(v18 - 4);
        if ( *(v18 - 4) )
        {
          if ( v17 != v19 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v19, v6);
            *(_QWORD *)(v28 + 24) = 12082LL;
            WdLogEvent5_WdAssertion(v28);
          }
          ++v17;
        }
        *(v18 - 4) = 0LL;
        ++v19;
        v18 = (_QWORD *)*v18;
      }
      while ( v19 < *((_DWORD *)this + 31) );
      if ( v17 )
        goto LABEL_23;
    }
    if ( *((_QWORD *)this + 2) )
    {
LABEL_23:
      v20 = (void *)*((_QWORD *)this + 2);
      *(_QWORD *)(&v30.NumAllocations + 1) = 0LL;
      HIDWORD(v30.pAllocationList) = 0;
      *((_DWORD *)&v30.Flags + 1) = 0;
      v30.hResource = v20;
      v30.NumAllocations = v17;
      v21 = 0LL;
      v30.Flags.Value = v20 != 0LL;
      v22 = (ADAPTER_RENDER *)*((_QWORD *)this + 9);
      if ( v17 )
        v21 = v3;
      v30.pAllocationList = v21;
      ADAPTER_RENDER::DdiDestroyAllocation(v22, &v30);
      *((_QWORD *)this + 2) = 0LL;
    }
    *((_DWORD *)this + 31) = 0;
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v23 + 24) = 12035LL;
    WdLogEvent5_WdAssertion(v23);
  }
}
