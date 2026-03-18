/*
 * XREFs of ??1CSwapChainBase@@MEAA@XZ @ 0x1800E88CC
 * Callers:
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800E8750 (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800E8968 (--1CDWMSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800EC1D0 (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSwapChainBase::~CSwapChainBase(CSwapChainBase *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  char *v4; // rcx
  char *v5; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 102); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 48) + 8 * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = (char *)*((_QWORD *)this + 52);
  if ( v4 )
  {
    v5 = v4 - 8;
    `vector destructor iterator'(
      v4,
      8LL,
      *((_QWORD *)v4 - 1),
      (void (__fastcall *)(char *))wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>);
    operator delete[](v5);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 48);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 43);
  FastRegion::CRegion::FreeMemory((void **)this + 34);
  FastRegion::CRegion::FreeMemory((void **)this + 25);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  *(_QWORD *)this = &CMILPoolResource::`vftable';
}
