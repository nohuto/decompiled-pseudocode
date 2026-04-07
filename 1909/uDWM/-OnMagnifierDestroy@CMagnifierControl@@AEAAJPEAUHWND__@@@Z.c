/*
 * XREFs of ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x180084BDC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800844B8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _Init_thread_footer @ 0x18004E35C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E3CC (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x180084364 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x180084FE8 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x18008E6F4 (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierDestroy(struct _RTL_GENERIC_TABLE *this, __int64 a2)
{
  unsigned int v4; // ebx
  struct _LIST_ENTRY **p_Blink; // rax
  __int64 v6; // rcx
  struct _RTL_GENERIC_TABLE *v7; // rsi
  CBaseObject **Element; // rax
  CMagnifierControl::MagnifierTableElement *v9; // rdi
  CBaseObject *v10; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  struct _LIST_ENTRY **v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
  p_Blink = &this->InsertOrderList.Blink;
  if ( !this )
    p_Blink = 0LL;
  v13 = p_Blink;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
  v12[0] = &v13;
  v12[1] = v6;
  CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(v6, v12);
  if ( dword_1800DEEA4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEEA4);
    if ( dword_1800DEEA4 == -1 )
    {
      dword_1800DEDDC = -2147023728;
      Init_thread_footer(&dword_1800DEEA4);
    }
  }
  v7 = this + 1;
  Element = (CBaseObject **)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
                              this + 1,
                              a2);
  v9 = (CMagnifierControl::MagnifierTableElement *)Element;
  if ( Element )
  {
    v10 = Element[1];
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *((_QWORD *)v9 + 1) = 0LL;
    }
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(v7, v9);
  }
  else
  {
    v4 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDDC, 1LL, -2147023728, 0x299u);
  }
  return v4;
}
