/*
 * XREFs of ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x1800A4384
 * Callers:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800A42E8 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z @ 0x18004F854 (-Remove@-$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntry@@@Z @ 0x18007AECC (-RemoveElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntr.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800A43DC (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 */

void __fastcall CResource::RemoveSourceAnimation(CResource *this, struct CBaseExpression *a2, unsigned int a3)
{
  __int64 Element; // rax
  _DWORD *v5; // rbx
  struct CBaseExpression *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(*((_QWORD *)this + 5), a3);
  v5 = (_DWORD *)Element;
  if ( Element )
  {
    DynArray<IDeviceResourceNotify *,0>::Remove((__int64 *)(Element + 8), &v6);
    if ( !v5[8] )
      CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(*((PRTL_GENERIC_TABLE *)this + 5), v5);
  }
}
