/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C000B280
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart3 @ 0x1C0006510 (NVMeControllerInitPart3.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000AC40 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 *     NVMePowerInitialize @ 0x1C000EBF4 (NVMePowerInitialize.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 1528);
  StorPortExtendedFunction(55LL, a1, 0LL, &unk_1C001A4E8);
  if ( *(_DWORD *)(v1 + 516) )
  {
    if ( !(unsigned __int8)NVMeControllerInitPart2(a1) )
    {
LABEL_6:
      NVMeControllerStartFailureEventLog(a1);
      return 0;
    }
    StorPortExtendedFunction(
      84LL,
      a1,
      *(unsigned __int16 *)(a1 + 262) * (unsigned int)*(unsigned __int16 *)(a1 + 264),
      *(unsigned __int16 *)(a1 + 262) * (unsigned int)*(unsigned __int16 *)(a1 + 264));
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 20) |= 1u;
  }
  if ( !NVMeControllerInitPart3(a1, 0) )
    goto LABEL_6;
  NVMePowerInitialize(a1);
  return 1;
}
