/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070774
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071580 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0075560 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     ?GetCurrentHandle@VIDMM_PARTITION@@SAPEAXXZ @ 0x1C00023F4 (-GetCurrentHandle@VIDMM_PARTITION@@SAPEAXXZ.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00B5508 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int v6; // eax
  _DWORD *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned int v10; // ebp
  void **v11; // rsi
  __int64 CurrentHandle; // rax
  int v13; // eax
  __int64 v14; // rcx
  void *v15; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  PMDL PagesForMdl; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  void *v26; // rcx
  unsigned __int64 v27; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v3) = 0;
  v4 = *((_DWORD *)a2 + 20);
  if ( (v4 & 0x2000) == 0 )
  {
    if ( (v4 & 0x40000) == 0 && (**((_DWORD **)a2 + 63) & 8) == 0 )
      goto LABEL_4;
    v8 = (_DWORD *)*((_QWORD *)a2 + 63);
    v27 = 0LL;
    if ( (*v8 & 0x400000) != 0 )
    {
      v11 = (void **)((char *)a2 + 360);
      ObfReferenceObject(*((PVOID *)a2 + 45));
    }
    else
    {
      v9 = *((_QWORD *)a2 + 1);
      v27 = v9;
      v10 = ~(*v8 << 28) & 0x40000000 | 0x8040000;
      if ( (v4 & 0x100) != 0 )
      {
        v10 = ~(*v8 << 28) & 0x40000000 | 0x80C0000;
        v27 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      }
      v11 = (void **)((char *)a2 + 360);
      CurrentHandle = VIDMM_PARTITION::GetCurrentHandle();
      v13 = MmCreateSection((char *)a2 + 360, 0LL, 0LL, &v27, 4, v10, CurrentHandle, 0LL);
      v3 = v13;
      if ( v13 < 0 )
      {
        _InterlockedIncrement(&dword_1C004E72C);
        v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
        v22[3] = a2;
        v22[4] = v27;
        v22[5] = v10;
        v22[6] = v3;
        WdLogEvent5_WdLowResource(v22);
      }
      if ( (**((_DWORD **)a2 + 63) & 0x20000000) != 0 )
      {
        v15 = *v11;
        if ( *v11 )
        {
          *((_BYTE *)a2 + 88) |= 1u;
          ObfReferenceObject(v15);
        }
      }
      if ( (int)v3 < 0 )
        goto LABEL_29;
    }
    if ( (*((_DWORD *)a2 + 20) & 0x4000) != 0 )
    {
      v23 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
              *((VIDMM_PROCESS **)a2 + 64),
              *v11,
              *((_QWORD *)a2 + 1),
              0,
              4u,
              (void **)a2 + 66,
              (unsigned __int64 *)a2 + 67,
              (void **)a2 + 65);
      v3 = v23;
      if ( v23 >= 0 )
        goto LABEL_4;
      _InterlockedIncrement(&dword_1C004E730);
      v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24);
      v25[3] = a2;
      v26 = *v11;
      v25[6] = 27910LL;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
        goto LABEL_17;
      v16 = MmMapViewInSystemSpace(*v11, (PVOID *)a2 + 46, (PSIZE_T)a2 + 1);
      v3 = v16;
      if ( v16 >= 0 )
        goto LABEL_4;
      _InterlockedIncrement(&dword_1C004E730);
      v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17);
      v25[3] = a2;
      v26 = *v11;
    }
    v25[4] = v26;
    v25[5] = v3;
    WdLogEvent5_WdLowResource(v25);
LABEL_17:
    if ( (int)v3 < 0 )
    {
LABEL_29:
      if ( *v11 )
      {
        ObfDereferenceObject(*v11);
        if ( (*((_BYTE *)a2 + 88) & 1) != 0 )
        {
          ObfDereferenceObject(*v11);
          *((_BYTE *)a2 + 88) &= ~1u;
        }
      }
      goto LABEL_5;
    }
LABEL_4:
    v6 = *((_DWORD *)a2 + 19);
    *((_DWORD *)a2 + 23) |= 1u;
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(1560LL * (v6 & 0x3F) + *((_QWORD *)this + 5023) + 1528),
      *((_QWORD *)a2 + 1));
LABEL_5:
    *((_DWORD *)a2 + 21) ^= (*((_DWORD *)a2 + 21) ^ (*((_DWORD *)a2 + 20) >> 14)) & 8;
    return (unsigned int)v3;
  }
  if ( *((_QWORD *)a2 + 65)
    || (PagesForMdl = MmAllocatePagesForMdlEx(
                        gs_PhysicalAddressZero,
                        (PHYSICAL_ADDRESS)-1LL,
                        gs_PhysicalAddressZero,
                        *((_QWORD *)a2 + 1),
                        (MEMORY_CACHING_TYPE)(2 - ((**((_DWORD **)a2 + 63) & 4) != 0)),
                        4u),
        (*((_QWORD *)a2 + 65) = PagesForMdl) != 0LL) )
  {
    *((_DWORD *)a2 + 23) |= 1u;
    goto LABEL_4;
  }
  v21 = WdLogNewEntry5_WdAssertion(v20, v19);
  *(_QWORD *)(v21 + 24) = 27801LL;
  WdLogEvent5_WdAssertion(v21);
  return 3221225495LL;
}
