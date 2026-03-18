/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180084A50
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800846F0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x180085414 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C1A68 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // [rsp+20h] [rbp-18h]

  if ( a2 + 8 < a2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x202u, 0LL);
    goto LABEL_48;
  }
  if ( a2 + 8 > *((_DWORD *)this + 86) )
  {
    v6 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x207u, 0LL);
LABEL_48:
    v23 = 1349;
    goto LABEL_49;
  }
  v4 = *((_QWORD *)this + 42) + a2;
  if ( !*(_DWORD *)v4 )
    *(_DWORD *)v4 = *((_DWORD *)a3 + 18);
  v5 = *((_DWORD *)a3 + 18);
  if ( v5 == 18 )
  {
    if ( a2 + 12 < a2 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x202u, 0LL);
    }
    else
    {
      if ( a2 + 12 <= *((_DWORD *)this + 86) )
      {
        v6 = 0;
        *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
        return v6;
      }
      v6 = -2147483637;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x207u, 0LL);
    }
    v23 = 1380;
LABEL_49:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, v23, 0LL);
    return v6;
  }
  switch ( v5 )
  {
    case 11:
      v21 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
      v6 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x5A3u, 0LL);
      else
        Microsoft::WRL::ComPtr<CPathData>::operator=(v4 + 8, *((_QWORD *)a3 + 8));
      return v6;
    case 17:
      v13 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v6 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x55Du, 0LL);
      else
        *(_BYTE *)(v4 + 8) = *(_BYTE *)a3;
      return v6;
    case 35:
      result = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
      v6 = result;
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v4 + 8) = *(_QWORD *)a3;
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, result, 0x56Bu, 0LL);
      return v6;
    case 42:
      v19 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v6 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x59Cu, 0LL);
      else
        *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
      return v6;
    case 52:
      LODWORD(result) = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
      v6 = result;
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v4 + 8) = *(_QWORD *)a3;
        *(_DWORD *)(v4 + 16) = *((_DWORD *)a3 + 2);
        return (unsigned int)result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, result, 0x572u, 0LL);
      return v6;
    case 69:
      v15 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v15;
      if ( v15 >= 0 )
        goto LABEL_21;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x579u, 0LL);
      return v6;
    case 70:
      v11 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v11;
      if ( v11 >= 0 )
        goto LABEL_21;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x580u, 0LL);
      return v6;
    case 71:
      v17 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v17;
      if ( v17 >= 0 )
      {
LABEL_21:
        result = v6;
        *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x587u, 0LL);
      return v6;
    case 104:
      if ( a2 + 32 < a2 )
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x202u, 0LL);
      }
      else
      {
        if ( a2 + 32 <= *((_DWORD *)this + 86) )
        {
          result = 0LL;
          *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
          *(_QWORD *)(v4 + 24) = *((_QWORD *)a3 + 2);
          return result;
        }
        v6 = -2147483637;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x207u, 0LL);
      }
      v23 = 1422;
      goto LABEL_49;
    case 265:
      result = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
      v6 = result;
      if ( (int)result >= 0 )
      {
        *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
        *(_OWORD *)(v4 + 24) = *((_OWORD *)a3 + 1);
        *(_OWORD *)(v4 + 40) = *((_OWORD *)a3 + 2);
        *(_OWORD *)(v4 + 56) = *((_OWORD *)a3 + 3);
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, result, 0x595u, 0LL);
      break;
    default:
      v6 = -2147024809;
      v23 = 1450;
      goto LABEL_49;
  }
  return v6;
}
