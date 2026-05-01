/*
 * XREFs of ??1RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180211B2C
 * Callers:
 *     _lambda_2042965200248d0a427160a096d62bcd_::operator() @ 0x180212210 (_lambda_2042965200248d0a427160a096d62bcd_--operator().c)
 *     __lambda_2042965200248d0a427160a096d62bcd_::operator()_::_1_::dtor$1 @ 0x180212460 (__lambda_2042965200248d0a427160a096d62bcd_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::~RecoverComponentHostRelationship(
        ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
