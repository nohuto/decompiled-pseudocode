/*
 * XREFs of ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C005CEBC
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C005AC1C (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C005AEE8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C005B288 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C005C0F0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C005C160 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C005CBA4 (--1CContentResourceState@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C005AB68 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C005C344 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C005C624 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CContentResourceState::SetBoundBuffer(CContentResourceState *this, struct CPoolBufferResource *a2)
{
  CPoolBufferResource *v4; // rcx

  v4 = (CPoolBufferResource *)*((_QWORD *)this + 6);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      CPoolBufferResource::AddUsageReference(a2);
      ++*((_DWORD *)a2 + 6);
      v4 = (CPoolBufferResource *)*((_QWORD *)this + 6);
    }
    if ( v4 )
    {
      CPoolBufferResource::RemoveUsageReference(v4);
      CFlipResource::Release(*((CFlipResource **)this + 6));
    }
    *((_BYTE *)this + 56) |= 1u;
    *((_QWORD *)this + 6) = a2;
  }
}
