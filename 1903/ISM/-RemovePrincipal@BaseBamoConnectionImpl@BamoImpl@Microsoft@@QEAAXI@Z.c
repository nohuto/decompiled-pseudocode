/*
 * XREFs of ?RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x1800658B4
 * Callers:
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180065570 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18005A720 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::RemovePrincipal(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 35) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      726LL,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      a4);
    __debugbreak();
  }
  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v9,
    this);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int *))(**((_QWORD **)this + 5) + 48LL))(
         *((_QWORD *)this + 5),
         *((unsigned int *)this + 7),
         a2,
         0LL,
         &v10);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      739LL,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v6);
  v7 = v9;
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
}
