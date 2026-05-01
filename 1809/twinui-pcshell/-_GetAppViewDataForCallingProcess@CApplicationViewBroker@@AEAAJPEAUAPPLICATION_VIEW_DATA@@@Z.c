/*
 * XREFs of ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18004C9FC
 * Callers:
 *     ?GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z @ 0x18004EFC0 (-GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z.c)
 *     ?GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18032E030 (-GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x18004CAF4 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBroker::_GetAppViewDataForCallingProcess(
        CApplicationViewBroker *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  unsigned __int16 **v4; // rdx
  int CallingProcessAppId; // ebx
  __int64 v6; // rbx
  __int64 v8; // [rsp+28h] [rbp-59h] BYREF
  __int64 v9; // [rsp+30h] [rbp-51h] BYREF
  __int64 v10; // [rsp+38h] [rbp-49h]
  __int64 v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  _OWORD v13[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v14; // [rsp+78h] [rbp-9h]
  int v15; // [rsp+80h] [rbp-1h]

  v12 = -2LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 3LL;
  *((_DWORD *)a2 + 10) = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
  v10 = -1LL;
  v11 = -1LL;
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)&v9, v4);
  if ( CallingProcessAppId >= 0 )
  {
    v8 = 0LL;
    v6 = *((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    CallingProcessAppId = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, v9, &v8);
    if ( CallingProcessAppId >= 0 )
    {
      CallingProcessAppId = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v8 + 216LL))(v8, v13);
      if ( CallingProcessAppId >= 0 )
      {
        *(_OWORD *)a2 = v13[0];
        *((_OWORD *)a2 + 1) = v13[1];
        *((_QWORD *)a2 + 4) = v14;
        *((_DWORD *)a2 + 10) = v15;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
  return (unsigned int)CallingProcessAppId;
}
