/*
 * XREFs of ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z @ 0x1C00B2424
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C0059AC8 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 * Callees:
 *     MapChildVaSpace @ 0x1C002511C (MapChildVaSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C006CD2C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B2034 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B4CF0 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostVirtualAddressToGuest(
        VIDMM_PROCESS *this,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        void **a5,
        unsigned __int64 *a6,
        void **a7)
{
  struct _KTHREAD **CpuVisibleBufferAllocator; // rsi
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+40h] [rbp-28h] BYREF

  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(this);
  if ( !CpuVisibleBufferAllocator )
    return 3221225495LL;
  v15 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a2,
          v11,
          0LL,
          0LL,
          0x1000u,
          &v26);
  if ( v15 >= 0 )
  {
    v18 = *((_QWORD *)this + 4);
    v19 = *(_BYTE *)(v18 + 323);
    if ( (v19 & 8) != 0 )
      v20 = *(_QWORD *)(v18 + 456);
    else
      v20 = v18 & -(__int64)((v19 & 4) != 0);
    v21 = v26;
    v22 = v26 + *(_QWORD *)(*(_QWORD *)(v20 + 456) + 168LL);
    v15 = MapChildVaSpace(v18, v22, a2, v16, a4, (__int64)a5, (__int64)a7);
    if ( v15 >= 0 )
    {
      *a6 = v22;
    }
    else
    {
      v25 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v25 + 24) = a2;
      *(_QWORD *)(v25 + 32) = 2258LL;
      WdLogEvent5_WdAssertion(v25);
      CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)CpuVisibleBufferAllocator, v21);
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v17 + 24) = a2;
    WdLogEvent5_WdAssertion(v17);
  }
  return (unsigned int)v15;
}
