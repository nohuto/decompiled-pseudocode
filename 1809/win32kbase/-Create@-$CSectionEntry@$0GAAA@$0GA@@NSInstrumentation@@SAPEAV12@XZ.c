/*
 * XREFs of ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00671C4
 * Callers:
 *     ?Create@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0066E90 (-Create@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1C0067220 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<24576,96>::Create()
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
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<24576,96>::Initialize(PoolWithTag) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
