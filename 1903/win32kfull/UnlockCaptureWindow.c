/*
 * XREFs of UnlockCaptureWindow @ 0x1C0112530
 * Callers:
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1708 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001E6F8 (UpdateRawMouseMode.c)
 */

__int64 __fastcall UnlockCaptureWindow(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx

  result = gpsiLock;
  v3 = (_QWORD *)(a1 + 112);
  if ( *v3 )
  {
    --*(_DWORD *)(gpsi + 6992LL);
    HMAssignmentUnlock(v3);
    return UpdateRawMouseMode(a1, v4);
  }
  return result;
}
