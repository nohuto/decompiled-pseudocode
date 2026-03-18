/*
 * XREFs of ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C00F68F0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsSmallerThanScreen @ 0x1C00C10E4 (IsSmallerThanScreen.c)
 */

__int64 __fastcall ShouldRemoveMonitorRgn(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v8 = 0LL;
  if ( (*(_BYTE *)(v4 + 21) & 8) != 0
    && (IsSmallerThanScreen(a1, &v8, a3, a4) || *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) != v8) )
  {
    return 1;
  }
  return v5;
}
