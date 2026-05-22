/*
 * XREFs of ?DisposeProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x18001216C
 * Callers:
 *     ?Thunk_DisposeProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800191C0 (-Thunk_DisposeProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_Auto.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18001267C (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::DisposeProxy(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 9);
  v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, Microsoft::BamoImpl::BamoProxyImpl **))(**(_QWORD **)(v4 + 40)
                                                                                                + 56LL))(
         *(_QWORD *)(v4 + 40),
         v2,
         a2,
         &v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D4,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v4 + 40) + 40LL))(
         *(_QWORD *)(v4 + 40),
         v2,
         a2,
         0LL);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D6,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( *((int *)v10 + 2) > 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3DF,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v7);
    JUMPOUT(0x180012232LL);
  }
  Microsoft::BamoImpl::BamoProxyImpl::Disconnect(v10, 0);
  return 0LL;
}
