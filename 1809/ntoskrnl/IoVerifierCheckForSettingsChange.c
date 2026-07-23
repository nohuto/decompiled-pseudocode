/*
 * XREFs of IoVerifierCheckForSettingsChange @ 0x140924740
 * Callers:
 *     IoVerifierInit @ 0x1409247D8 (IoVerifierInit.c)
 *     ViSettingsIoCheckForChanges @ 0x14093F07C (ViSettingsIoCheckForChanges.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall IoVerifierCheckForSettingsChange(char a1)
{
  __int64 result; // rax
  unsigned int i; // eax
  SIZE_T v3; // rbx

  if ( (a1 & 0x10) == 0 )
    return (unsigned int)_InterlockedExchange(&IovpDisabledWithoutReboot, 1);
  _InterlockedExchange(&IovpEnabledInThePast, 1);
  result = (unsigned int)_InterlockedExchange(&IovpDisabledWithoutReboot, 0);
  if ( !IovIrpTraces && IovIrpTracesLength )
  {
    for ( i = 2; i < 0x100000; i *= 2 )
    {
      if ( i >= IovIrpTracesLength )
        break;
    }
    v3 = (unsigned __int64)i << 7;
    IovIrpTracesLength = i;
    result = (__int64)ExAllocatePoolWithTagPriority(NonPagedPoolNx, v3, 0x54496656u, HighPoolPriority);
    IovIrpTraces = result;
    if ( result )
      return (__int64)memset((void *)result, 0, v3);
  }
  return result;
}
