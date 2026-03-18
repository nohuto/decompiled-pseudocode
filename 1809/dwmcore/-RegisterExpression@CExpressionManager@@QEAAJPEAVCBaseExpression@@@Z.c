/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x1800BD6F0
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800BD640 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x18006CD70 (-GetSourceAnimationsForProperty@CResource@@QEAAPEAV-$DynArray@PEAVCBaseExpression@@$0A@@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x1800BD964 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18015C90C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  char *v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  unsigned int v7; // ecx
  __int64 v8; // r14
  _QWORD *Element; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  void *v12; // rdi
  __int64 v14; // rcx
  __int64 SourceAnimationsForProperty; // rax
  int v16; // eax
  void *v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+38h] [rbp-28h]
  __int64 Buffer; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+48h] [rbp-18h]
  void *v23; // [rsp+50h] [rbp-10h]
  unsigned __int8 NewElement; // [rsp+80h] [rbp+20h] BYREF
  struct CBaseExpression *v25; // [rsp+88h] [rbp+28h] BYREF

  v25 = a2;
  Buffer = 0LL;
  v22 = 0;
  v23 = 0LL;
  v3 = (char *)this + 32 * *((unsigned int *)this + 41);
  v4 = *((_DWORD *)v3 + 48);
  v5 = v4 + 1;
  v6 = v4 + 1 < v4 ? 0x80070216 : 0;
  if ( v4 + 1 < v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)v3 + 47) )
  {
    v16 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v3 + 168), 8u, (__int64)v3, &v25);
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v16, 0xC0u);
  }
  else
  {
    v7 = *((_DWORD *)v3 + 48);
    *(_QWORD *)(*((_QWORD *)v3 + 21) + 8LL * v4) = v25;
    *((_DWORD *)v3 + 48) = v5;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x6Cu);
    goto LABEL_12;
  }
  Buffer = *((_QWORD *)v25 + 22);
  v22 = *((_DWORD *)v25 + 46);
  v8 = *((_QWORD *)v25 + 24);
  v19 = Buffer;
  v20 = v22;
  Element = (_QWORD *)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement((char *)this + 328, &v19);
  if ( !Element )
  {
    Element = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 328), &Buffer, 0x18u, &NewElement);
    if ( !Element )
    {
      v18 = 132;
LABEL_28:
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, -2147024882, v18);
      DynArray<CBaseExpression *,1>::Remove((char *)this + 32 * *((unsigned int *)this + 41) + 168, &v25);
      goto LABEL_12;
    }
  }
  v11 = HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
  v10 = v11;
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    v11[2] = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v18 = 136;
    goto LABEL_28;
  }
  *v10 = v8;
  v10[1] = v25;
  v10[2] = Element[2];
  Element[2] = v10;
  if ( (*((_BYTE *)this + 416) & 4) == 0 )
  {
    v14 = *((_QWORD *)v25 + 22);
    if ( v14 )
      v14 = *(_QWORD *)(v14 + 16);
    if ( v14 )
    {
      SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty(v14);
      if ( SourceAnimationsForProperty )
      {
        if ( *(_DWORD *)(SourceAnimationsForProperty + 24) )
          *((_BYTE *)this + 416) |= 4u;
      }
    }
  }
  v6 = 0;
LABEL_12:
  v12 = v23;
  while ( v12 )
  {
    v17 = v12;
    v12 = (void *)*((_QWORD *)v12 + 2);
    operator delete(v17, 0x18uLL);
  }
  return (unsigned int)v6;
}
