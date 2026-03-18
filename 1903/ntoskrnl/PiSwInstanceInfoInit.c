/*
 * XREFs of PiSwInstanceInfoInit @ 0x14071EE84
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1405BC774 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x140668EC4 (PnpConcatPWSTR.c)
 *     PiSwInstanceInfoFree @ 0x140780B2C (PiSwInstanceInfoFree.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(PVOID *a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, a1, 2uLL);
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0xC8uLL, 0x57706E50u, a1 + 1), PWSTR < 0) )
    PiSwInstanceInfoFree(a1);
  return (unsigned int)PWSTR;
}
