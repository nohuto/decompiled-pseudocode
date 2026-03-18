/*
 * XREFs of NtUserPhysicalToLogicalDpiPointForWindow @ 0x1C021AD90
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserPhysicalToLogicalDpiPointForWindow(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct tagWND *v7; // r9
  int v8; // ebx
  _QWORD *v9; // rdx
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_QWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v11[0] = *a2;
    v11[1] = v11[0];
    v8 = PhysicalToLogicalInPlaceRectWithSubpixel(v7, (int *)v11, 0LL);
    if ( v8 == 1 )
      *a2 = v11[0];
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
