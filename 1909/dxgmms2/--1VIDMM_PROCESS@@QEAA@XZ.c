/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C006B43C
 * Callers:
 *     VidMmTerminateProcess @ 0x1C0014580 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C0024134 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C00013F0 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001514 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00026F0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0002758 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005C1DC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005D6D4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C0080698 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00B6A58 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this, __int64 a2)
{
  __int64 v3; // rbp
  DXGGLOBAL *Global; // rax
  VIDMM_GLOBAL **v5; // rdi
  DXGGLOBAL *v6; // rax
  const GUID *v7; // r8
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  void *v9; // rdi
  CVirtualAddressAllocator *v10; // rcx
  volatile signed __int32 *v11; // rcx
  unsigned int i; // esi
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 **v15; // rdx
  struct _PCW_INSTANCE *v16; // rcx
  VIDMM_GLOBAL *v17; // rcx
  VIDMM_GLOBAL ***v18; // rdx
  __int64 v19; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v3 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        v5 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8 * v3);
        if ( v5 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v5 + 40968));
          for ( i = 0; i < *((_DWORD *)*v5 + 1748); ++i )
          {
            v13 = (__int64 *)((char *)v5[6] + 296 * i);
            v14 = *v13;
            if ( *v13 )
            {
              if ( *(__int64 **)(v14 + 8) != v13 )
                goto LABEL_33;
              v15 = (__int64 **)v13[1];
              if ( *v15 != v13 )
                goto LABEL_33;
              *v15 = (__int64 *)v14;
              *(_QWORD *)(v14 + 8) = v15;
              *v13 = 0LL;
              v13[1] = 0LL;
            }
            v16 = (struct _PCW_INSTANCE *)v13[31];
            if ( v16 )
              PcwCloseInstance(v16);
          }
          v17 = v5[3];
          if ( *((VIDMM_GLOBAL ***)v17 + 1) != v5 + 3 || (v18 = (VIDMM_GLOBAL ***)v5[4], *v18 != v5 + 3) )
LABEL_33:
            __fastfail(3u);
          *v18 = (VIDMM_GLOBAL **)v17;
          *((_QWORD *)v17 + 1) = v18;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v3) = 0LL;
          v19 = (__int64)*v5 + 40968;
          *(_QWORD *)(v19 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v19, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v5, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v5);
        }
        v3 = (unsigned int)(v3 + 1);
        v6 = DXGGLOBAL::GetGlobal();
      }
      while ( (unsigned int)v3 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v6) );
    }
    operator delete(*((void **)this + 2));
  }
  v7 = (const GUID *)*((_QWORD *)this + 4);
  if ( !v7 || (v7[18].Data4[3] & 8) == 0 )
  {
    v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v8 )
    {
      (**v8)(v8, 1LL);
      v7 = (const GUID *)*((_QWORD *)this + 4);
    }
  }
  if ( v7 && (v7[18].Data4[3] & 8) != 0 )
    VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(this);
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v9 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v9);
  }
  v10 = (CVirtualAddressAllocator *)*((_QWORD *)this + 26);
  if ( v10 )
    CVirtualAddressAllocator::DestroyVaAllocator(v10, a2, v7);
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 33);
  if ( v11 )
    VidMmiClosePartition(v11);
}
