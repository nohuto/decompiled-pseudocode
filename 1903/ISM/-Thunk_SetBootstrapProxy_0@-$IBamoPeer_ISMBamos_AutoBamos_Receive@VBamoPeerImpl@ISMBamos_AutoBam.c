/*
 * XREFs of ?Thunk_SetBootstrapProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180062FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180027650 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z @ 0x180027684 (-SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_SetBootstrapProxy_0(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BamoProxyImpl *v3; // rdi
  Microsoft::Bamo::BaseBamoConnection *v4; // rbx
  struct Microsoft::Bamo::BamoProxy *v5; // rax
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, Microsoft::BamoImpl::BamoProxyImpl **))(**(_QWORD **)(v2 + 40)
                                                                                            + 56LL))(
         *(_QWORD *)(v2 + 40),
         *(unsigned int *)(a1 + 36),
         **a2,
         &v11) < 0 )
  {
    v7 = -2018375668;
LABEL_5:
    if ( v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_6;
  }
  v3 = v11;
  v4 = *(Microsoft::Bamo::BaseBamoConnection **)(v2 + 16);
  v5 = (struct Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)v11 + 48LL))(v11);
  v7 = Microsoft::Bamo::BaseBamoConnection::SetBootstrapProxyCallout(v4, v5);
  if ( v7 >= 0 )
  {
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v3, v6, v8);
    goto LABEL_5;
  }
LABEL_6:
  if ( v7 != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1050LL,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  return (unsigned int)v7;
}
