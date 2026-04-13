/*
 * XREFs of std::_dynamic_initializer_for__initlocks__ @ 0x180001980
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x1800AEA00 (--0_Init_locks@std@@QEAA@XZ.c)
 */

int std::_dynamic_initializer_for__initlocks__()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_18018E350);
  return atexit((void (__cdecl *)())std::_dynamic_atexit_destructor_for__initlocks__);
}
