/*
 * XREFs of ?Close@CHandle@ATL@@QEAAXXZ @ 0x140031A24
 * Callers:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140013B70 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ??1CHandle@ATL@@QEAA@XZ @ 0x1400317B4 (--1CHandle@ATL@@QEAA@XZ.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140059AA4 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140059C78 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x140061020 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
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
