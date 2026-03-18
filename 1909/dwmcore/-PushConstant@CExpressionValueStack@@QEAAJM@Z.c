/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180094048
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801E5144 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180205A40 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800AA974 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800D753C (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, float a2)
{
  __int64 v2; // rbp
  signed int v4; // ebx
  __int64 v5; // rax
  signed int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r14
  _BYTE v10[64]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  char v13; // [rsp+7Ch] [rbp-1Ch]
  __int64 v14; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 5LL;
  if ( (unsigned int)~*((_DWORD *)this + 4) < 5 )
  {
    v4 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x8000FFFF,
      0x52u,
      0LL);
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v4,
      0x1C1u,
      0LL);
    return (unsigned int)v4;
  }
  if ( *((_DWORD *)this + 12) != *((_DWORD *)this + 4) )
    goto LABEL_3;
  memset_0(v10, 0, sizeof(v10));
  v11 = 0LL;
  v12 = 18;
  v13 = 0;
  v7 = DynArrayImpl<1>::AddMultiple((char *)this + 24, 80LL, 5LL, &v14);
  v4 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xE8u, 0LL);
  }
  else
  {
    v9 = v14;
    do
    {
      CExpressionValue::operator=(v9, v10);
      v9 += 80LL;
      --v2;
    }
    while ( v2 );
  }
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v4,
      0x5Bu,
      0LL);
  else
LABEL_3:
    v4 = 0;
  if ( v4 < 0 )
    goto LABEL_13;
  v5 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(*((_DWORD *)this + 4))++;
  *(float *)v5 = a2;
  *(_DWORD *)(v5 + 72) = 18;
  *(_BYTE *)(v5 + 76) = 1;
  return (unsigned int)v4;
}
