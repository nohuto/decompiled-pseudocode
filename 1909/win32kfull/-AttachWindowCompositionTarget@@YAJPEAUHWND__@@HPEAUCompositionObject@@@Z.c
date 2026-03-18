/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C0016088
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0015F50 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00161A8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
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
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( v6 && (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v16 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v16;
    v17 = v6;
    HMLockObject(v6);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10, v9, v11, v12);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v8 + 16)) )
      v14 = _AttachWindowCompositionTarget((struct tagWND *)v8, a2, a3);
    else
      v14 = -1073741790;
    ThreadUnlock1();
  }
  else
  {
    v14 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v14;
}
