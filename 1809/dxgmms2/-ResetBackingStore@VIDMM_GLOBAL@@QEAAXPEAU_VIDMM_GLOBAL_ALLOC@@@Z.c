/*
 * XREFs of ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070160
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006F510 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0070390 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C007095C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0078A90 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007FFB0 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B8CD0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B9900 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtt @ 0x1C002693C (McTemplateK0pqtt.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005A75C (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C006FD50 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ResetBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  const GUID *v7; // r8
  bool v8; // bp
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG_PTR v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 AllocationType; // [rsp+20h] [rbp-88h]
  __int64 Protect; // [rsp+28h] [rbp-80h]
  BOOL v23; // [rsp+30h] [rbp-78h]
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
    if ( (*((_DWORD *)a2 + 20) & 0x10000) != 0
      && ((v5 = *((_QWORD *)a2 + 17)) != 0
       && (*(_DWORD *)(v5 + 80) & 0x1001) == 0
       && (unsigned int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL)
                                                                          + 8LL
                                                                          * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                            + 208LL))
                                                              + 464LL))
       || *(_WORD *)(*((_QWORD *)a2 + 63) + 4LL) == 3) )
    {
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
          v9 = v14;
          if ( v14 >= 0 )
          {
            VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
            if ( v8 )
              ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
          }
          else
          {
            v18 = WdLogNewEntry5_WdError(v16, v15, v17);
            *(_QWORD *)(v18 + 24) = v9;
            WdLogEvent5_WdError(v18);
          }
          goto LABEL_15;
        }
        LODWORD(v9) = -1073741823;
      }
      else
      {
        LOBYTE(v6) = v8;
        v10 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                                                               + 120LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
                a2,
                *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL),
                v6);
        LODWORD(v9) = v10;
        if ( v10 >= 0 )
        {
LABEL_15:
          *((_QWORD *)this + 925) += *((_QWORD *)a2 + 1);
          ++*((_DWORD *)this + 1848);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v23 = (int)v9 >= 0;
            LODWORD(Protect) = v8;
            LODWORD(AllocationType) = *((_QWORD *)a2 + 1) >> 12;
            McTemplateK0pqtt(*((_QWORD *)a2 + 1) >> 12, (int)v9 >= 0, v7, a2, AllocationType, Protect, v23);
          }
          KeUnstackDetachProcess(&ApcState);
          if ( (int)v9 >= 0 )
            *((_DWORD *)a2 + 21) |= 8u;
          return;
        }
        if ( v10 != -1071775472 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v12, v11);
          *(_QWORD *)(v19 + 24) = 6563LL;
          WdLogEvent5_WdAssertion(v19);
        }
        _InterlockedIncrement(&dword_1C004D608);
        v20 = WdLogNewEntry5_WdLowResource(v12);
        *(_QWORD *)(v20 + 24) = 6567LL;
        WdLogEvent5_WdLowResource(v20);
      }
      *((_DWORD *)a2 + 19) |= 0x4000000u;
      goto LABEL_15;
    }
  }
}
