/*
 * XREFs of _lambda_0a015809dd6257f91f177da0fa925ef4_::operator() @ 0x180065420
 * Callers:
 *     wil::details::lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___::_lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___ @ 0x1800653CC (wil--details--lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___--_lambda_call__lambda_02ff.c)
 * Callees:
 *     ??1SaDeviceResourceParams@@QEAA@XZ @ 0x180025704 (--1SaDeviceResourceParams@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3a240c478cbbad7116dd631bc09646d7___ @ 0x180064F14 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180064F14.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x1800AF7B0 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800E9F1C (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0a015809dd6257f91f177da0fa925ef4_::operator()(int **a1)
{
  int *v2; // r9
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // ebx
  __int64 v8; // [rsp+48h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp-20h]
  __int128 v10; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF
  char v14; // [rsp+A0h] [rbp+30h] BYREF

  v12 = 0LL;
  v8 = 0LL;
  v2 = *a1;
  v9 = **a1;
  v3 = *(_QWORD *)a1[4];
  v10 = *(_OWORD *)(v3 + 48);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, _DWORD, int, __int64 *))(**((_QWORD **)a1[1] + 6)
                                                                                             + 56LL))(
         *((_QWORD *)a1[1] + 6),
         *(_QWORD *)a1[2],
         *(unsigned int *)(*(_QWORD *)a1[3] + 156LL),
         &v10,
         *(_DWORD *)(v3 + 8),
         *v2,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, __int64, _DWORD, __int64 *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
           g_DeviceGraphManager,
           *(_QWORD *)a1[3],
           *(_QWORD *)a1[4],
           2LL,
           0,
           &v8,
           &v12);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
        (unsigned int)v6);
    }
    if ( v6 >= 0 )
    {
      ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(&v13, &v12);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3a240c478cbbad7116dd631bc09646d7___(
        (__int64)&v14,
        *(_QWORD **)a1[5],
        *((_QWORD **)a1[5] + 1),
        &v13);
      ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v14);
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      2629LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  SaDeviceResourceParams::~SaDeviceResourceParams((SaDeviceResourceParams *)&v8);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v12);
  return v5;
}
