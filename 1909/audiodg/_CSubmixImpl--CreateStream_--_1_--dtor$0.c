/*
 * XREFs of _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x14001AD6F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::CreateStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(a2 + 96);
}
