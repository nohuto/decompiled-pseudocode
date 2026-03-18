/*
 * XREFs of NtUserGetRequiredCursorSizes @ 0x1C01238D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C012397C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 */

__int64 __fastcall NtUserGetRequiredCursorSizes(unsigned __int64 a1, volatile void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // ebx
  __int64 CurrentProcessWow64Process; // rax
  CCursorSizes *v12; // rcx

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 3;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v9 = v7;
  v10 = 0;
  if ( v7 && *(_QWORD *)(v7 + 48) == v7 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
    ProbeForWrite(a2, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    CCursorSizes::HandleRequestCursorSizesRequest(v12, (struct tagCURSORSIZEINFO *)a2);
    *(_DWORD *)(v9 + 80) |= 0x4000u;
    v10 = 1;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
