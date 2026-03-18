/*
 * XREFs of ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02B5854
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A8DA0 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 */

void __fastcall XEPALOBJ::vCopy_cmykquad(XEPALOBJ *this, const unsigned int *a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r8d
  void *v6; // rcx
  signed __int32 v7; // ecx
  __int64 v8; // rdx

  v5 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  v6 = *(void **)(*(_QWORD *)this + 112LL);
  if ( a4 > v5 )
    a4 = v5;
  memmove(v6, a2, 4LL * a4);
  v7 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v7;
  v8 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v8 != *(_QWORD *)this )
    *(_DWORD *)(v8 + 32) = v7;
}
