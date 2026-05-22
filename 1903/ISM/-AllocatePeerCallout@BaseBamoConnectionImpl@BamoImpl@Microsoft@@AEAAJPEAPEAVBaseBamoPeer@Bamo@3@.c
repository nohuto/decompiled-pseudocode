/*
 * XREFs of ?AllocatePeerCallout@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAJPEAPEAVBaseBamoPeer@Bamo@3@@Z @ 0x1800068F0
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800065E0 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocatePeerCallout(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rbx
  const char *v5; // r9
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  if ( !*((_DWORD *)this + 35) )
  {
    v4 = this;
    if ( *((_DWORD *)this + 34) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v5);
      __debugbreak();
    }
    *((_DWORD *)this + 34) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
  v6 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, struct Microsoft::Bamo::BaseBamoPeer **))(*(_QWORD *)this + 24LL))(
         this,
         a2);
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 96));
    *((_DWORD *)v4 + 34) = GetCurrentThreadId();
  }
  return v6;
}
