/*
 * XREFs of ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18001E730
 * Callers:
 *     <none>
 * Callees:
 *     CreateInputServiceProxy @ 0x18001928C (CreateInputServiceProxy.c)
 *     ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x18001B110 (-InitPort@NonBamoInputDeliveryServer@@AEAAXXZ.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x18001CB14 (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     ?InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z @ 0x18001E828 (-InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v6; // rcx
  int v9; // eax
  __int64 v10; // r8
  int InputServiceProxy; // eax
  int v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  int *v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = *(_QWORD *)(a1 + 32);
    }
    *(_QWORD *)(a1 + 32) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *(_DWORD *)(a1 + 40) = a4;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1 + 48);
  v9 = CoreUICreate(a1 + 48);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v9,
      v13[0]);
    __debugbreak();
  }
  NonBamoInputDeliveryServer::InitPort((NonBamoInputDeliveryServer *)a1);
  NonBamoInputDeliveryServer::InitConversation((NonBamoInputDeliveryServer *)a1, a3);
  if ( *(_DWORD *)(a1 + 40) != 1 )
  {
    v14 = a1;
    *(_QWORD *)v13 = &off_180173190;
    v15 = v13;
    KernelInputConnection<tagQMSGINPUTREPORT>::Initialize((_QWORD *)(a1 + 72), (_QWORD *)(a1 + 48), v10, (__int64)v13);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1 + 264);
  InputServiceProxy = CreateInputServiceProxy((struct IInputServiceProxyOwner *)(a1 + 8), (_QWORD *)(a1 + 264));
  if ( InputServiceProxy < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)InputServiceProxy,
      v13[0]);
    JUMPOUT(0x1800491A6LL);
  }
  return 0LL;
}
