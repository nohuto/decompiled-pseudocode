/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C005F064
 * Callers:
 *     VidMmTerminateProcess @ 0x1C0001580 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C0024A24 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C000164C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000166C (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001978 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C000FE2C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C005E7E0 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C006A814 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C007A5AC (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00B3980 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  __int64 v2; // rbp
  DXGGLOBAL *Global; // rax
  VIDMM_GLOBAL **v4; // rdi
  DXGGLOBAL *v5; // rax
  __int64 v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void *v8; // rdi
  CVirtualAddressAllocator *v9; // rcx
  volatile signed __int32 *v10; // rcx
  unsigned int i; // esi
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rdx
  struct _PCW_INSTANCE *v15; // rcx
  VIDMM_GLOBAL *v16; // rcx
  VIDMM_GLOBAL ***v17; // rdx
  __int64 v18; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v2 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        v4 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8 * v2);
        if ( v4 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v4 + 40968));
          for ( i = 0; i < *((_DWORD *)*v4 + 1748); ++i )
          {
            v12 = (__int64 *)((char *)v4[6] + 296 * i);
            v13 = *v12;
            if ( *v12 )
            {
              if ( *(__int64 **)(v13 + 8) != v12 )
                goto LABEL_33;
              v14 = (__int64 **)v12[1];
              if ( *v14 != v12 )
                goto LABEL_33;
              *v14 = (__int64 *)v13;
              *(_QWORD *)(v13 + 8) = v14;
              *v12 = 0LL;
              v12[1] = 0LL;
            }
            v15 = (struct _PCW_INSTANCE *)v12[31];
            if ( v15 )
              PcwCloseInstance(v15);
          }
          v16 = v4[3];
          if ( *((VIDMM_GLOBAL ***)v16 + 1) != v4 + 3 || (v17 = (VIDMM_GLOBAL ***)v4[4], *v17 != v4 + 3) )
LABEL_33:
            __fastfail(3u);
          *v17 = (VIDMM_GLOBAL **)v16;
          *((_QWORD *)v16 + 1) = v17;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v2) = 0LL;
          v18 = (__int64)*v4 + 40968;
          *(_QWORD *)(v18 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v18, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
        }
        v2 = (unsigned int)(v2 + 1);
        v5 = DXGGLOBAL::GetGlobal();
      }
      while ( (unsigned int)v2 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v5) );
    }
    operator delete(*((void **)this + 2));
  }
  v6 = *((_QWORD *)this + 4);
  if ( !v6 || (*(_BYTE *)(v6 + 323) & 8) == 0 )
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v7 )
    {
      (**v7)(v7, 1LL);
      v6 = *((_QWORD *)this + 4);
    }
  }
  if ( v6 && (*(_BYTE *)(v6 + 323) & 8) != 0 )
    VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(this);
  v8 = (void *)*((_QWORD *)this + 5);
  if ( v8 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v8);
  }
  v9 = (CVirtualAddressAllocator *)*((_QWORD *)this + 26);
  if ( v9 )
    CVirtualAddressAllocator::DestroyVaAllocator(v9);
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 33);
  if ( v10 )
    VidMmiClosePartition(v10);
}
