/*
 * XREFs of LdrpUpdateStatistics @ 0x18002E464
 * Callers:
 *     LdrpWorkCallback @ 0x18002E1E0 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 * Callees:
 *     <none>
 */

struct _TEB *LdrpUpdateStatistics()
{
  int v0; // ecx
  struct _TEB *result; // rax

  v0 = LdrpStatistics;
  result = NtCurrentTeb();
  if ( LdrpStatistics < (unsigned int)LdrpWorkInProgress )
    v0 = LdrpWorkInProgress;
  LdrpStatistics = v0;
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_180165294;
  else
    ++dword_180165298;
  return result;
}
