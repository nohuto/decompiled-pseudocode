/*
 * XREFs of NtQuerySystemTime @ 0x1408CD250
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySystemTime(PLARGE_INTEGER CurrentTime)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)CurrentTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentTime < 0x7FFFFFFF0000LL )
      v2 = (__int64)CurrentTime;
    *(_BYTE *)v2 = *(_BYTE *)v2;
    *(_BYTE *)(v2 + 7) = *(_BYTE *)(v2 + 7);
    CurrentTime->QuadPart = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    CurrentTime->QuadPart = MEMORY[0xFFFFF78000000014];
  }
  return 0;
}
