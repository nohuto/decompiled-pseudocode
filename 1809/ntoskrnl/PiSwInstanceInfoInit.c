/*
 * XREFs of PiSwInstanceInfoInit @ 0x1406D6DF0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D6E78 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x14059A42C (PnpAllocatePWSTR.c)
 *     PiSwInstanceInfoFree @ 0x1406D8D30 (PiSwInstanceInfoFree.c)
 *     PnpConcatPWSTR @ 0x1406FCAA8 (PnpConcatPWSTR.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(__int64 a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (char)L"SWD\\");
  if ( PWSTR < 0
    || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0xC8uLL, 0x57706E50u, (PVOID *)(a1 + 8)), PWSTR < 0) )
  {
    PiSwInstanceInfoFree(a1);
  }
  return (unsigned int)PWSTR;
}
