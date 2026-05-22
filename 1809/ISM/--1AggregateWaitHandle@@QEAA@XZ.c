/*
 * XREFs of ??1AggregateWaitHandle@@QEAA@XZ @ 0x18009F84C
 * Callers:
 *     ??1SipcServer@@MEAA@XZ @ 0x1800A1A1C (--1SipcServer@@MEAA@XZ.c)
 * Callees:
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x18009F99C (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall AggregateWaitHandle::~AggregateWaitHandle(HANDLE *this)
{
  HANDLE v2; // rcx
  char *i; // rbx
  char *v4; // rax
  __int64 v5; // rcx

  AggregateWaitHandle::Reset((AggregateWaitHandle *)this);
  v2 = this[1];
  if ( v2 )
  {
    SetHandleInformation(v2, 2u, 0);
    CloseHandle(this[1]);
  }
  if ( *this )
    CloseHandle(*this);
  for ( i = (char *)(this + 3); ; --*((_QWORD *)i + 2) )
  {
    v4 = *(char **)i;
    v5 = **(_QWORD **)i;
    if ( *(char **)(*(_QWORD *)i + 8LL) != i || *(char **)(v5 + 8) != v4 )
      __fastfail(3u);
    *(_QWORD *)i = v5;
    *(_QWORD *)(v5 + 8) = i;
    if ( v4 == i )
      break;
    operator delete(v4, (const struct std::nothrow_t *)0x20);
  }
}
