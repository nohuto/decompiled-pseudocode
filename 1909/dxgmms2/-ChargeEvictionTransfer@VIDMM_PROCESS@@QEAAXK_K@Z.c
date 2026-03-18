/*
 * XREFs of ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00B4EDC
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0083248 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0083398 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     McTemplateK0ppqqxqq @ 0x1C0027368 (McTemplateK0ppqqxqq.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C005BF8C (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_PROCESS::ChargeEvictionTransfer(VIDMM_PROCESS *this, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // r9
  int v4; // edx
  bool v5; // zf
  __int64 IsActive; // rdx
  const GUID *v7; // r8
  __int64 *v8; // r9
  __int64 v9; // r10

  v3 = *(_QWORD **)(*((_QWORD *)this + 2) + 8LL * a2);
  v4 = *(_DWORD *)(*v3 + 8LL);
  if ( v4 != 102 && v4 != 110 )
  {
    v3[61] += a3;
    if ( v3[61] >= (unsigned __int64)(unsigned int)dword_1C004E21C
      && (((unsigned __int8)(*((_DWORD *)v3 + 116) >> 2) ^ (unsigned __int8)~(*((_DWORD *)v3 + 116) >> 1)) & 1) != 0 )
    {
      v5 = bTracingEnabled == 0;
      *((_DWORD *)v3 + 116) ^= ((unsigned __int8)*((_DWORD *)v3 + 116) ^ (unsigned __int8)~(2 * *((_DWORD *)v3 + 116))) & 4;
      if ( !v5 )
      {
        IsActive = (int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v3 + 58));
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppqqxqq(*v8, IsActive, v7, *(_QWORD *)(v9 + 8), *(_QWORD *)(*v8 + 24));
      }
    }
  }
}
