/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180136858
 * Callers:
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180016934 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_ @ 0x18013656C (Microsoft--WRL--Details--MakeAndInitialize__WaitForCompletion_Windows--Foundation--_ea_18013656C.c)
 *     Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_::InternalRelease @ 0x18013A2F4 (Microsoft--WRL--ComPtr__WaitForCompletion_Windows--Foundation--IAsyncOperationCompl_ea_18013A2F4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection *>,Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection *>>(
        __int64 a1,
        int a2,
        __int64 a3)
{
  int v4; // ebx
  char v5; // bl
  HRESULT v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10[2]; // [rsp+30h] [rbp-20h] BYREF
  HANDLE pHandles[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF
  int v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 dwindex; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  dwindex = a3;
  v13 = a2;
  v10[1] = -2LL;
  v10[0] = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v15 = 0LL;
  Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_::InternalRelease(&v15);
  v4 = Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_(&v15);
  v13 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v15);
    v13 = v4;
    if ( v4 >= 0 )
    {
      pHandles[0] = *(HANDLE *)(v15 + 56);
      pHandles[1] = 0LL;
      v5 = 0;
      v6 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, pHandles, (LPDWORD)&dwindex);
      v13 = v6;
      if ( v6 >= 0 && (_DWORD)dwindex )
      {
        v6 = -2147023673;
        v13 = -2147023673;
        v5 = 1;
      }
      v7 = 0LL;
      v12 = 0LL;
      if ( v5 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
        v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
               a1,
               &GUID_00000036_0000_0000_c000_000000000046,
               &v12);
        v7 = v12;
        if ( v8 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
          v7 = v12;
        }
        v6 = v13;
      }
      if ( v6 < 0 || *(_DWORD *)(v15 + 48) == 1 )
        goto LABEL_18;
      if ( !v7 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
               a1,
               &GUID_00000036_0000_0000_c000_000000000046,
               &v12) < 0 )
        {
LABEL_18:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
          v4 = v13;
          goto LABEL_19;
        }
        v7 = v12;
      }
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 64LL))(v7, &v13);
      goto LABEL_18;
    }
  }
LABEL_19:
  Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
  return (unsigned int)v4;
}
