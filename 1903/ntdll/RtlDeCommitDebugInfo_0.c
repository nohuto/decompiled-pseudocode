/*
 * XREFs of RtlDeCommitDebugInfo_0 @ 0x1800D7EFC
 * Callers:
 *     sub_18007533C @ 0x18007533C (sub_18007533C.c)
 *     RtlDeCommitDebugInfo @ 0x1800D72F0 (RtlDeCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D7300 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7870 (RtlQueryProcessLockInformation.c)
 *     sub_1800DA48C @ 0x1800DA48C (sub_1800DA48C.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlDeCommitDebugInfo_0(PRTL_DEBUG_INFORMATION Buffer, PVOID p, SIZE_T Size)
{
  SIZE_T v3; // r8

  if ( (unsigned int)Size <= 0xFFFFFFF8 )
  {
    v3 = Buffer->OffsetFree - (((_DWORD)Size + 7) & 0xFFFFFFF8);
    if ( p == (char *)Buffer + v3 )
      Buffer->OffsetFree = v3;
  }
}
