/*
 * XREFs of NtGdiDdDDIGetPresentQueueEvent @ 0x1C0243BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDdDDIGetPresentQueueEvent(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned int v4; // esi
  int PresentQueueEvent; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = a1;
  Handle = 0LL;
  PresentQueueEvent = 0;
  if ( !(unsigned int)UserUnsafeIsCurrentProcessDwm(a1, a2, a3) )
    PresentQueueEvent = -1073741790;
  if ( PresentQueueEvent < 0 || (PresentQueueEvent = GreSfmGetPresentQueueEvent(v4, &Handle), PresentQueueEvent < 0) )
  {
    if ( Handle )
      ObCloseHandle(Handle, 1);
  }
  else
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = Handle;
  }
  return (unsigned int)PresentQueueEvent;
}
