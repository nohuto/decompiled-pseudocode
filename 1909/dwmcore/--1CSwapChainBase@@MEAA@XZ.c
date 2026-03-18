/*
 * XREFs of ??1CSwapChainBase@@MEAA@XZ @ 0x1800DA2F0
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800DA250 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800DD930 (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E958C (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
    operator delete[](v5, 8LL * *(_QWORD *)v5 + 8);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 384);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 344);
  FastRegion::CRegion::FreeMemory((void **)this + 34);
  FastRegion::CRegion::FreeMemory((void **)this + 25);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  *(_QWORD *)this = &CMILPoolResource::`vftable';
}
