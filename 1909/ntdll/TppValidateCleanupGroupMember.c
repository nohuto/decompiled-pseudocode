/*
 * XREFs of TppValidateCleanupGroupMember @ 0x180036544
 * Callers:
 *     TppWaitpValidateWait @ 0x1800313F0 (TppWaitpValidateWait.c)
 *     TppWorkpValidateWork @ 0x1800364D8 (TppWorkpValidateWork.c)
 *     TppIopValidateIo @ 0x180062A10 (TppIopValidateIo.c)
 *     TppAlpcpValidateAlpc @ 0x180078BCC (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x18007E6A8 (TppJobpValidateJob.c)
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
