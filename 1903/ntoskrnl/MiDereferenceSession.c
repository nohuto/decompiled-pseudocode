/*
 * XREFs of MiDereferenceSession @ 0x1406E12DC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 * Callees:
 *     MiDereferenceSessionFinal @ 0x140727B5C (MiDereferenceSessionFinal.c)
 */

__int64 MiDereferenceSession()
{
  _KPROCESS *Process; // rbx
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)Process[1].ActiveProcessors.Bitmap[1],
                           0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    result = MiDereferenceSessionFinal();
  _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFEFFFF);
  return result;
}
