/*
 * XREFs of _lambda_75b02e7f6b47e5adc47099aefab01fa1_::operator() @ 0x1800F5C9C
 * Callers:
 *     wil::details::lambda_call__lambda_f7ea18b6f0a66a2b0ac24e14c232af22___::_lambda_call__lambda_f7ea18b6f0a66a2b0ac24e14c232af22___ @ 0x1800F5678 (wil--details--lambda_call__lambda_f7ea18b6f0a66a2b0ac24e14c232af22___--_lambda_call__lambda_f7ea.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800F950C (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_da38552fd1d3c8bdd790b930d9489bbf___ @ 0x1800F5258 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F5258.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_75b02e7f6b47e5adc47099aefab01fa1_::operator()(int **a1)
{
  int *v2; // r15
  __int64 v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ebx
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-20h]
  __int128 v14; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v16; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+50h] BYREF

  v16 = 0LL;
  v12 = 0LL;
  v2 = *a1;
  v13 = **a1;
  v3 = *(_QWORD *)a1[4];
  v14 = *(_OWORD *)(v3 + 48);
  v4 = (__int64 *)*((_QWORD *)a1[1] + 6);
  v5 = *(_QWORD *)a1[2];
  v6 = *v4;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1[3] + 56LL))(*(_QWORD *)a1[3]);
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int128 *, _DWORD, int, __int64 *))(v6 + 56))(
         v4,
         v5,
         v7,
         &v14,
         *(_DWORD *)(v3 + 8),
         *v2,
         &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, __int64, _DWORD, __int64 *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            *(_QWORD *)a1[3],
            *(_QWORD *)a1[4],
            2LL,
            0,
            &v12,
            &v16);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x26u,
        (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids,
        v10);
    }
    if ( v10 >= 0 )
    {
      v17 = v16;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_da38552fd1d3c8bdd790b930d9489bbf___(
        &v18,
        *(_QWORD **)a1[5],
        *((_QWORD **)a1[5] + 1),
        &v17);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6D,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( v12 )
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v9;
}
