/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C0016264
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0015F50 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00163A8 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
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
  int v14; // ecx
  bool v15; // zf
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v16 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v16;
    v17 = v4;
    HMLockObject(v4);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v9, v8, v10, v11);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v7 + 16)) )
    {
      if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(v7, &v19) )
      {
        v14 = 0;
        if ( a2 )
          v15 = *(_QWORD *)(v19 + 16) == 0LL;
        else
          v15 = *(_QWORD *)(v19 + 24) == 0LL;
        LOBYTE(v14) = !v15;
        if ( v14 )
          v6 = -2143420410;
      }
    }
    else
    {
      v6 = -1073741790;
    }
    ThreadUnlock1();
  }
  else
  {
    v6 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
