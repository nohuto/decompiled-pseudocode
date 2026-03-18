/*
 * XREFs of KeRestoreSupervisorState @ 0x1402940E0
 * Callers:
 *     KiFreezeTargetExecution @ 0x1402975DC (KiFreezeTargetExecution.c)
 *     KdExitDebugger @ 0x140915E88 (KdExitDebugger.c)
 * Callees:
 *     RtlXRestoreS @ 0x1401421D8 (RtlXRestoreS.c)
 *     KiRestoreIptState @ 0x140294700 (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KeRestoreSupervisorState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax

  if ( a1 )
  {
    v2 = a2 & 0x100;
    if ( (KeFeatureBits & 0x800000) != 0 && MEMORY[0xFFFFF780000005F0] )
      result = RtlXRestoreS(a1 - 512, a2 & MEMORY[0xFFFFF780000005F0]);
    if ( (_DWORD)KiIptMsrMask )
    {
      if ( v2 )
        return KiRestoreIptState(a1 + MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + 64);
    }
  }
  return result;
}
