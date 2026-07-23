/*
 * XREFs of PsGetCurrentProcessWow64Process @ 0x140113D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentProcessWow64Process()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( result )
    return *(_QWORD *)result;
  return result;
}
