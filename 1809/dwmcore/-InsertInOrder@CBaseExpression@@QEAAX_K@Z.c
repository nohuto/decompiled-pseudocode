/*
 * XREFs of ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18005B880
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x18005B7A0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18005B880 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800BD8C0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18018A2B8 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     ?InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z @ 0x180193260 (-InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18005B880 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, unsigned __int64 a2)
{
  int v2; // r8d
  char v3; // r14
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  CBaseExpression *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 37);
  v3 = 0;
  *((_DWORD *)this + 37) = v2 + 1;
  if ( v2 >= 1 || *((_QWORD *)this + 19) == a2 )
  {
LABEL_3:
    v6 = CBaseExpression::s_recursionLevel;
    goto LABEL_4;
  }
  v6 = CBaseExpression::s_recursionLevel;
  if ( CBaseExpression::s_recursionLevel <= 0x10 )
  {
    v7 = 0LL;
    v3 = 1;
    ++CBaseExpression::s_recursionLevel;
    if ( *((_DWORD *)this + 60) )
    {
      do
      {
        CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 27) + 8 * v7), a2);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 60) );
    }
    (*(void (__fastcall **)(CBaseExpression *, unsigned __int64))(*(_QWORD *)this + 168LL))(this, a2);
    if ( (*((_BYTE *)this + 208) & 2) != 0 )
    {
      v8 = *((_QWORD *)this + 2);
      v15 = this;
      v9 = *(_QWORD *)(v8 + 224);
      v10 = v9 + 32LL * (unsigned int)(1 - *(_DWORD *)(v9 + 164));
      v11 = *(_DWORD *)(v10 + 192);
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v11 + 1 < v11 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v12 > *(_DWORD *)(v10 + 188) )
      {
        v13 = DynArrayImpl<1>::AddMultipleAndSet(v10 + 168, 8LL, v10, &v15);
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v10 + 168) + 8LL * v11) = v15;
        *(_DWORD *)(v10 + 192) = v12;
      }
    }
    goto LABEL_3;
  }
LABEL_4:
  *((_QWORD *)this + 19) = a2;
  if ( v3 )
    CBaseExpression::s_recursionLevel = v6 - 1;
  --*((_DWORD *)this + 37);
}
