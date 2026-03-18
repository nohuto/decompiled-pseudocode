/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800C80C4
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800939A0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x180094010 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x1801D3F88 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        unsigned int a2,
        struct CExpressionValue *a3,
        bool *a4)
{
  signed int v8; // eax
  __int64 v9; // rcx
  bool v10; // di
  unsigned int v11; // ebx
  __int64 v12; // r14
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  bool v18; // dl
  int v19; // edx
  int v20; // edx
  int v21; // edx
  unsigned int v23; // [rsp+20h] [rbp-28h]

  v8 = CExpression::EnsureCacheBounds(this, a2, 8uLL);
  v10 = 0;
  v11 = v8;
  if ( v8 < 0 )
  {
    v23 = 1475;
    goto LABEL_51;
  }
  v12 = *((_QWORD *)this + 42) + a2;
  v13 = *(_DWORD *)v12;
  if ( !*(_DWORD *)v12 )
  {
LABEL_48:
    *a4 = v10;
    return v11;
  }
  if ( v13 > 69 )
  {
    v19 = v13 - 70;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 33;
        if ( !v21 )
        {
          v8 = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
          v11 = v8;
          if ( v8 >= 0 )
          {
            *((_DWORD *)a3 + 18) = 104;
            *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
            *((_QWORD *)a3 + 2) = *(_QWORD *)(v12 + 24);
            goto LABEL_45;
          }
          v23 = 1545;
          goto LABEL_51;
        }
        if ( v21 == 161 )
        {
          v8 = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
          v11 = v8;
          if ( v8 >= 0 )
          {
            *((_DWORD *)a3 + 18) = 265;
            *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
            *((_OWORD *)a3 + 1) = *(_OWORD *)(v12 + 24);
            *((_OWORD *)a3 + 2) = *(_OWORD *)(v12 + 40);
            *((_OWORD *)a3 + 3) = *(_OWORD *)(v12 + 56);
            goto LABEL_45;
          }
          v23 = 1552;
          goto LABEL_51;
        }
        goto LABEL_32;
      }
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v11 = v8;
      if ( v8 < 0 )
      {
        v23 = 1538;
        goto LABEL_51;
      }
      *((_DWORD *)a3 + 18) = 71;
    }
    else
    {
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v11 = v8;
      if ( v8 < 0 )
      {
        v23 = 1531;
        goto LABEL_51;
      }
      *((_DWORD *)a3 + 18) = 70;
    }
LABEL_44:
    *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
    goto LABEL_45;
  }
  if ( v13 == 69 )
  {
    v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
    v11 = v8;
    if ( v8 < 0 )
    {
      v23 = 1524;
      goto LABEL_51;
    }
    *((_DWORD *)a3 + 18) = 69;
    goto LABEL_44;
  }
  v14 = v13 - 17;
  if ( !v14 )
  {
    v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
    v11 = v8;
    if ( v8 >= 0 )
    {
      *(_BYTE *)a3 = *(_BYTE *)(v12 + 8);
      *((_DWORD *)a3 + 18) = 17;
      goto LABEL_45;
    }
    v23 = 1496;
    goto LABEL_51;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
    v11 = v8;
    if ( v8 >= 0 )
    {
      *(_DWORD *)a3 = *(_DWORD *)(v12 + 8);
      *((_DWORD *)a3 + 18) = 18;
      goto LABEL_45;
    }
    v23 = 1503;
    goto LABEL_51;
  }
  v16 = v15 - 17;
  if ( !v16 )
  {
    v8 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
    v11 = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)a3 + 18) = 35;
      *(_QWORD *)a3 = *(_QWORD *)(v12 + 8);
      goto LABEL_45;
    }
    v23 = 1510;
    goto LABEL_51;
  }
  v17 = v16 - 7;
  if ( !v17 )
  {
    v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
    v11 = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)a3 + 18) = 42;
      *(_DWORD *)a3 = *(_DWORD *)(v12 + 8);
      goto LABEL_45;
    }
    v23 = 1559;
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v23, 0LL);
    return v11;
  }
  if ( v17 == 10 )
  {
    v8 = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
    v11 = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(v12 + 8);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v12 + 16);
LABEL_45:
      *((_BYTE *)a3 + 76) = 1;
      if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
        CExpression::LogCacheAccess(this, v18, a2, a3);
      v10 = 1;
      goto LABEL_48;
    }
    v23 = 1517;
    goto LABEL_51;
  }
LABEL_32:
  v11 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070057, 0x625u, 0LL);
  return v11;
}
