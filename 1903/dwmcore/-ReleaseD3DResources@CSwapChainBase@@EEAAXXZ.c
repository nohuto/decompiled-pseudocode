/*
 * XREFs of ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x180023FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008877C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E86DC (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSwapChainBase::ReleaseD3DResources(CSwapChainBase *this)
{
  __int64 i; // rdi
  char *v3; // rcx
  char *v4; // rbx

  (*(void (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 336LL))(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 102); i = (unsigned int)(i + 1) )
    ReleaseInterface<CD3DSurface>((__int64 *)(*((_QWORD *)this + 48) + 8 * i));
  v3 = (char *)*((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = 0LL;
  if ( v3 )
  {
    v4 = v3 - 8;
    `vector destructor iterator'(
      v3,
      8uLL,
      *((_QWORD *)v3 - 1),
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>);
    operator delete[](v4, 8LL * *(_QWORD *)v4 + 8);
  }
}
