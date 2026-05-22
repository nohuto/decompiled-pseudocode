/*
 * XREFs of ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x18009DCBC
 * Callers:
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039BE0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EBB80 (-Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180106064 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InputConfigContextProvider@@IEAA@XZ @ 0x18009DAD0 (--0InputConfigContextProvider@@IEAA@XZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z@std@@@Z @ 0x18009E204 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputConfigContextProvider::Create(struct ISystemContextProvider **a1)
{
  InputConfigContextProvider *v2; // rbx
  int v3; // edi
  __int64 v4; // rdx
  InputConfigContextProvider *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  _QWORD v10[12]; // [rsp+28h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0LL;
  if ( !a1 )
  {
    v3 = -2147024809;
    v4 = 41LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_20;
  }
  v2 = SystemContextProvider::s_pContextProvider;
  if ( !SystemContextProvider::s_pContextProvider )
  {
    v5 = (InputConfigContextProvider *)malloc(0x110uLL);
    v2 = v5;
    if ( v5 )
      memset_0(v5, 0, 0x110uLL);
    if ( v2 )
      v2 = InputConfigContextProvider::InputConfigContextProvider(v2);
    if ( !v2 )
    {
      v3 = -2147024882;
      v4 = 48LL;
      goto LABEL_17;
    }
    v6 = *((_QWORD *)v2 + 11);
    if ( v6 )
    {
      *((_QWORD *)v2 + 11) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = CoreUICreate((char *)v2 + 88);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v10[0] = off_18013DDD0;
      v10[1] = v2;
      v10[7] = v10;
      ((void (__fastcall *)(char *, char *, __int64, _QWORD *, __int64))KernelInputConnection<_MIT_INPUT_CONFIG_MESSAGE>::Initialize)(
        (char *)v2 + 96,
        (char *)v2 + 88,
        v8,
        v10,
        -2LL);
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
        (const char *)(unsigned int)v7);
    }
    if ( v3 < 0 )
    {
      v4 = 51LL;
      goto LABEL_17;
    }
    SystemContextProvider::s_pContextProvider = v2;
  }
  (*(void (__fastcall **)(InputConfigContextProvider *))(*(_QWORD *)v2 + 8LL))(v2);
  *a1 = SystemContextProvider::s_pContextProvider;
  v3 = 0;
  v2 = 0LL;
LABEL_20:
  if ( v2 )
    (*(void (__fastcall **)(InputConfigContextProvider *))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v3;
}
