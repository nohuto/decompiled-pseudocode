/*
 * XREFs of ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x1800544FC
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x18001E2DC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800544A0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x180054ED8 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z @ 0x1801D1EB4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x1801D1F34 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x1801D1FB4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801D2034 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801D20BC (-PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x1801D213C (-PushConstant@CExpressionValueStack@@QEAAJ_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18007EA60 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::EnsureAvailablePushSpace(CExpressionValueStack *this)
{
  __int64 v1; // rdi
  int v3; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rsi
  unsigned int v8; // ecx
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]
  int v11; // [rsp+78h] [rbp-10h]
  char v12; // [rsp+7Ch] [rbp-Ch]
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF

  v1 = 5LL;
  if ( (unsigned int)~*((_DWORD *)this + 4) < 5 )
  {
    v3 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x55u);
  }
  else
  {
    if ( *((_DWORD *)this + 12) != *((_DWORD *)this + 4) )
      return 0;
    memset_0(v9, 0, sizeof(v9));
    v10 = 0LL;
    v11 = 18;
    v12 = 0;
    v5 = DynArrayImpl<1>::AddMultiple((char *)this + 24, 80LL, 5LL, &v13);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE5u);
    }
    else
    {
      v7 = v13;
      do
      {
        CExpressionValue::operator=(v7, v9);
        v7 += 80LL;
        --v1;
      }
      while ( v1 );
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, 0x5Eu);
    else
      return 0;
  }
  return (unsigned int)v3;
}
