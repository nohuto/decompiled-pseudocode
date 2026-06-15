/*
 * XREFs of ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x180126C4C
 * Callers:
 *     ?OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z @ 0x180125BD0 (-OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z.c)
 *     ?UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z @ 0x180127108 (-UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x180050A90 (Create_SpatialAudioDeviceStateWriter.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?LogEndpointRendererSelectionMode@CSpatialAudioResourceManagerTraceLogger@@QEAAXW4SpatialRendererSelectionMode@@PEBG@Z @ 0x180125928 (-LogEndpointRendererSelectionMode@CSpatialAudioResourceManagerTraceLogger@@QEAAXW4SpatialRendere.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CExclusiveModeListener::SetDeviceRendererSelectionMode(void *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  const GUID *v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  struct IPropertyStore *v16; // [rsp+68h] [rbp+38h] BYREF

  pv = a1;
  if ( !a2 )
  {
    v5 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)0x8000FFFFLL);
    return v5;
  }
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, &pv);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, struct IPropertyStore **))(*(_QWORD *)a2 + 32LL))(a2, 2LL, &v16);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v15 = 0LL;
    v9 = Create_SpatialAudioDeviceStateWriter((const unsigned __int16 *)pv, v16, &v15, v8);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, a3);
      v5 = v9;
      if ( v9 >= 0 )
      {
        CSpatialAudioResourceManagerTraceLogger::LogEndpointRendererSelectionMode(v11, a3, (const WCHAR *)pv);
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
        v5 = v9;
        if ( v9 >= 0 )
        {
          v5 = 0;
          goto LABEL_15;
        }
        v10 = 432LL;
      }
      else
      {
        v10 = 429LL;
      }
    }
    else
    {
      v10 = 427LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v9);
LABEL_15:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A8,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)v7);
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
LABEL_17:
  if ( pv )
    CoTaskMemFree(pv);
  return v5;
}
