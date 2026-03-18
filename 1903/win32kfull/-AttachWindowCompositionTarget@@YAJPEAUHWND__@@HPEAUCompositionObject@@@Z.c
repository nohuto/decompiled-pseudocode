/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C0085CA8
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0085B70 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0085DC8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, int a2, struct CompositionObject *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( v6 && (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v19;
    v20 = v6;
    HMLockObject(v6);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10, v9, v11, v12);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v8 + 16)) )
      v17 = _AttachWindowCompositionTarget((struct tagWND *)v8, a2, a3);
    else
      v17 = -1073741790;
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    v17 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v17;
}
