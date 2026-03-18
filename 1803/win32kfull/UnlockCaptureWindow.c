/*
 * XREFs of UnlockCaptureWindow @ 0x1C00F69D0
 * Callers:
 *     zzzAttachToQueue @ 0x1C0058B78 (zzzAttachToQueue.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01AA8A0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001DE64 (UpdateRawMouseMode.c)
 */

__int64 __fastcall UnlockCaptureWindow(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 104);
  if ( *v2 )
  {
    --*(_DWORD *)(gpsi + 6992LL);
    HMAssignmentUnlock(v2);
    return UpdateRawMouseMode(a1);
  }
  return result;
}
