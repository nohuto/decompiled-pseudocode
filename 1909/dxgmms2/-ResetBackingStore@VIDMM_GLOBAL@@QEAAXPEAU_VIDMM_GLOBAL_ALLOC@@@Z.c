/*
 * XREFs of ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B5A8
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C005ABF8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C005B1B0 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C005DAE0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006AF40 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083A40 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00846B0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BC590 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqtt @ 0x1C00263DC (McTemplateK0pqtt.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C005BF8C (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0064C34 (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ResetBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  __int64 v6; // r9
  const GUID *v7; // r8
  bool v8; // bp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  ULONG_PTR v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 AllocationType; // [rsp+20h] [rbp-88h]
  __int64 Protect; // [rsp+28h] [rbp-80h]
  BOOL v20; // [rsp+30h] [rbp-78h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-68h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  v2 = *((_QWORD *)a2 + 13);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 1) != 0 )
    {
      *((_DWORD *)a2 + 19) |= 0x4000000u;
      return;
    }
    if ( (*((_DWORD *)a2 + 20) & 0x20000) != 0
      && ((v5 = *((_QWORD *)a2 + 17)) != 0
       && (*(_DWORD *)(v5 + 80) & 0x1001) == 0
       && (unsigned int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL)
                                                                          + 8LL
                                                                          * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                            + 208LL))
                                                              + 464LL))
       || *(_WORD *)(*((_QWORD *)a2 + 63) + 4LL) == 3) )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v2 + 8), &ApcState);
      v7 = (const GUID *)*((_QWORD *)a2 + 63);
      v8 = v7->Data2 == 3
        || *((_QWORD *)a2 + 17)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 16LL)
                                 + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL))
                     + 476LL);
      if ( (v7->Data1 & 0x20000000) != 0 )
      {
        if ( (*((_DWORD *)a2 + 20) & 0x80u) != 0 )
        {
          v13 = *((_QWORD *)a2 + 1);
          BaseAddress = *(PVOID *)(*((_QWORD *)a2 + 13) + 16LL);
          RegionSize = v13;
          v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, 4u);
          v12 = v14;
          if ( v14 >= 0 )
          {
            VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
            if ( v8 )
              ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
          }
          else
          {
            v15 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v15 + 24) = v12;
            WdLogEvent5_WdError(v15);
          }
          goto LABEL_13;
        }
        LODWORD(v12) = -1073741823;
      }
      else
      {
        LOBYTE(v6) = v8;
        v9 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                                                              + 120LL))(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
               a2,
               *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL),
               v6);
        LODWORD(v12) = v9;
        if ( v9 >= 0 )
          goto LABEL_13;
        if ( v9 != -1071775472 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v11, v10);
          *(_QWORD *)(v16 + 24) = 6698LL;
          WdLogEvent5_WdAssertion(v16);
        }
        _InterlockedIncrement(&dword_1C004E628);
        v17 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v17 + 24) = 6702LL;
        WdLogEvent5_WdLowResource(v17);
      }
      *((_DWORD *)a2 + 19) |= 0x4000000u;
LABEL_13:
      *((_QWORD *)this + 925) += *((_QWORD *)a2 + 1);
      ++*((_DWORD *)this + 1848);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v20 = (int)v12 >= 0;
        LODWORD(Protect) = v8;
        LODWORD(AllocationType) = *((_QWORD *)a2 + 1) >> 12;
        McTemplateK0pqtt(*((_QWORD *)a2 + 1) >> 12, (int)v12 >= 0, v7, a2, AllocationType, Protect, v20);
      }
      KeUnstackDetachProcess(&ApcState);
      if ( (int)v12 >= 0 )
        *((_DWORD *)a2 + 21) |= 8u;
    }
  }
}
