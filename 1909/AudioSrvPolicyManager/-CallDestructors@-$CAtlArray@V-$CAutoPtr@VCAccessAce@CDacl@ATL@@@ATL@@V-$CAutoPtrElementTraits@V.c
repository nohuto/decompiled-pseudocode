/*
 * XREFs of ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800327C0
 * Callers:
 *     ??1?$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x1800303AC (--1-$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x1800303DC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180030470 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x1800305C0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ?RemoveAce@CDacl@ATL@@UEAAXI@Z @ 0x180030610 (-RemoveAce@CDacl@ATL@@UEAAXI@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800306C4 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18003165C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 i; // rbx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 result; // rax

  if ( a2 )
  {
    for ( i = 0LL; i < a2; ++i )
    {
      v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8 * i);
      if ( v5 )
        result = (**v5)(v5, 1LL);
      *(_QWORD *)(a1 + 8 * i) = 0LL;
    }
  }
  return result;
}
