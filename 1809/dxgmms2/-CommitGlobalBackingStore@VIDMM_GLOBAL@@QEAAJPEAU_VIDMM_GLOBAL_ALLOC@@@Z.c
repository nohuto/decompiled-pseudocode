/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00619C4
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00637F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007643C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rsi
  int v4; // edx
  int v6; // eax
  _DWORD *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned int v10; // edi
  PVOID *v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  PVOID v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  PMDL PagesForMdl; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  unsigned __int64 v23; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v3) = 0;
  v4 = *((_DWORD *)a2 + 20);
  if ( (v4 & 0x1000) == 0 )
  {
    if ( (v4 & 0x20000) == 0 && (**((_DWORD **)a2 + 63) & 8) == 0 )
      goto LABEL_4;
    v8 = (_DWORD *)*((_QWORD *)a2 + 63);
    if ( (*v8 & 0x400000) != 0 )
    {
      v11 = (PVOID *)((char *)a2 + 360);
      ObfReferenceObject(*((PVOID *)a2 + 45));
    }
    else
    {
      v9 = *((_QWORD *)a2 + 1);
      v23 = v9;
      v10 = ~(*v8 << 28) & 0x40000000 | 0x8040000;
      if ( (v4 & 0x100) != 0 )
      {
        v10 = ~(*v8 << 28) & 0x40000000 | 0x80C0000;
        v23 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      }
      v11 = (PVOID *)((char *)a2 + 360);
      v12 = MmCreateSection((char *)a2 + 360, 0LL, 0LL, &v23, 4, v10, -1LL, 0LL);
      v3 = v12;
      if ( v12 < 0 )
      {
        _InterlockedIncrement(&dword_1C004D70C);
        v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13);
        v21[3] = a2;
        v21[4] = v23;
        v21[5] = v10;
        v21[6] = v3;
        WdLogEvent5_WdLowResource(v21);
      }
      if ( (**((_DWORD **)a2 + 63) & 0x20000000) != 0 )
      {
        v14 = *v11;
        if ( *v11 )
        {
          *((_BYTE *)a2 + 88) |= 1u;
          ObfReferenceObject(v14);
        }
      }
      if ( (int)v3 < 0 )
        goto LABEL_25;
    }
    if ( (**((_DWORD **)a2 + 63) & 8) != 0 )
    {
      v15 = MmMapViewInSystemSpace(*v11, (PVOID *)a2 + 46, (PSIZE_T)a2 + 1);
      v3 = v15;
      if ( v15 >= 0 )
        goto LABEL_4;
      _InterlockedIncrement(&dword_1C004D710);
      v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16);
      v22[3] = a2;
      v22[4] = *v11;
      v22[5] = v3;
      WdLogEvent5_WdLowResource(v22);
    }
    if ( (int)v3 < 0 )
    {
LABEL_25:
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
    *((_DWORD *)a2 + 21) ^= (*((_DWORD *)a2 + 21) ^ (*((_DWORD *)a2 + 20) >> 13)) & 8;
    return (unsigned int)v3;
  }
  if ( *((_QWORD *)a2 + 64)
    || (PagesForMdl = MmAllocatePagesForMdlEx(
                        gs_PhysicalAddressZero,
                        (PHYSICAL_ADDRESS)-1LL,
                        gs_PhysicalAddressZero,
                        *((_QWORD *)a2 + 1),
                        (MEMORY_CACHING_TYPE)(2 - ((**((_DWORD **)a2 + 63) & 4) != 0)),
                        4u),
        (*((_QWORD *)a2 + 64) = PagesForMdl) != 0LL) )
  {
    *((_DWORD *)a2 + 23) |= 1u;
    goto LABEL_4;
  }
  v20 = WdLogNewEntry5_WdAssertion(v19, v18);
  *(_QWORD *)(v20 + 24) = 27527LL;
  WdLogEvent5_WdAssertion(v20);
  return 3221225495LL;
}
