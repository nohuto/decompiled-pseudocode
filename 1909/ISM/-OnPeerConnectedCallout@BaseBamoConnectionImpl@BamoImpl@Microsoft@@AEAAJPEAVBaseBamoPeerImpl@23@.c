/*
 * XREFs of ?OnPeerConnectedCallout@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAJPEAVBaseBamoPeerImpl@23@PEA_NPEAPEAVBamoPrincipal@Bamo@3@@Z @ 0x180006820
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800065E0 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnectedCallout(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbx
  const char *v9; // r9
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0LL;
  if ( !*((_DWORD *)this + 35) )
  {
    v8 = this;
    if ( *((_DWORD *)this + 34) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v9);
      __debugbreak();
    }
    *((_DWORD *)this + 34) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
  v10 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, struct Microsoft::BamoImpl::BaseBamoPeerImpl *, bool *, struct Microsoft::Bamo::BamoPrincipal **))(*(_QWORD *)this + 32LL))(
          this,
          a2,
          a3,
          a4);
  if ( v8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 96));
    *((_DWORD *)v8 + 34) = GetCurrentThreadId();
  }
  return v10;
}
