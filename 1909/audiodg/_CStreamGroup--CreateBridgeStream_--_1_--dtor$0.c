/*
 * XREFs of _CStreamGroup::CreateBridgeStream_::_1_::dtor$0 @ 0x14003C653
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CStreamGroup::CreateBridgeStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>((CPipeInstance **)(a2 + 96), a2);
}
