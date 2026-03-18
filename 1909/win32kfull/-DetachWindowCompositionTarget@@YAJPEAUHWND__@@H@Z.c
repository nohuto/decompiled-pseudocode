/*
 * XREFs of ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C010CE3C
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C010CDE0 (NtUserDestroyDCompositionHwndTarget.c)
 * Callees:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C010D010 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall DetachWindowCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v17 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v17;
    v18 = v4;
    HMLockObject(v4);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10, v9, v11, v12);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v6 + 16)) )
      v7 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v6, a2) == 0 ? 0xC0000225 : 0;
    else
      v7 = -1073741790;
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    v7 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
