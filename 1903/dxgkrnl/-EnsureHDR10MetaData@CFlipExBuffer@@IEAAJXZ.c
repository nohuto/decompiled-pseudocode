/*
 * XREFs of ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C005D000
 * Callers:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C0015FBC (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C005D7C4 (-UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::EnsureHDR10MetaData(CFlipExBuffer *this)
{
  unsigned int v1; // ebx
  PVOID v3; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 42) )
  {
    v3 = operator new[](0x48uLL, 0x624D5343u, PagedPoolSession);
    *((_QWORD *)this + 42) = v3;
    if ( !v3 )
      return (unsigned int)-1073741801;
  }
  return v1;
}
