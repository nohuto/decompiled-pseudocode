/*
 * XREFs of ??1CD3DPixelShader@@MEAA@XZ @ 0x1800CF32C
 * Callers:
 *     ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x1800CF2F0 (--_ECD3DPixelShader@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  *(_QWORD *)this = &CMILPoolResource::`vftable';
}
