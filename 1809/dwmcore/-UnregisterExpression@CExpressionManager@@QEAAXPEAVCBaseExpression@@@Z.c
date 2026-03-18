/*
 * XREFs of ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BD280
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18004EA00 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180053984 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800BD464 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x180069710 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTarget.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x1800BD964 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::UnregisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  __int64 Element; // rax
  CTargetMapEntry *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edx
  struct CBaseExpression **v13; // rax
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // eax
  struct CBaseExpression **i; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // r9d
  struct CBaseExpression **v21; // rax
  __int64 v22; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+28h] [rbp-10h]

  v22 = *((_QWORD *)a2 + 22);
  v23 = *((_DWORD *)a2 + 46);
  Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement((char *)this + 328, &v22);
  v5 = (CTargetMapEntry *)Element;
  if ( Element )
  {
    v6 = *(_QWORD *)(Element + 16);
    v7 = v6;
    v8 = v6;
    if ( v6 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v7 + 16);
        if ( *(struct CBaseExpression **)(v7 + 8) == a2 )
          break;
        v8 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v9 )
          goto LABEL_7;
      }
      if ( v7 == v6 )
        *((_QWORD *)v5 + 2) = v9;
      else
        *(_QWORD *)(v8 + 16) = v9;
      operator delete((void *)v7, 0x18uLL);
    }
LABEL_7:
    if ( !*((_QWORD *)v5 + 2) )
      CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
        (PRTL_GENERIC_TABLE)((char *)this + 328),
        v5);
  }
  else
  {
    *((_BYTE *)a2 + 208) &= ~2u;
  }
  v10 = 0LL;
  v11 = 32LL * *((int *)this + 41);
  v12 = *(_DWORD *)((char *)this + v11 + 192);
  v13 = *(struct CBaseExpression ***)((char *)this + v11 + 168);
  if ( v12 )
  {
    do
    {
      if ( a2 == *v13 )
        break;
      v10 = (unsigned int)(v10 + 1);
      ++v13;
    }
    while ( (unsigned int)v10 < v12 );
  }
  if ( (unsigned int)v10 < *((_DWORD *)this + 8 * *((int *)this + 41) + 48) )
  {
    v14 = *(_QWORD *)((char *)this + v11 + 168);
LABEL_14:
    *(_QWORD *)(v14 + 8 * v10) = 0LL;
    goto LABEL_15;
  }
  v15 = *((_DWORD *)this + 80);
  v16 = 0;
  for ( i = (struct CBaseExpression **)*((_QWORD *)this + 37); v16 < v15; ++i )
  {
    if ( a2 == *i )
      break;
    ++v16;
  }
  if ( v16 < v15 )
  {
    v10 = v16;
    v14 = *((_QWORD *)this + 37);
    goto LABEL_14;
  }
LABEL_15:
  if ( (*((_BYTE *)this + 416) & 1) != 0 )
  {
    v18 = 0LL;
    v19 = 32LL * (1 - *((_DWORD *)this + 41));
    v20 = *(_DWORD *)((char *)this + v19 + 192);
    v21 = *(struct CBaseExpression ***)((char *)this + v19 + 168);
    if ( v20 )
    {
      do
      {
        if ( a2 == *v21 )
          break;
        v18 = (unsigned int)(v18 + 1);
        ++v21;
      }
      while ( (unsigned int)v18 < v20 );
    }
    if ( (unsigned int)v18 < *((_DWORD *)this + 8 * (1 - *((_DWORD *)this + 41)) + 48) )
      *(_QWORD *)(*(_QWORD *)((char *)this + v19 + 168) + 8 * v18) = 0LL;
  }
}
