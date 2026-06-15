/*
 * XREFs of _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x14003C9CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CStreamGroup::CreateStream_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>((CStreamInstance **)(a2 + 48), a2);
}
