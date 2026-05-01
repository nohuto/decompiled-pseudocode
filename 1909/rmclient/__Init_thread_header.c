/*
 * XREFs of __Init_thread_header @ 0x1000C9E1
 * Callers:
 *     ?StaticInitialize@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CG_NXZ @ 0x10006D00 (-StaticInitialize@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CG_NXZ.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV?$DefaultModule@$00@Details@23@XZ @ 0x100071F0 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV-$DefaultMo.c)
 * Callees:
 *     __Init_thread_lock @ 0x1000CA29 (__Init_thread_lock.c)
 *     __Init_thread_wait @ 0x1000CA4D (__Init_thread_wait.c)
 */

int __cdecl _Init_thread_header(_DWORD *a1)
{
  _Init_thread_lock();
  while ( *a1 )
  {
    if ( *a1 != -1 )
    {
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + _tls_index) + 4) = _Init_global_epoch;
      return _Init_thread_unlock();
    }
    _Init_thread_wait(0);
  }
  *a1 = -1;
  return _Init_thread_unlock();
}
