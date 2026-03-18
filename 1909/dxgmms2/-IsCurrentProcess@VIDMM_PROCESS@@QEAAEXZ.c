/*
 * XREFs of ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0001764
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C0061074 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_PROCESS::IsCurrentProcess(VIDMM_PROCESS *this)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)this;
  return v1 == PsGetCurrentProcess();
}
