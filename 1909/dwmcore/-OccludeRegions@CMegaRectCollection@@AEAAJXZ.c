/*
 * XREFs of ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800B8DA0
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180099674 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAD5C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 */

__int64 __fastcall CMegaRectCollection::OccludeRegions(CMegaRectCollection *this)
{
  __int64 v1; // rdx
  unsigned int v2; // r15d
  __int64 *****v3; // rbx
  unsigned int v4; // r12d
  __int64 i; // rdi
  __int64 ****v7; // rax
  unsigned int v8; // r13d
  __int64 ***v9; // rax
  __int64 *v10; // rsi
  __int64 j; // rbp
  int v12; // r15d
  bool v13; // al
  __int64 v14; // rax
  __int64 ****v15; // rax
  __int64 **v16; // rcx
  __int64 v17; // rax
  signed int v18; // eax
  __int64 v19; // rcx

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v3 = *(__int64 ******)this;
  v4 = 0;
  for ( i = v1; i != v1 + *((_QWORD *)this + 4); ++i )
  {
    if ( v3 )
      v7 = *v3;
    else
      v7 = 0LL;
    if ( v7[1][i & ((unsigned __int64)v7[2] - 1)][1] )
    {
      v8 = 0;
      v9 = 0LL;
      if ( v3 && *v3 )
        v9 = **v3;
      v10 = 0LL;
      if ( v9 && *v9 )
        v10 = **v9;
      for ( j = i + 1; ; ++j )
      {
        v1 = *((_QWORD *)this + 3);
        v12 = v2 | 1;
        v13 = j != v1 + *((_QWORD *)this + 4) && v8 < CCommonRegistryData::m_dwMegaRectSearchCount;
        v2 = v12 & 0xFFFFFFFE;
        if ( !v13 )
          break;
        if ( v10 )
          v14 = *v10;
        else
          v14 = 0LL;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * (j & (*(_QWORD *)(v14 + 16) - 1LL))) + 8LL) )
        {
          v15 = v3 ? *v3 : 0LL;
          v16 = v15[1][i & ((unsigned __int64)v15[2] - 1)];
          v17 = v10 ? *v10 : 0LL;
          v18 = FastRegion::CRegion::Subtract(
                  (FastRegion::CRegion *)v16[1],
                  *(const struct CRegion **)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8 * (j & (*(_QWORD *)(v17 + 16) - 1LL)))
                                           + 8LL));
          v4 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x20Eu, 0LL);
            return v4;
          }
        }
        ++v8;
      }
    }
  }
  return v4;
}
