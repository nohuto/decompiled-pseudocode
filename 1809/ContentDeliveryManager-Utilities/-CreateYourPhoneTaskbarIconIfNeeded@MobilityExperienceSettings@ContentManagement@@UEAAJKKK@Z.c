/*
 * XREFs of ?CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z @ 0x18000EE50
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18000B110 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::CreateYourPhoneTaskbarIconIfNeeded(
        ContentManagement::MobilityExperienceSettings *this,
        unsigned int a2,
        int a3,
        int a4)
{
  Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded((Mobility::Pinning *)a2, a3, a4);
  return 0LL;
}
