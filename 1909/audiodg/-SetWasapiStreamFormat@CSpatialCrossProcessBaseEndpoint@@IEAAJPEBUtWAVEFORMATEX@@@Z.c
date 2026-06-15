/*
 * XREFs of ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005D254
 * Callers:
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14005CB74 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14005F000 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetWasapiStreamFormat(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct tWAVEFORMATEX *a2)
{
  struct tWAVEFORMATEX **v2; // rbx
  void *v4; // rcx

  v2 = (struct tWAVEFORMATEX **)((char *)this + 176);
  v4 = (void *)*((_QWORD *)this + 22);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *v2 = 0LL;
  }
  return CloneWaveFormat(a2, v2);
}
