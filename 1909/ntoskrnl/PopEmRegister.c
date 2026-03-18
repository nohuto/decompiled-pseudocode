/*
 * XREFs of PopEmRegister @ 0x140A3DB14
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     EmpProviderRegister @ 0x140757AB0 (EmpProviderRegister.c)
 */

__int64 PopEmRegister()
{
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  return EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 2u, &v1);
}
