/*
 * XREFs of swprintf_s @ 0x180065E4C
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180011CE0 (AudioServerIsFormatSupported.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026450 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180037E2C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x1800F7A34 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800647C4 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x180065C66 (__stdio_common_vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s(*v6, Buffer, BufferCount, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
