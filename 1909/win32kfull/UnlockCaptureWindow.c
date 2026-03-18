/*
 * XREFs of UnlockCaptureWindow @ 0x1C00ED150
 * Callers:
 *     zzzAttachToQueue @ 0x1C01362F0 (zzzAttachToQueue.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1588 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001E588 (UpdateRawMouseMode.c)
 */

__int64 __fastcall UnlockCaptureWindow(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx

  result = gpsiLock;
  v3 = (_QWORD *)(a1 + 112);
  if ( *v3 )
  {
    --*(_DWORD *)(gpsi + 6992LL);
    HMAssignmentUnlock(v3);
    return UpdateRawMouseMode(a1);
  }
  return result;
}
