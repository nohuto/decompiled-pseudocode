/*
 * XREFs of RtlSetThreadErrorMode @ 0x180058450
 * Callers:
 *     RtlpCheckRelativeDrive @ 0x1800582CC (RtlpCheckRelativeDrive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetThreadErrorMode(unsigned int a1, unsigned int *a2)
{
  struct _TEB *v3; // rcx
  __int64 WowTebOffset; // rax
  unsigned int HardErrorMode; // eax

  if ( (a1 & 0xFFFFFF8F) != 0 )
    return 3221225711LL;
  v3 = NtCurrentTeb();
  WowTebOffset = v3->WowTebOffset;
  if ( (int)WowTebOffset < 0 )
    v3 = (struct _TEB *)((char *)v3 + WowTebOffset);
  if ( a2 )
  {
    if ( (_DWORD)v3 == LODWORD(v3->NtTib.SubSystemTib) )
      HardErrorMode = (unsigned int)v3->glDispatchTable[167];
    else
      HardErrorMode = v3->HardErrorMode;
    *a2 = HardErrorMode;
  }
  if ( (_DWORD)v3 == LODWORD(v3->NtTib.SubSystemTib) )
    LODWORD(v3->glDispatchTable[167]) = a1;
  else
    v3->HardErrorMode = a1;
  return 0LL;
}
