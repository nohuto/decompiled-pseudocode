/*
 * XREFs of CiSchedulerSetTaskIndexThreadTag @ 0x1C0001010
 * Callers:
 *     CiSchedulerWait @ 0x1C0001160 (CiSchedulerWait.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001B30 (CiSchedulerProcessDeadlines.c)
 * Callees:
 *     CiSystemUpdateThreadTag @ 0x1C0002980 (CiSystemUpdateThreadTag.c)
 */

__int64 __fastcall CiSchedulerSetTaskIndexThreadTag(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rdi
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 32);
  for ( i = (_QWORD *)(a1 + 32); v2 != i; v2 = (_QWORD *)*v2 )
    result = CiSystemUpdateThreadTag(v2 - 10, a2);
  return result;
}
