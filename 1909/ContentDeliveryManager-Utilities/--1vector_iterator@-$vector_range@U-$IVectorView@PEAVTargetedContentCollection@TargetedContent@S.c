/*
 * XREFs of ??1vector_iterator@?$vector_range@U?$IVectorView@PEAVTargetedContentCollection@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180046D54
 * Callers:
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$1 @ 0x1800CE9DA (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$1.c)
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$2 @ 0x1800CE9EC (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$2.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$1 @ 0x1800D4600 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800D4600.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$2 @ 0x1800D4612 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800D4612.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$7 @ 0x1800D465A (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800D465A.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$8 @ 0x1800D466C (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800D466C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection *>,wil::err_exception_policy>::vector_iterator::~vector_iterator(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(result + 16) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
