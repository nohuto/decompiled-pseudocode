/*
 * XREFs of ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C00566C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0016844 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C0056790 (-UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::NotifyTokenInFrame(
        CCompositionSwapchainBuffer *this,
        const struct CToken *a2,
        bool *a3)
{
  const struct CToken *v6; // rsi
  int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // rax

  *a3 = 0;
  v6 = 0LL;
  if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 64LL))(a2) == 4 )
    v6 = a2;
  v7 = 0;
  if ( !v6 )
    v7 = -1073741811;
  if ( v7 >= 0 )
  {
    v8 = *((_DWORD *)v6 + 24);
    if ( v8 >= *((_DWORD *)this + 60) )
      v7 = -1073741811;
    if ( v7 >= 0 )
    {
      v9 = *((_QWORD *)v6 + 13);
      *((_QWORD *)this + 82) = v9;
      *((_DWORD *)this + 61) = v9;
      if ( *((_DWORD *)this + 87) != v8 )
      {
        *((_DWORD *)this + 87) = v8;
        *a3 = 1;
      }
      if ( CCompositionSwapchainBuffer::UpdateAttributes(this, v6) )
        *a3 = 1;
      CCompositionBuffer::NotifyDirty(
        this,
        *((const struct IRegion **)v6 + 10),
        (const struct CToken *)((char *)v6 + 52));
    }
  }
  return (unsigned int)v7;
}
