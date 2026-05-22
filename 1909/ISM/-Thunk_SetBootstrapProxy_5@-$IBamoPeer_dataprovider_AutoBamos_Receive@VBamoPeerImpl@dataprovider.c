/*
 * XREFs of ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800270E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180027170 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z @ 0x1800271A4 (-SetBootstrapProxyCallout@BaseBamoConnection@Bamo@Microsoft@@AEAAJPEAVBamoProxy@23@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_SetBootstrapProxy_5(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BamoProxyImpl *v3; // rdi
  Microsoft::Bamo::BaseBamoConnection *v4; // rbx
  struct Microsoft::Bamo::BamoProxy *v5; // rax
  int v6; // ebx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, Microsoft::BamoImpl::BamoProxyImpl **))(**(_QWORD **)(v2 + 40)
                                                                                            + 56LL))(
         *(_QWORD *)(v2 + 40),
         *(unsigned int *)(a1 + 36),
         **a2,
         &v10) < 0 )
  {
    v6 = -2018375668;
LABEL_4:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_7;
  }
  v3 = v10;
  v4 = *(Microsoft::Bamo::BaseBamoConnection **)(v2 + 16);
  v5 = (struct Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)v10 + 48LL))(v10);
  v6 = Microsoft::Bamo::BaseBamoConnection::SetBootstrapProxyCallout(v4, v5);
  if ( v6 >= 0 )
  {
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v3);
    goto LABEL_4;
  }
LABEL_7:
  if ( v6 != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x41A,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v6,
      v8);
    __debugbreak();
  }
  return (unsigned int)v6;
}
