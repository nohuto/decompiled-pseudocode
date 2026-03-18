/*
 * XREFs of ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0139FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x1C013A028 (-CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter(struct DXGADAPTER *a1, void *a2)
{
  ADAPTER_RENDER *v3; // rcx
  DXGADAPTER *v5[3]; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v5[2] = a1;
  v6 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v5[1] = (DXGADAPTER *)-1LL;
  }
  COREACCESS::AcquireShared(v5);
  v3 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 316);
  if ( v3 )
    ADAPTER_RENDER::CleanupPresentHistoryTokenQueue(v3);
  COREACCESS::~COREACCESS((COREACCESS *)v5);
  return 0LL;
}
