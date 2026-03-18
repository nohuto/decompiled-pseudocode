/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C006117C
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00610B0 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V-$CLookAsideT.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(
        __int64 a1)
{
  _QWORD *v1; // rdi
  void *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  void *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx

  v1 = *(_QWORD **)(a1 + 32);
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
LABEL_19:
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v4);
      v3 = v4;
    }
    ExFreePoolWithTag(v1, 0);
  }
  v7 = *(_QWORD **)(a1 + 40);
  if ( v7 )
  {
    v8 = (void *)v7[2];
    if ( !v8 )
      goto LABEL_16;
    while ( 1 )
    {
      ExFreePoolWithTag(v8, 0);
LABEL_16:
      v11 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
        break;
      v9 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        goto LABEL_19;
      v10 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v10 != v11 )
        goto LABEL_19;
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v11);
      v8 = v11;
    }
    ExFreePoolWithTag(v7, 0);
  }
}
