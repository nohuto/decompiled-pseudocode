/*
 * XREFs of ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00C8BFC
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00C8BA0 (NtUserDestroyDCompositionHwndTarget.c)
 * Callees:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00C8DBC (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall DetachWindowCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned int v10; // ebx
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = v4;
  if ( v4 && (v6 = *(_QWORD *)(v4 + 40), v7 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v15;
    v15[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(gptiCurrent, gptiCurrent, v7, v8);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v9 + 16)) )
      v10 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v9, a2) == 0 ? 0xC0000225 : 0;
    else
      v10 = -1073741790;
    ThreadUnlock1(v14, v13);
  }
  else
  {
    v10 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v10;
}
