/*
 * XREFs of ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00B5508
 * Callers:
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070774 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C008160C (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 * Callees:
 *     MapChildVaSpace @ 0x1C002485C (MapChildVaSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005F560 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B50E0 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B7E44 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostVirtualAddressToGuest(
        VIDMM_PROCESS *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        void **a6,
        unsigned __int64 *a7)
{
  struct _KTHREAD **CpuVisibleBufferAllocator; // rsi
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+40h] [rbp-28h] BYREF

  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(this);
  if ( !CpuVisibleBufferAllocator )
    return 3221225495LL;
  v15 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v11,
          0LL,
          0LL,
          0x1000u,
          &v25);
  if ( v15 >= 0 )
  {
    v17 = *((_QWORD *)this + 4);
    v18 = *(_BYTE *)(v17 + 299);
    if ( (v18 & 8) != 0 )
      v19 = *(_QWORD *)(v17 + 432);
    else
      v19 = v17 & -(__int64)((v18 & 4) != 0);
    v20 = v25;
    v21 = v25 + *(_QWORD *)(*(_QWORD *)(v19 + 432) + 168LL);
    v15 = MapChildVaSpace(v17, a2, v21, a3);
    if ( v15 >= 0 )
    {
      *a7 = v21;
    }
    else
    {
      v24 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v24 + 24) = a3;
      *(_QWORD *)(v24 + 32) = 2265LL;
      WdLogEvent5_WdAssertion(v24);
      CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)CpuVisibleBufferAllocator, v20);
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v16 + 24) = a3;
    WdLogEvent5_WdAssertion(v16);
  }
  return (unsigned int)v15;
}
