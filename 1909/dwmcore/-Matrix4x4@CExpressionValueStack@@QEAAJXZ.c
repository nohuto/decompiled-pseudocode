/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1800BFA1C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  CExpressionValueStack *v2; // r11
  __int64 v3; // rdx
  unsigned int v4; // xmm1_4
  unsigned int v5; // ebx
  int v7; // r8d
  _QWORD *i; // r10
  __int64 v9; // rcx
  int v10; // xmm1_4
  unsigned int v11; // [rsp+20h] [rbp-89h]
  __int128 v12; // [rsp+30h] [rbp-79h]
  __int128 v13; // [rsp+30h] [rbp-79h]
  __int128 v14; // [rsp+40h] [rbp-69h]
  __int128 v15; // [rsp+40h] [rbp-69h]
  __int128 v16; // [rsp+50h] [rbp-59h]
  __int128 v17; // [rsp+60h] [rbp-49h]
  __int128 v18; // [rsp+60h] [rbp-49h]
  _QWORD v19[16]; // [rsp+70h] [rbp-39h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( !v1 )
  {
    v11 = 5567;
LABEL_16:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v11,
      0LL);
    return v5;
  }
  v3 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) != 104 )
  {
    if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) == 18 )
    {
      if ( v1 >= 0x10 )
      {
        v7 = 0;
        for ( i = v19; ; ++i )
        {
          this = (CExpressionValueStack *)(v3 + 80LL * (v7 + v1 - 16));
          *i = this;
          if ( *((_DWORD *)this + 18) != 18 )
            break;
          if ( ++v7 >= 16 )
          {
            v9 = v19[0];
            DWORD1(v13) = *(_DWORD *)v19[1];
            LODWORD(v13) = *(_DWORD *)v19[0];
            DWORD2(v13) = *(_DWORD *)v19[2];
            HIDWORD(v13) = *(_DWORD *)v19[3];
            LODWORD(v15) = *(_DWORD *)v19[4];
            DWORD1(v15) = *(_DWORD *)v19[5];
            DWORD2(v15) = *(_DWORD *)v19[6];
            HIDWORD(v15) = *(_DWORD *)v19[7];
            LODWORD(v16) = *(_DWORD *)v19[8];
            DWORD1(v16) = *(_DWORD *)v19[9];
            DWORD2(v16) = *(_DWORD *)v19[10];
            HIDWORD(v16) = *(_DWORD *)v19[11];
            LODWORD(v18) = *(_DWORD *)v19[12];
            DWORD1(v18) = *(_DWORD *)v19[13];
            DWORD2(v18) = *(_DWORD *)v19[14];
            v10 = *(_DWORD *)v19[15];
            *(_OWORD *)v19[0] = v13;
            *(_DWORD *)(v9 + 72) = 265;
            HIDWORD(v18) = v10;
            *(_OWORD *)(v9 + 16) = v15;
            *(_BYTE *)(v9 + 76) = 1;
            *(_OWORD *)(v9 + 32) = v16;
            *(_OWORD *)(v9 + 48) = v18;
            *((_DWORD *)v2 + 4) -= 15;
            return 0;
          }
        }
        v11 = 5595;
      }
      else
      {
        v11 = 5581;
      }
    }
    else
    {
      v11 = 5633;
    }
    goto LABEL_16;
  }
  HIDWORD(v12) = 0;
  HIDWORD(v14) = 0;
  LODWORD(v12) = *(_DWORD *)(v3 + 80LL * (v1 - 1));
  *(_QWORD *)((char *)&v14 + 4) = *(unsigned int *)(v3 + 80LL * (v1 - 1) + 12);
  *(_QWORD *)((char *)&v12 + 4) = *(unsigned int *)(v3 + 80LL * (v1 - 1) + 4);
  LODWORD(v17) = *(_DWORD *)(v3 + 80LL * (v1 - 1) + 16);
  LODWORD(v14) = *(_DWORD *)(v3 + 80LL * (v1 - 1) + 8);
  v4 = *(_DWORD *)(v3 + 80LL * (v1 - 1) + 20);
  *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) = 265;
  HIDWORD(v17) = (_DWORD)FLOAT_1_0;
  *(_OWORD *)(v3 + 80LL * (v1 - 1)) = v12;
  *(_BYTE *)(v3 + 80LL * (v1 - 1) + 76) = 1;
  *(_QWORD *)((char *)&v17 + 4) = v4;
  *(_OWORD *)(v3 + 80LL * (v1 - 1) + 16) = v14;
  *(_OWORD *)(v3 + 80LL * (v1 - 1) + 32) = _xmm;
  *(_OWORD *)(v3 + 80LL * (v1 - 1) + 48) = v17;
  return 0;
}
