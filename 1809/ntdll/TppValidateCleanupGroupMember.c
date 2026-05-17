/*
 * XREFs of TppValidateCleanupGroupMember @ 0x1800148F4
 * Callers:
 *     TpPostWork @ 0x1800148A0 (TpPostWork.c)
 *     TppWaitpValidateWait @ 0x18002C1D0 (TppWaitpValidateWait.c)
 *     TppTimerpValidateTimer @ 0x18002C90C (TppTimerpValidateTimer.c)
 *     TppWorkpValidateWork @ 0x18002D3EC (TppWorkpValidateWork.c)
 *     TppIopValidateIo @ 0x1800311F0 (TppIopValidateIo.c)
 *     TppAlpcpValidateAlpc @ 0x1800322A4 (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x1800327B0 (TppJobpValidateJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall TppValidateCleanupGroupMember(__int64 a1, int a2)
{
  int v2; // eax
  void *ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 168);
  if ( (v2 & 0x10000) != 0 )
    return 0;
  if ( (v2 & 0x20000) == 0 )
    return 1;
  return a2
      && (ThreadPoolData = NtCurrentTeb()->ThreadPoolData) != 0LL
      && *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1;
}
