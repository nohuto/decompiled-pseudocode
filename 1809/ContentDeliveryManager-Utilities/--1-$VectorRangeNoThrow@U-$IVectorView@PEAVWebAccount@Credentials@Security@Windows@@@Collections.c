/*
 * XREFs of ??1?$VectorRangeNoThrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAA@XZ @ 0x180099A28
 * Callers:
 *     _MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor$4 @ 0x1800CFAA1 (_MobilityExperienceManager--GetHasMobilityAccount_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::~VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(result + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
