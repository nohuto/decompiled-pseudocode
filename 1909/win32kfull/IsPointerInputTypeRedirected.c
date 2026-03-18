/*
 * XREFs of IsPointerInputTypeRedirected @ 0x1C01F3090
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputRedirected @ 0x1C01F2FFC (IsPointerInputRedirected.c)
 */

__int64 __fastcall IsPointerInputTypeRedirected(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 CurrentProcessWin32Process; // rax

  v2 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  return IsPointerInputRedirected(CurrentProcessWin32Process, *(_QWORD *)(grpdeskRitInput + 8LL), v2, 0LL);
}
