/*
 * XREFs of ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z @ 0x1800B5820
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x1800B4F98 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 * Callees:
 *     ??0CPreComputeContext@@IEAA@PEAVCComposition@@PEAVCVisualTree@@@Z @ 0x1800EC034 (--0CPreComputeContext@@IEAA@PEAVCComposition@@PEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

CVisualTree *__fastcall CVisualTree::CVisualTree(
        CVisualTree *this,
        struct CComposition *a2,
        struct CVisual *a3,
        char a4)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CVisualTree::`vftable';
  *((_BYTE *)this + 34) = a4;
  CPreComputeContext::CPreComputeContext((CVisualTree *)((char *)this + 88), a2, this);
  *((_DWORD *)this + 326) = 0;
  *((_QWORD *)this + 160) = (char *)this + 1312;
  *((_QWORD *)this + 161) = (char *)this + 1312;
  *((_DWORD *)this + 324) = 1;
  *((_DWORD *)this + 325) = 1;
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  return this;
}
