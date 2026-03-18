/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C0008520
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0007EAC (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 *     NVMePowerInitialize @ 0x1C000CD30 (NVMePowerInitialize.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 1536);
  StorPortExtendedFunction(55LL, a1, 0LL);
  if ( *(_DWORD *)(v1 + 516) )
  {
    if ( !(unsigned __int8)NVMeControllerInitPart2(a1) )
    {
      NVMeControllerStartFailureEventLog(a1);
      return 0;
    }
    StorPortExtendedFunction(84LL, a1, *(unsigned __int16 *)(a1 + 270) * (unsigned int)*(unsigned __int16 *)(a1 + 272));
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 20) |= 1u;
  }
  NVMePowerInitialize(a1);
  return 1;
}
