/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SAXPEAPEAE@Z @ 0x1C006130C
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SAXPEAPEAE@Z @ 0x1C0061274 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V_ea_1C0061274.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  void *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  void *v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  void *v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax

  v1 = (_QWORD *)a1[2];
  if ( v1 )
  {
    v3 = (void *)v1[2];
    if ( !v3 )
      goto LABEL_4;
    while ( 1 )
    {
      ExFreePoolWithTag(v3, 0);
LABEL_4:
      v4 = (_QWORD *)*v1;
      if ( (_QWORD *)*v1 == v1 )
        break;
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
LABEL_14:
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v4);
      v3 = v4;
    }
    ExFreePoolWithTag(v1, 0);
  }
  v7 = (_QWORD *)a1[3];
  if ( v7 )
  {
    v8 = (void *)v7[2];
    if ( !v8 )
      goto LABEL_12;
    while ( 1 )
    {
      ExFreePoolWithTag(v8, 0);
LABEL_12:
      v9 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
        break;
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_14;
      v11 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v11 != v9 )
        goto LABEL_14;
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v9);
      v8 = v9;
    }
    ExFreePoolWithTag(v7, 0);
  }
  v12 = (_QWORD *)a1[4];
  if ( v12 )
  {
    v13 = (void *)v12[2];
    if ( !v13 )
      goto LABEL_22;
    while ( 1 )
    {
      ExFreePoolWithTag(v13, 0);
LABEL_22:
      v14 = (_QWORD *)*v12;
      if ( (_QWORD *)*v12 == v12 )
        break;
      v15 = *v14;
      if ( *(_QWORD **)(*v14 + 8LL) != v14 )
        goto LABEL_14;
      v16 = (_QWORD *)v14[1];
      if ( (_QWORD *)*v16 != v14 )
        goto LABEL_14;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v14);
      v13 = v14;
    }
    ExFreePoolWithTag(v12, 0);
  }
}
