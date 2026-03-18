/*
 * XREFs of InitClientInfo @ 0x1C002F7EC
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C00A3C60 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  PVOID CurrentProcess; // rcx
  BOOL v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx

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
  v7 = 0;
  if ( CurrentProcess )
    v7 = CurrentProcess == g_pepDwm;
  v8 = v7;
  v9 = *(_QWORD *)(a1 + 416);
  if ( *(int *)(v9 + 12) < 0 )
    v8 |= 2u;
  if ( (*(_DWORD *)(v9 + 812) & 0x800) != 0 )
    v8 |= 4u;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(CurrentProcess, v5) + 12) & 0x20000000) != 0 )
    v8 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 224LL) |= v8;
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 236LL) = 0;
  v10 = *(_QWORD *)(a1 + 472);
  *(_QWORD *)(a1 + 360) = v10 + 232;
  *(_DWORD *)(v10 + 240) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 244LL) = 0;
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a1 + 472) + 240LL;
  return 1LL;
}
