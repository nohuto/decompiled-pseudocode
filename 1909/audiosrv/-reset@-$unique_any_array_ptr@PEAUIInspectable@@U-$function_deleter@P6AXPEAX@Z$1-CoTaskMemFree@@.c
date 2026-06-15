/*
 * XREFs of ?reset@?$unique_any_array_ptr@PEAUIInspectable@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Ucom_unknown_deleter@details@3@@wil@@QEAAXXZ @ 0x180140DC0
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180058D30 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ??1?$unique_any_array_ptr@PEAUIInspectable@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Ucom_unknown_deleter@details@3@@wil@@QEAA@XZ @ 0x18013D568 (--1-$unique_any_array_ptr@PEAUIInspectable@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 * Callees:
 *     ??$reset_array@Ucom_unknown_deleter@details@wil@@@?$unique_any_array_ptr@PEAUIInspectable@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Ucom_unknown_deleter@details@3@@wil@@AEAAXAEBUcom_unknown_deleter@details@1@@Z @ 0x18013D3C8 (--$reset_array@Ucom_unknown_deleter@details@wil@@@-$unique_any_array_ptr@PEAUIInspectable@@U-$fu.c)
 */

void __fastcall wil::unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>::reset(
        __int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    wil::unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>::reset_array<wil::details::com_unknown_deleter>(a1);
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
