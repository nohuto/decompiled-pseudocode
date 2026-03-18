/*
 * XREFs of ?MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z @ 0x18025AF70
 * Callers:
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18025A740 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801E9038 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 */

void __fastcall CDepthSortingLayer::MergeWith(CDepthSortingLayer *this, struct CDepthSortingLayer *a2)
{
  float v3; // xmm1_4
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // r8
  _BYTE *v9; // rdx

  v3 = *((float *)this + 7);
  v4 = 0;
  *((float *)this + 6) = fminf(*((float *)this + 6), *((float *)a2 + 6));
  *((float *)this + 7) = fmaxf(v3, *((float *)a2 + 7));
  v6 = *(_QWORD *)a2;
  if ( (*((_QWORD *)a2 + 1) - v6) >> 2 )
  {
    v7 = 0LL;
    do
    {
      v8 = (_DWORD *)(v6 + 4 * v7);
      v9 = (_BYTE *)*((_QWORD *)this + 1);
      if ( *((_BYTE **)this + 2) == v9 )
      {
        std::vector<float>::_Emplace_reallocate<float const &>((__int64)this, v9, v8);
      }
      else
      {
        *(_DWORD *)v9 = *v8;
        *((_QWORD *)this + 1) += 4LL;
      }
      v6 = *(_QWORD *)a2;
      v7 = ++v4;
    }
    while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 2) );
  }
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  if ( (__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 2 )
    *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
}
