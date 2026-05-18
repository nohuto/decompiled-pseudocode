/*
 * XREFs of sub_180130063 @ 0x180130063
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_180130063(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 72) + 8LL))(*(_QWORD *)(a2 + 72));
  sub_18011D988(&qword_18025C830, 3, "Exception in Display Destructor, message=%s", v2);
  return &loc_1800B385C;
}
