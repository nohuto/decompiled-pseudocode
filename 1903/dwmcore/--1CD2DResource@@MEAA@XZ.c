/*
 * XREFs of ??1CD2DResource@@MEAA@XZ @ 0x1800B3EC4
 * Callers:
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x1800B3A6C (--1CD2DBitmap@@MEAA@XZ.c)
 *     ??1CD2DInk@@MEAA@XZ @ 0x18016A2FC (--1CD2DInk@@MEAA@XZ.c)
 *     ??_GCD2DGenericInk@@UEAAPEAXI@Z @ 0x18016A4D0 (--_GCD2DGenericInk@@UEAAPEAXI@Z.c)
 *     ??1CD2DEffect@@MEAA@XZ @ 0x18016AD18 (--1CD2DEffect@@MEAA@XZ.c)
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x18016AEA8 (--1CD2DCommandList@@MEAA@XZ.c)
 *     ??1CD2DPrimitiveProperties@@MEAA@XZ @ 0x18016B518 (--1CD2DPrimitiveProperties@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CD2DResource::~CD2DResource(CD2DResource *this)
{
  __int64 v2; // rcx
  CD2DResource **v3; // rdx
  CD2DResource **v4; // r8

  if ( *((_BYTE *)this + 32) )
  {
    v2 = *((_QWORD *)this + 3);
    v3 = (CD2DResource **)*((_QWORD *)this + 5);
    if ( v3[1] != (CD2DResource *)((char *)this + 40)
      || (v4 = (CD2DResource **)*((_QWORD *)this + 6), *v4 != (CD2DResource *)((char *)this + 40)) )
    {
      __fastfail(3u);
    }
    *v4 = (CD2DResource *)v3;
    v3[1] = (CD2DResource *)v4;
    *((_BYTE *)this + 32) = 0;
    if ( *((_BYTE *)this + 33) )
      --*(_DWORD *)(v2 + 16);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 56);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
