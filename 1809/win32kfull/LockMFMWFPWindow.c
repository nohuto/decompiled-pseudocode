/*
 * XREFs of LockMFMWFPWindow @ 0x1C020B074
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C022E8CC (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C020B04C (IsMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C020B4D4 (UnlockMFMWFPWindow.c)
 */

void __fastcall LockMFMWFPWindow(__int64 *a1, __int64 a2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a1 != a2 )
  {
    UnlockMFMWFPWindow(a1);
    if ( IsMFMWFPWindow(a2) )
    {
      v4[0] = a1;
      v4[1] = a2;
      HMAssignmentLock(v4);
    }
    else
    {
      *a1 = a2;
    }
  }
}
