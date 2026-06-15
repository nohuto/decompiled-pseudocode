/*
 * XREFs of ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14003103C
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400063F0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?GetFrameFormat@CApoEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400311F0 (-GetFrameFormat@CApoEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140031314 (-RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRI.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14003C740 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004192C (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x140044D70 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14005DE90 (-GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005F2D0 (-SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 */

__int64 __fastcall CloneWaveFormat(const struct tWAVEFORMATEX *Src, struct tWAVEFORMATEX **a2)
{
  __int64 cbSize; // rsi
  struct tWAVEFORMATEX *v5; // rax
  unsigned int v6; // ebx
  struct tWAVEFORMATEX *v7; // rdi
  __int64 result; // rax

  cbSize = Src->cbSize;
  v5 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v6 = 0;
  v7 = v5;
  if ( v5 )
    memcpy_0(v5, Src, cbSize + 18);
  else
    v6 = -2147024882;
  result = v6;
  *a2 = v7;
  return result;
}
