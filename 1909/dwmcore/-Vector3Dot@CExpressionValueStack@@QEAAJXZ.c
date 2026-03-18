/*
 * XREFs of ?Vector3Dot@CExpressionValueStack@@QEAAJXZ @ 0x1802037C8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Dot(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  float v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h]
  float v10; // [rsp+48h] [rbp-10h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = v1 - 1;
    if ( *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) == 52 )
    {
      if ( *(_DWORD *)(v3 + 80 * v4 + 72) == 52 )
      {
        v9 = *(_QWORD *)(v3 + 80LL * (v1 - 2));
        v8 = *(_QWORD *)(v3 + 80 * v4);
        v10 = *(float *)(v3 + 80LL * (v1 - 2) + 8);
        v5 = *(float *)(v3 + 80 * v4 + 8);
        *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) = 18;
        *(_BYTE *)(v3 + 80LL * (v1 - 2) + 76) = 1;
        *(float *)(v3 + 80LL * (v1 - 2)) = (float)((float)(*((float *)&v9 + 1) * *((float *)&v8 + 1))
                                                 + (float)(*(float *)&v8 * *(float *)&v9))
                                         + (float)(v5 * v10);
        --*((_DWORD *)this + 4);
        return 0;
      }
      v7 = 7490;
    }
    else
    {
      v7 = 7489;
    }
  }
  else
  {
    v7 = 7483;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v7,
    0LL);
  return v2;
}
