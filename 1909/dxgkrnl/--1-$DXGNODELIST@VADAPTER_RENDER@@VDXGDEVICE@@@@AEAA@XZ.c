/*
 * XREFs of ??1?$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ @ 0x1C0036E64
 * Callers:
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C01F4C8C (--1ADAPTER_RENDER@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  if ( (_QWORD *)*a1 != a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v2 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v2);
  }
}
