/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0066C1C
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0066B68 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C006148C (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ @ 0x1C0066FF0 (-Initialize@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ?Create@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C006705C (-Create@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00678E0 (-Create@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        _QWORD *a1)
{
  char *PoolWithTag; // rax
  char v3; // bl
  char *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x80uLL, 0x6F736955u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x80uLL);
  *((_QWORD *)v4 + 2) = 0LL;
  *((_DWORD *)v4 + 6) = 0;
  *((_QWORD *)v4 + 1) = v4;
  *(_QWORD *)v4 = v4;
  if ( !(unsigned __int8)NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize(v4) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v4 + 32));
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>((__int64)v4);
    ExFreePoolWithTag(v4, 0);
    return 0;
  }
  a1[1] = v4;
  v5 = NSInstrumentation::CTypeIsolation<81920,320>::Create();
  if ( v5 )
  {
    a1[4] = v5;
    v6 = NSInstrumentation::CTypeIsolation<233472,912>::Create();
    if ( v6 )
    {
      a1[5] = v6;
      return 1;
    }
  }
  return v3;
}
