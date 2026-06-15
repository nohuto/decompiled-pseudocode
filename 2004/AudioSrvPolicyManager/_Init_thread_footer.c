/*
 * XREFs of _Init_thread_footer @ 0x18003A020
 * Callers:
 *     sub_180035580 @ 0x180035580 (sub_180035580.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_18004FC18);
  v2 = (unsigned int)TlsIndex;
  *a1 = ++dword_18004F540;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = dword_18004F540;
  LeaveCriticalSection(&stru_18004FC18);
  return Init_thread_notify();
}
