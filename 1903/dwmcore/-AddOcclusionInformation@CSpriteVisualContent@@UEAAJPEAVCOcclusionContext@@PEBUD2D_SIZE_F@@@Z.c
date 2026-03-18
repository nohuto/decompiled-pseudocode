/*
 * XREFs of ?AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800BD840
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18002E650 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::AddOcclusionInformation(
        CSpriteVisualContent *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  signed int v7; // eax
  __int64 v8; // rcx
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0;
  if ( a3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CSpriteVisualContent *, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)this + 344LL))(
           this,
           a3,
           &v9) )
    {
      v10 = v9;
      v7 = COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (float *)&v10, v5, 0LL);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x43u, 0LL);
    }
  }
  return v3;
}
