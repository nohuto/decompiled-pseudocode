/*
 * XREFs of _Init_thread_header @ 0x18003A088
 * Callers:
 *     sub_180035580 @ 0x180035580 (sub_180035580.c)
 * Callees:
 *     _Init_thread_wait @ 0x18003A150 (_Init_thread_wait.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&stru_18004FC18);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait(0x64u);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 4LL) = dword_18004F540;
LABEL_7:
  LeaveCriticalSection(&stru_18004FC18);
}
