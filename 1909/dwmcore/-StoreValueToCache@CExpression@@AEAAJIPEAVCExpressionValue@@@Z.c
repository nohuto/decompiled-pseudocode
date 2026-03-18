/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180093D00
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800939A0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x180094010 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // ecx
  unsigned int v18; // [rsp+20h] [rbp-28h]

  v6 = CExpression::EnsureCacheBounds(this, a2, 8uLL);
  v8 = v6;
  if ( v6 < 0 )
  {
    v18 = 1353;
    goto LABEL_45;
  }
  v9 = *((_QWORD *)this + 42) + a2;
  if ( !*(_DWORD *)v9 )
    *(_DWORD *)v9 = *((_DWORD *)a3 + 18);
  v10 = *((_DWORD *)a3 + 18);
  if ( v10 > 69 )
  {
    v15 = v10 - 70;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v14 = (unsigned int)(v16 - 33);
        if ( (_DWORD)v14 )
        {
          if ( (_DWORD)v14 != 161 )
            goto LABEL_32;
          v6 = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
          v8 = v6;
          if ( v6 >= 0 )
          {
            *(_OWORD *)(v9 + 8) = *(_OWORD *)a3;
            *(_OWORD *)(v9 + 24) = *((_OWORD *)a3 + 1);
            *(_OWORD *)(v9 + 40) = *((_OWORD *)a3 + 2);
            *(_OWORD *)(v9 + 56) = *((_OWORD *)a3 + 3);
            return v8;
          }
          v18 = 1433;
        }
        else
        {
          v6 = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
          v8 = v6;
          if ( v6 >= 0 )
          {
            *(_OWORD *)(v9 + 8) = *(_OWORD *)a3;
            *(_QWORD *)(v9 + 24) = *((_QWORD *)a3 + 2);
            return v8;
          }
          v18 = 1426;
        }
LABEL_45:
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v18, 0LL);
        return v8;
      }
      v6 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v8 = v6;
      if ( v6 < 0 )
      {
        v18 = 1419;
        goto LABEL_45;
      }
    }
    else
    {
      v6 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v8 = v6;
      if ( v6 < 0 )
      {
        v18 = 1412;
        goto LABEL_45;
      }
    }
LABEL_42:
    *(_OWORD *)(v9 + 8) = *(_OWORD *)a3;
    return v8;
  }
  if ( v10 == 69 )
  {
    v6 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
    v8 = v6;
    if ( v6 < 0 )
    {
      v18 = 1405;
      goto LABEL_45;
    }
    goto LABEL_42;
  }
  v11 = v10 - 17;
  if ( !v11 )
  {
    v6 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
    v8 = v6;
    if ( v6 >= 0 )
    {
      *(_BYTE *)(v9 + 8) = *(_BYTE *)a3;
      return v8;
    }
    v18 = 1377;
    goto LABEL_45;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v6 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
    v8 = v6;
    if ( v6 >= 0 )
    {
      *(_DWORD *)(v9 + 8) = *(_DWORD *)a3;
      return v8;
    }
    v18 = 1384;
    goto LABEL_45;
  }
  v13 = v12 - 17;
  if ( !v13 )
  {
    v6 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
    v8 = v6;
    if ( v6 >= 0 )
    {
      *(_QWORD *)(v9 + 8) = *(_QWORD *)a3;
      return v8;
    }
    v18 = 1391;
    goto LABEL_45;
  }
  v14 = (unsigned int)(v13 - 7);
  if ( !(_DWORD)v14 )
  {
    v6 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
    v8 = v6;
    if ( v6 >= 0 )
    {
      *(_DWORD *)(v9 + 8) = *(_DWORD *)a3;
      return v8;
    }
    v18 = 1440;
    goto LABEL_45;
  }
  if ( (_DWORD)v14 != 10 )
  {
LABEL_32:
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x80070057, 0x5ABu, 0LL);
    return v8;
  }
  v6 = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
  v8 = v6;
  if ( v6 < 0 )
  {
    v18 = 1398;
    goto LABEL_45;
  }
  *(_QWORD *)(v9 + 8) = *(_QWORD *)a3;
  *(_DWORD *)(v9 + 16) = *((_DWORD *)a3 + 2);
  return v8;
}
