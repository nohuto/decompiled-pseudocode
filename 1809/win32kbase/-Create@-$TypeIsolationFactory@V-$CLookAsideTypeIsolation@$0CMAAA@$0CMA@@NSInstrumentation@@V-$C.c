/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0066B68
 * Callers:
 *     HmgCreate @ 0x1C0005068 (HmgCreate.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0066C1C (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 *     ?Create@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0066F40 (-Create@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x1C006710C (-Initialize@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0068810 (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<233472,912>>::Create()
{
  unsigned __int8 **v0; // rsi
  char *PoolWithTag; // rax
  char v2; // di
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  void *v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v0 = gpTypeIsolation;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x80uLL, 0x6F736955u);
  v2 = 0;
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x80uLL);
  *((_QWORD *)v3 + 2) = 0LL;
  *((_DWORD *)v3 + 6) = 0;
  *((_QWORD *)v3 + 1) = v3;
  *(_QWORD *)v3 = v3;
  if ( !(unsigned __int8)NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize(v3) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v3 + 32));
    v7 = (void *)*((_QWORD *)v3 + 2);
    if ( v7 )
      goto LABEL_11;
    while ( 1 )
    {
      v8 = *(_QWORD **)v3;
      if ( *(char **)v3 == v3 )
        break;
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v8);
      v7 = v8;
LABEL_11:
      ExFreePoolWithTag(v7, 0);
    }
    ExFreePoolWithTag(v3, 0);
    return 0;
  }
  *v0 = (unsigned __int8 *)v3;
  v4 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
  if ( v4 )
  {
    v0[2] = (unsigned __int8 *)v4;
    v5 = NSInstrumentation::CTypeIsolation<49152,192>::Create();
    if ( v5 )
    {
      v0[3] = (unsigned __int8 *)v5;
      return TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(v0);
    }
  }
  return v2;
}
