/*
 * XREFs of ?Create@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0068550
 * Callers:
 *     ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x1C006710C (-Initialize@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00681B8 (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00685AC (-Initialize@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<180224,704>::Create()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<180224,704>::Initialize(PoolWithTag) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
