/*
 * XREFs of ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x18001B45C
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18001E55C (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18007B2E0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x180125734 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0InputConfigContextProvider@@IEAA@XZ @ 0x1800154B4 (--0InputConfigContextProvider@@IEAA@XZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z@std@@@Z @ 0x18001C934 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputConfigContextProvider::Create(struct ISystemContextProvider **a1)
{
  struct SystemContextProvider *v2; // rbx
  InputConfigContextProvider *v3; // rax
  int v4; // eax
  __int64 v5; // r8
  int v6; // edi
  __int64 v8; // rdx
  _QWORD v9[12]; // [rsp+28h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0LL;
  if ( a1 )
  {
    v2 = SystemContextProvider::s_pContextProvider;
    if ( SystemContextProvider::s_pContextProvider )
    {
LABEL_10:
      (*(void (__fastcall **)(struct SystemContextProvider *))(*(_QWORD *)v2 + 8LL))(v2);
      *a1 = SystemContextProvider::s_pContextProvider;
      v6 = 0;
      v2 = 0LL;
      goto LABEL_11;
    }
    v3 = (InputConfigContextProvider *)RefCountedObject::operator new(0x110uLL);
    if ( v3 )
      v2 = InputConfigContextProvider::InputConfigContextProvider(v3);
    else
      v2 = 0LL;
    if ( v2 )
    {
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)v2 + 88);
      v4 = CoreUICreate((char *)v2 + 88);
      v6 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
          (const char *)(unsigned int)v4);
      }
      else
      {
        v9[7] = v9;
        KernelInputConnection<_MIT_INPUT_CONFIG_MESSAGE>::Initialize(
          (char *)v2 + 96,
          (char *)v2 + 88,
          v5,
          v9,
          -2LL,
          off_180173160,
          v2);
        v6 = 0;
      }
      if ( v6 >= 0 )
      {
        SystemContextProvider::s_pContextProvider = v2;
        goto LABEL_10;
      }
      v8 = 51LL;
    }
    else
    {
      v6 = -2147024882;
      v8 = 48LL;
    }
  }
  else
  {
    v6 = -2147024809;
    v8 = 41LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  if ( v2 )
    (*(void (__fastcall **)(struct SystemContextProvider *))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v6;
}
