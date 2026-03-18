/*
 * XREFs of ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800C64DC
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800C62D0 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801C6898 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x1801C6A50 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGRO.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseColorResources(CPrimitiveGroup *this)
{
  __int64 i; // rbp
  __int64 v3; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 64); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 29);
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v3 + 8 * i));
    *(_QWORD *)(v3 + 8 * i) = 0LL;
  }
  *((_DWORD *)this + 64) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 232, 8u);
}
