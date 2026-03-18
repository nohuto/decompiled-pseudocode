/*
 * XREFs of ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800CBF94
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800C99A0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180063B14 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800A61E4 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x1800AB540 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800AC260 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CMegaRectCollection::ReplaceMegaRectsWithClippedRects(CMegaRectCollection *this)
{
  unsigned int v1; // ebx
  bool v2; // cf
  __int64 v4; // r8
  __int64 v5; // r9
  CMegaRectCollection *v6; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rcx
  int updated; // eax
  __int64 v18; // rcx
  void *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  CMegaRectCollection *v22[2]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v23[2]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v24; // [rsp+60h] [rbp+17h] BYREF
  void *v25[2]; // [rsp+70h] [rbp+27h]
  __int128 v26; // [rsp+80h] [rbp+37h]
  unsigned __int64 v27; // [rsp+B0h] [rbp+67h] BYREF
  void *v28; // [rsp+B8h] [rbp+6Fh] BYREF

  v1 = 0;
  *(_OWORD *)v22 = 0LL;
  v2 = *((_QWORD *)this + 4) < 2uLL;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  if ( !v2 )
  {
    v8 = CMegaRectCollection::PrepMegaRectData(this);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1CBu);
    }
    else
    {
      v10 = CMegaRectCollection::OccludeRegions(this);
      v1 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1CCu);
      }
      else
      {
        v14 = *((_QWORD *)this + 3);
        v15 = v14 + *((_QWORD *)this + 4);
        while ( v14 != v15 )
        {
          v16 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v14 & (*((_QWORD *)this + 2) - 1LL)));
          if ( *(_QWORD *)(v16 + 8) )
          {
            updated = CMegaRect::UpdatePrimitive(
                        (FastRegion::Internal::CRgnData ***)v16,
                        (struct CMegaRect::UpdatePrimitiveWorkingBuffers *)v22);
            v1 = updated;
            if ( updated < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, updated, 0x1D6u);
              break;
            }
          }
          ++v14;
        }
      }
    }
    v19 = v25[1];
    if ( v25[1] )
    {
      v28 = v25[1];
      v20 = 2 * ((__int64)(*((_QWORD *)&v26 + 1) - (unsigned __int64)v25[1]) >> 1);
      v27 = v20;
      if ( v20 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v28, &v27, v12, v13);
        v20 = v27;
        v19 = v28;
      }
      operator delete(v19, v20);
      v25[1] = 0LL;
      v26 = 0LL;
    }
  }
  std::vector<unsigned char>::_Tidy((__int64)&v24);
  std::vector<unsigned char>::_Tidy((__int64)v23 + 8);
  v6 = v22[0];
  if ( v22[0] )
  {
    v28 = v22[0];
    v21 = (*(_QWORD *)&v23[0] - (unsigned __int64)v22[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    v27 = v21;
    if ( v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v28, &v27, v4, v5);
      v21 = v27;
      v6 = (CMegaRectCollection *)v28;
    }
    operator delete(v6, v21);
  }
  return v1;
}
