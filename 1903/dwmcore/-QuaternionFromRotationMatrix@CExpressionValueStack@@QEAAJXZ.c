/*
 * XREFs of ?QuaternionFromRotationMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180203A58
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x18000B2C4 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromRotationMatrix(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  unsigned int v11; // [rsp+20h] [rbp-78h]
  __int128 v12; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = (unsigned int)(v1 - 1);
    v5 = 10 * v4;
    if ( *(_DWORD *)(v3 + 80 * v4 + 72) == 265 )
    {
      v6 = *(_OWORD *)(v3 + 80 * v4 + 16);
      v13[0] = *(_OWORD *)(v3 + 80 * v4);
      v7 = *(_OWORD *)(v3 + 80 * v4 + 32);
      v13[1] = v6;
      v8 = *(_OWORD *)(v3 + 80 * v4 + 48);
      v13[2] = v7;
      v13[3] = v8;
      D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v12, (const struct D2DMatrix *)v13);
      v9 = v12;
      *(_DWORD *)(v3 + 8 * v5 + 72) = 71;
      *(_BYTE *)(v3 + 8 * v5 + 76) = 1;
      *(_OWORD *)(v3 + 8 * v5) = v9;
      return 0;
    }
    v11 = 7051;
  }
  else
  {
    v11 = 7046;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v11,
    0LL);
  return v2;
}
