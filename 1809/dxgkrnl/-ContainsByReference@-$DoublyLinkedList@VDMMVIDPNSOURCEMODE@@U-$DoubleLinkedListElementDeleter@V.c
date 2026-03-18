/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000BAA0
 * Callers:
 *     ??$Add@VDMMVIDPNSOURCEMODE@@@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000B9E0 (--$Add@VDMMVIDPNSOURCEMODE@@@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDP.c)
 *     ?AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C00D84D0 (-AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMOD.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DC6FC (-ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0284F90 (-AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODES.c)
 * Callees:
 *     <none>
 */

bool __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rcx

  if ( !a2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = a1 + 16;
  v5 = 0LL;
  if ( v3 != a1 + 16 )
    v5 = v3 - 8;
  v6 = v5 == 0;
  if ( v5 )
  {
    do
    {
      if ( v5 == a2 )
        break;
      v7 = *(_QWORD *)(v5 + 8);
      v5 = v7 - 8;
      if ( v7 == v4 )
        v5 = 0LL;
    }
    while ( v5 );
    v6 = v5 == 0;
  }
  return !v6;
}
