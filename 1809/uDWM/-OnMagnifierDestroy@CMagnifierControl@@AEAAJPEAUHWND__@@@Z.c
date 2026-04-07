/*
 * XREFs of ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18007EB80
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007E5C8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     _Init_thread_footer @ 0x18004C1BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004C22C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18007E4C4 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x18007EDC4 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierDestroy(struct _RTL_GENERIC_TABLE *this, __int64 a2)
{
  unsigned int v3; // ebx
  CBaseObject **Element; // rax
  CMagnifierControl::MagnifierTableElement *v6; // rdi
  CBaseObject *v7; // rcx

  v3 = 0;
  if ( dword_1800D7EA4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800D7EA4);
    if ( dword_1800D7EA4 == -1 )
    {
      dword_1800D7DD8 = -2147023728;
      Init_thread_footer(&dword_1800D7EA4);
    }
  }
  Element = (CBaseObject **)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
                              this + 1,
                              a2);
  v6 = (CMagnifierControl::MagnifierTableElement *)Element;
  if ( Element )
  {
    v7 = Element[1];
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)v6 + 1) = 0LL;
    }
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(this + 1, v6);
  }
  else
  {
    v3 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D7DD8, 1LL, -2147023728, 0x24Cu);
  }
  return v3;
}
