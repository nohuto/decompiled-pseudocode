/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C000C278
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C000C160 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C000C360 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, int a2, struct CompositionObject *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  if ( v6 && (v8 = *(_QWORD *)(v6 + 40), v9 = (*(_WORD *)(v8 + 42) & 0x3FFFu) - 669, (v9 & 0xFFFFFFFD) != 0) )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v18;
    v18[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(gptiCurrent, gptiCurrent);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v11 + 16)) )
      v16 = _AttachWindowCompositionTarget((struct tagWND *)v11, a2, a3);
    else
      v16 = -1073741790;
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    v16 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v16;
}
