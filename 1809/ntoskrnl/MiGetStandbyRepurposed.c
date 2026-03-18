/*
 * XREFs of MiGetStandbyRepurposed @ 0x1400EF32C
 * Callers:
 *     MiAddWorkingSetEntries @ 0x140048CE0 (MiAddWorkingSetEntries.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400EEF28 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x1400EEFB8 (MiComputeSystemTrimCriteria.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130A14 (MmQuerySystemWorkingSetInformation.c)
 *     MiWorkingSetVeryLarge @ 0x1402A7E0C (MiWorkingSetVeryLarge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyRepurposed(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rdx

  result = 0LL;
  if ( a2 < 8 )
  {
    v3 = (_DWORD *)(a1 + 4LL * a2 + 4216);
    v4 = 8 - a2;
    do
    {
      result = (unsigned int)(*v3++ + result);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
