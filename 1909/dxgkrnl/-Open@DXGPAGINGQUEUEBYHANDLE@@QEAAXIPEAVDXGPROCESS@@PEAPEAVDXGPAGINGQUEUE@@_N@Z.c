/*
 * XREFs of ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D680
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0135640 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DxgkReclaimAllocations2 @ 0x1C0139700 (DxgkReclaimAllocations2.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0139AA0 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0156410 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C0240784 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1C02562E0 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::Open(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGPAGINGQUEUE **a4,
        bool a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  struct _KTHREAD *v13; // r8
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v17, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *((_DWORD *)a3 + 56)
    || (v13 = a3[26], v14 = *((_DWORD *)v13 + 4 * v9 + 2), ((a2 >> 25) & 0x60) != (*((_BYTE *)v13 + 16 * v9 + 8) & 0x60))
    || (v14 & 0x2000) != 0
    || (v14 & 0x1F) == 0 )
  {
LABEL_2:
    v10 = 0LL;
    goto LABEL_3;
  }
  v15 = v14 & 0x1F;
  if ( (_BYTE)v15 != 10 )
  {
    if ( a5 )
    {
      v16 = WdLogNewEntry5_WdError(v15, 2LL * (unsigned int)v9, v13);
      *(_QWORD *)(v16 + 24) = 267LL;
      WdLogEvent5_WdError(v16);
    }
    goto LABEL_2;
  }
  v10 = *((_QWORD *)v13 + 2 * (unsigned int)v9);
LABEL_3:
  *(_QWORD *)this = v10;
  if ( v10 )
  {
    _m_prefetchw((const void *)(v10 + 64));
    v11 = *(_QWORD *)(v10 + 64);
    do
    {
      if ( !v11 )
      {
        *(_QWORD *)this = 0LL;
        v10 = 0LL;
        goto LABEL_16;
      }
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 64), v11 + 1, v11);
    }
    while ( v12 != v11 );
    v10 = *(_QWORD *)this;
  }
LABEL_16:
  *a4 = (struct DXGPAGINGQUEUE *)v10;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
}
