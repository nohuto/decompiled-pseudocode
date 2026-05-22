/*
 * XREFs of _dynamic_atexit_destructor_for__TestCommandHost::m_instance__ @ 0x18003E160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall dynamic_atexit_destructor_for__TestCommandHost::m_instance__(__int64 a1, unsigned int a2)
{
  return std::unique_ptr<TestCommandHost>::~unique_ptr<TestCommandHost>(a1, a2);
}
