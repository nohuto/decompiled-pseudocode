/*
 * XREFs of ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D6A4
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x1C00B0D70 (DxgkReclaimAllocations2.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01093F0 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C01235A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0140440 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkUpdateAllocationProperty @ 0x1C02216D0 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

DXGPAGINGQUEUEBYHANDLE *__fastcall DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGPAGINGQUEUE **a4,
        bool a5)
{
  __int64 v9; // rax
  struct _KTHREAD *v10; // r8
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 62) )
  {
    v10 = a3[29];
    v11 = *((_DWORD *)v10 + 4 * v9 + 2);
    if ( ((a2 >> 25) & 0x60) == (*((_BYTE *)v10 + 16 * v9 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
    {
      v12 = v11 & 0x1F;
      if ( (_BYTE)v12 == 10 )
      {
        v13 = *((_QWORD *)v10 + 2 * (unsigned int)v9);
        goto LABEL_7;
      }
      if ( a5 )
      {
        v17 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v17 + 24) = 316LL;
        WdLogEvent5_WdError(v17);
      }
    }
  }
  v13 = 0LL;
LABEL_7:
  *(_QWORD *)this = v13;
  if ( v13 )
  {
    _m_prefetchw((const void *)(v13 + 64));
    v14 = *(_QWORD *)(v13 + 64);
    while ( v14 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 64), v14 + 1, v14);
      if ( v15 == v14 )
      {
        v13 = *(_QWORD *)this;
        goto LABEL_12;
      }
    }
    *(_QWORD *)this = 0LL;
    v13 = 0LL;
  }
LABEL_12:
  *a4 = (struct DXGPAGINGQUEUE *)v13;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return this;
}
