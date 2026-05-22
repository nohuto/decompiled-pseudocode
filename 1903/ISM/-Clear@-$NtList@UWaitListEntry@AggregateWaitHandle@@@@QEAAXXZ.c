/*
 * XREFs of ?Clear@?$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ @ 0x1800D4E34
 * Callers:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x1800D4200 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x1800D6C40 (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall NtList<AggregateWaitHandle::WaitListEntry>::Clear(_QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v2 == a1 )
      break;
    operator delete(v2, (const struct std::nothrow_t *)0x20);
    --a1[2];
  }
  return result;
}
