/*
 * XREFs of ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C023A1AC
 * Callers:
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0222504 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetUserHandedness @ 0x1C01EF790 (GetUserHandedness.c)
 */

bool __fastcall MenuHelpers::GetMenuRightAlignHint(MenuHelpers *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 12
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 10 )
  {
    return (unsigned int)GetUserHandedness(v2, v1, v3) == 1;
  }
  else
  {
    return (unsigned int)RIMIsDefaultUILanguageRTL(v2, v1, v3) != 0;
  }
}
