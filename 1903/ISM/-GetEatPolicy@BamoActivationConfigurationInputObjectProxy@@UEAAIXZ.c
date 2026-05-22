/*
 * XREFs of ?GetEatPolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ @ 0x180001BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800058B0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoActivationConfigurationInputObjectProxy::GetEatPolicy(
        BamoActivationConfigurationInputObjectProxy *this)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned int v5; // esi
  const char *v6; // r9
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v4 = *(_QWORD *)(v3 + 24);
  if ( *(_DWORD *)(v4 + 136) == GetCurrentThreadId() )
  {
    v3 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    v1 = v3;
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  v5 = *((_DWORD *)this + 11);
  if ( v3 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v1 + 24));
    v7 = _InterlockedDecrement((volatile signed __int32 *)(v3 + 8));
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        v6);
      __debugbreak();
    }
    if ( !v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v5;
}
