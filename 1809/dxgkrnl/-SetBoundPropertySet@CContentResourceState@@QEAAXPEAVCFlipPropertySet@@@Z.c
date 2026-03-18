/*
 * XREFs of ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C005CF18
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C005AC1C (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C005AEE8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C005B288 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C005C0F0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C005CBA4 (--1CContentResourceState@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C00578E0 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
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
