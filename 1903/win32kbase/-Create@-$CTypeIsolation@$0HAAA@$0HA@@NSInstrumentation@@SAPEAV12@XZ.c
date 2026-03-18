/*
 * XREFs of ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005DD04
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C005DCA4 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@V-$CTypeIsola.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1C005DDF4 (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00A65D4 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void *NSInstrumentation::CTypeIsolation<28672,112>::Create()
{
  _QWORD *PoolWithTag; // rax
  void *v1; // rbx
  struct _PAGED_LOOKASIDE_LIST *v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  *((_DWORD *)PoolWithTag + 8) = 0;
  *((_BYTE *)PoolWithTag + 36) = 0;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<28672,112>::Initialize(PoolWithTag) )
  {
    v3 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v1 + 3);
    if ( v3 )
    {
      ExDeletePagedLookasideList(v3);
      ExFreePoolWithTag(*((PVOID *)v1 + 3), 0);
      *((_BYTE *)v1 + 36) = 0;
    }
    v4 = (void *)*((_QWORD *)v1 + 2);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    while ( 1 )
    {
      v5 = *(_QWORD **)v1;
      if ( *(void **)v1 == v1 )
        break;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      NSInstrumentation::CSectionEntry<49152,192>::Destroy(v5);
    }
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return v1;
}
