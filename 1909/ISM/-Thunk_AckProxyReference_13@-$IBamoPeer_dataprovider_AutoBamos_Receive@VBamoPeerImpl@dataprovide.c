/*
 * XREFs of ?Thunk_AckProxyReference_13@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180021A80
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamoStubImpl@23@@Z @ 0x1800621BC (-RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamo.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_13(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  char v3; // di
  __int64 v4; // rcx
  int v5; // eax
  volatile signed __int32 *Stub; // rax
  char *v7; // r9
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoPrincipalImpl *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_BYTE *)a2[1];
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 24LL) + 40LL);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, Microsoft::BamoImpl::BamoPrincipalImpl **))(*(_QWORD *)v4 + 56LL))(
         v4,
         *((unsigned int *)a1 + 9),
         **a2,
         &v11);
  if ( v5 != -2018375675 )
  {
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x387,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v5,
        v9);
      __debugbreak();
    }
    Stub = (volatile signed __int32 *)Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(v11, *((_DWORD *)a1 + 9));
    if ( !*((_DWORD *)Stub + 4) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xBA,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
        v7);
      __debugbreak();
    }
    _InterlockedDecrement(Stub + 4);
    if ( !v3 )
      Microsoft::BamoImpl::BamoPrincipalImpl::RequestDisposeProxy(
        (Microsoft::BamoImpl::BamoPrincipalImpl *)v7,
        a1,
        (struct Microsoft::BamoImpl::BamoStubImpl *)Stub);
  }
  return 0LL;
}
