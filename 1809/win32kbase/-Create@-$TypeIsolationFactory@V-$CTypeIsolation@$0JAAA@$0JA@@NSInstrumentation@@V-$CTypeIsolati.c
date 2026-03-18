/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C0066D0C
 * Callers:
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x1C0066CC0 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C006148C (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C0066D80 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C0067990 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 */

char TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Create()
{
  _QWORD *DpcData; // rdi
  _QWORD *PoolWithTag; // rax
  void *v2; // rbx

  DpcData = WPP_MAIN_CB.Dpc.DpcData;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x20uLL, 0x6F736955u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<36864,144>::Initialize(PoolWithTag) )
    {
      *DpcData = v2;
      return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Create(DpcData);
    }
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>((__int64)v2);
    ExFreePoolWithTag(v2, 0);
  }
  return 0;
}
