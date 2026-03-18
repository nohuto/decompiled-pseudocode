/*
 * XREFs of ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z @ 0x18008BB54
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 * Callees:
 *     ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x18008BBEC (--0CPreComputeContext@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

CVisualTree *__fastcall CVisualTree::CVisualTree(
        CVisualTree *this,
        struct CComposition *a2,
        struct CVisual *a3,
        char a4)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CVisualTree::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_BYTE *)this + 34) = a4;
  CPreComputeContext::CPreComputeContext((CVisualTree *)((char *)this + 64), a2);
  *((_DWORD *)this + 318) = 0;
  *((_QWORD *)this + 156) = (char *)this + 1280;
  *((_QWORD *)this + 157) = (char *)this + 1280;
  *((_DWORD *)this + 316) = 1;
  *((_DWORD *)this + 317) = 1;
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  return this;
}
