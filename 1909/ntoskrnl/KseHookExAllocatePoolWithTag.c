/*
 * XREFs of KseHookExAllocatePoolWithTag @ 0x1402B70F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall KseHookExAllocatePoolWithTag(__int64 a1, size_t a2)
{
  void *v3; // rax
  void *v4; // rbx

  v3 = (void *)((__int64 (*)(void))qword_140427368)();
  v4 = v3;
  if ( v3 )
    memset(v3, 0, a2);
  return v4;
}
