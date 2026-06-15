/*
 * XREFs of _Init_thread_footer @ 0x14001D4D0
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x14000AB80 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_140088D58);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_140088D58);
  return Init_thread_notify();
}
