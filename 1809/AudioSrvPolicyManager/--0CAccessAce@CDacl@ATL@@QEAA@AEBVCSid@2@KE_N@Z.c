/*
 * XREFs of ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180033F60
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180033690 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800338EC (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x180034224 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x180010678 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180035AB0 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CDacl::CAccessAce *__fastcall ATL::CDacl::CAccessAce::CAccessAce(
        ATL::CDacl::CAccessAce *this,
        const struct ATL::CSid *a2,
        int a3,
        char a4,
        bool a5)
{
  _QWORD *v9; // rsi
  char *v10; // rdi
  DWORD LengthSid; // eax
  int Error; // ecx

  *(_QWORD *)this = &ATL::CAcl::CAce::`vftable';
  v9 = (_QWORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = &ATL::CSid::`vftable';
  *((_BYTE *)this + 84) = *((_BYTE *)a2 + 76);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 20);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (_QWORD *)this + 12,
    (const void **)a2 + 11);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v9 + 12,
    (const void **)a2 + 12);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v9 + 13,
    (const void **)a2 + 13);
  v9[14] = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  if ( *((_BYTE *)a2 + 76) )
  {
    v10 = (char *)a2 + 8;
    if ( !IsValidSid(v10) )
      ATL::AtlThrowImpl(-2147024809);
    LengthSid = GetLengthSid(v10);
    if ( !CopySid(LengthSid, v9 + 1, v10) )
    {
      Error = ATL::AtlHresultFromLastError();
      ATL::AtlThrowImpl(Error);
    }
  }
  *((_DWORD *)this + 32) = a3;
  *((_BYTE *)this + 132) = a4;
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)this = &ATL::CDacl::CAccessAce::`vftable';
  *((_BYTE *)this + 144) = a5;
  return this;
}
