/*
 * XREFs of ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B7B1C
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C008E81C (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005F2FC (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::CreateVaAllocator(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  CVirtualAddressAllocator *v6; // rax
  __int64 v7; // rdx
  char *v8; // rcx
  CVirtualAddressAllocator *v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v14; // rax
  __int64 v15; // rax

  *((_QWORD *)this + 2) = a2;
  if ( (*((_BYTE *)a2 + 40872) & 2) == 0 )
    return 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)a2 + 1748) )
    return 0LL;
  while ( 1 )
  {
    v5 = 1560LL * (unsigned int)v4;
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 5023) + v5 + 436) & 1) == 0 )
      goto LABEL_9;
    v6 = (CVirtualAddressAllocator *)operator new[](0x90uLL, 0x4B677844u, PagedPool);
    v9 = v6;
    if ( v6 )
    {
      *((_QWORD *)v6 + 2) = 0LL;
      v8 = (char *)v6 + 120;
      *((_QWORD *)v6 + 7) = 0LL;
      *((_QWORD *)v6 + 8) = 0LL;
      *((_DWORD *)v6 + 18) = 64;
      *((_QWORD *)v6 + 11) = 0LL;
      *((_QWORD *)v6 + 12) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
      *((_QWORD *)v6 + 14) = 0LL;
      *((_QWORD *)v6 + 16) = (char *)v6 + 120;
      *((_QWORD *)v6 + 15) = (char *)v6 + 120;
      *((_DWORD *)v6 + 34) = 0;
    }
    else
    {
      v9 = 0LL;
    }
    *((_QWORD *)this + v4 + 4) = v9;
    if ( !v9 )
      break;
    v12 = CVirtualAddressAllocator::InitializeVaAllocator(
            v9,
            1LL << *((_DWORD *)a2 + 10216),
            4096 << *(_DWORD *)(*((_QWORD *)a2 + 5023) + v5 + 68),
            a2,
            g_pVidMmSystemProcess);
    if ( v12 < 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v14 + 24) = 7313LL;
      WdLogEvent5_WdAssertion(v14);
      return (unsigned int)v12;
    }
LABEL_9:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)a2 + 1748) )
      return 0LL;
  }
  v15 = WdLogNewEntry5_WdAssertion(v8, v7);
  *(_QWORD *)(v15 + 24) = 7304LL;
  WdLogEvent5_WdAssertion(v15);
  return 3221225495LL;
}
