/*
 * XREFs of _atexit @ 0x1000CB33
 * Callers:
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x10005480 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_levelDecreasedEvent__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x100054A0 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_levelIncreasedEvent__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x100054C0 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_limitChangeEvent__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x100054E0 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_pProxy__.c)
 *     ?StaticInitialize@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CG_NXZ @ 0x10006D00 (-StaticInitialize@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CG_NXZ.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV?$DefaultModule@$00@Details@23@XZ @ 0x100071F0 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV-$DefaultMo.c)
 * Callees:
 *     __onexit @ 0x1000CA90 (__onexit.c)
 */

int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != 0) - 1;
}
