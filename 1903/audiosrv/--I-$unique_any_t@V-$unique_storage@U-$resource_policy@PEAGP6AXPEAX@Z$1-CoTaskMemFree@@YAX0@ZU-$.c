/*
 * XREFs of ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x1800428F8
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18004733C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     _lambda_7015787212d530e04e17b0823ea9804b_::operator() @ 0x180067078 (_lambda_7015787212d530e04e17b0823ea9804b_--operator().c)
 *     _lambda_7d6fb6ca628c3c64296120b05a8db9c8_::operator() @ 0x18006A448 (_lambda_7d6fb6ca628c3c64296120b05a8db9c8_--operator().c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18006B0F0 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(
        void **a1)
{
  void *v1; // rsi
  DWORD LastError; // ebx

  v1 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v1);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return a1;
}
