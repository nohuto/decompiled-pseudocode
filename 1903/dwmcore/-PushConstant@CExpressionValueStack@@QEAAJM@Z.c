/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180084D54
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801E68B4 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180207130 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x180029B24 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800D6FF0 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, float a2)
{
  __int64 v2; // rbp
  int v4; // ebx
  __int64 v5; // rax
  int v7; // eax
  unsigned int v8; // ecx
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
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x52u,
      0LL);
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
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
  v7 = DynArrayImpl<1>::AddMultiple((__int64)this + 24, 80, 5, &v14);
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
      (unsigned int)this,
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
