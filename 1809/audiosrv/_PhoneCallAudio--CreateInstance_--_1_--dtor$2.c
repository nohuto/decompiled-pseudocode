/*
 * XREFs of _PhoneCallAudio::CreateInstance_::_1_::dtor$2 @ 0x18006F925
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PhoneCallAudio::CreateInstance_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 112), (const struct std::nothrow_t *)0xA0);
}
