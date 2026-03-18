/*
 * XREFs of atexit @ 0x1400032F0
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001000 (_dynamic_initializer_for__g_dwmAppHost__.c)
 *     pre_c_initialization @ 0x140002D60 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x140003310 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x140003298 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
