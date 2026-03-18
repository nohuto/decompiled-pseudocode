/*
 * XREFs of ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C00560C0
 * Callers:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C00169A4 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C0056790 (-UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::EnsureHDR10MetaData(CFlipExBuffer *this)
{
  unsigned int v1; // ebx
  PVOID v3; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 42) )
  {
    v3 = operator new(0x48uLL, 0x624D5343u, PagedPoolSession);
    *((_QWORD *)this + 42) = v3;
    if ( !v3 )
      return (unsigned int)-1073741801;
  }
  return v1;
}
