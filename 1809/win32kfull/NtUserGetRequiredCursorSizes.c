/*
 * XREFs of NtUserGetRequiredCursorSizes @ 0x1C011B9D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C011BA7C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 */

__int64 __fastcall NtUserGetRequiredCursorSizes(__int64 a1, volatile void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  int v11; // ebx
  __int64 CurrentProcessWow64Process; // rax
  CCursorSizes *v13; // rcx

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 3;
  v5 = HMValidateHandle(a1, v4);
  v10 = v5;
  v11 = 0;
  if ( v5 && *(_QWORD *)(v5 + 48) == v5 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7);
    ProbeForWrite(a2, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    CCursorSizes::HandleRequestCursorSizesRequest(v13, (struct tagCURSORSIZEINFO *)a2);
    *(_DWORD *)(v10 + 80) |= 0x4000u;
    v11 = 1;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v11;
}
