/*
 * XREFs of ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180060850
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x180059CB0 (-Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18005F6A0 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x180064F08 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 i; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  Microsoft::BamoImpl::BamoImplObject *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 34) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      451LL,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      a4);
    __debugbreak();
  }
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = *((_QWORD *)this + 9); i; i = *((_QWORD *)this + 9) )
    {
      v6 = *((_QWORD *)this + 5);
      LOBYTE(a4) = 1;
      *((_QWORD *)this + 9) = *(_QWORD *)(i + 56);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const char *, __int64 (__fastcall *)(void *, __int64, __int64, Microsoft::BamoImpl::BamoProxyImpl *), _QWORD))(*(_QWORD *)v6 + 72LL))(
             v6,
             *(unsigned int *)(i + 36),
             0LL,
             a4,
             Microsoft::BamoImpl::BaseBamoConnectionImpl::FreeProxyAtShutdown,
             0LL);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          496LL,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
          (const char *)(unsigned int)v7);
        JUMPOUT(0x180060955LL);
      }
      Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected((Microsoft::BamoImpl::BaseBamoPeerImpl *)i, 1, v8, v9);
      (**(void (__fastcall ***)(__int64))i)(i);
    }
    v10 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    RefPtr<IRemoteTextInputState>::Release((char *)this + 48);
    RefPtr<IRemoteTextInputState>::Release((char *)this + 56);
    v14 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v14 )
      Microsoft::BamoImpl::BamoImplObject::Release(v14, v11, v12, v13);
  }
  else
  {
    Microsoft::Bamo::BaseBamoConnection::Free(*((Microsoft::Bamo::BaseBamoConnection **)this + 2));
  }
}
