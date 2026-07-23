/*
 * XREFs of PsWrapApcWow64Thread @ 0x1402EAC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsWrapApcWow64Thread(PVOID *ApcContext, PVOID *ApcRoutine)
{
  unsigned __int64 v2; // rax
  __int16 v3; // ax

  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v2 )
  {
    v3 = *(_WORD *)(v2 + 8);
    if ( v3 == 332 || v3 == 452 )
      *ApcRoutine = (PVOID)(-4LL * (_QWORD)*ApcRoutine);
  }
  return 0;
}
