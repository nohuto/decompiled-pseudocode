/*
 * XREFs of ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B13C8
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00BDF6C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C0430 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001554 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00027E8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C358 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DB80 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AA64C (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r8
  VIDMM_SEGMENT *v4; // r9
  int v5; // r12d
  char *v6; // r14
  char *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rdi
  char *v10; // r13
  unsigned int v11; // ebx
  char v12; // r15
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  char *v14; // rax
  char *v15; // rdi
  char *v16; // r13
  bool v17; // zf
  __int64 **v18; // r15
  __int64 *v19; // r14
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  int v22; // r8d
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // edi
  unsigned int v28; // r15d
  unsigned __int64 v29; // [rsp+40h] [rbp-98h]
  CVirtualAddressAllocator *v30; // [rsp+48h] [rbp-90h]
  char *v31; // [rsp+50h] [rbp-88h]
  char *v32; // [rsp+58h] [rbp-80h]
  struct VIDMM_ALLOC *v33; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp-68h]
  unsigned __int64 v35; // [rsp+78h] [rbp-60h]
  char *v36; // [rsp+80h] [rbp-58h]
  char v38; // [rsp+E8h] [rbp+10h]
  char v39; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v40; // [rsp+F8h] [rbp+20h]
  int v41; // [rsp+F8h] [rbp+20h]

  v2 = *((_QWORD *)a2 + 17);
  v4 = this;
  if ( (*(_DWORD *)(v2 + 80) & 0x1000) != 0 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(v2 + 16) + 1;
  v6 = (char *)a2 + 296;
  v7 = (char *)*((_QWORD *)a2 + 37);
  while ( v7 != v6 )
  {
    v8 = *((_QWORD *)v4 + 1);
    v9 = v7;
    v30 = 0LL;
    v10 = 0LL;
    v40 = -1LL;
    v11 = 0;
    v29 = 0LL;
    v12 = 0;
    v7 = *(char **)v7;
    v32 = 0LL;
    v39 = 0;
    v38 = 0;
    if ( (*(_BYTE *)(v8 + 40872) & 2) != 0 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *((VIDMM_PROCESS **)v9 - 6),
                                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 208LL),
                                  *((_DWORD *)a2 + 19) & 0x3F);
      v30 = VirtualAddressAllocator;
      v10 = (char *)VirtualAddressAllocator + 56;
      v32 = (char *)VirtualAddressAllocator + 56;
      if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 56));
        v39 = 1;
      }
      v4 = this;
    }
    v14 = v9 - 16;
    v15 = (char *)*((_QWORD *)v9 - 2);
    v31 = v14;
    if ( v15 != v14 )
    {
      v16 = v14;
      do
      {
        v17 = (*((_DWORD *)a2 + 19) & 0x8000000) == 0;
        v18 = (__int64 **)(v15 - 40);
        v15 = *(char **)v15;
        v36 = v15;
        if ( !v17 )
        {
          VIDMM_GLOBAL::BuildInitContextAllocation(*((ADAPTER_RENDER ***)v4 + 1), v18);
          v4 = this;
        }
        if ( (*(_BYTE *)(*((_QWORD *)v4 + 1) + 40872LL) & 2) != 0 )
        {
          if ( *((_BYTE *)v18 + 26) )
          {
            v19 = v18[16];
            if ( v19 != (__int64 *)(v18 + 16) )
            {
              v20 = v40;
              v21 = v29;
              do
              {
                v22 = *((_DWORD *)a2 + 19);
                v33 = 0LL;
                v23 = *((_QWORD *)a2 + 18);
                v35 = v21;
                v34 = v20;
                v41 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        v30,
                        (struct VIDMM_MAPPED_VA_RANGE *)(v19 - 3),
                        v22 & 0x3F,
                        v5,
                        v23,
                        0LL,
                        0,
                        &v33);
                if ( v41 >= 0 )
                {
                  v20 = v19[9];
                  v21 = v19[10];
                  v38 = 1;
                  v11 |= 1 << ((*((_DWORD *)v19 + 10) >> 4) & 0x3F);
                  if ( v34 < v20 )
                    v20 = v34;
                  if ( v35 > v21 )
                    v21 = v35;
                  v29 = v21;
                }
                else
                {
                  v26 = WdLogNewEntry5_WdWarning(v25, v24);
                  *(_QWORD *)(v26 + 32) = v41;
                  *(_QWORD *)(v26 + 24) = v18;
                  WdLogEvent5_WdWarning(v26);
                  VidSchMarkDeviceAsError(v18[1][4]);
                  v21 = v29;
                }
                v19 = (__int64 *)*v19;
              }
              while ( v19 != (__int64 *)(v18 + 16) );
              v16 = v31;
              v4 = this;
              v40 = v20;
              v15 = v36;
            }
          }
        }
      }
      while ( v15 != v16 );
      v6 = (char *)a2 + 296;
      v10 = v32;
      v12 = v38;
    }
    if ( v39 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v12 )
    {
      v27 = 0;
      if ( v11 )
      {
        do
        {
          v28 = v11;
          if ( (v11 & 1) != 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v30, v27, v40, v29);
          v11 >>= 1;
          ++v27;
        }
        while ( v28 >= 2 );
        v6 = (char *)a2 + 296;
      }
    }
    v4 = this;
  }
}
