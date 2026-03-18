/*
 * XREFs of PoFxActivateComponent @ 0x1400B0930
 * Callers:
 *     PopFxActivateDevice @ 0x140145954 (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x140195540 (PoFxStartDevicePowerManagement.c)
 *     PopFxUnregisterDevice @ 0x14076EA3C (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140A22614 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateComponent @ 0x1400B099C (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x1402F2050 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  if ( (a3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 820) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  return PopFxActivateComponent(
           BugCheckParameter2,
           *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 824) + 8LL * (unsigned int)BugCheckParameter3),
           a3,
           0LL);
}
