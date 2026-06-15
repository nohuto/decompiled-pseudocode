/*
 * XREFs of _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x14004050F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamGroup::CreateStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CSAutoLock<1>::~CSAutoLock<1>((struct _RTL_CRITICAL_SECTION **)(a2 + 128));
}
