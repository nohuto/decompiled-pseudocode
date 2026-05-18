/*
 * XREFs of sub_180130173 @ 0x180130173
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_180130173(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 72) + 8LL))(*(_QWORD *)(a2 + 72));
  sub_18011DA98(&qword_18025D830, 3, "Exception in Display Destructor, message=%s", v2);
  return &loc_1800B396C;
}
