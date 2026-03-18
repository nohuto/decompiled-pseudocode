/*
 * XREFs of LockCaptureWindow @ 0x1C00D2044
 * Callers:
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00D20E4 (UpdateRawMouseMode.c)
 */

__int64 __fastcall LockCaptureWindow(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 104) )
    --*(_DWORD *)(gpsi + 6992LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 6992LL);
  v5[0] = a1 + 104;
  v5[1] = a2;
  v3 = HMAssignmentLock(v5);
  UpdateRawMouseMode(a1);
  return v3;
}
