/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C005D594
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C005D538 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 * Callees:
 *     ?Create@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005D64C (-Create@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005D81C (-Create@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005D9EC (-Create@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ @ 0x1C005E614 (-Initialize@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C00AC844 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        _QWORD *a1)
{
  char *PoolWithTag; // rax
  char v3; // bl
  char *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x90uLL, 0x6F736955u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag + 37, 0, 0x6BuLL);
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  v4[36] = 0;
  *((_QWORD *)v4 + 1) = v4;
  *(_QWORD *)v4 = v4;
  if ( !(unsigned __int8)NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize(v4) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v4 + 48));
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>(v4);
    ExFreePoolWithTag(v4, 0);
    return 0;
  }
  a1[1] = v4;
  v5 = NSInstrumentation::CTypeIsolation<81920,320>::Create();
  if ( v5 )
  {
    a1[4] = v5;
    v6 = NSInstrumentation::CTypeIsolation<913408,3568>::Create();
    if ( v6 )
    {
      a1[6] = v6;
      v7 = NSInstrumentation::CTypeIsolation<233472,912>::Create();
      if ( v7 )
      {
        a1[5] = v7;
        return 1;
      }
    }
  }
  return v3;
}
