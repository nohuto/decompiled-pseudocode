/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153E64
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x180153FE0 (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154170 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153AA8 (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        char a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoStubImpl *v4; // rbx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoStubImpl *v8; // rcx
  Microsoft::BamoImpl::BamoStubImpl *v9; // rsi
  Microsoft::BamoImpl::BamoStubImpl *i; // rax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 6);
  *((_BYTE *)this + 44) = 1;
  if ( v4 )
  {
    while ( 2 )
    {
      v7 = *((_QWORD *)v4 + 3);
      v8 = 0LL;
      v9 = (Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v4 + 7);
      for ( i = *(Microsoft::BamoImpl::BamoStubImpl **)(v7 + 32);
            i;
            i = (Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
      {
        if ( i == v4 )
        {
          v11 = *((_QWORD *)v4 + 6);
          if ( v8 )
            *((_QWORD *)v8 + 6) = v11;
          else
            *(_QWORD *)(v7 + 32) = v11;
          *((_QWORD *)v4 + 6) = 0LL;
          break;
        }
        v8 = i;
      }
      if ( !i )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x243,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
          a4);
        __debugbreak();
      }
      Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(v4, a2);
      (**(void (__fastcall ***)(Microsoft::BamoImpl::BamoStubImpl *))v4)(v4);
      *((_QWORD *)this + 6) = v9;
      if ( v9 )
      {
        v4 = v9;
        continue;
      }
      break;
    }
  }
}
