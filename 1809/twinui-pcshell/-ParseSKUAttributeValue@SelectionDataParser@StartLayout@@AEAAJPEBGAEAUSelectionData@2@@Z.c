/*
 * XREFs of ?ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z @ 0x1803A0BE4
 * Callers:
 *     StartLayout::ParseTokenizedAttribute__lambda_487048254b6df460bceb2a28745a80c4___ @ 0x1803A07A8 (StartLayout--ParseTokenizedAttribute__lambda_487048254b6df460bceb2a28745a80c4___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAPEAW4LayoutSKU@SharedStartModel@@QEAW423@AEBW423@@Z @ 0x18013CDE0 (--$_Emplace_reallocate@AEBW4LayoutSKU@SharedStartModel@@@-$vector@W4LayoutSKU@SharedStartModel@@.c)
 */

__int64 __fastcall StartLayout::SelectionDataParser::ParseSKUAttributeValue(
        StartLayout::SelectionDataParser *this,
        const unsigned __int16 *a2,
        struct StartLayout::SelectionData *a3)
{
  int v5; // eax
  char *v6; // rcx
  _BYTE *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  StartLayout::SelectionDataParser *v10; // [rsp+50h] [rbp+20h] BYREF

  v10 = this;
  if ( CompareStringOrdinal(a2, -1, L"DesktopEnterprise", -1, 1) == 2 )
  {
    v5 = 3;
    goto LABEL_24;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopEnterpriseN", -1, 1) == 2 )
  {
    v5 = 5;
    goto LABEL_24;
  }
  if ( CompareStringOrdinal(a2, -1, L"Desktop", -1, 1) == 2 )
  {
    v6 = (char *)a3 + 32;
    LODWORD(v10) = 2;
    v7 = (_BYTE *)*((_QWORD *)a3 + 5);
    if ( *((_BYTE **)a3 + 6) == v7 )
      goto LABEL_27;
    *(_DWORD *)v7 = 2;
LABEL_26:
    *((_QWORD *)v6 + 1) += 4LL;
LABEL_28:
    *((_BYTE *)a3 + 3) = 1;
    return 0LL;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopN", -1, 1) == 2 )
  {
    v6 = (char *)a3 + 32;
    LODWORD(v10) = 4;
    v7 = (_BYTE *)*((_QWORD *)a3 + 5);
    if ( *((_BYTE **)a3 + 6) == v7 )
      goto LABEL_27;
    *(_DWORD *)v7 = 4;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopARM", -1, 1) == 2 )
  {
    v6 = (char *)a3 + 32;
    LODWORD(v10) = 1;
    v7 = (_BYTE *)*((_QWORD *)a3 + 5);
    if ( *((_BYTE **)a3 + 6) == v7 )
      goto LABEL_27;
    *(_DWORD *)v7 = 1;
    goto LABEL_26;
  }
  if ( CompareStringOrdinal(a2, -1, L"Mobile", -1, 1) == 2 )
  {
    v5 = 8;
    goto LABEL_24;
  }
  if ( CompareStringOrdinal(a2, -1, L"Server", -1, 1) == 2 )
  {
    v5 = 6;
    goto LABEL_24;
  }
  if ( CompareStringOrdinal(a2, -1, L"ServerSolution", -1, 1) == 2 )
  {
    v5 = 7;
    goto LABEL_24;
  }
  if ( CompareStringOrdinal(a2, -1, L"PPI", -1, 1) == 2 )
  {
    v5 = 9;
    goto LABEL_24;
  }
  if ( CompareStringOrdinal(a2, -1, L"LongTermServicingBranch", -1, 1) == 2 )
  {
    v5 = 10;
LABEL_24:
    v6 = (char *)a3 + 32;
    LODWORD(v10) = v5;
    v7 = (_BYTE *)*((_QWORD *)a3 + 5);
    if ( *((_BYTE **)a3 + 6) != v7 )
    {
      *(_DWORD *)v7 = v5;
      goto LABEL_26;
    }
LABEL_27:
    std::vector<enum SharedStartModel::LayoutSKU>::_Emplace_reallocate<enum SharedStartModel::LayoutSKU const &>(
      (const void **)v6,
      v7,
      &v10);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA6,
    (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\selectiondataparser.cpp",
    (const char *)0xC00CE225LL);
  return 3222069797LL;
}
