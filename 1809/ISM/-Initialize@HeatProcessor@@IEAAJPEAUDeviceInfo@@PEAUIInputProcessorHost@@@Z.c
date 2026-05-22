/*
 * XREFs of ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800EC974
 * Callers:
 *     ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800ECBA0 (-Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18000C384 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z @ 0x180039920 (--0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x1800ECDD4 (-OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z.c)
 *     ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x1800ED108 (-LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HeatProcessor::Initialize(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  __int64 v6; // rcx
  ISMHeatFrameworkHost *v7; // rax
  ISMHeatFrameworkHost *v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rdx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  const char *v12; // r9
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  const char *v14; // r9
  void (__fastcall ***v15)(_QWORD, __int64); // rsi
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (ISMHeatFrameworkHost *)malloc(0x80uLL);
  v8 = v7;
  if ( v7 )
    memset_0(v7, 0, 0x80uLL);
  if ( v8 )
    v8 = ISMHeatFrameworkHost::ISMHeatFrameworkHost(v8, a3);
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)0x8007000ELL);
    v9 = 2147942414LL;
    v10 = 59LL;
LABEL_28:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)v9);
    return 0LL;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( !BamoServerConnection )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      v12);
    JUMPOUT(0x1800ECB6DLL);
  }
  v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                                 + 19)
                                                                                               + 8LL)
                                                                                   + 72LL))(*((_QWORD *)BamoServerConnection
                                                                                            + 19) + 8LL);
  v15 = v13;
  v16 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v8 + 15);
  if ( v16 != v13 )
  {
    v17 = *((_QWORD *)v8 + 15);
    if ( v13 )
    {
      (**v13)(v13, v17);
      v17 = *((_QWORD *)v8 + 15);
    }
    *((_QWORD *)v8 + 15) = v15;
    v16 = v15;
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v16 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v8 + 15);
    }
  }
  if ( v16 )
  {
    if ( v16[7] )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x37,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatgripservicehost.cpp",
        v14);
      __debugbreak();
    }
    v16[7] = (void (__fastcall **)(_QWORD, __int64))v8;
  }
  *((_QWORD *)this + 9) = v8;
  v18 = HeatProcessor::LoadAndInitializeHeatCore(this);
  if ( v18 < 0 )
  {
    v10 = 63LL;
LABEL_27:
    v9 = (unsigned int)v18;
    goto LABEL_28;
  }
  v19 = *((_QWORD *)this + 8);
  v20 = *((_QWORD *)this + 9);
  if ( !v19 )
  {
    v21 = -2147024809;
    v22 = 111LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)v21);
    v9 = v21;
    v10 = 67LL;
    goto LABEL_28;
  }
  if ( *(_QWORD *)(v20 + 40) )
  {
    v21 = -2147418113;
    v22 = 115LL;
    goto LABEL_24;
  }
  *(_QWORD *)(v20 + 40) = v19;
  v18 = HeatProcessor::OnDeviceArrival(this, a2);
  if ( v18 < 0 )
  {
    v10 = 69LL;
    goto LABEL_27;
  }
  return 0LL;
}
