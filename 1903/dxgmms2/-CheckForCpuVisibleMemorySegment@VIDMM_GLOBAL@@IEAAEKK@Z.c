/*
 * XREFs of ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z @ 0x1C006B6C4
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071870 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r9d
  unsigned int v5; // edx
  int v6; // eax

  v3 = *((_QWORD *)this + 5023) + 1560LL * a2;
  v4 = *(_DWORD *)(v3 + 20);
  if ( (~*(_DWORD *)(v3 + 16) & a3) != 0 || !a3 )
    return 0;
  while ( 1 )
  {
    v5 = a3;
    if ( (a3 & 1) != 0 )
    {
      v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v4) + 80LL);
      if ( (v6 & 0x1001) == 0 && (v6 & 0x6004) != 0 )
        break;
    }
    a3 >>= 1;
    ++v4;
    if ( v5 < 2 )
      return 0;
  }
  return 1;
}
