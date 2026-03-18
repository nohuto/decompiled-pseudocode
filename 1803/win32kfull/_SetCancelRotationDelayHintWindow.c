/*
 * XREFs of _SetCancelRotationDelayHintWindow @ 0x1C01A1AC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 */

__int64 SetCancelRotationDelayHintWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 1;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    v3 = *(_QWORD *)(v2 + 24);
    v5[1] = v2;
    v5[0] = v3 + 304;
    HMAssignmentLock(v5);
  }
  else
  {
    UserSetLastError(5LL, v1);
    return 0;
  }
  return v0;
}
