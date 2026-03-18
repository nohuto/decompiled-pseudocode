/*
 * XREFs of _SetCancelRotationDelayHintWindow @ 0x1C01C3330
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 SetCancelRotationDelayHintWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 1;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    v4 = *(_QWORD *)(v2 + 24);
    v6[1] = v2;
    v6[0] = v4 + 304;
    HMAssignmentLock(v6);
  }
  else
  {
    UserSetLastError(5LL, v1, v2, v3);
    return 0;
  }
  return v0;
}
