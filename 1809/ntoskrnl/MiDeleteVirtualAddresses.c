/*
 * XREFs of MiDeleteVirtualAddresses @ 0x140026134
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiDeleteFinalPageTables @ 0x1400917F8 (MiDeleteFinalPageTables.c)
 *     MiDeleteRotateAndStopFaults @ 0x14013A1F0 (MiDeleteRotateAndStopFaults.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 */

signed __int64 __fastcall MiDeleteVirtualAddresses(int a1, int a2, int a3, __int64 a4)
{
  int v5; // r9d
  _KPROCESS *Process; // rdi
  signed __int64 result; // rax

  v5 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(a2) = 17;
  MiDeletePagablePteRange((_DWORD)Process + 1280, a2, a1, v5, 0, a3 | 0x40, a4);
  result = *(_QWORD *)(a4 + 24);
  if ( result )
    return _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], -result);
  return result;
}
