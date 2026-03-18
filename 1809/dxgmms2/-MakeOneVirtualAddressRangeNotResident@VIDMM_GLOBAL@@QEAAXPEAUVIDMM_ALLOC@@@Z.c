/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0071E24
 * Callers:
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006F8B0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0071020 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0072614 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0010914 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0071FF8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0073AE0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, VIDMM_PROCESS ***a2)
{
  unsigned int v3; // ebx
  VIDMM_PROCESS **v4; // rcx
  VIDMM_PROCESS *v6; // r12
  unsigned int v7; // r8d
  struct _KTHREAD **VirtualAddressAllocator; // r13
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 **v11; // r15
  __int64 *i; // r14
  unsigned int v13; // edi
  CVirtualAddressAllocator *v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _BYTE v20[8]; // [rsp+28h] [rbp-460h] BYREF
  struct _KTHREAD **v21; // [rsp+30h] [rbp-458h]
  int v22; // [rsp+38h] [rbp-450h]
  unsigned __int64 v23[64]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v24[64]; // [rsp+240h] [rbp-248h] BYREF

  v3 = 0;
  v4 = *a2;
  *((_BYTE *)a2 + 26) = 0;
  v6 = v4[1];
  if ( (*((_DWORD *)v6 + 22) & 2) != 0 )
    v7 = *((_DWORD *)*v4 + 19) & 0x3F;
  else
    v7 = -1;
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                  v4[1],
                                                  *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
                                                  v7);
  if ( VirtualAddressAllocator )
  {
    v9 = *((_DWORD *)this + 1748);
    if ( v9 )
    {
      memset(v24, 0xFFu, 8LL * v9);
      memset(v23, 0, 8LL * v9);
    }
    v10 = 0;
    v21 = VirtualAddressAllocator + 7;
    v22 = 0;
    if ( VirtualAddressAllocator[8] != KeGetCurrentThread() )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(VirtualAddressAllocator + 7));
      v22 = 2;
    }
    v11 = (__int64 **)(a2 + 16);
    for ( i = *v11; i != (__int64 *)v11; i = (__int64 *)*i )
    {
      if ( (i[5] & 0xC00) != 0 )
      {
        CVirtualAddressAllocator::UncommitVirtualAddressRange(
          (CVirtualAddressAllocator *)VirtualAddressAllocator,
          (struct VIDMM_MAPPED_VA_RANGE *)(i - 3),
          0LL,
          0);
        v15 = *((_DWORD *)i + 10);
        v16 = (v15 >> 4) & 0x3F;
        v17 = v24[v16];
        if ( v17 >= i[9] )
          v17 = i[9];
        v18 = i[10];
        v24[v16] = v17;
        v19 = v23[v16];
        if ( v19 <= v18 )
          v19 = v18;
        v23[v16] = v19;
        _bittestandset((int *)&v10, (v15 >> 4) & 0x3F);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    if ( v10 )
    {
      do
      {
        v13 = v10;
        if ( (v10 & 1) != 0 )
        {
          v14 = VIDMM_PROCESS::GetVirtualAddressAllocator(v6, *(_DWORD *)(*((_QWORD *)this + 3) + 208LL), v3);
          CVirtualAddressAllocator::FlushGpuVaTlb(v14, v3, v24[v3], v23[v3]);
        }
        v10 >>= 1;
        ++v3;
      }
      while ( v13 >= 2 );
    }
  }
}
