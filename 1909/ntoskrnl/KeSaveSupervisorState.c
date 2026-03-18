/*
 * XREFs of KeSaveSupervisorState @ 0x1402AA9B8
 * Callers:
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 *     KiFreezeTargetExecution @ 0x1402AE2C0 (KiFreezeTargetExecution.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 * Callees:
 *     RtlXSaveS @ 0x14012EDCC (RtlXSaveS.c)
 *     KiSaveIptState @ 0x1402AAF68 (KiSaveIptState.c)
 */

__int64 __fastcall KeSaveSupervisorState(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 result; // rax
  __int64 v5; // rdx

  if ( a1 )
  {
    v2 = a2;
    if ( (_DWORD)KiIptMsrMask && (a2 & 0x100) != 0 )
      result = KiSaveIptState(MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + a1 + 64);
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      result = MEMORY[0xFFFFF780000005F0];
      if ( MEMORY[0xFFFFF780000005F0] )
      {
        v5 = MEMORY[0xFFFFF780000005F0] & v2;
        *(_QWORD *)(a1 + 8) = MEMORY[0xFFFFF780000005F0] & v2;
        return RtlXSaveS(a1 - 512, v5);
      }
    }
  }
  return result;
}
