/*
 * XREFs of InitClientInfo @ 0x1C002E9DC
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C00A2BA0 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  PVOID CurrentProcess; // rcx
  BOOL v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 472);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(a1 + 624);
  v3 = *(_QWORD *)(a1 + 472);
  *(_DWORD *)(v3 + 28) = *(_DWORD *)(a1 + 480);
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 208LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 432);
  if ( v4 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 472) + 152LL) = *(_WORD *)(v4 + 72);
    v3 = *(_QWORD *)(a1 + 472);
    *(_QWORD *)(v3 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 40LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 472) + 152LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 472) + 144LL) = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v3, v2);
  v6 = 0;
  if ( CurrentProcess )
    v6 = CurrentProcess == g_pepDwm;
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 416);
  if ( *(int *)(v8 + 12) < 0 )
    v7 |= 2u;
  if ( (*(_DWORD *)(v8 + 812) & 0x800) != 0 )
    v7 |= 4u;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(CurrentProcess) + 12) & 0x20000000) != 0 )
    v7 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 224LL) |= v7;
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 236LL) = 0;
  v9 = *(_QWORD *)(a1 + 472);
  *(_QWORD *)(a1 + 360) = v9 + 232;
  *(_DWORD *)(v9 + 240) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 244LL) = 0;
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a1 + 472) + 240LL;
  return 1LL;
}
