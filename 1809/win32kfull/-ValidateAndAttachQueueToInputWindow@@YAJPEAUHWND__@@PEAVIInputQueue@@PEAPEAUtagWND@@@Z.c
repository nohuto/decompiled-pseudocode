/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C00B1F34
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C00B1F20 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00B203C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _GetAncestor @ 0x1C0124A04 (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(unsigned __int64 a1, struct IInputQueue *a2, struct tagWND **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rbx
  int v16; // ebx
  __int64 v18; // rax
  int v19; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  *a3 = 0LL;
  LOBYTE(v6) = 1;
  v7 = HMValidateHandleNoSecure(a1, v6);
  v12 = v7;
  if ( v7 && (v9 = *(_QWORD *)(v7 + 40), v8 = (*(_WORD *)(v9 + 42) & 0x2FFFu) - 669, (v8 & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v9);
    v14 = *(_QWORD **)(v12 + 16);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_QWORD *)v14[53]
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v14[171] == GetAncestor(v12, 1LL)
      && (v18 = v14[172]) != 0
      && v15 == *(_QWORD **)(*(_QWORD *)(v18 + 16) + 424LL) )
    {
      v16 = AttachInputQueueToWindow((struct tagWND *)v12, a2);
      if ( v16 >= 0 )
        *a3 = (struct tagWND *)v12;
    }
    else
    {
      v16 = -1073741790;
    }
  }
  else
  {
    v16 = -1073741811;
  }
  if ( !v19 )
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return (unsigned int)v16;
}
