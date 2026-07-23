/*
 * XREFs of DbgkpLkmdEnumApcOrDpcDataCallback @ 0x14026DC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdEnumApcOrDpcDataCallback(__int64 a1, unsigned int a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(a3 + 10304))(
           a3 + 10240,
           a1,
           a2,
           0LL,
           0LL,
           0LL);
}
