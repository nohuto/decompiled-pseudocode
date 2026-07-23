/*
 * XREFs of BiSetObjectDescription @ 0x1408F221C
 * Callers:
 *     BiCreateObject @ 0x1408F1E60 (BiCreateObject.c)
 * Callees:
 *     BiCreateKey @ 0x140714284 (BiCreateKey.c)
 *     BiCloseKey @ 0x140714B90 (BiCloseKey.c)
 *     BiSetRegistryValue @ 0x140715024 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetObjectDescription(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v5; // [rsp+50h] [rbp+18h] BYREF
  void *v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  result = BiCreateKey(a1, L"Description", 0x20019u, 1u, &v6, &v5);
  if ( (int)result >= 0 )
  {
    BiCloseKey(v6);
    return BiSetRegistryValue(a1, L"Type", L"Description", 4u, (PVOID)(a2 + 4), 4u);
  }
  return result;
}
