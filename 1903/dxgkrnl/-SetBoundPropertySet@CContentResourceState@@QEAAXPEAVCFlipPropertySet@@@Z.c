/*
 * XREFs of ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0064148
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0061C18 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C0061FA8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0062344 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0063280 (-Remove@CContentResourceState@@UEAAXXZ.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C0063DD4 (--1CContentResourceState@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C005E998 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

void __fastcall CContentResourceState::SetBoundPropertySet(CContentResourceState *this, struct CFlipPropertySet *a2)
{
  CFlipPropertySetBase *v4; // rcx

  v4 = (CFlipPropertySetBase *)*((_QWORD *)this + 5);
  if ( v4 != a2 )
  {
    if ( v4 )
      CFlipPropertySetBase::Release(v4);
    *((_QWORD *)this + 5) = a2;
    if ( a2 )
      ++*((_DWORD *)a2 + 2);
    *((_BYTE *)this + 56) |= 1u;
  }
}
