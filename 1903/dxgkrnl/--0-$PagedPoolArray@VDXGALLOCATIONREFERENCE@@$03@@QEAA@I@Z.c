/*
 * XREFs of ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C014F834
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C0111970 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DBB8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C014C6B0 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(
        __int64 a1,
        unsigned int a2)
{
  char *v2; // rbx
  unsigned __int64 v3; // r14
  DXGALLOCATIONREFERENCE *v5; // rsi
  __int64 v6; // rbp
  __int64 v8; // rax
  bool v9; // cf
  SIZE_T v10; // rax
  char *v11; // rax

  v2 = 0LL;
  v3 = a2;
  *(_QWORD *)a1 = 0LL;
  v5 = (DXGALLOCATIONREFERENCE *)(a1 + 8);
  v6 = 4LL;
  do
  {
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(v5);
    v5 = (DXGALLOCATIONREFERENCE *)((char *)v5 + 8);
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(a1 + 40) = 0;
  if ( (unsigned int)v3 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < 8 )
      return a1;
    v8 = 8 * v3;
    if ( !is_mul_ok(v3, 8uLL) )
      v8 = -1LL;
    v9 = __CFADD__(v8, 8LL);
    v10 = v8 + 8;
    if ( v9 )
      v10 = -1LL;
    v11 = (char *)operator new[](v10, 0x4B677844u, PagedPool);
    if ( v11 )
    {
      v2 = v11 + 8;
      *(_QWORD *)v11 = v3;
      `vector constructor iterator'(
        v11 + 8,
        8LL,
        v3,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
  }
  else
  {
    v2 = (char *)(a1 + 8);
  }
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 40) = v3;
  return a1;
}
