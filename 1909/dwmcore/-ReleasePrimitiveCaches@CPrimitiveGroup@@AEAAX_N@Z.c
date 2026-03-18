/*
 * XREFs of ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18007CF94
 * Callers:
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x18007BE44 (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEG.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18007C0A0 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGRO.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18007CBE8 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800C6A70 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800C6C48 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C50C0 (-NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801C50F8 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x1801C52B0 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGRO.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004F820 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  DynArrayImpl<0>::ShrinkToSize((char *)this + 112, 8LL);
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 20) = 0LL;
    if ( a2 )
      (*(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 64LL))(this, 5LL);
  }
}
