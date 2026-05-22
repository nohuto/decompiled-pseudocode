/*
 * XREFs of ?ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N0@Z @ 0x1801282CC
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x180127A50 (-SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x1800A2530 (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReadHapticsEngineParameters(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        bool *a2,
        bool *a3)
{
  int v6; // eax
  WCHAR *StringRawBuffer; // rax
  LPCWSTR *v8; // rbx
  _QWORD v9[4]; // [rsp+48h] [rbp-30h] BYREF
  char v10; // [rsp+68h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  int pvData; // [rsp+A0h] [rbp+28h] BYREF
  DWORD pcbData; // [rsp+A8h] [rbp+30h] BYREF
  unsigned __int16 v14; // [rsp+B0h] [rbp+38h] BYREF
  unsigned __int16 v15; // [rsp+B2h] [rbp+3Ah]
  unsigned __int16 v16; // [rsp+B4h] [rbp+3Ch]
  HKEY hkey; // [rsp+B8h] [rbp+40h] BYREF

  hkey = 0LL;
  *a2 = 0;
  *a3 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(**((_QWORD **)this + 14) + 32LL))(
         *((_QWORD *)this + 14),
         &v14);
  if ( v6 >= 0 )
  {
    StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(*((HSTRING *)this + 5), 0LL);
    if ( (int)SpatialInteractionDevices::OpenBestMatchingControllerKey(
                StringRawBuffer,
                v14,
                v15,
                v16,
                *((_DWORD *)this + 126),
                &hkey,
                &pvData) >= 0 )
    {
      v9[0] = L"InitialKick";
      v9[1] = a2;
      v9[2] = L"HalfDurationFirstInterval";
      v9[3] = a3;
      v8 = (LPCWSTR *)v9;
      do
      {
        pvData = 0;
        pcbData = 4;
        if ( !RegGetValueW(hkey, 0LL, *v8, 0x10u, 0LL, &pvData, &pcbData) )
          *(_BYTE *)v8[1] = pvData != 0;
        v8 += 2;
      }
      while ( v8 != (LPCWSTR *)&v10 );
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x624,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( hkey )
    RegCloseKey(hkey);
}
