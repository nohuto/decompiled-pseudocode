/*
 * XREFs of KiRestoreProcessorState @ 0x14029CDDC
 * Callers:
 *     KiFreezeTargetExecution @ 0x1402978CC (KiFreezeTargetExecution.c)
 * Callees:
 *     RtlXRestore @ 0x14012F9C4 (RtlXRestore.c)
 *     KeContextToKframes @ 0x1401BBE50 (KeContextToKframes.c)
 *     KiRestoreProcessorControlState @ 0x1401BBFA0 (KiRestoreProcessorControlState.c)
 */

__int64 __fastcall KiRestoreProcessorState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Context; // r10
  int v6; // r9d
  char v7; // r11
  __int64 v9; // [rsp+20h] [rbp-18h]

  CurrentPrcb = KeGetCurrentPrcb();
  Context = (__int64)CurrentPrcb->Context;
  v6 = *(_DWORD *)(Context + 48);
  v7 = *(_BYTE *)(Context + 56) & 1;
  if ( !v7
    && ((v6 & 0x100008) == 1048584 || (v6 & 0x100040) == 1048640)
    && (v6 & 0x100040) == 0x100040
    && (MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC) != 0 )
  {
    RtlXRestore(*(int *)(Context + 1248) + Context + 720, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC);
  }
  LOBYTE(v9) = v7;
  KeContextToKframes(a1, a2, Context, v6, v9);
  return KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
