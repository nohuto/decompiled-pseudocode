/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x18005B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18005B880 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(CExpression *this, unsigned __int64 a2)
{
  __int64 i; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r9
  PVOID v8; // rax
  CBaseExpression **v9; // rbx
  PVOID v10; // rbp
  CBaseExpression **v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h]
  __int128 Buffer; // [rsp+30h] [rbp-28h] BYREF
  void *v14; // [rsp+40h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 98); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 48);
    v6 = *((_QWORD *)this + 2);
    v14 = 0LL;
    v7 = *(_QWORD *)(v6 + 224);
    *(_QWORD *)&v12 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * *(unsigned int *)(v5 + 24 * i + 20));
    DWORD2(v12) = *(_DWORD *)(v5 + 24 * i);
    Buffer = v12;
    v8 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v7 + 328), &Buffer);
    v9 = (CBaseExpression **)v14;
    v10 = v8;
    while ( v9 )
    {
      v11 = v9;
      v9 = (CBaseExpression **)v9[2];
      operator delete(v11, 0x18uLL);
    }
    if ( v10 )
      v9 = (CBaseExpression **)*((_QWORD *)v10 + 2);
    while ( v9 )
    {
      CBaseExpression::InsertInOrder(v9[1], a2);
      v9 = (CBaseExpression **)v9[2];
    }
  }
}
