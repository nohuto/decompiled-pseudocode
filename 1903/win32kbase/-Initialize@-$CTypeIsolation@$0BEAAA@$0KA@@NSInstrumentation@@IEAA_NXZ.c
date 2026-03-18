/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C005E194
 * Callers:
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005E0A4 (-Create@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C009741C (-Create@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C00BF3B0 (-PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<81920,160>::Initialize(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  struct _PAGED_LOOKASIDE_LIST *v5; // rax

  if ( !NSInstrumentation::PlatformDebugModeEnabled((NSInstrumentation *)a1) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
    *(_QWORD *)(a1 + 16) = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v3 = (_QWORD *)NSInstrumentation::CSectionEntry<81920,160>::Create();
      if ( v3 )
      {
        v4 = *(_QWORD **)(a1 + 8);
        *(_DWORD *)(a1 + 32) = 500;
        if ( *v4 != a1 )
          __fastfail(3u);
        *v3 = a1;
        v3[1] = v4;
        *v4 = v3;
        *(_QWORD *)(a1 + 8) = v3;
        return 1;
      }
    }
    return 0;
  }
  *(_BYTE *)(a1 + 36) = 1;
  v5 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x80uLL, 0x6F736955u);
  *(_QWORD *)(a1 + 24) = v5;
  if ( !v5 )
    return 0;
  ExInitializePagedLookasideList(
    v5,
    lambda_e89b7db45cbb2019c1d92629e8a0e919_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_,
    lambda_e334caef4b2287fb28cac91f9005f489_::_lambda_invoker_cdecl__void___,
    0x220u,
    0xA0uLL,
    0x6F736955u,
    0x100u);
  return 1;
}
