/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180002FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  const char *v4; // r9
  int v5; // edi
  __int64 v6; // rbp
  const char *v7; // r9
  const char *v8; // r9
  int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h]

  v2 = *((_QWORD *)this + 2);
  v3 = *(_QWORD *)(v2 + 24);
  if ( *(int *)(v3 + 8) <= 0 )
  {
    return Microsoft::BamoImpl::BamoImplObject::Release(this);
  }
  else
  {
    v12 = 0LL;
    if ( *(_DWORD *)(v3 + 136) != GetCurrentThreadId() )
    {
      v12 = v2;
      if ( v2 )
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 96));
      *(_DWORD *)(v3 + 136) = GetCurrentThreadId();
    }
    v5 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        v4);
      __debugbreak();
    }
    if ( !v5 )
      (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 16LL))(this);
    if ( v12 )
    {
      v6 = *(_QWORD *)(v12 + 24);
      if ( *(_DWORD *)(v6 + 136) != GetCurrentThreadId() )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x5CE,
          (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
          v7);
        __debugbreak();
      }
      *(_DWORD *)(v6 + 136) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
      v9 = _InterlockedDecrement((volatile signed __int32 *)(v12 + 8));
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
          v8);
        __debugbreak();
      }
      if ( !v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return (unsigned int)v5;
}
