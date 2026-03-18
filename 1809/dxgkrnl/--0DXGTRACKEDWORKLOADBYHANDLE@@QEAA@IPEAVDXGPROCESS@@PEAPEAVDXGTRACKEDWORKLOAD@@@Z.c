/*
 * XREFs of ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C026003C
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x1C0260B80 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkEndTrackedWorkload @ 0x1C0260DD0 (NtDxgkEndTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0260E80 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C0261130 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkload @ 0x1C0261400 (NtDxgkResetTrackedWorkload.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02615D0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
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
  __int64 v13; // rax
  __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rax
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = 0LL;
  v5 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, a3);
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)a3 + 62) )
  {
    v11 = a3[29];
    v9 = (unsigned int)v10;
    v8 = ((unsigned int)v5 >> 25) & 0x60;
    v12 = *((_DWORD *)v11 + 4 * v10 + 2);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*((_BYTE *)v11 + 16 * v10 + 8) & 0x60)
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) != 0 )
    {
      v9 = 2LL * (unsigned int)v10;
      if ( (v12 & 0x1F) == 0x13 )
      {
        v14 = *((_QWORD *)v11 + 2 * (unsigned int)v10);
        goto LABEL_8;
      }
      v13 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v13 + 24) = 316LL;
      WdLogEvent5_WdError(v13);
    }
  }
  v14 = 0LL;
LABEL_8:
  *(_QWORD *)this = v14;
  if ( v14 && *(_BYTE *)(v14 + 72) )
  {
    _m_prefetchw((const void *)(v14 + 32));
    v15 = *(_QWORD *)(v14 + 32);
    while ( v15 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 32), v15 + 1, v15);
      if ( v16 == v15 )
        goto LABEL_16;
    }
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v14, v9);
    *(_QWORD *)(v17 + 24) = v5;
    WdLogEvent5_WdWarning(v17);
  }
LABEL_16:
  *a4 = *(struct DXGTRACKEDWORKLOAD **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return this;
}
