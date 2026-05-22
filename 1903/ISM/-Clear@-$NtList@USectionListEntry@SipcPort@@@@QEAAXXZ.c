/*
 * XREFs of ?Clear@?$NtList@USectionListEntry@SipcPort@@@@QEAAXXZ @ 0x1800D4DD8
 * Callers:
 *     ??1SipcPort@@UEAA@XZ @ 0x1800D4384 (--1SipcPort@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall NtList<SipcPort::SectionListEntry>::Clear(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  while ( 1 )
  {
    result = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = *result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    if ( result == a1 )
      break;
    if ( result != (_QWORD *)8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*(result - 1))(result - 1, 1LL);
    --a1[2];
  }
  return result;
}
