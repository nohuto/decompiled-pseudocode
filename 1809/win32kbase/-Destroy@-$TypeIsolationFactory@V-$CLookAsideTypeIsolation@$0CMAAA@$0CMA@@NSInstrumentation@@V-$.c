/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C0060EA8
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00603B0 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C0061018 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 */

__int64 TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy()
{
  unsigned __int8 **v0; // rsi
  char *v1; // rbx
  void *v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v0 = gpTypeIsolation;
  v1 = (char *)*gpTypeIsolation;
  if ( *gpTypeIsolation )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 32));
    v2 = (void *)*((_QWORD *)v1 + 2);
    if ( !v2 )
      goto LABEL_4;
    while ( 1 )
    {
      ExFreePoolWithTag(v2, 0);
LABEL_4:
      v3 = *(_QWORD **)v1;
      if ( *(char **)v1 == v1 )
        break;
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v3);
      v2 = v3;
    }
    ExFreePoolWithTag(v1, 0);
  }
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(v0);
}
