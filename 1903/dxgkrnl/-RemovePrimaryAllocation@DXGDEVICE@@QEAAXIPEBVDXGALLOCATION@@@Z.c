/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C0019630
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C013F440 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, this + 32);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 208); i = (unsigned int)(i + 1) )
  {
    if ( a3 == *((const struct DXGALLOCATION **)this[v3 + 88] + i) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v9[3] = a3;
      v9[4] = (unsigned int)i;
      v9[5] = v3;
      if ( !*((_BYTE *)this + 4 * v3 + 1088) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v10 + 24) = 858LL;
        WdLogEvent5_WdAssertion(v10);
      }
      *((_QWORD *)this[v3 + 88] + i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1088);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
