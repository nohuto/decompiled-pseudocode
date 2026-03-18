/*
 * XREFs of ??1CD3DPixelShader@@MEAA@XZ @ 0x180091410
 * Callers:
 *     ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x1800913D0 (--_ECD3DPixelShader@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DPixelShader::~CD3DPixelShader(CD3DPixelShader *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 72);
  *(_QWORD *)this = &CMILPoolResource::`vftable';
}
