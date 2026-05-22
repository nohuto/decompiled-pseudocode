/*
 * XREFs of ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18001267C
 * Callers:
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x180011CF0 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?DisposeProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x18001216C (-DisposeProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BamoProxyImpl::Disconnect(Microsoft::BamoImpl::BamoProxyImpl *this, char a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  const char *v6; // r9
  int v7; // edi
  void (__fastcall ***v8)(_QWORD); // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_BYTE *)this + 29) = 1;
  v3 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 48LL))(this);
  _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3) + 8));
  if ( !a2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3) + 16) + 24LL)
                   + 24LL);
    v5 = 0LL;
    if ( !*(_DWORD *)(v4 + 140) )
    {
      v5 = v4;
      if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x5CE,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
          v6);
        JUMPOUT(0x1800127B1LL);
      }
      *(_DWORD *)(v4 + 136) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    }
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    if ( v5 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
      *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
    }
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x207,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoproxy.inl",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
  }
  v8 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  (**v8)(v8);
}
