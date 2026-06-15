/*
 * XREFs of ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180019B20 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x180042730 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 *     ?ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800D3A50 (-ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?DoHandleDefaultRenderDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FC230 (-DoHandleDefaultRenderDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x1800FFD00 (-UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z.c)
 *     ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x180138740 (-GetAppServiceName@@YAJPEBGPEAPEAG@Z.c)
 *     ?GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180138C24 (-GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z @ 0x180139104 (-GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z.c)
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x18013A7F0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 *     ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18013AE24 (-ProcessSpatialAudioFormatElement@@YAJV-$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 */

_QWORD *__fastcall wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        _QWORD *a1,
        char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rbx
  _WORD *v9; // rax
  _WORD *v10; // rdi
  size_t v11; // rbx
  _QWORD *result; // rax
  __int64 v13; // rcx

  v3 = a3;
  v6 = a3;
  if ( a2 )
  {
    v7 = 0x7FFFFFFFLL;
    v8 = a2;
    if ( a3 < 0x7FFFFFFF )
      v7 = a3;
    for ( ; v7; --v7 )
    {
      if ( !*(_WORD *)v8 )
        break;
      v8 += 2;
    }
    v6 = (v8 - a2) >> 1;
  }
  if ( a3 == -1LL )
    v3 = v6;
  v9 = CoTaskMemAlloc(2 * v3 + 2);
  v10 = v9;
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = 2 * v6;
      if ( v11 )
      {
        if ( 2 * v3 + 2 < v11 )
        {
          memset_0(v9, 0, 2 * v3 + 2);
          *(_DWORD *)_o__errno(v13) = 34;
          invalid_parameter_noinfo();
        }
        else
        {
          memcpy_0(v9, a2, v11);
        }
      }
      v10[v11 / 2] = 0;
    }
    else
    {
      *v9 = 0;
    }
    v10[v3] = 0;
  }
  result = a1;
  *a1 = v10;
  return result;
}
