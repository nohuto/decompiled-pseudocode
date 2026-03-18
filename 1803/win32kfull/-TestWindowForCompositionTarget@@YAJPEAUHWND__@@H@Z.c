/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C000C418
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C000C160 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C000C4F8 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall TestWindowForCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = v4;
  if ( v4 && (v6 = *(_QWORD *)(v4 + 40), v7 = (*(_WORD *)(v6 + 42) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v16;
    v16[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(gptiCurrent, gptiCurrent);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v9 + 16)) )
      v14 = (unsigned int)WindowHasCompositionTarget((struct tagWND *)v9, a2) != 0 ? 0x803E0006 : 0;
    else
      v14 = -1073741790;
    ThreadUnlock1(v12, v11, v13);
  }
  else
  {
    v14 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v14;
}
