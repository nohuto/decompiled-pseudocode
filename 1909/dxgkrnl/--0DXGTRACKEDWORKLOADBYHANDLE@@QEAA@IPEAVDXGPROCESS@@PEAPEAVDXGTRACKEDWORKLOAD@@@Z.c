/*
 * XREFs of ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C0297024
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x1C02980E0 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkEndTrackedWorkload @ 0x1C02982B0 (NtDxgkEndTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0298360 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C02986E0 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkload @ 0x1C0298A00 (NtDxgkResetTrackedWorkload.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298C20 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

DXGTRACKEDWORKLOADBYHANDLE *__fastcall DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
        DXGTRACKEDWORKLOADBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGTRACKEDWORKLOAD **a4)
{
  __int64 v5; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  struct _KTHREAD *v11; // r9
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rax
  _BYTE v20[40]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = 0LL;
  v5 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v20, a3);
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)a3 + 56) )
  {
    v11 = a3[26];
    v9 = (unsigned int)v10;
    v8 = ((unsigned int)v5 >> 25) & 0x60;
    v12 = *((_DWORD *)v11 + 4 * v10 + 2);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*((_BYTE *)v11 + 16 * v10 + 8) & 0x60)
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) != 0 )
    {
      v9 = 2LL * (unsigned int)v10;
      v13 = v12 & 0x1F;
      if ( (_BYTE)v13 == 19 )
      {
        v15 = *((_QWORD *)v11 + 2 * (unsigned int)v10);
        goto LABEL_8;
      }
      v14 = WdLogNewEntry5_WdError(v8, v13, v9);
      *(_QWORD *)(v14 + 24) = 267LL;
      WdLogEvent5_WdError(v14);
    }
  }
  v15 = 0LL;
LABEL_8:
  *(_QWORD *)this = v15;
  if ( v15 && *(_BYTE *)(v15 + 96) )
  {
    _m_prefetchw((const void *)(v15 + 56));
    v16 = *(_QWORD *)(v15 + 56);
    while ( v16 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 56), v16 + 1, v16);
      if ( v17 == v16 )
        goto LABEL_16;
    }
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v8, v15, v9);
    *(_QWORD *)(v18 + 24) = v5;
    *(_QWORD *)(v18 + 32) = 41LL;
    WdLogEvent5_WdWarning(v18);
  }
LABEL_16:
  *a4 = *(struct DXGTRACKEDWORKLOAD **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return this;
}
