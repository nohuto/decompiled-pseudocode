/*
 * XREFs of ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180096094
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180078FA0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180074794 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180077528 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800B68D0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1634 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CMegaRectCollection::ReplaceMegaRectsWithClippedRects(CMegaRectCollection *this)
{
  unsigned int v1; // ebx
  bool v2; // cf
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // r14
  CMegaRect *v11; // rcx
  int updated; // eax
  unsigned int v13; // ecx
  CMegaRectCollection *v14[2]; // [rsp+38h] [rbp-9h] BYREF
  _OWORD v15[2]; // [rsp+48h] [rbp+7h] BYREF
  __int128 v16; // [rsp+68h] [rbp+27h] BYREF
  __int128 v17; // [rsp+78h] [rbp+37h]
  __int128 v18; // [rsp+88h] [rbp+47h]

  v1 = 0;
  *(_OWORD *)v14 = 0LL;
  v2 = *((_QWORD *)this + 4) < 2uLL;
  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !v2 )
  {
    v5 = CMegaRectCollection::PrepMegaRectData(this);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1CBu, 0LL);
    }
    else
    {
      v7 = CMegaRectCollection::OccludeRegions(this);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1CCu, 0LL);
      }
      else
      {
        v9 = *((_QWORD *)this + 3);
        v10 = v9 + *((_QWORD *)this + 4);
        while ( v9 != v10 )
        {
          v11 = *(CMegaRect **)(*((_QWORD *)this + 1) + 8 * (v9 & (*((_QWORD *)this + 2) - 1LL)));
          if ( *((_QWORD *)v11 + 1) )
          {
            updated = CMegaRect::UpdatePrimitive(v11, (struct CMegaRect::UpdatePrimitiveWorkingBuffers *)v14);
            v1 = updated;
            if ( updated < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, updated, 0x1D6u, 0LL);
              break;
            }
          }
          ++v9;
        }
      }
    }
    if ( *((_QWORD *)&v17 + 1) )
    {
      std::_Deallocate<16,0>(*((_QWORD *)&v17 + 1), 2 * ((__int64)(*((_QWORD *)&v18 + 1) - *((_QWORD *)&v17 + 1)) >> 1));
      *((_QWORD *)&v17 + 1) = 0LL;
      v18 = 0LL;
    }
  }
  std::vector<unsigned char>::_Tidy(&v16);
  std::vector<unsigned char>::_Tidy((char *)v15 + 8);
  if ( v14[0] )
    std::_Deallocate<16,0>(v14[0], (*(_QWORD *)&v15[0] - (unsigned __int64)v14[0]) & 0xFFFFFFFFFFFFFFF0uLL);
  return v1;
}
