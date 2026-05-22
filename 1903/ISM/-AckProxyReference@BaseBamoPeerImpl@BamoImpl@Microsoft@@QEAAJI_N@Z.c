/*
 * XREFs of ?AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z @ 0x180008460
 * Callers:
 *     ?Thunk_AckProxyReference_235@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18002ECF0 (-Thunk_AckProxyReference_235@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoB.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamoStubImpl@23@@Z @ 0x18006241C (-RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamo.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::AckProxyReference(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        unsigned int a2,
        char a3)
{
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  volatile signed __int32 *Stub; // rax
  char *v10; // r9
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoPrincipalImpl *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2;
  v6 = *((unsigned int *)this + 9);
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, Microsoft::BamoImpl::BamoPrincipalImpl **))(*(_QWORD *)v7 + 56LL))(
         v7,
         v6,
         v5,
         &v14);
  if ( v8 != -2018375675 )
  {
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x387,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v8,
        v12);
      __debugbreak();
    }
    Stub = (volatile signed __int32 *)Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(v14, *((_DWORD *)this + 9));
    if ( !*((_DWORD *)Stub + 4) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xBA,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
        v10);
      __debugbreak();
    }
    _InterlockedDecrement(Stub + 4);
    if ( !a3 )
      Microsoft::BamoImpl::BamoPrincipalImpl::RequestDisposeProxy(
        (Microsoft::BamoImpl::BamoPrincipalImpl *)v10,
        this,
        (struct Microsoft::BamoImpl::BamoStubImpl *)Stub);
  }
  return 0LL;
}
