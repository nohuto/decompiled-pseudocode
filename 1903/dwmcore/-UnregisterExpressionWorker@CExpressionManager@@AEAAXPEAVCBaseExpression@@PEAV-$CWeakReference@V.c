/*
 * XREFs of ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x1800825F4
 * Callers:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180082BD4 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x18007F9D4 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTarget.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180085DEC (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::UnregisterExpressionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6)
{
  struct _RTL_GENERIC_TABLE *v6; // rbp
  __int64 Element; // rax
  CTargetMapEntry *v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  _QWORD *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // r9d
  _QWORD *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-18h] BYREF
  int v26; // [rsp+28h] [rbp-10h]

  v6 = (struct _RTL_GENERIC_TABLE *)(a1 + 328);
  v25 = a3;
  v26 = a4;
  Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(a1 + 328, &v25);
  v10 = (CTargetMapEntry *)Element;
  if ( Element )
  {
    v11 = *(_QWORD **)(Element + 16);
    v12 = v11;
    if ( v11 )
    {
      while ( 1 )
      {
        v13 = v11[2];
        if ( v11[1] == a2 )
          break;
        v12 = v11;
        v11 = (_QWORD *)v11[2];
        if ( !v13 )
          goto LABEL_7;
      }
      if ( v11 == *((_QWORD **)v10 + 2) )
        *((_QWORD *)v10 + 2) = v13;
      else
        v12[2] = v13;
      operator delete(v11, 0x18uLL);
    }
LABEL_7:
    if ( !*((_QWORD *)v10 + 2) )
      CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(v6, v10);
  }
  else
  {
    *(_BYTE *)(a2 + 208) &= ~2u;
  }
  if ( !a6 )
  {
    v14 = 0LL;
    v15 = 32LL * *(int *)(a1 + 164);
    v16 = *(_DWORD *)(v15 + a1 + 192);
    v17 = *(_QWORD **)(v15 + a1 + 168);
    if ( v16 )
    {
      do
      {
        if ( a2 == *v17 )
          break;
        v14 = (unsigned int)(v14 + 1);
        ++v17;
      }
      while ( (unsigned int)v14 < v16 );
    }
    if ( (unsigned int)v14 >= *(_DWORD *)(32 * (*(int *)(a1 + 164) + 6LL) + a1) )
    {
      v18 = *(_DWORD *)(a1 + 320);
      v19 = 0LL;
      if ( v18 )
      {
        v20 = *(_QWORD **)(a1 + 296);
        do
        {
          if ( a2 == *v20 )
            break;
          v19 = (unsigned int)(v19 + 1);
          ++v20;
        }
        while ( (unsigned int)v19 < v18 );
      }
      if ( (unsigned int)v19 < v18 )
        *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8 * v19) = 0LL;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v15 + a1 + 168) + 8 * v14) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 416) & 1) != 0 )
    {
      v21 = 0LL;
      v22 = 32LL * (1 - *(_DWORD *)(a1 + 164));
      v23 = *(_DWORD *)(v22 + a1 + 192);
      v24 = *(_QWORD **)(v22 + a1 + 168);
      if ( v23 )
      {
        do
        {
          if ( a2 == *v24 )
            break;
          v21 = (unsigned int)(v21 + 1);
          ++v24;
        }
        while ( (unsigned int)v21 < v23 );
      }
      if ( (unsigned int)v21 < *(_DWORD *)(32 * (1 - *(_DWORD *)(a1 + 164) + 6LL) + a1) )
        *(_QWORD *)(*(_QWORD *)(v22 + a1 + 168) + 8 * v21) = 0LL;
    }
  }
}
