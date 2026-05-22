/*
 * XREFs of ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x18009F99C
 * Callers:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x18009F84C (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Disconnect@SipcClient@@QEAAXXZ @ 0x1800A1430 (-Disconnect@SipcClient@@QEAAXXZ.c)
 *     ?OnDisposePublic@SipcServer@@MEAAXXZ @ 0x1800A2210 (-OnDisposePublic@SipcServer@@MEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall AggregateWaitHandle::Reset(AggregateWaitHandle *this, __int64 a2)
{
  char *v2; // rdi
  char *i; // rbx
  char *v5; // rax
  __int64 v6; // rcx

  v2 = (char *)this + 24;
  for ( i = (char *)*((_QWORD *)this + 3); i != v2; i = *(char **)i )
  {
    LOBYTE(a2) = 1;
    NtCancelWaitCompletionPacket(*((_QWORD *)i + 3), a2);
    CloseHandle(*((HANDLE *)i + 3));
  }
  v5 = *(char **)v2;
  v6 = **(_QWORD **)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
LABEL_8:
    __fastfail(3u);
  while ( 1 )
  {
    if ( *(char **)(v6 + 8) != v5 )
      goto LABEL_8;
    *(_QWORD *)v2 = v6;
    *(_QWORD *)(v6 + 8) = v2;
    if ( v5 == v2 )
      break;
    operator delete(v5, (const struct std::nothrow_t *)0x20);
    --*((_QWORD *)v2 + 2);
    v5 = *(char **)v2;
    v6 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
      goto LABEL_8;
  }
  operator delete(*((void **)this + 2), (const struct std::nothrow_t *)0x20);
  *((_QWORD *)this + 2) = 0LL;
}
