/*
 * XREFs of ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C0104644
 * Callers:
 *     _lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator() @ 0x1C006EE40 (_lambda_6aad3aa5895b9deeeac484e7d6965f8a_--operator().c)
 * Callees:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C01046A8 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C013A0D0 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

struct CEventPool::CEventPoolEntry *CEventPool::CEventPoolEntry::Create(void)
{
  struct CEventPool::CEventPoolEntry *result; // rax
  struct CEventPool::CEventPoolEntry *v1; // rdi
  struct CEventPool::CEventPoolEntry *v2; // rbx
  struct CManualResetEvent *v3; // rax

  result = (struct CEventPool::CEventPoolEntry *)EngAllocMem(0, 0x10u, 0x676D6466u);
  v1 = result;
  if ( result )
  {
    v2 = result;
    v3 = CManualResetEvent::Create();
    *((_QWORD *)v2 + 1) = v3;
    if ( v3 )
      v2 = 0LL;
    else
      v1 = 0LL;
    if ( v2 )
      CEventPool::CEventPoolEntry::Destroy(v2);
    return v1;
  }
  return result;
}
