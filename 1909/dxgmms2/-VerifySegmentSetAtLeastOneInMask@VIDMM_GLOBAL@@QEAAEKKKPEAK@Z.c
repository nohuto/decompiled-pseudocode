/*
 * XREFs of ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00B153C
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071580 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  __int64 v5; // r11
  char v6; // bl
  unsigned int v8; // edi
  unsigned int v9; // edx
  unsigned int v11; // r9d

  v5 = *((_QWORD *)this + 5023);
  v6 = 0;
  v8 = *(_DWORD *)(1560LL * a2 + v5 + 20);
  v9 = 0;
  if ( a5 )
  {
    *a5 = 0;
    v5 = *((_QWORD *)this + 5023);
  }
  if ( (~*(_DWORD *)(v5 + 16) & a3) != 0 )
    return 0;
  if ( a3 )
  {
    do
    {
      v11 = a3;
      if ( (a3 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v8) + 80LL) & a4) == 0 )
        v9 |= 1 << v6;
      a3 >>= 1;
      ++v6;
      ++v8;
    }
    while ( v11 >= 2 );
  }
  if ( a5 )
    *a5 = v9;
  return v9 == 0;
}
