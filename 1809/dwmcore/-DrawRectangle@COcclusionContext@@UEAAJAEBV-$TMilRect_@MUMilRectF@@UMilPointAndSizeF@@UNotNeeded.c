/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18006A760
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18006A820 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800B1484 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, __int64 a2, CImageLegacyMilBrush *a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // [rsp+20h] [rbp-50h]
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+58h] [rbp-18h] BYREF

  v4 = 0;
  v21 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !*(_DWORD *)(a1 + 1036) && !a4 )
  {
    if ( a3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *))(*(_QWORD *)a3 + 152LL))(a3) )
      {
        v9 = COcclusionContext::CollectRectangleForOcclusion(a1, a2, v8, &v21);
        v4 = v9;
        if ( v9 < 0 )
        {
          v18 = 987;
          goto LABEL_11;
        }
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 77LL) )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v10 = *(_QWORD *)(a1 + 808);
      *((_QWORD *)&v19 + 1) = CachedBrushCVINoRef;
      v14 = *(unsigned int *)(a1 + 1176);
      *(_QWORD *)&v19 = v10;
      v20[0] = 0;
      *(_OWORD *)&v20[4] = v21;
      v15 = v14 + 1;
      v13 = (int)v14 + 1 < (unsigned int)v14 ? 0x80070216 : 0;
      if ( (int)v14 + 1 < (unsigned int)v14 )
      {
        v18 = 181;
        goto LABEL_18;
      }
      if ( v15 <= *(_DWORD *)(a1 + 1172) )
      {
        v16 = 5 * v14;
        v17 = *(_QWORD *)(a1 + 1152);
        *(_OWORD *)(v17 + 8 * v16) = v19;
        *(_OWORD *)(v17 + 8 * v16 + 16) = *(_OWORD *)v20;
        *(_QWORD *)(v17 + 8 * v16 + 32) = *(_QWORD *)&v20[16];
        *(_DWORD *)(a1 + 1176) = v15;
        return v4;
      }
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1152, 40, 1, &v19);
      if ( v9 >= 0 )
        return v4;
      v18 = 192;
LABEL_11:
      v13 = v9;
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v13, v18);
    }
  }
  return v4;
}
