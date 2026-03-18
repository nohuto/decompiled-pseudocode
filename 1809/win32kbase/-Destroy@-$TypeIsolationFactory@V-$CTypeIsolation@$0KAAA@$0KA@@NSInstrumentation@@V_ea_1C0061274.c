/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SAXPEAPEAE@Z @ 0x1C0061274
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00E3170 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SAXPEAPEAE@Z @ 0x1C006130C (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@_ea_1C006130C.c)
 */

__int64 __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Destroy(
        __int64 a1)
{
  _QWORD *v1; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    v3 = (void *)v1[2];
    if ( !v3 )
      goto LABEL_8;
    while ( 1 )
    {
      ExFreePoolWithTag(v3, 0);
LABEL_8:
      v6 = (_QWORD *)*v1;
      if ( (_QWORD *)*v1 == v1 )
        break;
      v4 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v5 = (_QWORD *)v6[1], (_QWORD *)*v5 != v6) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v6);
      v3 = v6;
    }
    ExFreePoolWithTag(v1, 0);
  }
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Destroy(a1);
}
