/*
 * XREFs of KseHookExAllocatePoolWithTag @ 0x1401B4E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void *__fastcall KseHookExAllocatePoolWithTag(__int64 a1, size_t a2)
{
  void *v3; // rax
  void *v4; // rbx

  v3 = (void *)((__int64 (*)(void))qword_140401D38)();
  v4 = v3;
  if ( v3 )
    memset(v3, 0, a2);
  return v4;
}
