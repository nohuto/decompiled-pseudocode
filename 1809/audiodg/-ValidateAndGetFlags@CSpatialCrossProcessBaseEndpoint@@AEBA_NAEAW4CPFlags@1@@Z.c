/*
 * XREFs of ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005F314
 * Callers:
 *     ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x14005DD40 (-GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z.c)
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14005EEE0 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005F760 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140060D28 (-IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140060D58 (-IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 * Callees:
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x14005AD44 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 */

bool __fastcall CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
        CSpatialCrossProcessBaseEndpoint *this,
        enum CSpatialCrossProcessBaseEndpoint::CPFlags *a2)
{
  int CPFlags; // eax
  _DWORD *v3; // r9

  CPFlags = CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)this);
  *v3 = CPFlags;
  return (CPFlags & 0xFFFFFF81) == 1;
}
