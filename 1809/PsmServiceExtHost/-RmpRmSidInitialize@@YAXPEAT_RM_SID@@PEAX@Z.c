/*
 * XREFs of ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x1800132F4
 * Callers:
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x180013270 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18002FD38 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall RmpRmSidInitialize(union _RM_SID *a1, void *Src)
{
  ULONG v4; // eax

  memset_0(a1, 0, 0x44uLL);
  v4 = RtlLengthSid(Src);
  memcpy_0(a1, Src, v4);
}
