/*
 * XREFs of ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x18000E840
 * Callers:
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000B410 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000E7C0 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 */

struct CDropShadow::ShadowIntermediates *__fastcall CDropShadow::GetEffectiveShadowIntermediates(
        CDropShadow *this,
        struct CVisual *a2)
{
  struct CDropShadow::ShadowIntermediates *result; // rax
  unsigned __int64 v4; // rax
  _QWORD *v5; // r11
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 *v8; // r8
  __int64 v9; // r9
  __int64 *i; // rdx
  __int64 *v11; // rax
  struct CVisual *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  if ( *((_DWORD *)this + 31) != 1 )
    return (CDropShadow *)((char *)this + 128);
  v4 = std::_Hash_bytes((const unsigned __int8 *)&v12, 8uLL);
  v6 = v5[27];
  v7 = v5[30] & v4;
  v8 = (__int64 *)v5[25];
  v9 = 2 * v7;
  for ( i = *(__int64 **)(v6 + 16 * v7); ; i = (__int64 *)*i )
  {
    v11 = *(__int64 **)(v6 + 8 * v9) == v8 ? (__int64 *)v5[25] : **(__int64 ***)(v6 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( (struct CVisual *)i[2] == a2 )
      goto LABEL_11;
  }
  i = (__int64 *)v5[25];
LABEL_11:
  result = 0LL;
  if ( i != v8 )
    return (struct CDropShadow::ShadowIntermediates *)(i + 3);
  return result;
}
