/*
 * XREFs of ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C010CC38
 * Callers:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C00ED630 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C010CB38 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C010CBEC (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
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
