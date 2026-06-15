/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180008B98
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800073C4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180007BDC (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x180008E7C (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800CF03C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CSid *ATL::CSid::CSid(ATL::CSid *this, PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority, UCHAR a3, ...)
{
  DWORD v5; // edi
  UCHAR *p_nSubAuthorityCount; // r14
  DWORD v7; // ebx
  struct _SID Sid[6]; // [rsp+30h] [rbp-88h] BYREF
  UCHAR nSubAuthorityCount; // [rsp+D0h] [rbp+18h] BYREF

  nSubAuthorityCount = a3;
  *(_QWORD *)this = &ATL::CSid::`vftable';
  v5 = 0;
  *((_BYTE *)this + 76) = 0;
  *((_DWORD *)this + 20) = 7;
  *((_QWORD *)this + 11) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 12) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 13) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 14) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( !nSubAuthorityCount || GetSidLengthRequired(nSubAuthorityCount) > 0x44 )
    ATL::AtlThrowImpl(-2147024809);
  if ( !InitializeSid(Sid, pIdentifierAuthority, nSubAuthorityCount) )
    ATL::AtlThrowLastWin32();
  if ( nSubAuthorityCount )
  {
    p_nSubAuthorityCount = &nSubAuthorityCount;
    do
    {
      p_nSubAuthorityCount += 8;
      v7 = *(_DWORD *)p_nSubAuthorityCount;
      *GetSidSubAuthority(Sid, v5++) = v7;
    }
    while ( v5 < nSubAuthorityCount );
  }
  ATL::CSid::Copy(this, Sid);
  *((_DWORD *)this + 20) = 8;
  return this;
}
