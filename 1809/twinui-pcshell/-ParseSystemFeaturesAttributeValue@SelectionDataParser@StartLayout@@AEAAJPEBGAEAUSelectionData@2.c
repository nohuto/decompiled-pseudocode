/*
 * XREFs of ?ParseSystemFeaturesAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z @ 0x1803A104C
 * Callers:
 *     StartLayout::ParseTokenizedAttribute__lambda_d553da275659283e99699156588b60ce___ @ 0x1803A0894 (StartLayout--ParseTokenizedAttribute__lambda_d553da275659283e99699156588b60ce___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall StartLayout::SelectionDataParser::ParseSystemFeaturesAttributeValue(
        StartLayout::SelectionDataParser *this,
        const unsigned __int16 *a2,
        struct StartLayout::SelectionData *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( CompareStringOrdinal(a2, -1, L"4GBFeaturesOnSystem", -1, 1) == 2 )
  {
    *((_DWORD *)a3 + 16) = 1;
LABEL_7:
    *((_BYTE *)a3 + 5) = 1;
    return 0LL;
  }
  if ( CompareStringOrdinal(a2, -1, L"8GBFeaturesOnSystem", -1, 1) == 2 )
  {
    *((_DWORD *)a3 + 16) = 2;
    goto LABEL_7;
  }
  if ( CompareStringOrdinal(a2, -1, L"16GBFeaturesOnSystem", -1, 1) == 2 )
  {
    *((_DWORD *)a3 + 16) = 3;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBC,
    (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\selectiondataparser.cpp",
    (const char *)0xC00CE225LL);
  return 3222069797LL;
}
