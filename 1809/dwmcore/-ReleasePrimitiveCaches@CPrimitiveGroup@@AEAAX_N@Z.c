/*
 * XREFs of ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800C1A34
 * Callers:
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x180072B78 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800C156C (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800C1938 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x1800C1E6C (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROU.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800C1F30 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801AC1E0 (-NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801AC218 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x1801AC3B4 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::ReleasePrimitiveCaches(CPrimitiveGroup *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbx

  if ( *((_DWORD *)this + 34) )
  {
    v5 = 0LL;
    v6 = *((unsigned int *)this + 34);
    do
    {
      v7 = *(_QWORD *)(v5 + *((_QWORD *)this + 14));
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v7 + 16), (CPrimitiveGroup *)((char *)this + 56));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 34) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 112, 8u);
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 20) = 0LL;
    if ( a2 )
      (*(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 64LL))(this, 5LL);
  }
}
