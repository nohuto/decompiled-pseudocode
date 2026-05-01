/*
 * XREFs of __Init_thread_footer @ 0x1000C9A0
 * Callers:
 *     ?StaticInitialize@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CG_NXZ @ 0x10006D00 (-StaticInitialize@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CG_NXZ.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV?$DefaultModule@$00@Details@23@XZ @ 0x100071F0 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV-$DefaultMo.c)
 * Callees:
 *     __Init_thread_lock @ 0x1000CA29 (__Init_thread_lock.c)
 *     __Init_thread_unlock @ 0x1000CA41 (__Init_thread_unlock.c)
 */

int __cdecl _Init_thread_footer(_DWORD *a1)
{
  _Init_thread_lock();
  *a1 = ++_Init_global_epoch;
  *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + _tls_index) + 4) = _Init_global_epoch;
  _Init_thread_unlock();
  return _Init_thread_notify();
}
