/*
 * XREFs of ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180019B9C
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800B0960 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801B93D8 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18006F964 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800B1484 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawClippedImage(__int64 a1, __int64 a2, float *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  char *v6; // rdi
  int DoesImageOcclude; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  char *v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // r8
  int v16; // esi
  float *v17; // rdx
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  unsigned int v24; // [rsp+20h] [rbp-38h]
  unsigned __int64 v25[5]; // [rsp+30h] [rbp-28h] BYREF
  char v26; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v6 = 0LL;
  v26 = 0;
  if ( !*(_DWORD *)(a1 + 1036) )
  {
    DoesImageOcclude = COcclusionContext::DoesImageOcclude(a1, a2, a5, &v26);
    v5 = DoesImageOcclude;
    if ( DoesImageOcclude < 0 )
    {
      v24 = 1348;
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DoesImageOcclude, v24);
      goto LABEL_23;
    }
    if ( v26
      && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)a4 + 40LL))(a4, v25)
      && LODWORD(v25[0]) )
    {
      v12 = v25[0];
      v13 = (char *)operator new(saturated_mul(LODWORD(v25[0]), 0x10uLL));
      v6 = v13;
      if ( v13 )
        `vector constructor iterator'(
          v13,
          0x10uLL,
          v12,
          (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      else
        v6 = 0LL;
      if ( v6 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a4 + 48LL))(
               a4,
               v6,
               LODWORD(v25[0])) )
        {
          v16 = 0;
          if ( LODWORD(v25[0]) )
          {
            while ( 1 )
            {
              v17 = (float *)&v6[16 * v16];
              if ( *a3 > *v17 )
                *v17 = *a3;
              v18 = a3[1];
              if ( v18 > v17[1] )
                v17[1] = v18;
              v19 = a3[2];
              v20 = v17[2];
              if ( v20 > v19 )
              {
                v17[2] = v19;
                v20 = v19;
              }
              v21 = a3[3];
              v22 = v17[3];
              if ( v22 > v21 )
              {
                v17[3] = v21;
                v22 = v21;
                v20 = v17[2];
              }
              if ( v20 <= *v17 || v22 <= v17[1] )
              {
                v17[3] = 0.0;
                v17[2] = 0.0;
                v17[1] = 0.0;
                *v17 = 0.0;
              }
              DoesImageOcclude = COcclusionContext::CollectRectangleForOcclusion(a1, v17, v15, 0LL);
              v5 = DoesImageOcclude;
              if ( DoesImageOcclude < 0 )
                break;
              if ( (unsigned int)++v16 >= LODWORD(v25[0]) )
                goto LABEL_23;
            }
            v24 = 1362;
            goto LABEL_29;
          }
        }
      }
      else
      {
        v5 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x54Au);
      }
    }
  }
LABEL_23:
  WPF::ProcessHeapImpl::Free(v6);
  return v5;
}
