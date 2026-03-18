/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C0085E84
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0085B70 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0085FC8 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 */

__int64 __fastcall TestWindowForCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v17; // zf
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v18 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v18;
    v19 = v4;
    HMLockObject(v4);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v9, v8, v10, v11);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v7 + 16)) )
    {
      if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(v7, &v21) )
      {
        v14 = 0LL;
        if ( a2 )
          v17 = *(_QWORD *)(v21 + 16) == 0LL;
        else
          v17 = *(_QWORD *)(v21 + 24) == 0LL;
        LOBYTE(v14) = !v17;
        if ( (_DWORD)v14 )
          v6 = -2143420410;
      }
    }
    else
    {
      v6 = -1073741790;
    }
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    v6 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
