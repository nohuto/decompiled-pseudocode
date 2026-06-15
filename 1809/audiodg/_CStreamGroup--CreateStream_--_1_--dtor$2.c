/*
 * XREFs of _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x14004051B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CStreamInstance *__fastcall CStreamGroup::CreateStream_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>((CStreamInstance **)(a2 + 48));
}
