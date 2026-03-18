/*
 * XREFs of ?GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ @ 0x1C00B5368
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071580 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

struct VIDMM_PROCESS *__fastcall VIDMM_PROCESS::GetVmwpProcess(VIDMM_PROCESS *this)
{
  __int64 v1; // rdx
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // rcx
  struct VIDMM_PROCESS *result; // rax

  v1 = *((_QWORD *)this + 4);
  v2 = *(_BYTE *)(v1 + 299);
  if ( (v2 & 8) != 0 )
    v3 = *(_QWORD *)(v1 + 432);
  else
    v3 = v1 & -(__int64)((v2 & 4) != 0);
  v4 = *(_QWORD *)(v3 + 72);
  result = 0LL;
  if ( v4 )
    return *(struct VIDMM_PROCESS **)(v4 + 8);
  return result;
}
