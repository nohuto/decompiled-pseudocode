/*
 * XREFs of ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180189FF8
 * Callers:
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180024778 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$com_ptr_t@VCDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@4@@Z @ 0x1800256BC (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024D34 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x180025230 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 */

void __fastcall CBatchOptimizer::ContinueLayer(CBatchOptimizer *this, int a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v5; // rbp
  char *v6; // r15
  void (__fastcall ***v7)(_QWORD); // rbx
  _DWORD *v8; // rsi
  __int64 v9; // rax
  int v10; // ecx

  v2 = a2;
  v3 = 0LL;
  v5 = 520LL * *((int *)this + a2 + 12);
  if ( *(_DWORD *)((char *)this + v5 + 100) )
    *(_DWORD *)((char *)this + v5 + 104) = 1;
  v6 = (char *)this + v5;
  if ( a2 )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    v8 = (_DWORD *)((char *)this + 48);
    v9 = *((int *)this + 12);
    *(_OWORD *)((char *)this + 520 * v9 + 80) = *(_OWORD *)((char *)this + v5 + 80);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
      (__int64 *)this + 65 * v9 + 14,
      *((void (__fastcall ****)(_QWORD))v6 + 14));
    v10 = *((_DWORD *)this + 12);
    if ( v2 )
    {
      do
      {
        ++v3;
        *v8 = v8[1];
        ++v8;
      }
      while ( v3 != v2 );
    }
    *((_DWORD *)this + v2 + 12) = v10;
  }
  else
  {
    v7 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v6 + 14);
    CBatchOptimizer::FlushBottomLayer(this);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((__int64 *)v6 + 14, v7);
  }
}
