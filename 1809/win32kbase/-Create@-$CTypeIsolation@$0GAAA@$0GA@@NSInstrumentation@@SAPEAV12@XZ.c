/*
 * XREFs of ?Create@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0066E90
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C0066D80 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolati.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00671C4 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

_QWORD *NSInstrumentation::CTypeIsolation<24576,96>::Create()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  void *v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x20uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[2] = 0LL;
  *((_DWORD *)PoolWithTag + 6) = 0;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  v2 = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
  v1[2] = v2;
  if ( !v2 || (*v2 = 0LL, (v3 = (_QWORD *)NSInstrumentation::CSectionEntry<24576,96>::Create()) == 0LL) )
  {
    v6 = (void *)v1[2];
    if ( !v6 )
      goto LABEL_10;
    while ( 1 )
    {
      ExFreePoolWithTag(v6, 0);
LABEL_10:
      v7 = (_QWORD *)*v1;
      if ( (_QWORD *)*v1 == v1 )
        break;
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_6;
      v9 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v9 != v7 )
        goto LABEL_6;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v7);
      v6 = v7;
    }
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  v4 = (_QWORD *)v1[1];
  *((_DWORD *)v1 + 6) = 252;
  if ( (_QWORD *)*v4 != v1 )
LABEL_6:
    __fastfail(3u);
  *v3 = v1;
  v3[1] = v4;
  *v4 = v3;
  v1[1] = v3;
  return v1;
}
