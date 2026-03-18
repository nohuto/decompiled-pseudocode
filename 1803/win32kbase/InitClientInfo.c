/*
 * XREFs of InitClientInfo @ 0x1C0063284
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 *     InitSystemThread @ 0x1C00A0CF0 (InitSystemThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  PVOID CurrentProcess; // rcx
  BOOL v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 16LL) = *(_DWORD *)(a1 + 624);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 28LL) = *(_DWORD *)(a1 + 480);
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 208LL) = 0LL;
  v2 = *(_QWORD *)(a1 + 432);
  v3 = *(_QWORD *)(a1 + 472);
  if ( v2 )
  {
    *(_WORD *)(v3 + 152) = *(_WORD *)(v2 + 72);
    v3 = *(_QWORD *)(a1 + 472);
    *(_QWORD *)(v3 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 40LL);
  }
  else
  {
    *(_WORD *)(v3 + 152) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 472) + 144LL) = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v3);
  v5 = 0;
  if ( CurrentProcess )
    v5 = CurrentProcess == g_pepDwm;
  v6 = v5;
  v7 = *(_QWORD *)(a1 + 416);
  if ( *(int *)(v7 + 12) < 0 )
    v6 |= 2u;
  if ( (*(_DWORD *)(v7 + 812) & 0x800) != 0 )
    v6 |= 4u;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(CurrentProcess) + 12) & 0x20000000) != 0 )
    v6 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 224LL) |= v6;
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 236LL) = 0;
  v8 = *(_QWORD *)(a1 + 472);
  *(_QWORD *)(a1 + 360) = v8 + 232;
  *(_DWORD *)(v8 + 240) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 244LL) = 0;
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a1 + 472) + 240LL;
  return 1LL;
}
