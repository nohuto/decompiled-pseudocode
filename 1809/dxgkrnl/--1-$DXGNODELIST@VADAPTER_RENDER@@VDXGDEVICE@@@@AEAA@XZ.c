/*
 * XREFs of ??1?$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ @ 0x1C0031594
 * Callers:
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C01C5C88 (--1ADAPTER_RENDER@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>(_QWORD *a1)
{
  __int64 v1; // rax

  if ( (_QWORD *)*a1 != a1 )
  {
    v1 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v1 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v1);
  }
}
