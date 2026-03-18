/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0021474
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C0021460 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C002157C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     _GetAncestor @ 0x1C010A114 (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(HWND a1, struct IInputQueue *a2, struct tagWND **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rbx
  int v14; // ebx
  __int64 v16; // rax
  int v17; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  *a3 = 0LL;
  LOBYTE(v6) = 1;
  v7 = HMValidateHandleNoSecure(a1, v6);
  v9 = v7;
  if ( v7 && (v8 = *(_QWORD *)(v7 + 40), v10 = (*(_WORD *)(v8 + 42) & 0x3FFFu) - 669, (v10 & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8, v10);
    v12 = *(_QWORD **)(v9 + 16);
    v13 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_QWORD *)v12[52]
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v12[174] == GetAncestor(v9, 1LL) && (v16 = v12[175]) != 0 && v13 == *(_QWORD **)(*(_QWORD *)(v16 + 16) + 416LL) )
    {
      v14 = AttachInputQueueToWindow((struct tagWND *)v9, a2);
      if ( v14 >= 0 )
        *a3 = (struct tagWND *)v9;
    }
    else
    {
      v14 = -1073741790;
    }
  }
  else
  {
    v14 = -1073741811;
  }
  if ( !v17 )
    UserSessionSwitchLeaveCrit(v8);
  return (unsigned int)v14;
}
