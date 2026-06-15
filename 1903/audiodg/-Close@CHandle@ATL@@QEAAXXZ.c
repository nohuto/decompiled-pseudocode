/*
 * XREFs of ?Close@CHandle@ATL@@QEAAXXZ @ 0x14002A544
 * Callers:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14002B0C8 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140057E30 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14005F0C0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::Close(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
