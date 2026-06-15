/*
 * XREFs of ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005D358
 * Callers:
 *     ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x14005BDB0 (-GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z.c)
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14005CF20 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D7A0 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005EDE8 (-IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005EE18 (-IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 * Callees:
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058E74 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
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
