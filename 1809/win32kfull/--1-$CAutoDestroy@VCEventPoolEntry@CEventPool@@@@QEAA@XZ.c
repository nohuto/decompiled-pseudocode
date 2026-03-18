/*
 * XREFs of ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02C1C0C
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00428C0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     _lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator() @ 0x1C00E81AC (_lambda_fe455f6b6173b0bb193a7b901cfd063e_--operator().c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C012DFC0 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(_QWORD **a1)
{
  _QWORD *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CEventPool::CEventPoolEntry::Destroy(v1);
}
