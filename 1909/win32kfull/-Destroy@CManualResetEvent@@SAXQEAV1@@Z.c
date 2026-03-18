/*
 * XREFs of ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C01141F4
 * Callers:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C01140D0 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C011419C (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C0142658 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CManualResetEvent::Destroy(void **pv)
{
  void *v2; // rcx

  v2 = *pv;
  if ( v2 )
    EngFreeMem(v2);
  EngFreeMem(pv);
}
