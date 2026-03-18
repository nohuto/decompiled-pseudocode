/*
 * XREFs of ?RemoveSource@CWetInkManager@@QEAAXPEAVISuperWetSource@@@Z @ 0x180250514
 * Callers:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800AAF80 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ??4?$unique_ptr@VCRemoteSuperWetSource@@U?$default_delete@VCRemoteSuperWetSource@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C6570 (--4-$unique_ptr@VCRemoteSuperWetSource@@U-$default_delete@VCRemoteSuperWetSource@@@std@@@std@@QE.c)
 *     ?EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z @ 0x1801C6918 (-EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x18021333C (--1CGenericInk@@UEAA@XZ.c)
 * Callees:
 *     ?erase@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@@Z @ 0x180250AEC (-erase@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkManager@@@st.c)
 */

void __fastcall CWetInkManager::RemoveSource(CWetInkManager *this, struct ISuperWetSource *a2)
{
  struct ISuperWetSource **v2; // r8
  struct ISuperWetSource **v3; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct ISuperWetSource **)*((_QWORD *)this + 1);
  v3 = (struct ISuperWetSource **)*((_QWORD *)this + 2);
  while ( v2 != v3 && *v2 != a2 )
    v2 += 10;
  if ( v2 != v3 )
    std::vector<CWetInkManager::SuperWetStroke>::erase((char *)this + 8, &v4, v2);
}
