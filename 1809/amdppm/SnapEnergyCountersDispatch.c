/*
 * XREFs of SnapEnergyCountersDispatch @ 0x1C000C920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall SnapEnergyCountersDispatch(unsigned int a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // r10

  result = (__int64 (*)(void))DevExts;
  v2 = *(_QWORD *)(DevExts + 8LL * a1);
  if ( v2 )
  {
    result = (__int64 (*)(void))qword_1C0011A80[32 * (unsigned __int64)*(unsigned __int8 *)(v2 + 352)];
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
