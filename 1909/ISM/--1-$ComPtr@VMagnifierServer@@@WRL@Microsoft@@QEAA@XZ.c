/*
 * XREFs of ??1?$ComPtr@VMagnifierServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18006F6F8
 * Callers:
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$1 @ 0x1800C21D9 (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$1.c)
 *     _Edge::Edge_::_1_::dtor$1 @ 0x18010155B (_Edge--Edge_--_1_--dtor$1.c)
 *     _Edge::Edge_::_1_::dtor$1_0 @ 0x1801015F4 (_Edge--Edge_--_1_--dtor$1_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MagnifierServer>::~ComPtr<MagnifierServer>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(a1);
}
